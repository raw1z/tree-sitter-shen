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
  anon_sym_SLASH_DOT = 19,
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
  [anon_sym_SLASH_DOT] = "/.",
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
  [anon_sym_SLASH_DOT] = anon_sym_SLASH_DOT,
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
  [5] = 2,
  [6] = 6,
  [7] = 6,
  [8] = 8,
  [9] = 6,
  [10] = 6,
  [11] = 11,
  [12] = 12,
  [13] = 11,
  [14] = 14,
  [15] = 11,
  [16] = 11,
  [17] = 17,
  [18] = 17,
  [19] = 14,
  [20] = 17,
  [21] = 21,
  [22] = 17,
  [23] = 14,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 24,
  [29] = 29,
  [30] = 30,
  [31] = 30,
  [32] = 29,
  [33] = 25,
  [34] = 34,
  [35] = 34,
  [36] = 27,
  [37] = 26,
  [38] = 25,
  [39] = 30,
  [40] = 24,
  [41] = 34,
  [42] = 27,
  [43] = 29,
  [44] = 26,
  [45] = 30,
  [46] = 29,
  [47] = 24,
  [48] = 25,
  [49] = 34,
  [50] = 27,
  [51] = 26,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 53,
  [56] = 53,
  [57] = 54,
  [58] = 58,
  [59] = 54,
  [60] = 54,
  [61] = 61,
  [62] = 53,
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
  [78] = 71,
  [79] = 64,
  [80] = 69,
  [81] = 70,
  [82] = 69,
  [83] = 72,
  [84] = 73,
  [85] = 74,
  [86] = 75,
  [87] = 76,
  [88] = 64,
  [89] = 77,
  [90] = 65,
  [91] = 68,
  [92] = 66,
  [93] = 67,
  [94] = 71,
  [95] = 72,
  [96] = 73,
  [97] = 74,
  [98] = 98,
  [99] = 75,
  [100] = 76,
  [101] = 68,
  [102] = 77,
  [103] = 65,
  [104] = 67,
  [105] = 66,
  [106] = 70,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 73,
  [112] = 77,
  [113] = 113,
  [114] = 114,
  [115] = 69,
  [116] = 113,
  [117] = 70,
  [118] = 67,
  [119] = 71,
  [120] = 72,
  [121] = 68,
  [122] = 74,
  [123] = 113,
  [124] = 75,
  [125] = 66,
  [126] = 65,
  [127] = 76,
  [128] = 64,
  [129] = 113,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 132,
  [134] = 132,
  [135] = 132,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(4);
      if (lookahead == '(') ADVANCE(64);
      if (lookahead == ')') ADVANCE(66);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '<') ADVANCE(27);
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
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('!' <= lookahead && lookahead <= '*') ||
          (':' <= lookahead && lookahead <= '?') ||
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
          lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
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
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
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
      if (lookahead == '/') ADVANCE(31);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead == '@') ADVANCE(49);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 'd') ADVANCE(36);
      if (lookahead == 'f') ADVANCE(33);
      if (lookahead == 't') ADVANCE(50);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('!' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          (':' <= lookahead && lookahead <= '?') ||
          lookahead == '_' ||
          lookahead == '`' ||
          lookahead == '{' ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '\\' &&
          lookahead != '|') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '<') ADVANCE(8);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 10:
      if (lookahead == '>') ADVANCE(72);
      END_STATE();
    case 11:
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
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
    case 12:
      if (lookahead == '\\') ADVANCE(19);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 15:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
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
          lookahead == '-') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (('!' <= lookahead && lookahead <= '*') ||
          ('/' <= lookahead && lookahead <= '@') ||
          lookahead == '_' ||
          lookahead == '`' ||
          ('{' <= lookahead && lookahead <= '~')) ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(60);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__whitespace);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
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
    case 22:
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
    case 23:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_enumber);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 27:
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
    case 28:
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
    case 29:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '>') ADVANCE(73);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          ('/' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_symbol);
      if (lookahead == '.') ADVANCE(57);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
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
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
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
      if (lookahead == 'e') ADVANCE(28);
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
      if (lookahead == 'e') ADVANCE(21);
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
      ACCEPT_TOKEN(anon_sym_SLASH_DOT);
      if (lookahead == '!' ||
          ('#' <= lookahead && lookahead <= '\'') ||
          lookahead == '*' ||
          lookahead == '+' ||
          ('-' <= lookahead && lookahead <= 'Z') ||
          ('_' <= lookahead && lookahead <= '{') ||
          lookahead == '}' ||
          lookahead == '~') ADVANCE(59);
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
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 3},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 16},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 16},
  [11] = {.lex_state = 16},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 16},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 16},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 16},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 16},
  [25] = {.lex_state = 16},
  [26] = {.lex_state = 16},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 16},
  [29] = {.lex_state = 16},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 16},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 16},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 16},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 16},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 16},
  [42] = {.lex_state = 16},
  [43] = {.lex_state = 16},
  [44] = {.lex_state = 16},
  [45] = {.lex_state = 16},
  [46] = {.lex_state = 16},
  [47] = {.lex_state = 16},
  [48] = {.lex_state = 16},
  [49] = {.lex_state = 16},
  [50] = {.lex_state = 16},
  [51] = {.lex_state = 16},
  [52] = {.lex_state = 16},
  [53] = {.lex_state = 16},
  [54] = {.lex_state = 16},
  [55] = {.lex_state = 16},
  [56] = {.lex_state = 16},
  [57] = {.lex_state = 16},
  [58] = {.lex_state = 16},
  [59] = {.lex_state = 16},
  [60] = {.lex_state = 16},
  [61] = {.lex_state = 16},
  [62] = {.lex_state = 16},
  [63] = {.lex_state = 16},
  [64] = {.lex_state = 16},
  [65] = {.lex_state = 16},
  [66] = {.lex_state = 16},
  [67] = {.lex_state = 16},
  [68] = {.lex_state = 16},
  [69] = {.lex_state = 16},
  [70] = {.lex_state = 16},
  [71] = {.lex_state = 16},
  [72] = {.lex_state = 16},
  [73] = {.lex_state = 16},
  [74] = {.lex_state = 16},
  [75] = {.lex_state = 16},
  [76] = {.lex_state = 16},
  [77] = {.lex_state = 16},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 16},
  [99] = {.lex_state = 2},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 2},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 2},
  [107] = {.lex_state = 16},
  [108] = {.lex_state = 16},
  [109] = {.lex_state = 16},
  [110] = {.lex_state = 16},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 7},
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
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 11},
  [133] = {.lex_state = 11},
  [134] = {.lex_state = 11},
  [135] = {.lex_state = 11},
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
    [anon_sym_SLASH_DOT] = ACTIONS(1),
    [anon_sym_define] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_where] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(131),
    [sym__statement] = STATE(52),
    [sym_boolean] = STATE(52),
    [sym_number] = STATE(52),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(52),
    [sym_tuple] = STATE(52),
    [sym_vector] = STATE(52),
    [sym_abstraction] = STATE(52),
    [sym_application] = STATE(52),
    [sym_shen_def] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(52),
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
    [sym__statement] = STATE(25),
    [sym_boolean] = STATE(25),
    [sym_number] = STATE(25),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(25),
    [sym_tuple] = STATE(25),
    [sym_vector] = STATE(25),
    [sym_abstraction] = STATE(25),
    [sym_application] = STATE(25),
    [sym_shen_def] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(25),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(21),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(21),
    [sym_symbol] = ACTIONS(23),
    [sym_variable] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(25),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(27),
    [anon_sym_SLASH_DOT] = ACTIONS(29),
    [anon_sym_define] = ACTIONS(31),
    [anon_sym_defmacro] = ACTIONS(31),
  },
  [3] = {
    [sym__statement] = STATE(48),
    [sym_boolean] = STATE(48),
    [sym_number] = STATE(48),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(48),
    [sym_tuple] = STATE(48),
    [sym_vector] = STATE(48),
    [sym_abstraction] = STATE(48),
    [sym_application] = STATE(48),
    [sym_shen_def] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(33),
    [sym_symbol] = ACTIONS(35),
    [sym_variable] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(37),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(39),
    [anon_sym_SLASH_DOT] = ACTIONS(41),
    [anon_sym_define] = ACTIONS(43),
    [anon_sym_defmacro] = ACTIONS(43),
  },
  [4] = {
    [sym__statement] = STATE(33),
    [sym_boolean] = STATE(33),
    [sym_number] = STATE(33),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(33),
    [sym_tuple] = STATE(33),
    [sym_vector] = STATE(33),
    [sym_abstraction] = STATE(33),
    [sym_application] = STATE(33),
    [sym_shen_def] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(33),
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
    [anon_sym_SLASH_DOT] = ACTIONS(53),
    [anon_sym_define] = ACTIONS(55),
    [anon_sym_defmacro] = ACTIONS(55),
  },
  [5] = {
    [sym__statement] = STATE(38),
    [sym_boolean] = STATE(38),
    [sym_number] = STATE(38),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(38),
    [sym_tuple] = STATE(38),
    [sym_vector] = STATE(38),
    [sym_abstraction] = STATE(38),
    [sym_application] = STATE(38),
    [sym_shen_def] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(38),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(57),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(57),
    [sym_symbol] = ACTIONS(59),
    [sym_variable] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_ATp] = ACTIONS(61),
    [anon_sym_LT_GT] = ACTIONS(19),
    [anon_sym_ATv] = ACTIONS(63),
    [anon_sym_SLASH_DOT] = ACTIONS(65),
    [anon_sym_define] = ACTIONS(67),
    [anon_sym_defmacro] = ACTIONS(67),
  },
  [6] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_LT_GT] = ACTIONS(83),
  },
  [7] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_LT_GT] = ACTIONS(83),
  },
  [8] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(8),
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
  [9] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_LT_GT] = ACTIONS(83),
  },
  [10] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(8),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_LT_GT] = ACTIONS(83),
  },
  [11] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(7),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(83),
  },
  [12] = {
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
    [sym_guard] = STATE(107),
    [aux_sym_source_file_repeat1] = STATE(23),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(116),
    [anon_sym_false] = ACTIONS(116),
    [sym_integer] = ACTIONS(116),
    [sym_float] = ACTIONS(116),
    [sym_enumber] = ACTIONS(116),
    [sym_string] = ACTIONS(114),
    [sym_symbol] = ACTIONS(116),
    [sym_variable] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(114),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_LT_GT] = ACTIONS(116),
    [anon_sym_where] = ACTIONS(118),
  },
  [13] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(10),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(83),
  },
  [14] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(120),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(125),
    [anon_sym_false] = ACTIONS(125),
    [sym_integer] = ACTIONS(128),
    [sym_float] = ACTIONS(128),
    [sym_enumber] = ACTIONS(128),
    [sym_string] = ACTIONS(122),
    [sym_symbol] = ACTIONS(131),
    [sym_variable] = ACTIONS(131),
    [anon_sym_LBRACK] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_LPAREN] = ACTIONS(137),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LT_GT] = ACTIONS(140),
  },
  [15] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(6),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(83),
  },
  [16] = {
    [sym__statement] = STATE(21),
    [sym_boolean] = STATE(21),
    [sym_number] = STATE(21),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(21),
    [sym_tuple] = STATE(21),
    [sym_vector] = STATE(21),
    [sym_abstraction] = STATE(21),
    [sym_application] = STATE(21),
    [sym_shen_def] = STATE(21),
    [sym_rule] = STATE(108),
    [sym_pattern] = STATE(114),
    [aux_sym_source_file_repeat1] = STATE(21),
    [aux_sym_shen_def_repeat1] = STATE(9),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(69),
    [sym_symbol] = ACTIONS(75),
    [sym_variable] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(83),
  },
  [17] = {
    [sym__statement] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_abstraction] = STATE(98),
    [sym_application] = STATE(98),
    [sym_shen_def] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(44),
    [aux_sym_cons_repeat1] = STATE(53),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(143),
    [sym_symbol] = ACTIONS(145),
    [sym_variable] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(147),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [18] = {
    [sym__statement] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_abstraction] = STATE(98),
    [sym_application] = STATE(98),
    [sym_shen_def] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(51),
    [aux_sym_cons_repeat1] = STATE(55),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(143),
    [sym_symbol] = ACTIONS(145),
    [sym_variable] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(149),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [19] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(151),
    [anon_sym_true] = ACTIONS(154),
    [anon_sym_false] = ACTIONS(154),
    [sym_integer] = ACTIONS(157),
    [sym_float] = ACTIONS(157),
    [sym_enumber] = ACTIONS(157),
    [sym_string] = ACTIONS(151),
    [sym_symbol] = ACTIONS(160),
    [sym_variable] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(163),
    [anon_sym_LPAREN] = ACTIONS(166),
    [anon_sym_LT_GT] = ACTIONS(169),
    [anon_sym_DASH_GT] = ACTIONS(172),
    [anon_sym_LT_DASH] = ACTIONS(172),
  },
  [20] = {
    [sym__statement] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_abstraction] = STATE(98),
    [sym_application] = STATE(98),
    [sym_shen_def] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(37),
    [aux_sym_cons_repeat1] = STATE(62),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(143),
    [sym_symbol] = ACTIONS(145),
    [sym_variable] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [21] = {
    [sym__statement] = STATE(19),
    [sym_boolean] = STATE(19),
    [sym_number] = STATE(19),
    [sym_cons] = STATE(82),
    [sym_list] = STATE(19),
    [sym_tuple] = STATE(19),
    [sym_vector] = STATE(19),
    [sym_abstraction] = STATE(19),
    [sym_application] = STATE(19),
    [sym_shen_def] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(19),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(176),
    [anon_sym_true] = ACTIONS(71),
    [anon_sym_false] = ACTIONS(71),
    [sym_integer] = ACTIONS(73),
    [sym_float] = ACTIONS(73),
    [sym_enumber] = ACTIONS(73),
    [sym_string] = ACTIONS(176),
    [sym_symbol] = ACTIONS(178),
    [sym_variable] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_LT_GT] = ACTIONS(83),
    [anon_sym_DASH_GT] = ACTIONS(180),
    [anon_sym_LT_DASH] = ACTIONS(180),
  },
  [22] = {
    [sym__statement] = STATE(98),
    [sym_boolean] = STATE(98),
    [sym_number] = STATE(98),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(98),
    [sym_tuple] = STATE(98),
    [sym_vector] = STATE(98),
    [sym_abstraction] = STATE(98),
    [sym_application] = STATE(98),
    [sym_shen_def] = STATE(98),
    [aux_sym_source_file_repeat1] = STATE(26),
    [aux_sym_cons_repeat1] = STATE(56),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(143),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(143),
    [sym_symbol] = ACTIONS(145),
    [sym_variable] = ACTIONS(145),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
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
    [sym_comment] = ACTIONS(184),
    [anon_sym_true] = ACTIONS(187),
    [anon_sym_false] = ACTIONS(187),
    [sym_integer] = ACTIONS(190),
    [sym_float] = ACTIONS(190),
    [sym_enumber] = ACTIONS(190),
    [sym_string] = ACTIONS(184),
    [sym_symbol] = ACTIONS(193),
    [sym_variable] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(196),
    [anon_sym_LPAREN] = ACTIONS(199),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LT_GT] = ACTIONS(202),
    [anon_sym_where] = ACTIONS(172),
  },
  [24] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(209),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [25] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(211),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [26] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(213),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [27] = {
    [sym__statement] = STATE(40),
    [sym_boolean] = STATE(40),
    [sym_number] = STATE(40),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(40),
    [sym_tuple] = STATE(40),
    [sym_vector] = STATE(40),
    [sym_abstraction] = STATE(40),
    [sym_application] = STATE(40),
    [sym_shen_def] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(215),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(215),
    [sym_symbol] = ACTIONS(217),
    [sym_variable] = ACTIONS(217),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(219),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [28] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(221),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [29] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(223),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [30] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(225),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [31] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(227),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [32] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(229),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [33] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(231),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [34] = {
    [sym__statement] = STATE(43),
    [sym_boolean] = STATE(43),
    [sym_number] = STATE(43),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(43),
    [sym_tuple] = STATE(43),
    [sym_vector] = STATE(43),
    [sym_abstraction] = STATE(43),
    [sym_application] = STATE(43),
    [sym_shen_def] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(43),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(233),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(233),
    [sym_symbol] = ACTIONS(235),
    [sym_variable] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(237),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [35] = {
    [sym__statement] = STATE(32),
    [sym_boolean] = STATE(32),
    [sym_number] = STATE(32),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(32),
    [sym_tuple] = STATE(32),
    [sym_vector] = STATE(32),
    [sym_abstraction] = STATE(32),
    [sym_application] = STATE(32),
    [sym_shen_def] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(32),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(239),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(239),
    [sym_symbol] = ACTIONS(241),
    [sym_variable] = ACTIONS(241),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(243),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [36] = {
    [sym__statement] = STATE(24),
    [sym_boolean] = STATE(24),
    [sym_number] = STATE(24),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(24),
    [sym_tuple] = STATE(24),
    [sym_vector] = STATE(24),
    [sym_abstraction] = STATE(24),
    [sym_application] = STATE(24),
    [sym_shen_def] = STATE(24),
    [aux_sym_source_file_repeat1] = STATE(24),
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
  },
  [37] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [38] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(253),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [39] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(255),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [40] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(257),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [41] = {
    [sym__statement] = STATE(29),
    [sym_boolean] = STATE(29),
    [sym_number] = STATE(29),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(29),
    [sym_tuple] = STATE(29),
    [sym_vector] = STATE(29),
    [sym_abstraction] = STATE(29),
    [sym_application] = STATE(29),
    [sym_shen_def] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(29),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(259),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(259),
    [sym_symbol] = ACTIONS(261),
    [sym_variable] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(263),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [42] = {
    [sym__statement] = STATE(28),
    [sym_boolean] = STATE(28),
    [sym_number] = STATE(28),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(28),
    [sym_tuple] = STATE(28),
    [sym_vector] = STATE(28),
    [sym_abstraction] = STATE(28),
    [sym_application] = STATE(28),
    [sym_shen_def] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(28),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(265),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(265),
    [sym_symbol] = ACTIONS(267),
    [sym_variable] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(269),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [43] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(271),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [44] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(273),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [45] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(275),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [46] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(277),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [47] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(279),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [48] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(281),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [49] = {
    [sym__statement] = STATE(46),
    [sym_boolean] = STATE(46),
    [sym_number] = STATE(46),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(46),
    [sym_tuple] = STATE(46),
    [sym_vector] = STATE(46),
    [sym_abstraction] = STATE(46),
    [sym_application] = STATE(46),
    [sym_shen_def] = STATE(46),
    [aux_sym_source_file_repeat1] = STATE(46),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(283),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(283),
    [sym_symbol] = ACTIONS(285),
    [sym_variable] = ACTIONS(285),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(287),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [50] = {
    [sym__statement] = STATE(47),
    [sym_boolean] = STATE(47),
    [sym_number] = STATE(47),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(47),
    [sym_tuple] = STATE(47),
    [sym_vector] = STATE(47),
    [sym_abstraction] = STATE(47),
    [sym_application] = STATE(47),
    [sym_shen_def] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(289),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(289),
    [sym_symbol] = ACTIONS(291),
    [sym_variable] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(293),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [51] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(295),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [52] = {
    [sym__statement] = STATE(14),
    [sym_boolean] = STATE(14),
    [sym_number] = STATE(14),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(14),
    [sym_tuple] = STATE(14),
    [sym_vector] = STATE(14),
    [sym_abstraction] = STATE(14),
    [sym_application] = STATE(14),
    [sym_shen_def] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(297),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(205),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(205),
    [sym_symbol] = ACTIONS(207),
    [sym_variable] = ACTIONS(207),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [53] = {
    [sym__statement] = STATE(123),
    [sym_boolean] = STATE(123),
    [sym_number] = STATE(123),
    [sym_cons] = STATE(115),
    [sym_list] = STATE(123),
    [sym_tuple] = STATE(123),
    [sym_vector] = STATE(123),
    [sym_abstraction] = STATE(123),
    [sym_application] = STATE(123),
    [sym_shen_def] = STATE(123),
    [aux_sym_cons_repeat1] = STATE(61),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(299),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(303),
    [sym_enumber] = ACTIONS(303),
    [sym_string] = ACTIONS(299),
    [sym_symbol] = ACTIONS(305),
    [sym_variable] = ACTIONS(305),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_LT_GT] = ACTIONS(311),
  },
  [54] = {
    [sym__statement] = STATE(45),
    [sym_boolean] = STATE(45),
    [sym_number] = STATE(45),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(45),
    [sym_tuple] = STATE(45),
    [sym_vector] = STATE(45),
    [sym_abstraction] = STATE(45),
    [sym_application] = STATE(45),
    [sym_shen_def] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(45),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(313),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(313),
    [sym_symbol] = ACTIONS(315),
    [sym_variable] = ACTIONS(315),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [55] = {
    [sym__statement] = STATE(113),
    [sym_boolean] = STATE(113),
    [sym_number] = STATE(113),
    [sym_cons] = STATE(115),
    [sym_list] = STATE(113),
    [sym_tuple] = STATE(113),
    [sym_vector] = STATE(113),
    [sym_abstraction] = STATE(113),
    [sym_application] = STATE(113),
    [sym_shen_def] = STATE(113),
    [aux_sym_cons_repeat1] = STATE(61),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(317),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(303),
    [sym_enumber] = ACTIONS(303),
    [sym_string] = ACTIONS(317),
    [sym_symbol] = ACTIONS(319),
    [sym_variable] = ACTIONS(319),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_LT_GT] = ACTIONS(311),
  },
  [56] = {
    [sym__statement] = STATE(129),
    [sym_boolean] = STATE(129),
    [sym_number] = STATE(129),
    [sym_cons] = STATE(115),
    [sym_list] = STATE(129),
    [sym_tuple] = STATE(129),
    [sym_vector] = STATE(129),
    [sym_abstraction] = STATE(129),
    [sym_application] = STATE(129),
    [sym_shen_def] = STATE(129),
    [aux_sym_cons_repeat1] = STATE(61),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(321),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(303),
    [sym_enumber] = ACTIONS(303),
    [sym_string] = ACTIONS(321),
    [sym_symbol] = ACTIONS(323),
    [sym_variable] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_LT_GT] = ACTIONS(311),
  },
  [57] = {
    [sym__statement] = STATE(39),
    [sym_boolean] = STATE(39),
    [sym_number] = STATE(39),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(39),
    [sym_tuple] = STATE(39),
    [sym_vector] = STATE(39),
    [sym_abstraction] = STATE(39),
    [sym_application] = STATE(39),
    [sym_shen_def] = STATE(39),
    [aux_sym_source_file_repeat1] = STATE(39),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(325),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(325),
    [sym_symbol] = ACTIONS(327),
    [sym_variable] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [58] = {
    [sym__statement] = STATE(12),
    [sym_boolean] = STATE(12),
    [sym_number] = STATE(12),
    [sym_cons] = STATE(80),
    [sym_list] = STATE(12),
    [sym_tuple] = STATE(12),
    [sym_vector] = STATE(12),
    [sym_abstraction] = STATE(12),
    [sym_application] = STATE(12),
    [sym_shen_def] = STATE(12),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(329),
    [anon_sym_true] = ACTIONS(331),
    [anon_sym_false] = ACTIONS(331),
    [sym_integer] = ACTIONS(333),
    [sym_float] = ACTIONS(333),
    [sym_enumber] = ACTIONS(333),
    [sym_string] = ACTIONS(329),
    [sym_symbol] = ACTIONS(335),
    [sym_variable] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [anon_sym_LPAREN] = ACTIONS(339),
    [anon_sym_LT_GT] = ACTIONS(341),
  },
  [59] = {
    [sym__statement] = STATE(30),
    [sym_boolean] = STATE(30),
    [sym_number] = STATE(30),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(30),
    [sym_tuple] = STATE(30),
    [sym_vector] = STATE(30),
    [sym_abstraction] = STATE(30),
    [sym_application] = STATE(30),
    [sym_shen_def] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(30),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(343),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(343),
    [sym_symbol] = ACTIONS(345),
    [sym_variable] = ACTIONS(345),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [60] = {
    [sym__statement] = STATE(31),
    [sym_boolean] = STATE(31),
    [sym_number] = STATE(31),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(31),
    [sym_tuple] = STATE(31),
    [sym_vector] = STATE(31),
    [sym_abstraction] = STATE(31),
    [sym_application] = STATE(31),
    [sym_shen_def] = STATE(31),
    [aux_sym_source_file_repeat1] = STATE(31),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(347),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(347),
    [sym_symbol] = ACTIONS(349),
    [sym_variable] = ACTIONS(349),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
  [61] = {
    [sym__statement] = STATE(130),
    [sym_boolean] = STATE(130),
    [sym_number] = STATE(130),
    [sym_cons] = STATE(115),
    [sym_list] = STATE(130),
    [sym_tuple] = STATE(130),
    [sym_vector] = STATE(130),
    [sym_abstraction] = STATE(130),
    [sym_application] = STATE(130),
    [sym_shen_def] = STATE(130),
    [aux_sym_cons_repeat1] = STATE(61),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(351),
    [anon_sym_true] = ACTIONS(354),
    [anon_sym_false] = ACTIONS(354),
    [sym_integer] = ACTIONS(357),
    [sym_float] = ACTIONS(357),
    [sym_enumber] = ACTIONS(357),
    [sym_string] = ACTIONS(351),
    [sym_symbol] = ACTIONS(360),
    [sym_variable] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(363),
    [anon_sym_LPAREN] = ACTIONS(366),
    [anon_sym_LT_GT] = ACTIONS(369),
  },
  [62] = {
    [sym__statement] = STATE(116),
    [sym_boolean] = STATE(116),
    [sym_number] = STATE(116),
    [sym_cons] = STATE(115),
    [sym_list] = STATE(116),
    [sym_tuple] = STATE(116),
    [sym_vector] = STATE(116),
    [sym_abstraction] = STATE(116),
    [sym_application] = STATE(116),
    [sym_shen_def] = STATE(116),
    [aux_sym_cons_repeat1] = STATE(61),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(372),
    [anon_sym_true] = ACTIONS(301),
    [anon_sym_false] = ACTIONS(301),
    [sym_integer] = ACTIONS(303),
    [sym_float] = ACTIONS(303),
    [sym_enumber] = ACTIONS(303),
    [sym_string] = ACTIONS(372),
    [sym_symbol] = ACTIONS(374),
    [sym_variable] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(307),
    [anon_sym_LPAREN] = ACTIONS(309),
    [anon_sym_LT_GT] = ACTIONS(311),
  },
  [63] = {
    [sym__statement] = STATE(109),
    [sym_boolean] = STATE(109),
    [sym_number] = STATE(109),
    [sym_cons] = STATE(69),
    [sym_list] = STATE(109),
    [sym_tuple] = STATE(109),
    [sym_vector] = STATE(109),
    [sym_abstraction] = STATE(109),
    [sym_application] = STATE(109),
    [sym_shen_def] = STATE(109),
    [sym__whitespace] = ACTIONS(3),
    [sym_comment] = ACTIONS(376),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [sym_integer] = ACTIONS(11),
    [sym_float] = ACTIONS(11),
    [sym_enumber] = ACTIONS(11),
    [sym_string] = ACTIONS(376),
    [sym_symbol] = ACTIONS(378),
    [sym_variable] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LPAREN] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(19),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
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
  [24] = 3,
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
  [48] = 3,
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
  [72] = 3,
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
  [96] = 3,
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
  [120] = 3,
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
  [144] = 3,
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
  [168] = 3,
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
  [192] = 3,
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
  [216] = 3,
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
  [240] = 3,
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
  [264] = 3,
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
  [288] = 3,
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
  [312] = 3,
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
  [336] = 3,
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
  [358] = 3,
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
  [380] = 3,
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
  [402] = 3,
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
  [424] = 3,
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
  [446] = 3,
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
  [468] = 3,
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
  [490] = 3,
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
  [512] = 3,
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
  [534] = 3,
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
  [556] = 3,
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
  [578] = 3,
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
  [600] = 3,
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
  [622] = 3,
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
  [644] = 3,
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
  [666] = 3,
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
  [688] = 3,
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
  [710] = 3,
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
  [732] = 3,
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
  [754] = 3,
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
  [776] = 4,
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
  [800] = 3,
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
  [822] = 3,
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
  [844] = 3,
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
  [866] = 3,
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
  [888] = 3,
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
  [910] = 3,
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
  [932] = 3,
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
  [954] = 3,
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
  [976] = 3,
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
  [997] = 3,
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
  [1018] = 3,
    ACTIONS(3), 1,
      sym__whitespace,
    ACTIONS(450), 5,
      sym_comment,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
    ACTIONS(452), 8,
      anon_sym_true,
      anon_sym_false,
      sym_integer,
      sym_float,
      sym_enumber,
      sym_symbol,
      sym_variable,
      anon_sym_LT_GT,
  [1039] = 3,
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
  [1059] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(416), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1068] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(432), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1077] = 3,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(458), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1088] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(460), 2,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
  [1097] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1106] = 3,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1117] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1126] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(392), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1135] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(408), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1144] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(412), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1153] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1162] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(420), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1171] = 3,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1182] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1191] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(388), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1200] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(384), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1209] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(428), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1218] = 2,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
    ACTIONS(380), 2,
      anon_sym_PIPE,
      anon_sym_RBRACK,
  [1227] = 3,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(466), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1238] = 2,
    ACTIONS(440), 1,
      anon_sym_PIPE,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1246] = 2,
    ACTIONS(468), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1254] = 2,
    ACTIONS(470), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1262] = 2,
    ACTIONS(472), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1270] = 2,
    ACTIONS(474), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
  [1278] = 2,
    ACTIONS(476), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__whitespace,
      sym_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(64)] = 0,
  [SMALL_STATE(65)] = 24,
  [SMALL_STATE(66)] = 48,
  [SMALL_STATE(67)] = 72,
  [SMALL_STATE(68)] = 96,
  [SMALL_STATE(69)] = 120,
  [SMALL_STATE(70)] = 144,
  [SMALL_STATE(71)] = 168,
  [SMALL_STATE(72)] = 192,
  [SMALL_STATE(73)] = 216,
  [SMALL_STATE(74)] = 240,
  [SMALL_STATE(75)] = 264,
  [SMALL_STATE(76)] = 288,
  [SMALL_STATE(77)] = 312,
  [SMALL_STATE(78)] = 336,
  [SMALL_STATE(79)] = 358,
  [SMALL_STATE(80)] = 380,
  [SMALL_STATE(81)] = 402,
  [SMALL_STATE(82)] = 424,
  [SMALL_STATE(83)] = 446,
  [SMALL_STATE(84)] = 468,
  [SMALL_STATE(85)] = 490,
  [SMALL_STATE(86)] = 512,
  [SMALL_STATE(87)] = 534,
  [SMALL_STATE(88)] = 556,
  [SMALL_STATE(89)] = 578,
  [SMALL_STATE(90)] = 600,
  [SMALL_STATE(91)] = 622,
  [SMALL_STATE(92)] = 644,
  [SMALL_STATE(93)] = 666,
  [SMALL_STATE(94)] = 688,
  [SMALL_STATE(95)] = 710,
  [SMALL_STATE(96)] = 732,
  [SMALL_STATE(97)] = 754,
  [SMALL_STATE(98)] = 776,
  [SMALL_STATE(99)] = 800,
  [SMALL_STATE(100)] = 822,
  [SMALL_STATE(101)] = 844,
  [SMALL_STATE(102)] = 866,
  [SMALL_STATE(103)] = 888,
  [SMALL_STATE(104)] = 910,
  [SMALL_STATE(105)] = 932,
  [SMALL_STATE(106)] = 954,
  [SMALL_STATE(107)] = 976,
  [SMALL_STATE(108)] = 997,
  [SMALL_STATE(109)] = 1018,
  [SMALL_STATE(110)] = 1039,
  [SMALL_STATE(111)] = 1059,
  [SMALL_STATE(112)] = 1068,
  [SMALL_STATE(113)] = 1077,
  [SMALL_STATE(114)] = 1088,
  [SMALL_STATE(115)] = 1097,
  [SMALL_STATE(116)] = 1106,
  [SMALL_STATE(117)] = 1117,
  [SMALL_STATE(118)] = 1126,
  [SMALL_STATE(119)] = 1135,
  [SMALL_STATE(120)] = 1144,
  [SMALL_STATE(121)] = 1153,
  [SMALL_STATE(122)] = 1162,
  [SMALL_STATE(123)] = 1171,
  [SMALL_STATE(124)] = 1182,
  [SMALL_STATE(125)] = 1191,
  [SMALL_STATE(126)] = 1200,
  [SMALL_STATE(127)] = 1209,
  [SMALL_STATE(128)] = 1218,
  [SMALL_STATE(129)] = 1227,
  [SMALL_STATE(130)] = 1238,
  [SMALL_STATE(131)] = 1246,
  [SMALL_STATE(132)] = 1254,
  [SMALL_STATE(133)] = 1262,
  [SMALL_STATE(134)] = 1270,
  [SMALL_STATE(135)] = 1278,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(21),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(93),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(92),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(21),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(18),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(3),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 2), SHIFT_REPEAT(91),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(66),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(14),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [140] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(93),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(19),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(91),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [178] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(101),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [235] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [241] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [323] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(104),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [351] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(130),
  [354] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(118),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(125),
  [360] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(130),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(22),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(2),
  [369] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 2), SHIFT_REPEAT(121),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [374] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [378] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 4),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 4),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_shen_def, 5, .production_id = 4),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_shen_def, 5, .production_id = 4),
  [388] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [390] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1),
  [394] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean, 1),
  [396] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 1),
  [398] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 1),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 1),
  [402] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 1),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [408] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 3),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_vector, 3),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_application, 3),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_application, 3),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons, 4, .production_id = 3),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cons, 4, .production_id = 3),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuple, 4),
  [430] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tuple, 4),
  [432] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_abstraction, 4),
  [434] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abstraction, 4),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [438] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rule, 4),
  [444] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_rule, 4),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_shen_def_repeat1, 1),
  [448] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_shen_def_repeat1, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_guard, 2),
  [452] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_guard, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 1),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cons_repeat1, 2, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [468] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
