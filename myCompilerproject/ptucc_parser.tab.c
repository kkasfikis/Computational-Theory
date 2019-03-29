/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ptucc_parser.y" /* yacc.c:339  */

#include <stdarg.h>
#include <stdio.h>	
#include "cgen.h"

extern int yylex(void);
extern int line_num;

#line 75 "ptucc_parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "ptucc_parser.tab.h".  */
#ifndef YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
# define YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    POSINT = 259,
    REAL = 260,
    STRING = 261,
    KW_PROGRAM = 262,
    KW_BEGIN = 263,
    KW_END = 264,
    KW_AND = 265,
    KW_ARRAY = 266,
    KW_BOOL = 267,
    KW_CHAR = 268,
    KW_TYPE = 269,
    KW_DIV = 270,
    KW_DO = 271,
    KW_FOR = 272,
    KW_FUNCTION = 273,
    KW_GOTO = 274,
    KW_IF = 275,
    KW_INTEGER = 276,
    KW_VAR = 277,
    KW_MOD = 278,
    KW_NOT = 279,
    KW_OF = 280,
    KW_OR = 281,
    KW_WHILE = 282,
    KW_PROCEDURE = 283,
    KW_REAL = 284,
    KW_REPEAT = 285,
    KW_TO = 286,
    KW_RESULT = 287,
    KW_RETURN = 288,
    KW_THEN = 289,
    KW_ELSE = 290,
    KW_UNTIL = 291,
    KW_DOWNTO = 292,
    OP_PLUS = 293,
    OP_MINUS = 294,
    OP_MULT = 295,
    OP_DIV = 296,
    CMP_EQUAL = 297,
    CMP_NOTEQUAL = 298,
    CMP_LESS = 299,
    CMP_LESSEQUAL = 300,
    CMP_GREATER = 301,
    CMP_GREATEREQUAL = 302,
    LOG_AND = 303,
    LOG_NOT = 304,
    LOG_OR = 305,
    ASSIGNMENT = 306,
    DEL_SEMICOLON = 307,
    DEL_LEFTPAR = 308,
    DEL_RIGHTPAR = 309,
    DEL_COMMA = 310,
    DEL_SQRLEFT = 311,
    DEL_SQRRIGHT = 312,
    DEL_COLON = 313,
    DEL_DOT = 314,
    FUNC_RDSTR = 315,
    FUNC_RDINT = 316,
    FUNC_RDREAL = 317,
    FUNC_WRSTR = 318,
    FUNC_WRINT = 319,
    FUNC_WRREAL = 320,
    BOOL_TRUE = 321,
    BOOL_FALSE = 322,
    NOT = 323,
    UPLUS_UMINUS = 324,
    CAST = 325,
    FACTORS = 326,
    PLUS_MINUS = 327,
    RELATIONAL = 328,
    LOGICAL_AND = 329,
    LOGICAL_OR = 330,
    PAR = 331
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "ptucc_parser.y" /* yacc.c:355  */

	char* crepr;

