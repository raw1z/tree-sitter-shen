#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 64
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_LPAREN_SLASH_DOT = 19,
  anon_sym_define = 20,
  anon_sym_defmacro = 21,
  anon_sym_DASH_GT = 22,
  anon_sym_LT_DASH = 23,
  anon_sym_where = 24,
  sym_source_file = 25,
  sym__statement = 26,
  sym_boolean = 27,
  sym_number = 28,
  sym_cons = 29,
  sym_list = 30,
  sym_tuple = 31,
  sym_vector = 32,
  sym_abstraction = 33,
  sym_application = 34,
  sym_shen_def = 35,
  sym_rule = 36,
  sym_pattern = 37,
  sym_guard = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_cons_repeat1 = 40,
  aux_sym_shen_def_repeat1 = 41,
  alias_sym_shen_def_body = 42,
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
  [anon_sym_LPAREN_SLASH_DOT] = "(/.",
  [anon_sym_define] = "define",
  [anon_sym_defmacro] = "defmacro",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_where] = "where",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_cons_repeat1] = "cons_repeat1",
  [aux_sym_shen_def_repeat1] = "shen_def_repeat1",
  [alias_sym_shen_def_body] = "shen_def_body",
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
  [anon_sym_LPAREN_SLASH_DOT] = anon_sym_LPAREN_SLASH_DOT,
  [anon_sym_define] = anon_sym_define,
  [anon_sym_defmacro] = anon_sym_defmacro,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_where] = anon_sym_where,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_cons_repeat1] = aux_sym_cons_repeat1,
  [aux_sym_shen_def_repeat1] = aux_sym_shen_def_repeat1,
  [alias_sym_shen_def_body] = alias_sym_shen_def_body,
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
  [anon_sym_LPAREN_SLASH_DOT] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cons_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_shen_def_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_shen_def_body] = {
    .visible = true,
    .named = true,
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
  [4] = {
    [3] = alias_sym_shen_def_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_shen_def_repeat1, 2,
    aux_sym_shen_def_repeat1,
    alias_sym_shen_def_body,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 2,
  [5] = 5,
  [6] = 5,
  [7] = 7,
  [8] = 5,
  [9] = 5,
  [10] = 2,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 11,
  [15] = 15,
  [16] = 11,
  [17] = 17,
  [18] = 17,
  [19] = 19,
  [20] = 15,
  [21] = 17,
  [22] = 17,
  [23] = 15,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 29,
  [33] = 33,
  [34] = 28,
  [35] = 33,
  [36] = 27,
  [37] = 25,
  [38] = 33,
  [39] = 28,
  [40] = 24,
  [41] = 27,
  [42] = 29,
  [43] = 24,
  [44] = 30,
  [45] = 45,
  [46] = 30,
  [47] = 29,
  [48] = 24,
  [49] = 33,
  [50] = 28,
  [51] = 27,
  [52] = 25,
  [53] = 53,
  [54] = 54,
  [55] = 54,
  [56] = 53,
  [57] = 57,
  [58] = 53,
  [59] = 59,
  [60] = 54,
  [61] = 53,
  [62] = 54,
  [63] = 63,
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
  [78] = 69,
  [79] = 69,
  [80] = 76,
  [81] = 75,
  [82] = 74,
  [83] = 73,
  [84] = 72,
  [85] = 71,
  [86] = 70,
  [87] = 74,
  [88] = 68,
  [89] = 64,
  [90] = 66,
  [91] = 77,
  [92] = 65,
  [93] = 67,
  [94] = 75,
  [95] = 65,
  [96] = 67,
  [97] = 66,
  [98] = 98,
  [99] = 76,
  [100] = 73,
  [101] = 64,
  [102] = 68,
  [103] = 77,
  [104] = 70,
  [105] = 71,
  [106] = 72,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 70,
  [112] = 73,
  [113] = 113,
  [114] = 66,
  [115] = 65,
  [116] = 64,
  [117] = 117,
  [118] = 117,
  [119] = 77,
  [120] = 76,
  [121] = 75,
  [122] = 74,
  [123] = 117,
  [124] = 67,
  [125] = 72,
  [126] = 68,
  [127] = 71,
  [128] = 69,
  [129] = 117,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 131,
  [134] = 131,
  [135] = 131,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '_' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == 'w') ADVANCE(44);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= '@') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(28);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= '@') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= '?') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(27);
      if (lookahead == '\\') ADVANCE(16);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 12:
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= '@') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 13:
      if (lookahead == '\\') ADVANCE(20);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 16:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == ']') ADVANCE(63);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '|') ADVANCE(62);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= '@') ||
          lookahead == '_' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_enumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('.' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(46);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'c') ADVANCE(51);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(22);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(23);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(76);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(70);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'e') ADVANCE(52);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'f') ADVANCE(45);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'h') ADVANCE(42);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'i') ADVANCE(47);
      if (lookahead == 'm') ADVANCE(34);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'l') ADVANCE(53);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'o') ADVANCE(71);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'p') ADVANCE(65);
      if (lookahead == 'v') ADVANCE(68);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(54);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(48);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('.' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '.' ||
          lookahead == '/' ||
          (':' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_symbol);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_variable);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_ATp);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ATv);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN_SLASH_DOT);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_define);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_where);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 17},
  [3] = {.lex_state = 17},
  [4] = {.lex_state = 17},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 17},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 17},
  [17] = {.lex_state = 17},
  [18] = {.lex_state = 17},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 17},
  [22] = {.lex_state = 17},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 17},
  [25] = {.lex_state = 17},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 17},
  [34] = {.lex_state = 17},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 17},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 17},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 17},
  [42] = {.lex_state = 17},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 17},
  [45] = {.lex_state = 17},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 17},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 17},
  [50] = {.lex_state = 17},
  [51] = {.lex_state = 17},
  [52] = {.lex_state = 17},
  [53] = {.lex_state = 17},
  [54] = {.lex_state = 17},
  [55] = {.lex_state = 17},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 17},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 17},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 17},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 17},
  [64] = {.lex_state = 17},
  [65] = {.lex_state = 17},
  [66] = {.lex_state = 17},
  [67] = {.lex_state = 17},
  [68] = {.lex_state = 17},
  [69] = {.lex_state = 17},
  [70] = {.lex_state = 17},
  [71] = {.lex_state = 17},
  [72] = {.lex_state = 17},
  [73] = {.lex_state = 17},
  [74] = {.lex_state = 17},
  [75] = {.lex_state = 17},
  [76] = {.lex_state = 17},
  [77] = {.lex_state = 17},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 17},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 17},
  [108] = {.lex_state = 17},
  [109] = {.lex_state = 17},
  [110] = {.lex_state = 17},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 12},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 12},
  [134] = {.lex_state = 12},
  [135] = {.lex_state = 12},
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
    [sym_symbol] = ACTIONS(1),
    [sym_variable] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_ATp] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_ATv] = ACTIONS(1),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(130),
    [sym__statement] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(45),
    [sym_tuple] = STATE(45),
    [sym_vector] = STATE(45),
    [sym_abstraction] = STATE(45),
    [sym_application] = STATE(45),
    [sym_shen_def] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
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
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [2] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(29),
    [sym_variable] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
  },
  [3] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(29),
    [sym_variable] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(41),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
  },
  [4] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(29),
    [sym_variable] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(43),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
  },
  [5] = {
    [sym__statement] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_number] = STATE(38),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_abstraction] = STATE(38),
    [sym_application] = STATE(38),
    [sym_shen_def] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(38),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(45),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(45),
    [sym_symbol] = ACTIONS(47),
    [sym_variable] = ACTIONS(47),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(49),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(51),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(53),
    [anon_sym_defmacro] = ACTIONS(53),
  },
  [6] = {
    [sym__statement] = STATE(35),
    [sym_boolean] = STATE(35),
    [sym_number] = STATE(35),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(35),
    [sym_tuple] = STATE(35),
    [sym_vector] = STATE(35),
    [sym_abstraction] = STATE(35),
    [sym_application] = STATE(35),
    [sym_shen_def] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(35),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(55),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(55),
    [sym_symbol] = ACTIONS(57),
    [sym_variable] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(59),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(61),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(63),
    [anon_sym_defmacro] = ACTIONS(63),
  },
  [7] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(68),
    [anon_sym_false] = ACTIONS(68),
    [sym_integer] = ACTIONS(71),
    [sym_float] = ACTIONS(71),
    [sym_enumber] = ACTIONS(71),
    [sym_string] = ACTIONS(65),
    [sym_symbol] = ACTIONS(74),
    [sym_variable] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LT_GT] = ACTIONS(85),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(88),
  },
  [8] = {
    [sym__statement] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_abstraction] = STATE(33),
    [sym_application] = STATE(33),
    [sym_shen_def] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(33),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(91),
    [sym_symbol] = ACTIONS(93),
    [sym_variable] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(95),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(97),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(99),
    [anon_sym_defmacro] = ACTIONS(99),
  },
  [9] = {
    [sym__statement] = STATE(49),
    [sym_boolean] = STATE(49),
    [sym_number] = STATE(49),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(49),
    [sym_tuple] = STATE(49),
    [sym_vector] = STATE(49),
    [sym_abstraction] = STATE(49),
    [sym_application] = STATE(49),
    [sym_shen_def] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(49),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(101),
    [sym_symbol] = ACTIONS(103),
    [sym_variable] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(105),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(107),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
    [anon_sym_define] = ACTIONS(109),
    [anon_sym_defmacro] = ACTIONS(109),
  },
  [10] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(29),
    [sym_variable] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
  },
  [11] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(4),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(29),
    [sym_variable] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
  },
  [12] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(10),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(29),
    [sym_variable] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
  },
  [13] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(80),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [sym_guard] = STATE(108),
    [aux_sym_source_file_repeat1] = STATE(23),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(113),
    [anon_sym_true] = ACTIONS(115),
    [anon_sym_false] = ACTIONS(115),
    [sym_integer] = ACTIONS(115),
    [sym_float] = ACTIONS(115),
    [sym_enumber] = ACTIONS(115),
    [sym_string] = ACTIONS(113),
    [sym_symbol] = ACTIONS(115),
    [sym_variable] = ACTIONS(115),
    [anon_sym_LBRACK] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(113),
    [anon_sym_LT_GT] = ACTIONS(115),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(113),
    [anon_sym_where] = ACTIONS(117),
  },
  [14] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(3),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(29),
    [sym_variable] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
  },
  [15] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(119),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(121),
    [anon_sym_true] = ACTIONS(124),
    [anon_sym_false] = ACTIONS(124),
    [sym_integer] = ACTIONS(127),
    [sym_float] = ACTIONS(127),
    [sym_enumber] = ACTIONS(127),
    [sym_string] = ACTIONS(121),
    [sym_symbol] = ACTIONS(130),
    [sym_variable] = ACTIONS(130),
    [anon_sym_LBRACK] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(119),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LT_GT] = ACTIONS(139),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(142),
  },
  [16] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [sym_rule] = STATE(107),
    [sym_pattern] = STATE(113),
    [aux_sym_source_file_repeat1] = STATE(19),
    [aux_sym_shen_def_repeat1] = STATE(2),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(23),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(23),
    [sym_symbol] = ACTIONS(29),
    [sym_variable] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
  },
  [17] = {
    [sym__statement] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_abstraction] = STATE(98),
    [sym_application] = STATE(98),
    [sym_shen_def] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(25),
    [aux_sym_cons_repeat1] = STATE(56),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(145),
    [sym_symbol] = ACTIONS(147),
    [sym_variable] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [18] = {
    [sym__statement] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_abstraction] = STATE(98),
    [sym_application] = STATE(98),
    [sym_shen_def] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(52),
    [aux_sym_cons_repeat1] = STATE(53),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(145),
    [sym_symbol] = ACTIONS(147),
    [sym_variable] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(151),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [19] = {
    [sym__statement] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_number] = STATE(20),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_abstraction] = STATE(20),
    [sym_application] = STATE(20),
    [sym_shen_def] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(153),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [sym_integer] = ACTIONS(27),
    [sym_float] = ACTIONS(27),
    [sym_enumber] = ACTIONS(27),
    [sym_string] = ACTIONS(153),
    [sym_symbol] = ACTIONS(155),
    [sym_variable] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(31),
    [anon_sym_LPAREN] = ACTIONS(33),
    [anon_sym_LT_GT] = ACTIONS(37),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(39),
    [anon_sym_DASH_GT] = ACTIONS(157),
    [anon_sym_LT_DASH] = ACTIONS(157),
  },
  [20] = {
    [sym__statement] = STATE(20),
    [sym_boolean] = STATE(20),
    [sym_number] = STATE(20),
    [sym_cons] = STATE(99),
    [sym_list] = STATE(20),
    [sym_tuple] = STATE(20),
    [sym_vector] = STATE(20),
    [sym_abstraction] = STATE(20),
    [sym_application] = STATE(20),
    [sym_shen_def] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(159),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(162),
    [sym_integer] = ACTIONS(165),
    [sym_float] = ACTIONS(165),
    [sym_enumber] = ACTIONS(165),
    [sym_string] = ACTIONS(159),
    [sym_symbol] = ACTIONS(168),
    [sym_variable] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(171),
    [anon_sym_LPAREN] = ACTIONS(174),
    [anon_sym_LT_GT] = ACTIONS(177),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(180),
    [anon_sym_DASH_GT] = ACTIONS(183),
    [anon_sym_LT_DASH] = ACTIONS(183),
  },
  [21] = {
    [sym__statement] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_abstraction] = STATE(98),
    [sym_application] = STATE(98),
    [sym_shen_def] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_cons_repeat1] = STATE(61),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(145),
    [sym_symbol] = ACTIONS(147),
    [sym_variable] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(185),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [22] = {
    [sym__statement] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_abstraction] = STATE(98),
    [sym_application] = STATE(98),
    [sym_shen_def] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(37),
    [aux_sym_cons_repeat1] = STATE(58),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(145),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(145),
    [sym_symbol] = ACTIONS(147),
    [sym_variable] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(187),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [23] = {
    [sym__statement] = STATE(23),
    [sym_boolean] = STATE(23),
    [sym_number] = STATE(23),
    [sym_cons] = STATE(80),
    [sym_list] = STATE(23),
    [sym_tuple] = STATE(23),
    [sym_vector] = STATE(23),
    [sym_abstraction] = STATE(23),
    [sym_application] = STATE(23),
    [sym_shen_def] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(189),
    [anon_sym_true] = ACTIONS(192),
    [anon_sym_false] = ACTIONS(192),
    [sym_integer] = ACTIONS(195),
    [sym_float] = ACTIONS(195),
    [sym_enumber] = ACTIONS(195),
    [sym_string] = ACTIONS(189),
    [sym_symbol] = ACTIONS(198),
    [sym_variable] = ACTIONS(198),
    [anon_sym_LBRACK] = ACTIONS(201),
    [anon_sym_LPAREN] = ACTIONS(204),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_LT_GT] = ACTIONS(207),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(210),
    [anon_sym_where] = ACTIONS(183),
  },
  [24] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(217),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [25] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(219),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [26] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(221),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [27] = {
    [sym__statement] = STATE(42),
    [sym_boolean] = STATE(42),
    [sym_number] = STATE(42),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(42),
    [sym_tuple] = STATE(42),
    [sym_vector] = STATE(42),
    [sym_abstraction] = STATE(42),
    [sym_application] = STATE(42),
    [sym_shen_def] = STATE(42),
    [aux_sym_source_file_repeat1] = STATE(42),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(223),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(223),
    [sym_symbol] = ACTIONS(225),
    [sym_variable] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [28] = {
    [sym__statement] = STATE(44),
    [sym_boolean] = STATE(44),
    [sym_number] = STATE(44),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(44),
    [sym_tuple] = STATE(44),
    [sym_vector] = STATE(44),
    [sym_abstraction] = STATE(44),
    [sym_application] = STATE(44),
    [sym_shen_def] = STATE(44),
    [aux_sym_source_file_repeat1] = STATE(44),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(229),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(229),
    [sym_symbol] = ACTIONS(231),
    [sym_variable] = ACTIONS(231),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(233),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [29] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(235),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [30] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [31] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(239),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [32] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(241),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [33] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [34] = {
    [sym__statement] = STATE(31),
    [sym_boolean] = STATE(31),
    [sym_number] = STATE(31),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(31),
    [sym_tuple] = STATE(31),
    [sym_vector] = STATE(31),
    [sym_abstraction] = STATE(31),
    [sym_application] = STATE(31),
    [sym_shen_def] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(31),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(245),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(245),
    [sym_symbol] = ACTIONS(247),
    [sym_variable] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(249),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [35] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(251),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [36] = {
    [sym__statement] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_number] = STATE(32),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(32),
    [sym_tuple] = STATE(32),
    [sym_vector] = STATE(32),
    [sym_abstraction] = STATE(32),
    [sym_application] = STATE(32),
    [sym_shen_def] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(253),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(253),
    [sym_symbol] = ACTIONS(255),
    [sym_variable] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [37] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(259),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [38] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(261),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [39] = {
    [sym__statement] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_number] = STATE(30),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_abstraction] = STATE(30),
    [sym_application] = STATE(30),
    [sym_shen_def] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(263),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(263),
    [sym_symbol] = ACTIONS(265),
    [sym_variable] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(267),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [40] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [41] = {
    [sym__statement] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_number] = STATE(29),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_vector] = STATE(29),
    [sym_abstraction] = STATE(29),
    [sym_application] = STATE(29),
    [sym_shen_def] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(271),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(271),
    [sym_symbol] = ACTIONS(273),
    [sym_variable] = ACTIONS(273),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [42] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [43] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [44] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [45] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(283),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [46] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(285),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [47] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [48] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(289),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [49] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(291),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [50] = {
    [sym__statement] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym_number] = STATE(46),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(46),
    [sym_tuple] = STATE(46),
    [sym_vector] = STATE(46),
    [sym_abstraction] = STATE(46),
    [sym_application] = STATE(46),
    [sym_shen_def] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(293),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(293),
    [sym_symbol] = ACTIONS(295),
    [sym_variable] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(297),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [51] = {
    [sym__statement] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_number] = STATE(47),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(47),
    [sym_tuple] = STATE(47),
    [sym_vector] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym_application] = STATE(47),
    [sym_shen_def] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(299),
    [sym_symbol] = ACTIONS(301),
    [sym_variable] = ACTIONS(301),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(303),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [52] = {
    [sym__statement] = STATE(15),
    [sym_boolean] = STATE(15),
    [sym_number] = STATE(15),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(15),
    [sym_tuple] = STATE(15),
    [sym_vector] = STATE(15),
    [sym_abstraction] = STATE(15),
    [sym_application] = STATE(15),
    [sym_shen_def] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(213),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(213),
    [sym_symbol] = ACTIONS(215),
    [sym_variable] = ACTIONS(215),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [53] = {
    [sym__statement] = STATE(118),
    [sym_boolean] = STATE(118),
    [sym_number] = STATE(118),
    [sym_cons] = STATE(120),
    [sym_list] = STATE(118),
    [sym_tuple] = STATE(118),
    [sym_vector] = STATE(118),
    [sym_abstraction] = STATE(118),
    [sym_application] = STATE(118),
    [sym_shen_def] = STATE(118),
    [aux_sym_cons_repeat1] = STATE(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(307),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [sym_integer] = ACTIONS(311),
    [sym_float] = ACTIONS(311),
    [sym_enumber] = ACTIONS(311),
    [sym_string] = ACTIONS(307),
    [sym_symbol] = ACTIONS(313),
    [sym_variable] = ACTIONS(313),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LT_GT] = ACTIONS(319),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(321),
  },
  [54] = {
    [sym__statement] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym_number] = STATE(48),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_vector] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym_application] = STATE(48),
    [sym_shen_def] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(323),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(323),
    [sym_symbol] = ACTIONS(325),
    [sym_variable] = ACTIONS(325),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [55] = {
    [sym__statement] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_number] = STATE(43),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_vector] = STATE(43),
    [sym_abstraction] = STATE(43),
    [sym_application] = STATE(43),
    [sym_shen_def] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(327),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(327),
    [sym_symbol] = ACTIONS(329),
    [sym_variable] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [56] = {
    [sym__statement] = STATE(123),
    [sym_boolean] = STATE(123),
    [sym_number] = STATE(123),
    [sym_cons] = STATE(120),
    [sym_list] = STATE(123),
    [sym_tuple] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_abstraction] = STATE(123),
    [sym_application] = STATE(123),
    [sym_shen_def] = STATE(123),
    [aux_sym_cons_repeat1] = STATE(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(331),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [sym_integer] = ACTIONS(311),
    [sym_float] = ACTIONS(311),
    [sym_enumber] = ACTIONS(311),
    [sym_string] = ACTIONS(331),
    [sym_symbol] = ACTIONS(333),
    [sym_variable] = ACTIONS(333),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LT_GT] = ACTIONS(319),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(321),
  },
  [57] = {
    [sym__statement] = STATE(13),
    [sym_boolean] = STATE(13),
    [sym_number] = STATE(13),
    [sym_cons] = STATE(80),
    [sym_list] = STATE(13),
    [sym_tuple] = STATE(13),
    [sym_vector] = STATE(13),
    [sym_abstraction] = STATE(13),
    [sym_application] = STATE(13),
    [sym_shen_def] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(335),
    [anon_sym_true] = ACTIONS(337),
    [anon_sym_false] = ACTIONS(337),
    [sym_integer] = ACTIONS(339),
    [sym_float] = ACTIONS(339),
    [sym_enumber] = ACTIONS(339),
    [sym_string] = ACTIONS(335),
    [sym_symbol] = ACTIONS(341),
    [sym_variable] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [anon_sym_LPAREN] = ACTIONS(345),
    [anon_sym_LT_GT] = ACTIONS(347),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(349),
  },
  [58] = {
    [sym__statement] = STATE(117),
    [sym_boolean] = STATE(117),
    [sym_number] = STATE(117),
    [sym_cons] = STATE(120),
    [sym_list] = STATE(117),
    [sym_tuple] = STATE(117),
    [sym_vector] = STATE(117),
    [sym_abstraction] = STATE(117),
    [sym_application] = STATE(117),
    [sym_shen_def] = STATE(117),
    [aux_sym_cons_repeat1] = STATE(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(351),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [sym_integer] = ACTIONS(311),
    [sym_float] = ACTIONS(311),
    [sym_enumber] = ACTIONS(311),
    [sym_string] = ACTIONS(351),
    [sym_symbol] = ACTIONS(353),
    [sym_variable] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LT_GT] = ACTIONS(319),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(321),
  },
  [59] = {
    [sym__statement] = STATE(132),
    [sym_boolean] = STATE(132),
    [sym_number] = STATE(132),
    [sym_cons] = STATE(120),
    [sym_list] = STATE(132),
    [sym_tuple] = STATE(132),
    [sym_vector] = STATE(132),
    [sym_abstraction] = STATE(132),
    [sym_application] = STATE(132),
    [sym_shen_def] = STATE(132),
    [aux_sym_cons_repeat1] = STATE(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(355),
    [anon_sym_true] = ACTIONS(358),
    [anon_sym_false] = ACTIONS(358),
    [sym_integer] = ACTIONS(361),
    [sym_float] = ACTIONS(361),
    [sym_enumber] = ACTIONS(361),
    [sym_string] = ACTIONS(355),
    [sym_symbol] = ACTIONS(364),
    [sym_variable] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(367),
    [anon_sym_LPAREN] = ACTIONS(370),
    [anon_sym_LT_GT] = ACTIONS(373),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(376),
  },
  [60] = {
    [sym__statement] = STATE(40),
    [sym_boolean] = STATE(40),
    [sym_number] = STATE(40),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(40),
    [sym_tuple] = STATE(40),
    [sym_vector] = STATE(40),
    [sym_abstraction] = STATE(40),
    [sym_application] = STATE(40),
    [sym_shen_def] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(379),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(379),
    [sym_symbol] = ACTIONS(381),
    [sym_variable] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [61] = {
    [sym__statement] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_number] = STATE(129),
    [sym_cons] = STATE(120),
    [sym_list] = STATE(129),
    [sym_tuple] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_abstraction] = STATE(129),
    [sym_application] = STATE(129),
    [sym_shen_def] = STATE(129),
    [aux_sym_cons_repeat1] = STATE(59),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(383),
    [anon_sym_true] = ACTIONS(309),
    [anon_sym_false] = ACTIONS(309),
    [sym_integer] = ACTIONS(311),
    [sym_float] = ACTIONS(311),
    [sym_enumber] = ACTIONS(311),
    [sym_string] = ACTIONS(383),
    [sym_symbol] = ACTIONS(385),
    [sym_variable] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(315),
    [anon_sym_LPAREN] = ACTIONS(317),
    [anon_sym_LT_GT] = ACTIONS(319),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(321),
  },
  [62] = {
    [sym__statement] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_number] = STATE(24),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_vector] = STATE(24),
    [sym_abstraction] = STATE(24),
    [sym_application] = STATE(24),
    [sym_shen_def] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(387),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(387),
    [sym_symbol] = ACTIONS(389),
    [sym_variable] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
  [63] = {
    [sym__statement] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym_cons] = STATE(76),
    [sym_list] = STATE(109),
    [sym_tuple] = STATE(109),
    [sym_vector] = STATE(109),
    [sym_abstraction] = STATE(109),
    [sym_application] = STATE(109),
    [sym_shen_def] = STATE(109),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(391),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(391),
    [sym_symbol] = ACTIONS(393),
    [sym_variable] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_LPAREN_SLASH_DOT] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(395), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(397), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [25] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(399), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(401), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [50] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(403), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(405), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [75] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(407), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(409), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [100] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(411), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(413), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [125] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(415), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(417), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [150] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(419), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(421), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [175] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(423), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(425), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [200] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(427), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(429), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [225] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(431), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(433), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [250] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(435), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(437), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [275] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(439), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(441), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [300] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(443), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(445), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [325] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(447), 8,
      ts_builtin_sym_end,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_PIPE,
      anon_sym_RBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(449), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [350] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(415), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(417), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [373] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(415), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(417), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [396] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(443), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(445), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [419] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(439), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(441), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [442] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(435), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(437), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [465] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(431), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(433), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [488] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(427), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(429), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [511] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(423), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(425), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [534] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(419), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(421), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [557] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(435), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(437), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [580] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(411), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(413), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [603] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(395), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(397), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [626] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(403), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(405), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [649] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(447), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(449), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [672] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(399), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(401), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [695] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(407), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(409), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [718] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(439), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(441), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [741] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(399), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(401), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [764] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(407), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(409), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [787] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(403), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(405), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [810] = 4,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(455), 1,
      anon_sym_PIPE,
    ACTIONS(451), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(453), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [835] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(443), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(445), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [858] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(431), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(433), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [881] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(395), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(397), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [904] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(411), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(413), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [927] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(447), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(449), 10,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_where,
  [950] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(419), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(421), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [973] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(423), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(425), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [996] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(427), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(429), 11,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [1019] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(457), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(459), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [1041] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(461), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(463), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [1063] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(465), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RPAREN,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(467), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [1085] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(469), 4,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN_SLASH_DOT,
    ACTIONS(471), 9,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LPAREN,
      anon_sym_LT_GT,
  [1106] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(419), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1115] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(431), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1124] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(473), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [1133] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(403), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1142] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(399), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1151] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(395), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1160] = 3,
    ACTIONS(455), 1,
      anon_sym_PIPE,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1171] = 3,
    ACTIONS(455), 1,
      anon_sym_PIPE,
    ACTIONS(477), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1182] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(447), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1191] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(443), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1200] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(439), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1209] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(435), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1218] = 3,
    ACTIONS(455), 1,
      anon_sym_PIPE,
    ACTIONS(479), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1229] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(407), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1238] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(427), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1247] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(411), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1256] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(423), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1265] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(415), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1274] = 3,
    ACTIONS(455), 1,
      anon_sym_PIPE,
    ACTIONS(481), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1285] = 2,
    ACTIONS(483), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1293] = 2,
    ACTIONS(485), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1301] = 2,
    ACTIONS(455), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1309] = 2,
    ACTIONS(487), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1317] = 2,
    ACTIONS(489), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1325] = 2,
    ACTIONS(491), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(64)] = 0,
  [SMALL_STATE(65)] = 25,
  [SMALL_STATE(66)] = 50,
  [SMALL_STATE(67)] = 75,
  [SMALL_STATE(68)] = 100,
  [SMALL_STATE(69)] = 125,
  [SMALL_STATE(70)] = 150,
  [SMALL_STATE(71)] = 175,
  [SMALL_STATE(72)] = 200,
  [SMALL_STATE(73)] = 225,
  [SMALL_STATE(74)] = 250,
  [SMALL_STATE(75)] = 275,
  [SMALL_STATE(76)] = 300,
  [SMALL_STATE(77)] = 325,
  [SMALL_STATE(78)] = 350,
  [SMALL_STATE(79)] = 373,
  [SMALL_STATE(80)] = 396,
  [SMALL_STATE(81)] = 419,
  [SMALL_STATE(82)] = 442,
  [SMALL_STATE(83)] = 465,
  [SMALL_STATE(84)] = 488,
  [SMALL_STATE(85)] = 511,
  [SMALL_STATE(86)] = 534,
  [SMALL_STATE(87)] = 557,
  [SMALL_STATE(88)] = 580,
  [SMALL_STATE(89)] = 603,
  [SMALL_STATE(90)] = 626,
  [SMALL_STATE(91)] = 649,
  [SMALL_STATE(92)] = 672,
  [SMALL_STATE(93)] = 695,
  [SMALL_STATE(94)] = 718,
  [SMALL_STATE(95)] = 741,
  [SMALL_STATE(96)] = 764,
  [SMALL_STATE(97)] = 787,
  [SMALL_STATE(98)] = 810,
  [SMALL_STATE(99)] = 835,
  [SMALL_STATE(100)] = 858,
  [SMALL_STATE(101)] = 881,
  [SMALL_STATE(102)] = 904,
  [SMALL_STATE(103)] = 927,
  [SMALL_STATE(104)] = 950,
  [SMALL_STATE(105)] = 973,
  [SMALL_STATE(106)] = 996,
  [SMALL_STATE(107)] = 1019,
  [SMALL_STATE(108)] = 1041,
  [SMALL_STATE(109)] = 1063,
  [SMALL_STATE(110)] = 1085,
  [SMALL_STATE(111)] = 1106,
  [SMALL_STATE(112)] = 1115,
  [SMALL_STATE(113)] = 1124,
  [SMALL_STATE(114)] = 1133,
  [SMALL_STATE(115)] = 1142,
  [SMALL_STATE(116)] = 1151,
  [SMALL_STATE(117)] = 1160,
  [SMALL_STATE(118)] = 1171,
  [SMALL_STATE(119)] = 1182,
  [SMALL_STATE(120)] = 1191,
  [SMALL_STATE(121)] = 1200,
  [SMALL_STATE(122)] = 1209,
  [SMALL_STATE(123)] = 1218,
  [SMALL_STATE(124)] = 1229,
  [SMALL_STATE(125)] = 1238,
  [SMALL_STATE(126)] = 1247,
  [SMALL_STATE(127)] = 1256,
  [SMALL_STATE(128)] = 1265,
  [SMALL_STATE(129)] = 1274,
  [SMALL_STATE(130)] = 1285,
  [SMALL_STATE(131)] = 1293,
  [SMALL_STATE(132)] = 1301,
  [SMALL_STATE(133)] = 1309,
  [SMALL_STATE(134)] = 1317,
  [SMALL_STATE(135)] = 1325,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(19),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(93),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(92),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(19),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(18),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(9),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(91),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(54),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [124] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [127] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [130] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(77),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(55),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [159] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [162] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [165] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [168] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [171] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [174] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [180] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(96),
  [195] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(95),
  [198] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [201] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(22),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [207] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(103),
  [210] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [225] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [231] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [273] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(132),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(124),
  [361] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(115),
  [364] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(132),
  [367] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(21),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(6),
  [373] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(119),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(60),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [381] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [385] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 4),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 4),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shen_def, 5, .production_id = 4),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shen_def, 5, .production_id = 4),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [409] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 4, .production_id = 3),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 4, .production_id = 3),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction, 3),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction, 3),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 1),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guard, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_guard, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [483] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
