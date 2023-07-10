const DIGIT = /\d/
const ALPHA = /[a-zA-Z=\-\*\/\+\?\$\.\{\}_!~@><&%'#`;:]/
const ALPHA_LOWER_BEGIN = /[a-z=\*\/\?\$\.\{\}_!~@><&%'#`;:]/
const ALPHA_UPPER_BEGIN = /[A-Z=\*\/\?\$\.\{\}_!~@><&%'#`;:]/

module.exports = grammar({
  name: 'shen',

  extras: ($) => [
    $._whitespace,
    $.comment
  ],

  rules: {
    source_file: ($) => repeat($._statement),

    // whitespaces
    _whitespace: (_) => token(repeat1(/\s/)),
    comment: (_) =>
      token(choice(
        seq("\\\\", /.*\n?/),
        seq("\\*", repeat(/[^(\\*|*\\)]/), "*\\")
      )),

    _statement: ($) => choice(
      $.comment,
      $.boolean,
      $.number,
      $.string,
      $.symbol,
      $.variable,
      $.abstraction,
      $.application,
      $.shen_def,
      $.list,
      $.tuple,
      $.vector,
    ),

    // booleans
    boolean: () => choice("true", "false"),

    // number
    integer: () => /[+-]?[0-9]+/,
    float: () => /[-+]?[0-9]*\.?[0-9]+/,
    enumber: () => /[-+]?[0-9]*\.?[0-9]+(e-?[0-9]+)?/,
    number: ($) => choice(
      $.float,
      $.integer,
      $.enumber,
    ),

    // string
    string: () => token(
      seq(
        '"',
        repeat(/[^"\\]/),
        repeat(seq("\\", /./, repeat(/[^"\\]/))),
        '"'
      )
    ),

    // symbol
    symbol: () => token.immediate(choice(
      seq(ALPHA_LOWER_BEGIN, optional(repeat(choice(ALPHA, DIGIT)))),
      seq(/[-+]+/, optional(seq(ALPHA, repeat(choice(ALPHA, DIGIT)))))
    )),

    // variable
    variable: () => token.immediate(
      seq(ALPHA_UPPER_BEGIN, optional(repeat(choice(ALPHA, DIGIT))))
    ),

    // sequences
    cons: ($) => seq("[", repeat1(seq(field("car", $._statement), "|")), field("cdr", $._statement), "]"),
    list: ($) => choice(
      $.cons,
      seq("[", repeat($._statement), "]"),
    ),
    tuple: ($) => seq("(", "@p", repeat($._statement), ")"),
    vector: ($) => choice(
      "<>",
      seq("(", "@v", repeat($._statement) ,")"),
    ),

    // abstraction and application
    abstraction: ($) => prec.left(1, seq("(", "/.", repeat1($._statement), ")")),
    application: ($) => seq("(", repeat1($._statement) , ")"),

    // function and macros
    shen_def: ($) => seq(
      "(",
      choice("define", "defmacro"),
      field("name", $.symbol),
      alias(repeat1($.rule), $.shen_def_body),
      ")"
    ),
    rule: ($) => prec.left(1, seq(
      $.pattern,
      choice("->", "<-"),
      repeat1($._statement),
      optional($.guard)
    )),
    pattern: ($) => repeat1($._statement),
    guard: ($) => seq("where", $._statement),
  },
});