#line 196 "ptucc_parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 213 "ptucc_parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  5
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   897

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  42
/* YYNRULES -- Number of rules.  */
#define YYNRULES  131
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  281

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   331

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   139,   139,   146,   148,   149,   150,   151,   152,   155,
     156,   157,   158,   159,   160,   161,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   175,   177,   178,   179,
     181,   182,   183,   184,   186,   187,   189,   190,   192,   193,
     194,   195,   196,   198,   199,   200,   201,   202,   204,   205,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,   274,   275,
     276,   277,   278,   279,   281,   282,   284,   285,   287,   289,
     290,   291,   292,   294,   296,   298,   300,   302,   307,   309,
     310,   313
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENT", "POSINT", "REAL", "STRING",
  "KW_PROGRAM", "KW_BEGIN", "KW_END", "KW_AND", "KW_ARRAY", "KW_BOOL",
  "KW_CHAR", "KW_TYPE", "KW_DIV", "KW_DO", "KW_FOR", "KW_FUNCTION",
  "KW_GOTO", "KW_IF", "KW_INTEGER", "KW_VAR", "KW_MOD", "KW_NOT", "KW_OF",
  "KW_OR", "KW_WHILE", "KW_PROCEDURE", "KW_REAL", "KW_REPEAT", "KW_TO",
  "KW_RESULT", "KW_RETURN", "KW_THEN", "KW_ELSE", "KW_UNTIL", "KW_DOWNTO",
  "OP_PLUS", "OP_MINUS", "OP_MULT", "OP_DIV", "CMP_EQUAL", "CMP_NOTEQUAL",
  "CMP_LESS", "CMP_LESSEQUAL", "CMP_GREATER", "CMP_GREATEREQUAL",
  "LOG_AND", "LOG_NOT", "LOG_OR", "ASSIGNMENT", "DEL_SEMICOLON",
  "DEL_LEFTPAR", "DEL_RIGHTPAR", "DEL_COMMA", "DEL_SQRLEFT",
  "DEL_SQRRIGHT", "DEL_COLON", "DEL_DOT", "FUNC_RDSTR", "FUNC_RDINT",
  "FUNC_RDREAL", "FUNC_WRSTR", "FUNC_WRINT", "FUNC_WRREAL", "BOOL_TRUE",
  "BOOL_FALSE", "NOT", "UPLUS_UMINUS", "CAST", "FACTORS", "PLUS_MINUS",
  "RELATIONAL", "LOGICAL_AND", "LOGICAL_OR", "PAR", "$accept", "program",
  "program_decl", "program_function_procedure_start_contents", "function",
  "function_procedure_start_contents", "function_header", "procedure",
  "procedure_header", "function_procedure_param",
  "function_procedure_call", "function_procedure_call_params",
  "basic_data_types", "data_types", "array_size_declaration",
  "typedef_declaration", "variable_declaration", "single_plural_ident",
  "read_string", "read_integer", "read_real", "write_string",
  "write_integer", "write_real", "expressions", "complex_command_content",
  "complex_commands", "function_complex_commands", "distinct_commands",
  "statement_commands_contents", "assignment_command", "result_command",
  "if_command", "for_command", "while_command", "repeat_command",
  "label_command", "goto_command", "return_command", "array_expression",
  "array_sqr_content", "casting", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331
};
# endif

