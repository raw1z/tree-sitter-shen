#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 163
#define LARGE_STATE_COUNT 18
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  sym__whitespace = 1,
  sym_comment = 2,
  anon_sym_true = 3,
  anon_sym_false = 4,
  sym_integer = 5,
  sym_float = 6,
  sym_enumber = 7,
  sym_string = 8,
  sym_symbol = 9,
  sym_variable = 10,
  anon_sym_LBRACK = 11,
  anon_sym_PIPE = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_ATp = 15,
  anon_sym_RPAREN = 16,
  anon_sym_LT_GT = 17,
  anon_sym_ATv = 18,
  anon_sym_SLASH_DOT = 19,
  anon_sym_define = 20,
  anon_sym_defmacro = 21,
  anon_sym_DASH_GT = 22,
  anon_sym_LT_DASH = 23,
  anon_sym_where = 24,
  sym__type = 25,
  anon_sym_list = 26,
  anon_sym_vector = 27,
  anon_sym_RBRACE = 28,
  anon_sym_DASH_DASH_GT = 29,
  anon_sym_LBRACE = 30,
  sym_source_file = 31,
  sym__statement = 32,
  sym_boolean = 33,
  sym_number = 34,
  sym_cons = 35,
  sym_list = 36,
  sym_tuple = 37,
  sym_vector = 38,
  sym_abstraction = 39,
  sym_application = 40,
  sym_shen_def = 41,
  sym_rule = 42,
  sym_pattern = 43,
  sym_guard = 44,
  sym_shen_def_body = 45,
  sym_type = 46,
  sym_signature = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_cons_repeat1 = 49,
  aux_sym_shen_def_body_repeat1 = 50,
  aux_sym_type_repeat1 = 51,
  aux_sym_signature_repeat1 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__whitespace] = "_whitespace",
  [sym_comment] = "comment",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_enumber] = "enumber",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [sym_variable] = "variable",
  [anon_sym_LBRACK] = "[",
  [anon_sym_PIPE] = "|",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_ATp] = "@p",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_ATv] = "@v",
  [anon_sym_SLASH_DOT] = "/.",
  [anon_sym_define] = "define",
  [anon_sym_defmacro] = "defmacro",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_where] = "where",
  [sym__type] = "_type",
  [anon_sym_list] = "list",
  [anon_sym_vector] = "vector",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_DASH_GT] = "-->",
  [anon_sym_LBRACE] = "{",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym_boolean] = "boolean",
  [sym_number] = "number",
  [sym_cons] = "cons",
  [sym_list] = "list",
  [sym_tuple] = "tuple",
  [sym_vector] = "vector",
  [sym_abstraction] = "abstraction",
  [sym_application] = "application",
  [sym_shen_def] = "shen_def",
  [sym_rule] = "rule",
  [sym_pattern] = "pattern",
  [sym_guard] = "guard",
  [sym_shen_def_body] = "shen_def_body",
  [sym_type] = "type",
  [sym_signature] = "signature",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_cons_repeat1] = "cons_repeat1",
  [aux_sym_shen_def_body_repeat1] = "shen_def_body_repeat1",
  [aux_sym_type_repeat1] = "type_repeat1",
  [aux_sym_signature_repeat1] = "signature_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__whitespace] = sym__whitespace,
  [sym_comment] = sym_comment,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_enumber] = sym_enumber,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [sym_variable] = sym_variable,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_ATp] = anon_sym_ATp,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_ATv] = anon_sym_ATv,
  [anon_sym_SLASH_DOT] = anon_sym_SLASH_DOT,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_defmacro] = anon_sym_defmacro,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_where] = anon_sym_where,
  [sym__type] = sym__type,
  [anon_sym_list] = anon_sym_list,
  [anon_sym_vector] = anon_sym_vector,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_DASH_GT] = anon_sym_DASH_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym_boolean] = sym_boolean,
  [sym_number] = sym_number,
  [sym_cons] = sym_cons,
  [sym_list] = sym_list,
  [sym_tuple] = sym_tuple,
  [sym_vector] = sym_vector,
  [sym_abstraction] = sym_abstraction,
  [sym_application] = sym_application,
  [sym_shen_def] = sym_shen_def,
  [sym_rule] = sym_rule,
  [sym_pattern] = sym_pattern,
  [sym_guard] = sym_guard,
  [sym_shen_def_body] = sym_shen_def_body,
  [sym_type] = sym_type,
  [sym_signature] = sym_signature,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_cons_repeat1] = aux_sym_cons_repeat1,
  [aux_sym_shen_def_body_repeat1] = aux_sym_shen_def_body_repeat1,
  [aux_sym_type_repeat1] = aux_sym_type_repeat1,
  [aux_sym_signature_repeat1] = aux_sym_signature_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__whitespace] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_enumber] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATp] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ATv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_define] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_where] = {
    .visible = true,
    .named = false,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_list] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vector] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_cons] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_tuple] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_abstraction] = {
    .visible = true,
    .named = true,
  },
  [sym_application] = {
    .visible = true,
    .named = true,
  },
  [sym_shen_def] = {
    .visible = true,
    .named = true,
  },
  [sym_rule] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_guard] = {
    .visible = true,
    .named = true,
  },
  [sym_shen_def_body] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_signature] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cons_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shen_def_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_signature_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_car = 1,
  field_cdr = 2,
  field_name = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_car] = "car",
  [field_cdr] = "cdr",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_car, 0},
  [1] =
    {field_car, 0, .inherited = true},
    {field_car, 1, .inherited = true},
  [3] =
    {field_car, 1, .inherited = true},
    {field_cdr, 2},
  [5] =
    {field_name, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 2,
  [6] = 6,
  [7] = 6,
  [8] = 6,
  [9] = 6,
  [10] = 10,
  [11] = 10,
  [12] = 10,
  [13] = 10,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 16,
  [19] = 19,
  [20] = 19,
  [21] = 19,
  [22] = 16,
  [23] = 23,
  [24] = 19,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 27,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 25,
  [36] = 34,
  [37] = 26,
  [38] = 28,
  [39] = 29,
  [40] = 34,
  [41] = 27,
  [42] = 32,
  [43] = 34,
  [44] = 44,
  [45] = 25,
  [46] = 29,
  [47] = 28,
  [48] = 28,
  [49] = 29,
  [50] = 26,
  [51] = 27,
  [52] = 32,
  [53] = 25,
  [54] = 54,
  [55] = 54,
  [56] = 56,
  [57] = 57,
  [58] = 57,
  [59] = 57,
  [60] = 54,
  [61] = 61,
  [62] = 57,
  [63] = 54,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 68,
  [81] = 78,
  [82] = 71,
  [83] = 77,
  [84] = 78,
  [85] = 66,
  [86] = 65,
  [87] = 79,
  [88] = 76,
  [89] = 75,
  [90] = 74,
  [91] = 73,
  [92] = 70,
  [93] = 69,
  [94] = 94,
  [95] = 67,
  [96] = 72,
  [97] = 71,
  [98] = 77,
  [99] = 72,
  [100] = 66,
  [101] = 65,
  [102] = 79,
  [103] = 76,
  [104] = 75,
  [105] = 74,
  [106] = 73,
  [107] = 70,
  [108] = 69,
  [109] = 68,
  [110] = 67,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 72,
  [123] = 68,
  [124] = 76,
  [125] = 79,
  [126] = 65,
  [127] = 66,
  [128] = 78,
  [129] = 129,
  [130] = 77,
  [131] = 71,
  [132] = 67,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 73,
  [137] = 75,
  [138] = 138,
  [139] = 129,
  [140] = 74,
  [141] = 129,
  [142] = 129,
  [143] = 143,
  [144] = 69,
  [145] = 145,
  [146] = 70,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 148,
  [151] = 151,
  [152] = 152,
  [153] = 148,
  [154] = 149,
  [155] = 155,
  [156] = 148,
  [157] = 149,
  [158] = 158,
  [159] = 149,
  [160] = 152,
  [161] = 152,
  [162] = 152,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(102);
      if (lookahead == '/') ADVANCE(99);
      if (lookahead == '<') ADVANCE(97);
      if (lookahead == '@') ADVANCE(101);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'l') ADVANCE(32);
      if (lookahead == 't') ADVANCE(38);
      if (lookahead == 'v') ADVANCE(24);
      if (lookahead == 'w') ADVANCE(31);
      if (lookahead == '{') ADVANCE(144);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '*') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == 'w') ADVANCE(81);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= '@') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '~') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '+') ADVANCE(67);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '<') ADVANCE(64);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= '@') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '~') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '/') ADVANCE(68);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '@') ADVANCE(86);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(76);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          (':' <= lookahead && lookahead <= '?') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '~') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{') ADVANCE(63);
      if (lookahead == '}') ADVANCE(142);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= '@') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '~') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(62);
      if (lookahead == '\\') ADVANCE(49);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '+') ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == '>') ADVANCE(122);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(124);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '<') ADVANCE(10);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == '>') ADVANCE(143);
      END_STATE();
    case 16:
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 'v') ADVANCE(130);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 17:
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(63);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 18:
      if (lookahead == '\\') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(118);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'f') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'm') ADVANCE(20);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(43);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(120);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 40:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 42:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(138);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '"') ADVANCE(5);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(111);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '[') ADVANCE(105);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == ']') ADVANCE(107);
      if (lookahead == 'f') ADVANCE(70);
      if (lookahead == 't') ADVANCE(87);
      if (lookahead == '{' ||
          lookahead == '}') ADVANCE(63);
      if (lookahead == '|') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= '@') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '~') ADVANCE(96);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(104);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(47);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_enumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_symbol);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '>') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(94);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '>') ADVANCE(113);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(83);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(72);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(56);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(58);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(80);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(79);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(84);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(90);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(121);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(110);
      if (lookahead == 'v') ADVANCE(115);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(85);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(78);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(74);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(92);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-') ADVANCE(125);
      if (lookahead == '>') ADVANCE(112);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '-') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'e') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == 'p') ADVANCE(109);
      if (lookahead == 'v') ADVANCE(114);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_variable);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_ATp);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_ATp);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_ATv);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_ATv);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_SLASH_DOT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_SLASH_DOT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_define);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_defmacro);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(104);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_where);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(96);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == 'i') ADVANCE(134);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == 'o') ADVANCE(133);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == 'r') ADVANCE(141);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__type);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_list);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_list);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_vector);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_vector);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(137);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_GT);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 50},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 4},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 50},
  [11] = {.lex_state = 50},
  [12] = {.lex_state = 50},
  [13] = {.lex_state = 50},
  [14] = {.lex_state = 50},
  [15] = {.lex_state = 50},
  [16] = {.lex_state = 50},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 50},
  [20] = {.lex_state = 50},
  [21] = {.lex_state = 50},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 50},
  [25] = {.lex_state = 50},
  [26] = {.lex_state = 50},
  [27] = {.lex_state = 50},
  [28] = {.lex_state = 50},
  [29] = {.lex_state = 50},
  [30] = {.lex_state = 50},
  [31] = {.lex_state = 50},
  [32] = {.lex_state = 50},
  [33] = {.lex_state = 50},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 50},
  [36] = {.lex_state = 50},
  [37] = {.lex_state = 50},
  [38] = {.lex_state = 50},
  [39] = {.lex_state = 50},
  [40] = {.lex_state = 50},
  [41] = {.lex_state = 50},
  [42] = {.lex_state = 50},
  [43] = {.lex_state = 50},
  [44] = {.lex_state = 50},
  [45] = {.lex_state = 50},
  [46] = {.lex_state = 50},
  [47] = {.lex_state = 50},
  [48] = {.lex_state = 50},
  [49] = {.lex_state = 50},
  [50] = {.lex_state = 50},
  [51] = {.lex_state = 50},
  [52] = {.lex_state = 50},
  [53] = {.lex_state = 50},
  [54] = {.lex_state = 50},
  [55] = {.lex_state = 50},
  [56] = {.lex_state = 50},
  [57] = {.lex_state = 50},
  [58] = {.lex_state = 50},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 50},
  [61] = {.lex_state = 50},
  [62] = {.lex_state = 50},
  [63] = {.lex_state = 50},
  [64] = {.lex_state = 50},
  [65] = {.lex_state = 50},
  [66] = {.lex_state = 50},
  [67] = {.lex_state = 50},
  [68] = {.lex_state = 50},
  [69] = {.lex_state = 50},
  [70] = {.lex_state = 50},
  [71] = {.lex_state = 50},
  [72] = {.lex_state = 50},
  [73] = {.lex_state = 50},
  [74] = {.lex_state = 50},
  [75] = {.lex_state = 50},
  [76] = {.lex_state = 50},
  [77] = {.lex_state = 50},
  [78] = {.lex_state = 50},
  [79] = {.lex_state = 50},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 50},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 50},
  [112] = {.lex_state = 50},
  [113] = {.lex_state = 50},
  [114] = {.lex_state = 50},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 16},
  [117] = {.lex_state = 6},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 17},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 17},
  [161] = {.lex_state = 17},
  [162] = {.lex_state = 17},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(3),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_enumber] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_ATp] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_ATv] = ACTIONS(1),
    [anon_sym_SLASH_DOT] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
    [anon_sym_list] = ACTIONS(1),
    [anon_sym_vector] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(155),
    [sym__statement] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_number] = STATE(44),
    [sym_cons] = STATE(66),
    [sym_list] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_vector] = STATE(44),
    [sym_abstraction] = STATE(44),
    [sym_application] = STATE(44),
    [sym_shen_def] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(44),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(7),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(7),
    [sym_symbol] = ACTIONS(13),
    [sym_variable] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [2] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(14),
    [sym_pattern] = STATE(133),
    [sym_shen_def_body] = STATE(157),
    [sym_signature] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(35),
  },
  [3] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(14),
    [sym_pattern] = STATE(133),
    [sym_shen_def_body] = STATE(154),
    [sym_signature] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(35),
  },
  [4] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(14),
    [sym_pattern] = STATE(133),
    [sym_shen_def_body] = STATE(159),
    [sym_signature] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(35),
  },
  [5] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(14),
    [sym_pattern] = STATE(133),
    [sym_shen_def_body] = STATE(149),
    [sym_signature] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(33),
    [anon_sym_RBRACE] = ACTIONS(35),
  },
  [6] = {
    [sym__statement] = STATE(31),
    [sym_boolean] = STATE(31),
    [sym_number] = STATE(31),
    [sym_cons] = STATE(66),
    [sym_list] = STATE(31),
    [sym_tuple] = STATE(31),
    [sym_vector] = STATE(31),
    [sym_abstraction] = STATE(31),
    [sym_application] = STATE(31),
    [sym_shen_def] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(31),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(37),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(37),
    [sym_symbol] = ACTIONS(39),
    [sym_variable] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(41),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(43),
    [anon_sym_SLASH_DOT] = ACTIONS(45),
    [anon_sym_define] = ACTIONS(47),
    [anon_sym_defmacro] = ACTIONS(47),
  },
  [7] = {
    [sym__statement] = STATE(27),
    [sym_boolean] = STATE(27),
    [sym_number] = STATE(27),
    [sym_cons] = STATE(66),
    [sym_list] = STATE(27),
    [sym_tuple] = STATE(27),
    [sym_vector] = STATE(27),
    [sym_abstraction] = STATE(27),
    [sym_application] = STATE(27),
    [sym_shen_def] = STATE(27),
    [aux_sym_source_file_repeat1] = STATE(27),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(49),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(49),
    [sym_symbol] = ACTIONS(51),
    [sym_variable] = ACTIONS(51),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(53),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(55),
    [anon_sym_SLASH_DOT] = ACTIONS(57),
    [anon_sym_define] = ACTIONS(59),
    [anon_sym_defmacro] = ACTIONS(59),
  },
  [8] = {
    [sym__statement] = STATE(51),
    [sym_boolean] = STATE(51),
    [sym_number] = STATE(51),
    [sym_cons] = STATE(66),
    [sym_list] = STATE(51),
    [sym_tuple] = STATE(51),
    [sym_vector] = STATE(51),
    [sym_abstraction] = STATE(51),
    [sym_application] = STATE(51),
    [sym_shen_def] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(51),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(61),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(61),
    [sym_symbol] = ACTIONS(63),
    [sym_variable] = ACTIONS(63),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(65),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(67),
    [anon_sym_SLASH_DOT] = ACTIONS(69),
    [anon_sym_define] = ACTIONS(71),
    [anon_sym_defmacro] = ACTIONS(71),
  },
  [9] = {
    [sym__statement] = STATE(41),
    [sym_boolean] = STATE(41),
    [sym_number] = STATE(41),
    [sym_cons] = STATE(66),
    [sym_list] = STATE(41),
    [sym_tuple] = STATE(41),
    [sym_vector] = STATE(41),
    [sym_abstraction] = STATE(41),
    [sym_application] = STATE(41),
    [sym_shen_def] = STATE(41),
    [aux_sym_source_file_repeat1] = STATE(41),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(73),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(77),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(79),
    [anon_sym_SLASH_DOT] = ACTIONS(81),
    [anon_sym_define] = ACTIONS(83),
    [anon_sym_defmacro] = ACTIONS(83),
  },
  [10] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(14),
    [sym_pattern] = STATE(133),
    [sym_shen_def_body] = STATE(156),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(33),
  },
  [11] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(14),
    [sym_pattern] = STATE(133),
    [sym_shen_def_body] = STATE(153),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(33),
  },
  [12] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(14),
    [sym_pattern] = STATE(133),
    [sym_shen_def_body] = STATE(150),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(33),
  },
  [13] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(14),
    [sym_pattern] = STATE(133),
    [sym_shen_def_body] = STATE(148),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_LT_GT] = ACTIONS(33),
  },
  [14] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(15),
    [sym_pattern] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(23),
    [anon_sym_false] = ACTIONS(23),
    [sym_integer] = ACTIONS(25),
    [sym_float] = ACTIONS(25),
    [sym_enumber] = ACTIONS(25),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(27),
    [sym_variable] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_LPAREN] = ACTIONS(31),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(33),
  },
  [15] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(85),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_rule] = STATE(15),
    [sym_pattern] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(23),
    [aux_sym_shen_def_body_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_false] = ACTIONS(90),
    [sym_integer] = ACTIONS(93),
    [sym_float] = ACTIONS(93),
    [sym_enumber] = ACTIONS(93),
    [sym_string] = ACTIONS(87),
    [sym_symbol] = ACTIONS(96),
    [sym_variable] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(102),
    [anon_sym_RPAREN] = ACTIONS(105),
    [anon_sym_LT_GT] = ACTIONS(107),
  },
  [16] = {
    [sym__statement] = STATE(16),
    [sym_boolean] = STATE(16),
    [sym_number] = STATE(16),
    [sym_cons] = STATE(66),
    [sym_list] = STATE(16),
    [sym_tuple] = STATE(16),
    [sym_vector] = STATE(16),
    [sym_abstraction] = STATE(16),
    [sym_application] = STATE(16),
    [sym_shen_def] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(110),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(112),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [sym_integer] = ACTIONS(118),
    [sym_float] = ACTIONS(118),
    [sym_enumber] = ACTIONS(118),
    [sym_string] = ACTIONS(112),
    [sym_symbol] = ACTIONS(121),
    [sym_variable] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(124),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_LT_GT] = ACTIONS(130),
  },
  [17] = {
    [sym__statement] = STATE(22),
    [sym_boolean] = STATE(22),
    [sym_number] = STATE(22),
    [sym_cons] = STATE(100),
    [sym_list] = STATE(22),
    [sym_tuple] = STATE(22),
    [sym_vector] = STATE(22),
    [sym_abstraction] = STATE(22),
    [sym_application] = STATE(22),
    [sym_shen_def] = STATE(22),
    [sym_guard] = STATE(112),
    [aux_sym_source_file_repeat1] = STATE(22),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(133),
    [anon_sym_true] = ACTIONS(135),
    [anon_sym_false] = ACTIONS(135),
    [sym_integer] = ACTIONS(135),
    [sym_float] = ACTIONS(135),
    [sym_enumber] = ACTIONS(135),
    [sym_string] = ACTIONS(133),
    [sym_symbol] = ACTIONS(135),
    [sym_variable] = ACTIONS(135),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_LPAREN] = ACTIONS(133),
    [anon_sym_RPAREN] = ACTIONS(133),
    [anon_sym_LT_GT] = ACTIONS(135),
    [anon_sym_where] = ACTIONS(137),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(151), 1,
      anon_sym_LBRACK,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
    ACTIONS(157), 1,
      anon_sym_LT_GT,
    STATE(85), 1,
      sym_cons,
    ACTIONS(139), 2,
      sym_comment,
      sym_string,
    ACTIONS(142), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(148), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(160), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
    ACTIONS(145), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(18), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [49] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(166), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      aux_sym_source_file_repeat1,
    STATE(55), 1,
      aux_sym_cons_repeat1,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      sym_comment,
      sym_string,
    ACTIONS(164), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(94), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [102] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(168), 1,
      anon_sym_RBRACK,
    STATE(38), 1,
      aux_sym_source_file_repeat1,
    STATE(63), 1,
      aux_sym_cons_repeat1,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      sym_comment,
      sym_string,
    ACTIONS(164), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(94), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [155] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(170), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_source_file_repeat1,
    STATE(54), 1,
      aux_sym_cons_repeat1,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      sym_comment,
      sym_string,
    ACTIONS(164), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(94), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [208] = 12,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
    ACTIONS(160), 1,
      anon_sym_where,
    ACTIONS(184), 1,
      anon_sym_LBRACK,
    ACTIONS(187), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      anon_sym_LT_GT,
    STATE(100), 1,
      sym_cons,
    ACTIONS(172), 2,
      sym_comment,
      sym_string,
    ACTIONS(175), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(181), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(178), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(22), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [259] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(29), 1,
      anon_sym_LBRACK,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_LT_GT,
    STATE(85), 1,
      sym_cons,
    ACTIONS(23), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(193), 2,
      sym_comment,
      sym_string,
    ACTIONS(195), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(197), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
    ACTIONS(25), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(18), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [308] = 13,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(199), 1,
      anon_sym_RBRACK,
    STATE(48), 1,
      aux_sym_source_file_repeat1,
    STATE(60), 1,
      aux_sym_cons_repeat1,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(162), 2,
      sym_comment,
      sym_string,
    ACTIONS(164), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(94), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [361] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [409] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(207), 2,
      sym_comment,
      sym_string,
    ACTIONS(209), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(43), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [457] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [505] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [553] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(221), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(217), 2,
      sym_comment,
      sym_string,
    ACTIONS(219), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(33), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [601] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(223), 2,
      sym_comment,
      sym_string,
    ACTIONS(225), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(36), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [649] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [697] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [745] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(233), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [793] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(235), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [841] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [889] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(239), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [937] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(245), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(241), 2,
      sym_comment,
      sym_string,
    ACTIONS(243), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(34), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [985] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(247), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1033] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(253), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(249), 2,
      sym_comment,
      sym_string,
    ACTIONS(251), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(42), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1081] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(255), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1129] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(257), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1177] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(259), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1225] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(261), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1273] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1321] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(265), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1369] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(271), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(267), 2,
      sym_comment,
      sym_string,
    ACTIONS(269), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(32), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1417] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(273), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1465] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(275), 1,
      anon_sym_RBRACK,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1513] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(281), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(277), 2,
      sym_comment,
      sym_string,
    ACTIONS(279), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(52), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1561] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(283), 2,
      sym_comment,
      sym_string,
    ACTIONS(285), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(40), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1609] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(289), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1657] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1705] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    ACTIONS(293), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(201), 2,
      sym_comment,
      sym_string,
    ACTIONS(203), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(16), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1753] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LT_GT,
    STATE(56), 1,
      aux_sym_cons_repeat1,
    STATE(127), 1,
      sym_cons,
    ACTIONS(295), 2,
      sym_comment,
      sym_string,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(301), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(299), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(141), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [1800] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LT_GT,
    STATE(56), 1,
      aux_sym_cons_repeat1,
    STATE(127), 1,
      sym_cons,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(309), 2,
      sym_comment,
      sym_string,
    ACTIONS(311), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(299), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(139), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [1847] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(325), 1,
      anon_sym_LBRACK,
    ACTIONS(328), 1,
      anon_sym_LPAREN,
    ACTIONS(331), 1,
      anon_sym_LT_GT,
    STATE(56), 1,
      aux_sym_cons_repeat1,
    STATE(127), 1,
      sym_cons,
    ACTIONS(313), 2,
      sym_comment,
      sym_string,
    ACTIONS(316), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(322), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(319), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(158), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [1894] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(334), 2,
      sym_comment,
      sym_string,
    ACTIONS(336), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(35), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1939] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(338), 2,
      sym_comment,
      sym_string,
    ACTIONS(340), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(53), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [1984] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(342), 2,
      sym_comment,
      sym_string,
    ACTIONS(344), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(25), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [2029] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LT_GT,
    STATE(56), 1,
      aux_sym_cons_repeat1,
    STATE(127), 1,
      sym_cons,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(346), 2,
      sym_comment,
      sym_string,
    ACTIONS(348), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(299), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(129), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [2076] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(358), 1,
      anon_sym_LBRACK,
    ACTIONS(360), 1,
      anon_sym_LPAREN,
    ACTIONS(362), 1,
      anon_sym_LT_GT,
    STATE(100), 1,
      sym_cons,
    ACTIONS(350), 2,
      sym_comment,
      sym_string,
    ACTIONS(352), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(356), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(354), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(17), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [2121] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(364), 2,
      sym_comment,
      sym_string,
    ACTIONS(366), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(45), 10,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
      aux_sym_source_file_repeat1,
  [2166] = 11,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(303), 1,
      anon_sym_LBRACK,
    ACTIONS(305), 1,
      anon_sym_LPAREN,
    ACTIONS(307), 1,
      anon_sym_LT_GT,
    STATE(56), 1,
      aux_sym_cons_repeat1,
    STATE(127), 1,
      sym_cons,
    ACTIONS(297), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(368), 2,
      sym_comment,
      sym_string,
    ACTIONS(370), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(299), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(142), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [2213] = 10,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LT_GT,
    STATE(66), 1,
      sym_cons,
    ACTIONS(9), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(372), 2,
      sym_comment,
      sym_string,
    ACTIONS(374), 2,
      sym_symbol,
      sym_variable,
    ACTIONS(11), 3,
      sym_integer,
      sym_float,
      sym_enumber,
    STATE(111), 9,
      sym__statement,
      sym_boolean,
      sym_number,
      sym_list,
      sym_tuple,
      sym_vector,
      sym_abstraction,
      sym_application,
      sym_shen_def,
  [2257] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(376), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(378), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2281] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(380), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(382), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2305] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(384), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(386), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2329] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(388), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(390), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2353] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(392), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(394), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2377] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(396), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(398), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2401] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(400), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(402), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2425] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(404), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(406), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2449] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(408), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(410), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2473] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(412), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(414), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2497] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(416), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(418), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2521] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(420), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(422), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2545] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(424), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(426), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2569] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(428), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(430), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2593] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(432), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(434), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2617] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(388), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(390), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2639] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(428), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(430), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [2661] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(400), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(402), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2683] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(424), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(426), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2705] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(428), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(430), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2727] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(380), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(382), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2749] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(376), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(378), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2771] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(432), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(434), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2793] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(420), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(422), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2815] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(416), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(418), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2837] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(412), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(414), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2859] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(408), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(410), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2881] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(396), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(398), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2903] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(392), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(394), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2925] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(436), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN,
    ACTIONS(438), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [2949] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(384), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(386), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2971] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(404), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(406), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [2993] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(400), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(402), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3015] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(424), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(426), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3037] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(404), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(406), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3059] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(380), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(382), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3081] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(376), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(378), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3103] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(432), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(434), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3125] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(420), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(422), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3147] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(416), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(418), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3169] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(412), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(414), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3191] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(408), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(410), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3213] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(396), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(398), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3235] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(392), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(394), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3257] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(388), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(390), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3279] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(384), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(386), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
      anon_sym_where,
  [3301] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(442), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(444), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [3322] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(446), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(448), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [3343] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(450), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(452), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [3363] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(454), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
    ACTIONS(456), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [3383] = 5,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      sym__type,
    STATE(117), 1,
      aux_sym_signature_repeat1,
    STATE(151), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3400] = 4,
    ACTIONS(462), 1,
      sym__type,
    STATE(121), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(464), 2,
      anon_sym_list,
      anon_sym_vector,
  [3415] = 5,
    ACTIONS(458), 1,
      anon_sym_LPAREN,
    ACTIONS(460), 1,
      sym__type,
    STATE(118), 1,
      aux_sym_signature_repeat1,
    STATE(143), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3432] = 5,
    ACTIONS(466), 1,
      anon_sym_LPAREN,
    ACTIONS(469), 1,
      sym__type,
    STATE(118), 1,
      aux_sym_signature_repeat1,
    STATE(151), 1,
      sym_type,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3449] = 4,
    ACTIONS(472), 1,
      anon_sym_RPAREN,
    ACTIONS(474), 1,
      sym__type,
    STATE(120), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3463] = 4,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    ACTIONS(478), 1,
      sym__type,
    STATE(120), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3477] = 4,
    ACTIONS(474), 1,
      sym__type,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(120), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3491] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3500] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3509] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3518] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3527] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(376), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3536] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3545] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3554] = 3,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(483), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3565] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3574] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3583] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3592] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(485), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [3601] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(487), 2,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE,
  [3610] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(489), 2,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE,
  [3619] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3628] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3637] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(491), 2,
      anon_sym_DASH_DASH_GT,
      anon_sym_LBRACE,
  [3646] = 3,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(493), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3657] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3666] = 3,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3677] = 3,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3688] = 3,
    ACTIONS(499), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(501), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3699] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3708] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(503), 2,
      anon_sym_LPAREN,
      sym__type,
  [3717] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [3726] = 3,
    ACTIONS(505), 1,
      sym__type,
    STATE(119), 1,
      aux_sym_type_repeat1,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3737] = 2,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3745] = 2,
    ACTIONS(509), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3753] = 2,
    ACTIONS(511), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3761] = 2,
    ACTIONS(499), 1,
      anon_sym_DASH_DASH_GT,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3769] = 2,
    ACTIONS(513), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3777] = 2,
    ACTIONS(515), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3785] = 2,
    ACTIONS(517), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3793] = 2,
    ACTIONS(519), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3801] = 2,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3809] = 2,
    ACTIONS(523), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3817] = 2,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3825] = 2,
    ACTIONS(525), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3833] = 2,
    ACTIONS(527), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3841] = 2,
    ACTIONS(529), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [3849] = 2,
    ACTIONS(531), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(18)] = 0,
  [SMALL_STATE(19)] = 49,
  [SMALL_STATE(20)] = 102,
  [SMALL_STATE(21)] = 155,
  [SMALL_STATE(22)] = 208,
  [SMALL_STATE(23)] = 259,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 361,
  [SMALL_STATE(26)] = 409,
  [SMALL_STATE(27)] = 457,
  [SMALL_STATE(28)] = 505,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 601,
  [SMALL_STATE(31)] = 649,
  [SMALL_STATE(32)] = 697,
  [SMALL_STATE(33)] = 745,
  [SMALL_STATE(34)] = 793,
  [SMALL_STATE(35)] = 841,
  [SMALL_STATE(36)] = 889,
  [SMALL_STATE(37)] = 937,
  [SMALL_STATE(38)] = 985,
  [SMALL_STATE(39)] = 1033,
  [SMALL_STATE(40)] = 1081,
  [SMALL_STATE(41)] = 1129,
  [SMALL_STATE(42)] = 1177,
  [SMALL_STATE(43)] = 1225,
  [SMALL_STATE(44)] = 1273,
  [SMALL_STATE(45)] = 1321,
  [SMALL_STATE(46)] = 1369,
  [SMALL_STATE(47)] = 1417,
  [SMALL_STATE(48)] = 1465,
  [SMALL_STATE(49)] = 1513,
  [SMALL_STATE(50)] = 1561,
  [SMALL_STATE(51)] = 1609,
  [SMALL_STATE(52)] = 1657,
  [SMALL_STATE(53)] = 1705,
  [SMALL_STATE(54)] = 1753,
  [SMALL_STATE(55)] = 1800,
  [SMALL_STATE(56)] = 1847,
  [SMALL_STATE(57)] = 1894,
  [SMALL_STATE(58)] = 1939,
  [SMALL_STATE(59)] = 1984,
  [SMALL_STATE(60)] = 2029,
  [SMALL_STATE(61)] = 2076,
  [SMALL_STATE(62)] = 2121,
  [SMALL_STATE(63)] = 2166,
  [SMALL_STATE(64)] = 2213,
  [SMALL_STATE(65)] = 2257,
  [SMALL_STATE(66)] = 2281,
  [SMALL_STATE(67)] = 2305,
  [SMALL_STATE(68)] = 2329,
  [SMALL_STATE(69)] = 2353,
  [SMALL_STATE(70)] = 2377,
  [SMALL_STATE(71)] = 2401,
  [SMALL_STATE(72)] = 2425,
  [SMALL_STATE(73)] = 2449,
  [SMALL_STATE(74)] = 2473,
  [SMALL_STATE(75)] = 2497,
  [SMALL_STATE(76)] = 2521,
  [SMALL_STATE(77)] = 2545,
  [SMALL_STATE(78)] = 2569,
  [SMALL_STATE(79)] = 2593,
  [SMALL_STATE(80)] = 2617,
  [SMALL_STATE(81)] = 2639,
  [SMALL_STATE(82)] = 2661,
  [SMALL_STATE(83)] = 2683,
  [SMALL_STATE(84)] = 2705,
  [SMALL_STATE(85)] = 2727,
  [SMALL_STATE(86)] = 2749,
  [SMALL_STATE(87)] = 2771,
  [SMALL_STATE(88)] = 2793,
  [SMALL_STATE(89)] = 2815,
  [SMALL_STATE(90)] = 2837,
  [SMALL_STATE(91)] = 2859,
  [SMALL_STATE(92)] = 2881,
  [SMALL_STATE(93)] = 2903,
  [SMALL_STATE(94)] = 2925,
  [SMALL_STATE(95)] = 2949,
  [SMALL_STATE(96)] = 2971,
  [SMALL_STATE(97)] = 2993,
  [SMALL_STATE(98)] = 3015,
  [SMALL_STATE(99)] = 3037,
  [SMALL_STATE(100)] = 3059,
  [SMALL_STATE(101)] = 3081,
  [SMALL_STATE(102)] = 3103,
  [SMALL_STATE(103)] = 3125,
  [SMALL_STATE(104)] = 3147,
  [SMALL_STATE(105)] = 3169,
  [SMALL_STATE(106)] = 3191,
  [SMALL_STATE(107)] = 3213,
  [SMALL_STATE(108)] = 3235,
  [SMALL_STATE(109)] = 3257,
  [SMALL_STATE(110)] = 3279,
  [SMALL_STATE(111)] = 3301,
  [SMALL_STATE(112)] = 3322,
  [SMALL_STATE(113)] = 3343,
  [SMALL_STATE(114)] = 3363,
  [SMALL_STATE(115)] = 3383,
  [SMALL_STATE(116)] = 3400,
  [SMALL_STATE(117)] = 3415,
  [SMALL_STATE(118)] = 3432,
  [SMALL_STATE(119)] = 3449,
  [SMALL_STATE(120)] = 3463,
  [SMALL_STATE(121)] = 3477,
  [SMALL_STATE(122)] = 3491,
  [SMALL_STATE(123)] = 3500,
  [SMALL_STATE(124)] = 3509,
  [SMALL_STATE(125)] = 3518,
  [SMALL_STATE(126)] = 3527,
  [SMALL_STATE(127)] = 3536,
  [SMALL_STATE(128)] = 3545,
  [SMALL_STATE(129)] = 3554,
  [SMALL_STATE(130)] = 3565,
  [SMALL_STATE(131)] = 3574,
  [SMALL_STATE(132)] = 3583,
  [SMALL_STATE(133)] = 3592,
  [SMALL_STATE(134)] = 3601,
  [SMALL_STATE(135)] = 3610,
  [SMALL_STATE(136)] = 3619,
  [SMALL_STATE(137)] = 3628,
  [SMALL_STATE(138)] = 3637,
  [SMALL_STATE(139)] = 3646,
  [SMALL_STATE(140)] = 3657,
  [SMALL_STATE(141)] = 3666,
  [SMALL_STATE(142)] = 3677,
  [SMALL_STATE(143)] = 3688,
  [SMALL_STATE(144)] = 3699,
  [SMALL_STATE(145)] = 3708,
  [SMALL_STATE(146)] = 3717,
  [SMALL_STATE(147)] = 3726,
  [SMALL_STATE(148)] = 3737,
  [SMALL_STATE(149)] = 3745,
  [SMALL_STATE(150)] = 3753,
  [SMALL_STATE(151)] = 3761,
  [SMALL_STATE(152)] = 3769,
  [SMALL_STATE(153)] = 3777,
  [SMALL_STATE(154)] = 3785,
  [SMALL_STATE(155)] = 3793,
  [SMALL_STATE(156)] = 3801,
  [SMALL_STATE(157)] = 3809,
  [SMALL_STATE(158)] = 3817,
  [SMALL_STATE(159)] = 3825,
  [SMALL_STATE(160)] = 3833,
  [SMALL_STATE(161)] = 3841,
  [SMALL_STATE(162)] = 3849,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shen_def_body, 1),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_body_repeat1, 2), SHIFT_REPEAT(23),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_body_repeat1, 2), SHIFT_REPEAT(82),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_body_repeat1, 2), SHIFT_REPEAT(83),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_body_repeat1, 2), SHIFT_REPEAT(23),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_body_repeat1, 2), SHIFT_REPEAT(20),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_body_repeat1, 2), SHIFT_REPEAT(9),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shen_def_body_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_body_repeat1, 2), SHIFT_REPEAT(84),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(71),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(24),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(7),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [145] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(84),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [164] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [175] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [178] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(98),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(81),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [209] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [243] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [279] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(158),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(131),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(130),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(158),
  [325] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(21),
  [328] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(6),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(128),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [348] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shen_def, 5, .production_id = 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shen_def, 5, .production_id = 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction, 4),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction, 4),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 4),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 4),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shen_def, 6, .production_id = 4),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shen_def, 6, .production_id = 4),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 4, .production_id = 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 4, .production_id = 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 1),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guard, 2),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_guard, 2),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 1),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 1),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_signature, 4),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_signature, 4),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(116),
  [469] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_signature_repeat1, 2), SHIFT_REPEAT(135),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [476] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_type_repeat1, 2), SHIFT_REPEAT(120),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [487] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 4),
  [489] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [491] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_signature_repeat1, 2),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [519] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_shen(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