#define YYPACT_NINF -124

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-124)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,    33,    43,  -124,     0,  -124,   195,  -124,  -124,  -124,
      50,  -124,    68,  -124,  -124,  -124,  -124,    90,   104,    51,
     358,    55,    56,   147,   159,    73,  -124,    29,  -124,   264,
    -124,   113,   114,   334,   334,    18,    67,  -124,   426,    66,
      75,    77,    81,    84,    89,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,    86,  -124,  -124,  -124,  -124,
    -124,  -124,   141,   141,  -124,  -124,  -124,   104,    99,   101,
     272,   151,   145,   334,   334,   334,    18,    -7,   108,  -124,
      49,  -124,  -124,  -124,   334,   334,   334,   334,   265,  -124,
    -124,  -124,  -124,  -124,  -124,   691,  -124,   334,   730,  -124,
    -124,   124,   334,  -124,   110,   122,   125,    82,     8,   304,
      18,   142,   -48,    12,   408,  -124,  -124,   -17,  -124,  -124,
     127,  -124,  -124,   126,  -124,   130,   -15,   149,   847,    22,
     847,   196,  -124,   334,   334,   334,   148,  -124,  -124,  -124,
    -124,   182,  -124,   154,   529,   334,   334,   334,   334,    18,
     334,   334,   334,   334,   334,   334,   334,   334,   334,   334,
     334,   334,  -124,    18,   334,   847,  -124,  -124,  -124,   158,
     160,   161,   164,   570,   166,   611,  -124,   386,   218,   170,
     172,   447,   120,   225,    -2,   141,  -124,  -124,   120,     3,
    -124,  -124,   334,  -124,   847,   490,   652,   120,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,   847,  -124,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,     4,  -124,   173,
     253,  -124,   223,   181,   188,   120,   243,    37,   202,   120,
     847,  -124,   334,   334,  -124,   120,     6,   436,   203,  -124,
    -124,  -124,   208,   191,   204,  -124,   209,   769,   808,  -124,
     120,  -124,    17,  -124,  -124,  -124,  -124,   120,  -124,    18,
      18,  -124,   120,    30,   220,  -124,  -124,  -124,   120,  -124,
    -124
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     4,     0,     1,     0,     3,    93,    38,
       0,    43,     0,     7,    10,     8,    10,     6,     5,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     2,     0,
      96,     0,     0,     0,     0,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,   107,   108,   109,   110,   111,
     112,   113,    94,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    17,    17,    93,    12,    13,    11,     0,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,   126,
      60,    61,    62,    63,     0,     0,     0,     0,     0,    64,
      65,    70,    66,    67,    68,     0,    69,     0,     0,   115,
     114,     0,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    15,     0,    31,    32,
       0,    30,    33,     0,    48,     0,     0,     0,   116,     0,
      28,     0,   125,     0,     0,     0,   128,    71,    73,    74,
      72,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    75,     0,     0,   118,    50,    51,    52,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    39,    45,     0,     0,
      44,    26,     0,   129,   117,     0,     0,     0,   131,    92,
      88,    78,    79,    90,   119,    80,    81,    76,    77,    82,
      83,    84,    85,    86,    87,    89,    91,   123,   124,    53,
      54,    55,    57,    56,    59,    58,    21,     0,    18,     0,
       0,    16,   127,     0,     0,     0,     0,     0,     0,     0,
      29,   130,     0,     0,    35,     0,     0,     0,     0,    97,
      42,    36,     0,     0,     0,    47,     0,     0,     0,    20,
       0,    25,     0,    22,    14,    41,    37,     0,    46,     0,
       0,    19,     0,     0,     0,   121,   122,    24,     0,    40,
      23
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -124,  -124,  -124,  -124,   273,   271,  -124,   285,  -124,   -58,
     -20,  -124,    28,    62,  -123,  -124,   290,  -124,   -18,   -13,
     -11,  -124,  -124,  -124,    38,   233,    10,  -124,   -19,   -43,
    -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,  -124,
     219,  -124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     6,    65,    23,    14,    66,    16,   112,
      91,   129,   142,   143,   184,    17,    67,    27,    92,    93,
      94,    49,    50,    51,    95,    20,    99,    68,   100,   101,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    96,
      77,    97
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      45,    52,    46,   189,   178,   113,   179,    47,   182,    48,
     188,    80,    81,    82,    83,    45,    19,    46,    45,   103,
      46,    29,    47,   235,    48,    47,     8,    48,   239,   245,
       1,   260,    84,   132,    69,    31,     4,    32,    33,   183,
     172,   183,   272,     5,   133,    34,    85,    86,    35,   134,
      36,    37,     7,    21,   236,   278,    45,    87,    46,   236,
     183,    88,   236,    47,   178,    48,   180,   176,    39,    40,
      41,    22,    98,   183,    89,    90,   191,   192,    39,    40,
      41,    42,    43,    44,    71,   169,   236,    72,   170,   178,
      45,   254,    46,    25,    45,    52,    46,    47,   123,    48,
     127,    47,    74,    48,   246,    75,   204,    26,    62,    63,
      28,   128,   130,   131,   171,    70,    78,    79,   102,   104,
     217,   110,   137,   138,   139,   140,   144,   237,   105,    45,
     106,    46,   118,   119,   107,   162,    47,   108,    48,   273,
     165,   121,   109,    45,   111,    46,   173,   175,   125,   122,
      47,   115,    48,   116,   124,    64,   126,   118,   119,   135,
     164,    45,   103,    46,   166,    10,   121,     8,    47,    11,
      48,   194,   195,   196,   122,    12,   167,    10,   186,   168,
     185,    11,   187,   200,   201,   202,   203,    12,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     177,   190,   218,     8,   134,   228,   145,   197,   198,     9,
     233,   146,   219,    10,   220,   221,   238,    11,   222,   147,
     224,   229,   148,    12,   231,   244,   275,   276,   230,   234,
     240,   247,   249,   250,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   251,   161,   253,   266,    45,
      45,    46,    46,   193,   255,   264,    47,    47,    48,    48,
     265,   268,   267,   252,   141,   118,   119,   256,    80,    81,
      82,    83,   279,   259,   121,   263,   141,   118,   119,    13,
     257,   258,   122,   117,   118,   119,   121,    24,   271,    84,
     120,    15,   248,   121,   122,   274,    18,   114,     0,   136,
     277,   122,     0,    85,    86,     0,   280,    80,    81,    82,
      83,     0,     0,     0,    87,    73,     0,    74,    88,     0,
      75,     0,    76,     0,     0,    39,    40,    41,    84,     0,
       0,    89,    90,     0,     0,     0,   174,    80,    81,    82,
      83,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,    88,    84,     0,
       0,    29,     0,     0,    39,    40,    41,    30,     0,     0,
      89,    90,    85,    86,     0,    31,     0,    32,    33,     0,
       0,     0,     0,    87,     0,    34,     0,    88,    35,   226,
      36,    37,     0,     0,    39,    40,    41,   227,   118,   119,
      89,    90,     0,     0,     0,     0,     0,   121,     0,     0,
      38,    29,     0,     0,     0,   122,     0,     0,    39,    40,
      41,    42,    43,    44,     0,    31,     0,    32,    33,    29,
       0,     0,     0,     0,     0,    34,     0,     0,    35,   261,
      36,    37,     0,    31,     0,    32,    33,   262,   118,   119,
      29,     0,     0,    34,     0,     0,    35,   121,    36,    37,
     181,     0,     0,     0,    31,   122,    32,    33,    39,    40,
      41,    42,    43,    44,    34,     0,     0,    35,     0,    36,
     232,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
     145,     0,     0,     0,     0,   146,     0,    39,    40,    41,
      42,    43,    44,   147,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   145,
     161,     0,     0,     0,   146,     0,     0,   241,     0,     0,
       0,     0,   147,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,     0,   161,
     145,     0,     0,   199,     0,   146,     0,     0,     0,     0,
       0,     0,     0,   147,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,     0,
     161,   145,     0,     0,   223,     0,   146,     0,     0,     0,
       0,     0,     0,     0,   147,     0,     0,   148,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
       0,   161,   145,     0,     0,   225,     0,   146,     0,     0,
       0,     0,     0,     0,     0,   147,     0,     0,   148,     0,
       0,     0,     0,   242,     0,     0,     0,     0,     0,   243,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   145,   161,     0,     0,     0,   146,     0,     0,     0,
       0,     0,     0,     0,   147,     0,     0,   148,     0,     0,
       0,     0,     0,     0,     0,   149,     0,     0,     0,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     145,   161,     0,     0,     0,   146,   163,     0,     0,     0,
       0,     0,     0,   147,     0,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   145,
     161,     0,     0,     0,   146,   269,     0,     0,     0,     0,
       0,     0,   147,     0,     0,   148,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   145,   161,
       0,     0,     0,   146,   270,     0,     0,     0,     0,     0,
       0,   147,     0,     0,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   145,   161,     0,
       0,     0,   146,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,   148,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,     0,   161
};

static const yytype_int16 yycheck[] =
{
      20,    20,    20,   126,    52,    63,    54,    20,    25,    20,
      25,     3,     4,     5,     6,    35,     6,    35,    38,    38,
      38,     3,    35,    25,    35,    38,     8,    38,    25,    25,
       7,    25,    24,    76,    24,    17,     3,    19,    20,    56,
      32,    56,    25,     0,    51,    27,    38,    39,    30,    56,
      32,    33,    52,     3,    56,    25,    76,    49,    76,    56,
      56,    53,    56,    76,    52,    76,    54,   110,    60,    61,
      62,     3,    34,    56,    66,    67,    54,    55,    60,    61,
      62,    63,    64,    65,    55,     3,    56,    58,     6,    52,
     110,    54,   110,     3,   114,   114,   114,   110,    70,   110,
      72,   114,    53,   114,   227,    56,   149,     3,    53,    53,
      59,    73,    74,    75,    32,    42,     3,     3,    51,    53,
     163,    35,    84,    85,    86,    87,    88,   185,    53,   149,
      53,   149,    12,    13,    53,    97,   149,    53,   149,   262,
     102,    21,    53,   163,     3,   163,   108,   109,     3,    29,
     163,    52,   163,    52,     3,     8,    11,    12,    13,    51,
      36,   181,   181,   181,    54,    18,    21,     8,   181,    22,
     181,   133,   134,   135,    29,    28,    54,    18,    52,    54,
      53,    22,    52,   145,   146,   147,   148,    28,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
      58,    52,   164,     8,    56,   177,    10,    25,    54,    14,
     182,    15,    54,    18,    54,    54,   188,    22,    54,    23,
      54,     3,    26,    28,    52,   197,   269,   270,    58,     4,
     192,    58,     9,    52,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    57,    50,     4,    57,   269,
     270,   269,   270,    57,    52,    52,   269,   270,   269,   270,
      52,    52,    58,   235,    11,    12,    13,   239,     3,     4,
       5,     6,    52,   245,    21,   247,    11,    12,    13,     6,
     242,   243,    29,    11,    12,    13,    21,    16,   260,    24,
      18,     6,   230,    21,    29,   267,     6,    64,    -1,    80,
     272,    29,    -1,    38,    39,    -1,   278,     3,     4,     5,
       6,    -1,    -1,    -1,    49,    51,    -1,    53,    53,    -1,
      56,    -1,    58,    -1,    -1,    60,    61,    62,    24,    -1,
      -1,    66,    67,    -1,    -1,    -1,    32,     3,     4,     5,
       6,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    53,    24,    -1,
      -1,     3,    -1,    -1,    60,    61,    62,     9,    -1,    -1,
      66,    67,    38,    39,    -1,    17,    -1,    19,    20,    -1,
      -1,    -1,    -1,    49,    -1,    27,    -1,    53,    30,     3,
      32,    33,    -1,    -1,    60,    61,    62,    11,    12,    13,
      66,    67,    -1,    -1,    -1,    -1,    -1,    21,    -1,    -1,
      52,     3,    -1,    -1,    -1,    29,    -1,    -1,    60,    61,
      62,    63,    64,    65,    -1,    17,    -1,    19,    20,     3,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    -1,    30,     3,
      32,    33,    -1,    17,    -1,    19,    20,    11,    12,    13,
       3,    -1,    -1,    27,    -1,    -1,    30,    21,    32,    33,
      52,    -1,    -1,    -1,    17,    29,    19,    20,    60,    61,
      62,    63,    64,    65,    27,    -1,    -1,    30,    -1,    32,
      33,    -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,
      64,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    -1,    -1,    -1,    -1,    15,    -1,    60,    61,    62,
      63,    64,    65,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    10,
      50,    -1,    -1,    -1,    15,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      10,    -1,    -1,    54,    -1,    15,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    10,    -1,    -1,    54,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    10,    -1,    -1,    54,    -1,    15,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    10,    50,    -1,    -1,    -1,    15,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      10,    50,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    10,
      50,    -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    10,    50,
      -1,    -1,    -1,    15,    16,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    10,    50,    -1,
      -1,    -1,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     7,    78,    79,     3,     0,    80,    52,     8,    14,
      18,    22,    28,    81,    83,    84,    85,    92,    93,   103,
     102,     3,     3,    82,    82,     3,     3,    94,    59,     3,
       9,    17,    19,    20,    27,    30,    32,    33,    52,    60,
      61,    62,    63,    64,    65,    87,    95,    96,    97,    98,
      99,   100,   105,   107,   108,   109,   110,   111,   112,   113,
     114,   115,    53,    53,     8,    81,    84,    93,   104,   103,
      42,    55,    58,    51,    53,    56,    58,   117,     3,     3,
       3,     4,     5,     6,    24,    38,    39,    49,    53,    66,
      67,    87,    95,    96,    97,   101,   116,   118,   101,   103,
     105,   106,    51,   105,    53,    53,    53,    53,    53,    53,
      35,     3,    86,    86,   102,    52,    52,    11,    12,    13,
      18,    21,    29,    89,     3,     3,    11,    89,   101,    88,
     101,   101,   106,    51,    56,    51,   117,   101,   101,   101,
     101,    11,    89,    90,   101,    10,    15,    23,    26,    34,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    50,   101,    16,    36,   101,    54,    54,    54,     3,
       6,    32,    32,   101,    32,   101,   106,    58,    52,    54,
      54,    52,    25,    56,    91,    53,    52,    52,    25,    91,
      52,    54,    55,    57,   101,   101,   101,    25,    54,    54,
     101,   101,   101,   101,   106,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   106,   101,    54,
      54,    54,    54,    54,    54,    54,     3,    11,    89,     3,
      58,    52,    33,    89,     4,    25,    56,    86,    89,    25,
     101,    57,    31,    37,    89,    25,    91,    58,    90,     9,
      52,    57,    89,     4,    54,    52,    89,   101,   101,    89,
      25,     3,    11,    89,    52,    52,    57,    58,    52,    16,
      16,    89,    25,    91,    89,   106,   106,    89,    25,    52,
      89
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    79,    80,    80,    80,    80,    80,    81,
      82,    82,    82,    82,    83,    84,    85,    86,    86,    86,
      86,    86,    86,    86,    86,    86,    87,    88,    88,    88,
      89,    89,    89,    89,    90,    90,    91,    91,    92,    92,
      92,    92,    92,    93,    93,    93,    93,    93,    94,    94,
      95,    96,    97,    98,    98,    98,    99,    99,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   102,   102,   102,   103,   104,   105,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   107,   108,   109,
     109,   110,   110,   111,   112,   113,   114,   115,   116,   117,
     117,   118
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     4,     3,     0,     2,     2,     2,     2,     4,
       0,     2,     2,     2,     8,     4,     6,     0,     3,     6,
       5,     3,     5,     8,     7,     5,     4,     0,     1,     3,
       1,     1,     1,     1,     1,     3,     3,     4,     1,     5,
      10,     8,     7,     1,     5,     5,     8,     7,     3,     1,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     2,     3,     3,     5,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     4,
       3,     8,     8,     4,     4,     3,     2,     1,     2,     3,
       4,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 140 "ptucc_parser.y" /* yacc.c:1646  */
    { 
	if(yyerror_count==0) {
		puts(c_prologue);
		printf("/* program  %s */\n#include <stdio.h> \n#include <stdlib.h> \n #include <string.h> \n\n%s\nint main(){%s} \n", (yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));
	}
}
#line 1632 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 146 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = (yyvsp[-1].crepr); }
#line 1638 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 148 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("");}
#line 1644 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 149 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1650 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 150 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1656 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 151 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1662 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 152 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1668 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 155 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("\n%s\n %s\n %s}",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 1674 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 156 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("");}
#line 1680 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 157 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1686 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 158 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1692 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 159 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 1698 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 160 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s(%s)\n{\n%s result;",(yyvsp[-1].crepr),(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-1].crepr));}
#line 1704 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 161 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("\n%s\n{%s\n%s}",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[-1].crepr));}
#line 1710 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 163 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("void %s(%s)",(yyvsp[-4].crepr),(yyvsp[-2].crepr));}
#line 1716 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 164 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("");}
#line 1722 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 165 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1728 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 166 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s%s",(yyvsp[0].crepr),(yyvsp[-5].crepr),(yyvsp[-2].crepr));}
#line 1734 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 167 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s* %s",(yyvsp[0].crepr),(yyvsp[-4].crepr));}
#line 1740 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 168 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1746 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 169 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s,%s %s",(yyvsp[-4].crepr),(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1752 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 170 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s,%s %s%s",(yyvsp[-7].crepr),(yyvsp[0].crepr),(yyvsp[-5].crepr),(yyvsp[-2].crepr));}
#line 1758 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 171 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s,%s* %s",(yyvsp[-6].crepr),(yyvsp[0].crepr),(yyvsp[-4].crepr));}
#line 1764 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 172 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s,%s %s",(yyvsp[-4].crepr),(yyvsp[0].crepr),(yyvsp[-2].crepr));}
#line 1770 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 175 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s(%s)",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1776 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 177 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("");}
#line 1782 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 178 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = (yyvsp[0].crepr); }
#line 1788 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 179 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s,%s", (yyvsp[-2].crepr), (yyvsp[0].crepr));}
#line 1794 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 181 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int");}
#line 1800 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 182 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("int");}
#line 1806 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 183 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("char");}
#line 1812 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 184 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("double");}
#line 1818 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 186 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=(yyvsp[0].crepr);}
#line 1824 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 187 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s*",(yyvsp[0].crepr));}
#line 1830 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 189 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("[%s]",(yyvsp[-1].crepr));}
#line 1836 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 190 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 1842 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 192 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("");}
#line 1848 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 193 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\ntypedef %s %s;\n",(yyvsp[-4].crepr),(yyvsp[-1].crepr),(yyvsp[-3].crepr));}
#line 1854 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 194 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("%s\ntypedef %s %s(%s);",(yyvsp[-9].crepr),(yyvsp[-1].crepr),(yyvsp[-8].crepr),(yyvsp[-4].crepr));}
#line 1860 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 195 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\ntypedef %s %s%s;",(yyvsp[-7].crepr),(yyvsp[-1].crepr),(yyvsp[-6].crepr),(yyvsp[-3].crepr));}
#line 1866 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 196 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\ntypedef %s* %s;",(yyvsp[-6].crepr),(yyvsp[-1].crepr),(yyvsp[-5].crepr));}
#line 1872 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 198 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = template("");}
#line 1878 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 199 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s %s;\n",(yyvsp[-4].crepr),(yyvsp[-1].crepr),(yyvsp[-3].crepr));}
#line 1884 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 200 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s %s;\n",(yyvsp[-4].crepr),(yyvsp[-1].crepr),(yyvsp[-3].crepr));}
#line 1890 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 201 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\n%s %s%s;",(yyvsp[-7].crepr),(yyvsp[-1].crepr),(yyvsp[-6].crepr),(yyvsp[-3].crepr));}
#line 1896 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 202 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\n%s* %s;",(yyvsp[-6].crepr),(yyvsp[-1].crepr),(yyvsp[-5].crepr));}
#line 1902 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 204 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s,%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 1908 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 205 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 1914 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 210 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("readString()");}
#line 1920 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 211 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("atoi(readString())");}
#line 1926 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 212 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("atof(readString())");}
#line 1932 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 213 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("writeString(%s)",(yyvsp[-1].crepr));}
#line 1938 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 214 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("writeString(%s)",string_ptuc2c((yyvsp[-1].crepr)));}
#line 1944 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 215 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("writeString(result)");}
#line 1950 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 216 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("writeInteger(%s)",(yyvsp[-1].crepr));}
#line 1956 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 217 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("writeInteger(result)");}
#line 1962 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 218 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("writeInteger(%s)",(yyvsp[-1].crepr));}
#line 1968 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 219 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("writeReal(result)");}
#line 1974 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 223 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 1980 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 224 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 1986 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 225 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 1992 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 226 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr) = string_ptuc2c((yyvsp[0].crepr));}
#line 1998 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 227 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("1");}
#line 2004 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 228 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("0");}
#line 2010 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 229 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 2016 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 230 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 2022 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 231 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 2028 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 232 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 2034 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 233 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 2040 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 234 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("not (%s)",(yyvsp[0].crepr));}
#line 2046 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 235 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("!(%s)",(yyvsp[0].crepr));}
#line 2052 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 236 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("(%s)",(yyvsp[0].crepr));}
#line 2058 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 237 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("-(%s)",(yyvsp[0].crepr));}
#line 2064 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 238 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s%s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 2070 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 239 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s * %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2076 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 240 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s / %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2082 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 241 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s / %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2088 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 242 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s %s",(yyvsp[-2].crepr),"%",(yyvsp[0].crepr));}
#line 2094 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 243 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s + %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2100 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 244 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s - %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2106 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 245 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s == %s ",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2112 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 246 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s != %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2118 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 247 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s < %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2124 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 248 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s <= %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2130 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 249 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s > %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2136 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 250 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s >= %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2142 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 251 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s && %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2148 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 252 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s && %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2154 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 253 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s || %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2160 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 254 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s || %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2166 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 255 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("(%s)",(yyvsp[-1].crepr));}
#line 2172 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 259 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("");}
#line 2178 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 260 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 2184 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 261 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2190 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 262 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("\n%s\n",(yyvsp[-1].crepr));}
#line 2196 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 263 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("\n%s\nreturn result;\n",(yyvsp[-3].crepr));}
#line 2202 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 264 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2208 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 265 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2214 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 266 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\n",(yyvsp[0].crepr));}
#line 2220 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 267 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\n",(yyvsp[0].crepr));}
#line 2226 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 268 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\n",(yyvsp[0].crepr));}
#line 2232 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 269 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s\n",(yyvsp[0].crepr));}
#line 2238 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 270 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2244 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 271 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2250 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 272 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2256 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 273 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2262 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 274 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2268 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 275 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2274 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 276 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2280 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 277 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2286 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 278 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2292 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 279 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s;\n",(yyvsp[0].crepr));}
#line 2298 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 281 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s",(yyvsp[0].crepr));}
#line 2304 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 282 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("{%s}",(yyvsp[0].crepr));}
#line 2310 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 284 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s = %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2316 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 285 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s%s = %s",(yyvsp[-3].crepr),(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2322 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 287 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("result = %s",(yyvsp[0].crepr));}
#line 2328 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 289 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("if(%s)\n \n%s\n",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2334 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 290 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s else %s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2340 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 291 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("for(%s=%s;%s<%s;%s++)\n%s",(yyvsp[-6].crepr),(yyvsp[-4].crepr),(yyvsp[-6].crepr),(yyvsp[-2].crepr),(yyvsp[-6].crepr),(yyvsp[0].crepr));}
#line 2346 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 292 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("for(%s=%s;%s>%s;%s--)\n%s", (yyvsp[-6].crepr), (yyvsp[-4].crepr), (yyvsp[-6].crepr), (yyvsp[-2].crepr), (yyvsp[-6].crepr), (yyvsp[0].crepr));}
#line 2352 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 294 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("while(%s)\n%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2358 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 296 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("do\n%s\nwhile(%s);\n",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2364 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 298 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s:%s",(yyvsp[-2].crepr),(yyvsp[0].crepr));}
#line 2370 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 300 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("goto %s",(yyvsp[0].crepr));}
#line 2376 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 302 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("return result");}
#line 2382 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 307 "ptucc_parser.y" /* yacc.c:1646  */
    { (yyval.crepr) = template("%s%s",(yyvsp[-1].crepr),(yyvsp[0].crepr));}
#line 2388 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 309 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("[%s]",(yyvsp[-1].crepr));}
#line 2394 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 310 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("%s[%s]",(yyvsp[-3].crepr),(yyvsp[-1].crepr));}
#line 2400 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 313 "ptucc_parser.y" /* yacc.c:1646  */
    {(yyval.crepr)=template("(%s)",(yyvsp[-1].crepr));}
#line 2406 "ptucc_parser.tab.c" /* yacc.c:1646  */
    break;


#line 2410 "ptucc_parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
