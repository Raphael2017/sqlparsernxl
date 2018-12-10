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
#define YYPURE 2

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "sqlparser.y" /* yacc.c:339  */

/**
 * bison_parser.y
 * defines bison_parser.h
 * outputs bison_parser.c
 *
 * Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_bison.h"
#include "sqlparser_flex.h"

#include <stdio.h>
#include <string.h>


int yyerror(YYLTYPE* llocp, ParseResult* result, yyscan_t scanner, const char *msg) {

	return 0;
}


#line 93 "sqlparser_bison.cpp" /* yacc.c:339  */

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
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sqlparser_bison.h".  */
#ifndef YY_YY_SQLPARSER_BISON_H_INCLUDED
# define YY_YY_SQLPARSER_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 33 "sqlparser.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 129 "sqlparser_bison.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    STRING = 259,
    INTNUM = 260,
    BOOL = 261,
    APPROXNUM = 262,
    NULLX = 263,
    UNKNOWN = 264,
    QUESTIONMARK = 265,
    UNION = 266,
    EXCEPT = 267,
    INTERSECT = 268,
    OR = 269,
    AND = 270,
    NOT = 271,
    COMP_LE = 272,
    COMP_LT = 273,
    COMP_EQ = 274,
    COMP_GT = 275,
    COMP_GE = 276,
    COMP_NE = 277,
    CNNOP = 278,
    LIKE = 279,
    BETWEEN = 280,
    IN = 281,
    IS = 282,
    MOD = 283,
    UMINUS = 284,
    ADD = 285,
    ANY = 286,
    ALL = 287,
    ALTER = 288,
    AS = 289,
    ASC = 290,
    BEGI = 291,
    BIGINT = 292,
    BINARY = 293,
    BOOLEAN = 294,
    BOTH = 295,
    BY = 296,
    CASCADE = 297,
    CASE = 298,
    CHARACTER = 299,
    CLUSTER = 300,
    COMMENT = 301,
    COMMIT = 302,
    CONSISTENT = 303,
    COLUMN = 304,
    COLUMNS = 305,
    CREATE = 306,
    CREATETIME = 307,
    CROSS = 308,
    CURRENT_USER = 309,
    CHANGE_OBI = 310,
    SWITCH_CLUSTER = 311,
    DATE = 312,
    DATETIME = 313,
    DEALLOCATE = 314,
    DECIMAL = 315,
    DEFAULT = 316,
    DELETE = 317,
    DESC = 318,
    DESCRIBE = 319,
    DISTINCT = 320,
    DOUBLE = 321,
    DROP = 322,
    DUAL = 323,
    ELSE = 324,
    END = 325,
    END_P = 326,
    ERROR = 327,
    EXECUTE = 328,
    EXISTS = 329,
    EXPLAIN = 330,
    FLOAT = 331,
    FOR = 332,
    FROM = 333,
    FULL = 334,
    FROZEN = 335,
    FORCE = 336,
    GLOBAL = 337,
    GLOBAL_ALIAS = 338,
    GRANT = 339,
    GROUP = 340,
    HAVING = 341,
    HINT_BEGIN = 342,
    HINT_END = 343,
    HOTSPOT = 344,
    IDENTIFIED = 345,
    IF = 346,
    INNER = 347,
    INTEGER = 348,
    INSERT = 349,
    INTO = 350,
    JOIN = 351,
    KEY = 352,
    LEADING = 353,
    LEFT = 354,
    LIMIT = 355,
    LOCAL = 356,
    LOCKED = 357,
    MEDIUMINT = 358,
    MEMORY = 359,
    MODIFYTIME = 360,
    MASTER = 361,
    NATURAL = 362,
    NUMERIC = 363,
    OFFSET = 364,
    ON = 365,
    ORDER = 366,
    OPTION = 367,
    OUTER = 368,
    PARAMETERS = 369,
    PERCENT = 370,
    PASSWORD = 371,
    PRECISION = 372,
    PREPARE = 373,
    PRIMARY = 374,
    READ_STATIC = 375,
    REAL = 376,
    RENAME = 377,
    REPLACE = 378,
    RESTRICT = 379,
    PRIVILEGES = 380,
    REVOKE = 381,
    RIGHT = 382,
    ROLLBACK = 383,
    KILL = 384,
    READ_CONSISTENCY = 385,
    SCHEMA = 386,
    SCOPE = 387,
    SELECT = 388,
    SESSION = 389,
    SESSION_ALIAS = 390,
    SET = 391,
    SHOW = 392,
    SMALLINT = 393,
    SNAPSHOT = 394,
    SPFILE = 395,
    START = 396,
    STATIC = 397,
    SYSTEM = 398,
    STRONG = 399,
    SET_MASTER_CLUSTER = 400,
    SET_SLAVE_CLUSTER = 401,
    SLAVE = 402,
    TABLE = 403,
    TABLES = 404,
    THEN = 405,
    TIES = 406,
    TIME = 407,
    TIMESTAMP = 408,
    TINYINT = 409,
    TRAILING = 410,
    TRANSACTION = 411,
    TO = 412,
    TOP = 413,
    UPDATE = 414,
    USER = 415,
    USING = 416,
    VALUES = 417,
    VARCHAR = 418,
    VARBINARY = 419,
    WHERE = 420,
    WHEN = 421,
    WITH = 422,
    WORK = 423,
    PROCESSLIST = 424,
    QUERY = 425,
    CONNECTION = 426,
    WEAK = 427
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 73 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 319 "sqlparser_bison.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



int yyparse (ParseResult* result, yyscan_t scanner);

#endif /* !YY_YY_SQLPARSER_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 349 "sqlparser_bison.cpp" /* yacc.c:358  */

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
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   606

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  184
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  301

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   427

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      36,    37,    30,    28,   183,    29,    38,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   182,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    34,     2,     2,     2,     2,     2,
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
      25,    26,    27,    33,    35,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   183,   184,   192,   193,   198,   203,   210,
     215,   223,   224,   229,   235,   245,   267,   293,   294,   298,
     322,   345,   368,   395,   398,   403,   408,   413,   420,   421,
     428,   429,   430,   439,   442,   450,   458,   466,   471,   476,
     481,   486,   495,   501,   505,   513,   514,   520,   521,   530,
     531,   539,   540,   544,   552,   554,   562,   571,   574,   578,
     586,   587,   596,   599,   603,   610,   611,   619,   624,   632,
     640,   649,   651,   658,   659,   666,   670,   675,   680,   685,
     692,   697,   702,   707,   713,   719,   724,   733,   744,   755,
     766,   770,   777,   778,   783,   784,   792,   793,   800,   801,
     806,   814,   815,   816,   817,   818,   819,   823,   824,   825,
     831,   832,   833,   834,   842,   843,   848,   853,   858,   863,
     868,   873,   878,   883,   890,   891,   896,   901,   906,   911,
     916,   921,   926,   931,   936,   941,   946,   951,   956,   961,
     966,   971,   976,   981,   986,   991,   996,  1003,  1004,  1011,
    1018,  1020,  1025,  1026,  1033,  1040,  1046,  1051,  1057,  1062,
    1067,  1072,  1079,  1083,  1090,  1093,  1096,  1099,  1102,  1104,
    1106,  1108,  1110,  1112,  1114,  1116
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "UNION", "EXCEPT",
  "INTERSECT", "OR", "AND", "NOT", "COMP_LE", "COMP_LT", "COMP_EQ",
  "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE", "BETWEEN", "IN", "IS",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "'('", "')'",
  "'.'", "ADD", "ANY", "ALL", "ALTER", "AS", "ASC", "BEGI", "BIGINT",
  "BINARY", "BOOLEAN", "BOTH", "BY", "CASCADE", "CASE", "CHARACTER",
  "CLUSTER", "COMMENT", "COMMIT", "CONSISTENT", "COLUMN", "COLUMNS",
  "CREATE", "CREATETIME", "CROSS", "CURRENT_USER", "CHANGE_OBI",
  "SWITCH_CLUSTER", "DATE", "DATETIME", "DEALLOCATE", "DECIMAL", "DEFAULT",
  "DELETE", "DESC", "DESCRIBE", "DISTINCT", "DOUBLE", "DROP", "DUAL",
  "ELSE", "END", "END_P", "ERROR", "EXECUTE", "EXISTS", "EXPLAIN", "FLOAT",
  "FOR", "FROM", "FULL", "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS",
  "GRANT", "GROUP", "HAVING", "HINT_BEGIN", "HINT_END", "HOTSPOT",
  "IDENTIFIED", "IF", "INNER", "INTEGER", "INSERT", "INTO", "JOIN", "KEY",
  "LEADING", "LEFT", "LIMIT", "LOCAL", "LOCKED", "MEDIUMINT", "MEMORY",
  "MODIFYTIME", "MASTER", "NATURAL", "NUMERIC", "OFFSET", "ON", "ORDER",
  "OPTION", "OUTER", "PARAMETERS", "PERCENT", "PASSWORD", "PRECISION",
  "PREPARE", "PRIMARY", "READ_STATIC", "REAL", "RENAME", "REPLACE",
  "RESTRICT", "PRIVILEGES", "REVOKE", "RIGHT", "ROLLBACK", "KILL",
  "READ_CONSISTENCY", "SCHEMA", "SCOPE", "SELECT", "SESSION",
  "SESSION_ALIAS", "SET", "SHOW", "SMALLINT", "SNAPSHOT", "SPFILE",
  "START", "STATIC", "SYSTEM", "STRONG", "SET_MASTER_CLUSTER",
  "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES", "THEN", "TIES", "TIME",
  "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO", "TOP", "UPDATE",
  "USER", "USING", "VALUES", "VARCHAR", "VARBINARY", "WHERE", "WHEN",
  "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK", "';'",
  "','", "$accept", "sql_stmt", "stmt_list", "stmt", "select_stmt",
  "select_with_parens", "select_no_parens", "no_table_select",
  "select_clause", "simple_select", "opt_top", "top_count", "top_percent",
  "opt_where", "from_dual", "from_clause", "select_limit", "opt_hint",
  "limit_expr", "opt_select_limit", "opt_for_update", "opt_groupby",
  "opt_order_by", "order_by", "sort_list", "sort_key", "opt_asc_desc",
  "opt_having", "opt_distinct", "select_expr_list", "projection",
  "from_list", "table_factor", "table_factor_non_join", "relation_factor",
  "joined_table", "join_type", "join_outer", "opt_when", "expr_list",
  "column_ref", "expr_const", "simple_expr", "arith_expr", "expr",
  "in_expr", "case_expr", "case_arg", "when_clause_list", "when_clause",
  "case_default", "func_expr", "distinct_or_all", "column_name",
  "relation_name", "function_name", "column_label", "data_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    43,    45,
      42,    47,    37,   283,    94,   284,    40,    41,    46,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,    59,    44
};
# endif

#define YYPACT_NINF -196

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-196)))

#define YYTABLE_NINF -167

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -33,   -33,  -196,    13,   -59,  -160,  -196,   -74,  -144,  -196,
       3,   -30,     5,    70,    -8,  -196,  -196,   -33,   366,  -196,
      -8,    -8,    -8,    18,   -99,    65,   -58,  -196,  -196,  -196,
    -196,  -196,   -56,  -196,    63,  -196,  -196,  -196,  -196,  -196,
    -196,   366,   400,   400,    33,   366,    88,  -196,  -196,  -196,
    -196,   391,   567,  -196,  -196,  -196,   110,   111,   -27,   -27,
     -27,   366,    95,    95,    68,  -196,  -196,   107,   349,   579,
    -196,  -196,   109,   135,   112,   567,    -2,  -196,   400,   400,
     400,   400,   400,   400,   400,   366,   366,   284,   366,   366,
     366,   366,   366,   366,   366,   366,   400,   165,   285,    17,
     310,  -196,  -196,   191,  -196,   191,  -196,  -196,    23,   448,
    -196,  -196,  -100,   101,  -196,    98,  -196,   366,    36,   100,
    -196,    93,    43,   479,  -196,   366,   366,   141,    -2,   302,
     302,   198,   198,   198,   198,  -196,   492,   579,   366,   400,
     165,   318,   318,   318,   318,   318,   318,   240,   303,   425,
      33,  -196,  -196,  -196,  -196,  -196,   241,  -196,  -196,  -196,
     196,  -196,  -196,  -196,   200,   142,   366,    -8,   366,  -196,
    -196,  -196,    95,    95,    95,   509,    78,    67,     9,    72,
      72,  -196,  -196,   349,  -196,   249,  -196,  -196,   172,   366,
     176,  -196,   303,   546,  -196,   400,   222,  -196,  -196,  -196,
    -196,  -196,   133,   533,   -56,  -196,  -196,  -196,  -196,   136,
    -196,   102,  -196,    -1,  -196,    24,  -196,   115,  -196,    31,
    -196,  -196,   366,   -99,   179,  -196,  -196,   366,   567,  -196,
     400,   391,  -196,  -196,  -196,  -196,  -196,  -196,  -196,  -196,
    -196,   233,  -196,   349,  -196,    20,   325,   239,   278,  -196,
    -196,   162,  -196,    48,   162,   180,   162,    48,   182,   278,
    -196,   567,  -196,   242,   202,   567,   391,  -196,   212,  -196,
    -196,  -196,  -196,   120,  -196,    62,  -196,  -196,    48,  -196,
     366,   366,  -196,    48,   366,   264,  -196,   153,  -196,   567,
     567,   299,   366,   267,   268,   274,   567,   299,  -196,   282,
    -196
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    42,     0,     0,     3,     5,    18,    94,    11,
      52,    17,    18,     0,    62,     1,     2,     6,     0,     7,
      62,    62,    62,     0,     0,    47,     0,    12,    10,     9,
      63,    64,    23,     4,   164,   101,   102,   104,   103,   105,
     106,     0,     0,     0,     0,   151,     0,   112,   107,   108,
     114,   124,    95,   110,   111,    98,     0,     0,     0,     0,
       0,     0,     0,     0,    47,    13,    48,     0,     0,   135,
     115,   116,   112,     0,    96,   150,     0,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    18,    20,    17,    22,    21,    53,    54,    57,
      43,    44,    39,    40,    14,    28,    30,     0,    24,     0,
      70,    45,    65,    67,   109,     0,     0,   156,   152,   117,
     118,   119,   120,   121,   123,   122,   134,   133,     0,     0,
       0,   125,   126,   127,   129,   128,   130,   146,   131,     0,
       0,   147,   144,   138,   136,   140,     0,   164,   100,    99,
       0,   161,   162,   163,     0,    96,     0,    62,     0,    58,
      59,    56,     0,     0,     0,     0,     0,    26,     0,    33,
      33,    46,    15,     0,   167,     0,    68,    97,     0,     0,
       0,   153,   132,     0,   145,     0,     0,   139,   137,   141,
     157,   159,     0,     0,    23,    55,    37,    41,    38,    29,
      25,     0,   165,     0,    35,     0,    36,    71,    73,    75,
      74,    80,     0,    45,    49,    66,    69,     0,   155,   149,
       0,   142,   148,   172,   173,   175,   171,   170,   174,   169,
     168,     0,   158,     0,    27,    18,     0,    74,     0,    79,
      91,    93,    90,     0,    93,     0,    93,     0,     0,     0,
      77,    34,    16,     0,    60,   154,   143,   160,     0,    81,
      78,    92,    87,     0,    88,     0,    89,    72,     0,    76,
       0,     0,    19,     0,     0,     0,    84,     0,    50,    61,
      83,     0,     0,     0,   164,     0,    82,     0,    86,     0,
      85
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -196,  -196,   288,  -196,  -196,     0,   217,  -196,   290,   308,
     117,  -196,  -196,   144,  -196,  -196,   298,   226,   -55,   114,
      39,  -196,  -196,  -196,   190,  -196,  -196,  -196,     4,  -172,
    -196,   103,  -183,    86,  -196,   150,  -196,  -112,  -196,   -96,
    -195,  -196,  -196,    10,   -13,   224,  -196,  -196,   247,  -196,
    -196,  -196,  -196,   281,    29,  -196,   201,  -196
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    47,    13,     9,    10,    11,
      68,   118,   119,   223,   179,   180,   181,    14,   112,   182,
      27,   264,    24,    25,   107,   108,   171,   282,    32,   121,
     122,   216,   217,   218,   219,   220,   258,   272,    19,    73,
      48,    49,    50,    51,    74,   152,    53,    76,   127,   128,
     190,    54,   166,    55,    56,    57,   186,   241
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    12,   212,     1,   164,    52,    -8,   -47,   113,     1,
      62,   225,   212,    15,    20,    21,    22,     7,   172,    63,
     157,    16,    17,   212,    58,    59,    60,   212,    69,   187,
     246,    18,    75,    30,   212,   213,    34,    35,    36,    37,
      38,    39,    28,    40,    72,   213,    77,   158,   109,    41,
     -47,   212,    70,    71,   196,   123,    26,    28,   102,   102,
     102,    42,    43,   248,    65,   212,    31,   248,    61,    44,
     273,   268,   136,   137,   259,   141,   142,   143,   144,   145,
     146,   147,   148,   173,   213,    45,   214,   165,   129,   130,
     131,   132,   133,   134,   135,   287,   295,   151,     1,  -166,
     110,  -165,   299,   114,   175,   111,   149,    29,    -8,     2,
      66,    67,   115,   188,   116,   101,    46,   206,   207,   208,
     -18,   -18,   -18,    23,     1,   192,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     151,     2,   274,   117,   276,   -47,    28,   100,    99,   193,
      72,    26,   -47,   203,    26,   109,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     123,   204,   124,   126,   -51,     2,   228,   250,   215,   233,
     178,   234,   250,   -51,   288,   202,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     235,   150,    62,   251,    22,   231,   168,   221,   251,   261,
     174,    63,   176,   245,   265,   250,   252,     8,   -18,   189,
     253,   252,   -31,   254,   177,   253,   183,   -18,   254,   -18,
     123,   255,    84,   200,     8,   236,   255,   201,   210,   284,
     266,   251,   221,   211,   249,   237,   222,   197,   260,   198,
     199,   256,   184,   215,   252,   229,   256,   215,   253,   232,
     -32,   254,   244,   238,    95,    96,    97,    98,   289,   255,
     267,   290,   292,   263,   249,   215,   269,   270,   215,   296,
     239,   212,   221,   215,   271,   275,   221,   278,   279,   256,
     285,   153,   280,   154,   155,   125,   240,   281,   257,   283,
     291,   156,   294,   297,   221,    33,  -165,   221,   138,   139,
     140,   298,   221,    34,    35,    36,    37,    38,    39,   300,
      40,   243,    64,   293,   224,   125,    41,   167,    96,    97,
      98,   227,    80,    81,    82,    83,    84,   262,    42,    43,
     160,    94,    95,    96,    97,    98,    44,   161,   103,   105,
     106,   162,    34,    35,    36,    37,    38,    39,   205,    40,
     277,   286,    45,   247,   194,    41,   104,   104,   104,    34,
      35,    36,    37,    38,    39,   191,    40,    42,    43,   120,
     159,     0,    41,     0,   163,    44,   226,   250,     0,     0,
       0,     0,     0,    46,    42,    43,     0,     0,     0,     0,
       0,    45,    44,    34,    35,    36,    37,    38,    39,     0,
      40,     0,     0,   251,     0,     0,     0,     0,    45,    78,
      79,    80,    81,    82,    83,    84,   252,     0,    42,    43,
     253,     0,    46,   254,     0,     0,    44,     0,     0,     0,
     195,   255,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    45,    78,    79,    80,    81,    82,    83,    84,
       0,   256,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     0,     0,     0,     0,
       0,     0,   184,    46,     0,     0,     0,     0,     0,     0,
       0,     0,   169,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     170,     0,   185,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,   230,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98
};

static const yytype_int16 yycheck[] =
{
       0,     1,     3,    36,   100,    18,    80,    37,    63,    36,
     109,   183,     3,     0,    11,    12,    13,    17,   118,   118,
       3,    80,   182,     3,    20,    21,    22,     3,    41,   125,
     213,   175,    45,    41,     3,    36,     3,     4,     5,     6,
       7,     8,    37,    10,    44,    36,    46,    30,    61,    16,
      80,     3,    42,    43,   150,    68,    86,    37,    58,    59,
      60,    28,    29,    43,    25,     3,    74,    43,    50,    36,
     253,   243,    85,    86,    43,    88,    89,    90,    91,    92,
      93,    94,    95,   183,    36,    52,    77,   100,    78,    79,
      80,    81,    82,    83,    84,   278,   291,    97,    36,    36,
       5,    38,   297,    64,   117,    10,    96,    37,   182,   142,
     168,   167,     5,   126,     7,   142,    83,   172,   173,   174,
      11,    12,    13,   120,    36,   138,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     140,   142,   254,    36,   256,   175,    37,    36,    38,   139,
     150,    86,   182,   166,    86,   168,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     183,   167,    37,   175,   109,   142,   189,    62,   178,    46,
      87,    48,    62,   118,   280,    43,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      67,    36,   109,    88,    13,   195,   183,   178,    88,   222,
     109,   118,   176,   213,   227,    62,   101,     0,   109,    78,
     105,   101,   124,   108,   124,   105,   183,   118,   108,   120,
     243,   116,    34,    37,    17,   102,   116,    37,   160,   119,
     230,    88,   213,   176,   215,   112,   174,     6,   219,     8,
       9,   136,     3,   253,   101,    79,   136,   257,   105,    37,
     124,   108,   160,   130,    24,    25,    26,    27,   281,   116,
      37,   284,   119,    94,   245,   275,    37,   248,   278,   292,
     147,     3,   253,   283,   122,   105,   257,   105,   259,   136,
     170,     6,    50,     8,     9,   183,   163,    95,   183,    87,
      36,    16,     3,    36,   275,    17,    38,   278,    24,    25,
      26,    37,   283,     3,     4,     5,     6,     7,     8,    37,
      10,   204,    24,   170,   180,   183,    16,   101,    25,    26,
      27,   159,    30,    31,    32,    33,    34,   223,    28,    29,
      30,    23,    24,    25,    26,    27,    36,    37,    58,    59,
      60,    41,     3,     4,     5,     6,     7,     8,   168,    10,
     257,   275,    52,   213,   140,    16,    58,    59,    60,     3,
       4,     5,     6,     7,     8,   128,    10,    28,    29,    30,
      99,    -1,    16,    -1,    74,    36,   185,    62,    -1,    -1,
      -1,    -1,    -1,    83,    28,    29,    -1,    -1,    -1,    -1,
      -1,    52,    36,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    88,    -1,    -1,    -1,    -1,    52,    28,
      29,    30,    31,    32,    33,    34,   101,    -1,    28,    29,
     105,    -1,    83,   108,    -1,    -1,    36,    -1,    -1,    -1,
      15,   116,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    52,    28,    29,    30,    31,    32,    33,    34,
      -1,   136,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      72,    -1,    43,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    15,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,   142,   185,   186,   187,   188,   189,   190,   191,
     192,   193,   189,   190,   201,     0,    80,   182,   175,   222,
      11,    12,    13,   120,   206,   207,    86,   204,    37,    37,
      41,    74,   212,   186,     3,     4,     5,     6,     7,     8,
      10,    16,    28,    29,    36,    52,    83,   189,   224,   225,
     226,   227,   228,   230,   235,   237,   238,   239,   212,   212,
     212,    50,   109,   118,   200,   204,   168,   167,   194,   228,
     227,   227,   189,   223,   228,   228,   231,   189,    28,    29,
      30,    31,    32,    33,    34,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    38,
      36,   142,   189,   192,   193,   192,   192,   208,   209,   228,
       5,    10,   202,   202,   204,     5,     7,    36,   195,   196,
      30,   213,   214,   228,    37,   183,   175,   232,   233,   227,
     227,   227,   227,   227,   227,   227,   228,   228,    24,    25,
      26,   228,   228,   228,   228,   228,   228,   228,   228,   227,
      36,   189,   229,     6,     8,     9,    16,     3,    30,   237,
      30,    37,    41,    74,   223,   228,   236,   201,   183,    44,
      72,   210,   118,   183,   109,   228,   176,   124,    87,   198,
     199,   200,   203,   183,     3,    43,   240,   223,   228,    78,
     234,   232,   228,   227,   229,    15,   223,     6,     8,     9,
      37,    37,    43,   228,   212,   208,   202,   202,   202,    37,
     160,   176,     3,    36,    77,   189,   215,   216,   217,   218,
     219,   238,   174,   197,   197,   213,   240,   159,   228,    79,
      15,   227,    37,    46,    48,    67,   102,   112,   130,   147,
     163,   241,    37,   194,   160,   189,   216,   219,    43,   238,
      62,    88,   101,   105,   108,   116,   136,   183,   220,    43,
     238,   228,   203,    94,   205,   228,   227,    37,   213,    37,
     238,   122,   221,   216,   221,   105,   221,   215,   105,   238,
      50,    95,   211,    87,   119,   170,   217,   216,   223,   228,
     228,    36,   119,   170,     3,   224,   228,    36,    37,   224,
      37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   184,   185,   186,   186,   187,   187,   188,   188,   189,
     189,   190,   190,   190,   190,   191,   191,   192,   192,   193,
     193,   193,   193,   194,   194,   194,   194,   194,   195,   195,
     196,   196,   196,   197,   197,   198,   199,   200,   200,   200,
     200,   200,   201,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   208,   208,   209,   210,   210,   210,
     211,   211,   212,   212,   212,   213,   213,   214,   214,   214,
     214,   215,   215,   216,   216,   217,   217,   217,   217,   217,
     218,   219,   219,   219,   219,   219,   219,   220,   220,   220,
     220,   220,   221,   221,   222,   222,   223,   223,   224,   224,
     224,   225,   225,   225,   225,   225,   225,   226,   226,   226,
     226,   226,   226,   226,   227,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   228,   228,   228,
     228,   228,   228,   228,   228,   228,   228,   229,   229,   230,
     231,   231,   232,   232,   233,   234,   234,   235,   235,   235,
     235,   235,   236,   236,   237,   238,   239,   240,   241,   241,
     241,   241,   241,   241,   241,   241
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     2,     1,     3,
       3,     1,     2,     3,     4,     6,     8,     1,     1,     9,
       4,     4,     4,     0,     2,     4,     3,     5,     1,     3,
       1,     1,     3,     0,     2,     2,     2,     4,     4,     2,
       2,     4,     0,     1,     1,     0,     1,     0,     2,     0,
       3,     1,     0,     3,     1,     3,     2,     0,     1,     1,
       0,     2,     0,     1,     1,     1,     3,     1,     2,     3,
       1,     1,     3,     1,     1,     1,     3,     2,     3,     2,
       1,     3,     6,     5,     4,     8,     7,     2,     2,     2,
       1,     1,     1,     0,     0,     2,     1,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     2,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     3,     3,     3,     3,     3,
       3,     3,     4,     3,     3,     2,     3,     4,     3,     4,
       3,     4,     5,     6,     3,     4,     3,     1,     3,     5,
       1,     0,     1,     2,     4,     2,     0,     4,     5,     4,
       6,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
      yyerror (&yylloc, result, scanner, YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


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


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location, result, scanner); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParseResult* result, yyscan_t scanner)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp, ParseResult* result, yyscan_t scanner)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp, result, scanner);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule, ParseResult* result, yyscan_t scanner)
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
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       , result, scanner);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule, result, scanner); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp, ParseResult* result, yyscan_t scanner)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  YYUSE (result);
  YYUSE (scanner);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  switch (yytype)
    {
          case 3: /* NAME  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1580 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1586 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1592 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1598 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1604 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1610 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1616 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1622 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* sql_stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1628 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* stmt_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1634 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1640 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1646 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_with_parens  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1652 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* select_no_parens  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1658 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* no_table_select  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1664 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* select_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1670 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* simple_select  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1676 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_top  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1682 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* top_count  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1688 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* top_percent  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1694 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_where  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1700 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* from_dual  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1706 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* from_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1712 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* select_limit  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1718 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_hint  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1724 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* limit_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1730 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_select_limit  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1736 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_for_update  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1742 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* opt_groupby  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1748 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_order_by  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1754 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* order_by  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1760 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* sort_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1766 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* sort_key  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1772 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* opt_asc_desc  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1778 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_having  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1784 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_distinct  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1790 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* select_expr_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1796 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* projection  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1802 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* from_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1808 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* table_factor  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1814 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* table_factor_non_join  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1820 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* relation_factor  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1826 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* joined_table  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1832 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* join_type  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1838 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* join_outer  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1844 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* opt_when  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1850 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* expr_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1856 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* column_ref  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1862 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* expr_const  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1868 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* simple_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1874 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* arith_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1880 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1886 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* in_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1892 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* case_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1898 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* case_arg  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1904 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* when_clause_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1910 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* when_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1916 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* case_default  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1922 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* func_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1928 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* distinct_or_all  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1934 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* column_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1940 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* relation_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1946 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* function_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1952 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* column_label  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1958 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* data_type  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1964 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;


      default:
        break;
    }
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/*----------.
| yyparse.  |
`----------*/

int
yyparse (ParseResult* result, yyscan_t scanner)
{
/* The lookahead symbol.  */
int yychar;


/* The semantic value of the lookahead symbol.  */
/* Default value used for initialization, for pacifying older GCCs
   or non-GCC compilers.  */
YY_INITIAL_VALUE (static YYSTYPE yyval_default;)
YYSTYPE yylval YY_INITIAL_VALUE (= yyval_default);

/* Location data for the lookahead symbol.  */
static YYLTYPE yyloc_default
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
YYLTYPE yylloc = yyloc_default;

    /* Number of syntax errors so far.  */
    int yynerrs;

    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

/* User initialization code.  */
#line 52 "sqlparser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 2081 "sqlparser_bison.cpp" /* yacc.c:1429  */
  yylsp[0] = yylloc;
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
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
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
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
      yychar = yylex (&yylval, &yylloc, scanner);
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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 175 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 2275 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 185 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "; ", "{1}"};
}
#line 2284 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 193 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2290 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 199 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_WHEN, (yyvsp[0].node));
}
#line 2299 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 204 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2307 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 211 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"( ", "{0}", " )"};
}
#line 2316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 216 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"( ", "{0}", " )"};
}
#line 2325 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 225 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyvsp[-1].node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2334 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 230 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2344 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 236 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2355 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 246 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
            (yyvsp[-3].node),             /* E_SELECT_DISTINCT 0 */
            (yyvsp[-1].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
            nullptr,        /* E_SELECT_FROM_LIST 2 */
            nullptr,        /* E_SELECT_OPT_WHERE 3 */
            nullptr,        /* E_SELECT_GROUP_BY 4 */
            nullptr,        /* E_SELECT_HAVING 5 */
            nullptr,        /* E_SELECT_SET_OPERATION 6 */
            nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
            nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
            nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
            nullptr,        /* E_SELECT_ORDER_BY 10 */
            (yyvsp[0].node),             /* E_SELECT_LIMIT 11 */
            nullptr,        /* E_SELECT_FOR_UPDATE 12 */
            (yyvsp[-4].node),             /* E_SELECT_HINTS 13 */
            nullptr,        /* E_SELECT_WHEN 14 */
            (yyvsp[-2].node)              /* E_SELECT_OPT_TOP 15 */
            );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2381 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 269 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
                (yyvsp[-5].node),             /* E_SELECT_DISTINCT 0 */
                (yyvsp[-3].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
                (yyvsp[-2].node),             /* E_SELECT_FROM_LIST 2 */
                (yyvsp[-1].node),             /* E_SELECT_OPT_WHERE 3 */
                nullptr,        /* E_SELECT_GROUP_BY 4 */
                nullptr,        /* E_SELECT_HAVING 5 */
                nullptr,        /* E_SELECT_SET_OPERATION 6 */
                nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                nullptr,        /* E_SELECT_ORDER_BY 10 */
                (yyvsp[0].node),             /* E_SELECT_LIMIT 11 */
                nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                (yyvsp[-6].node),             /* E_SELECT_HINTS 13 */
                nullptr,        /* E_SELECT_WHEN 14 */
                (yyvsp[-4].node)              /* E_SELECT_OPT_TOP 15 */
                );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2407 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 301 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
                    (yyvsp[-6].node),             /* E_SELECT_DISTINCT 0 */
                    (yyvsp[-4].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
                    (yyvsp[-3].node),             /* E_SELECT_FROM_LIST 2 */
                    (yyvsp[-2].node),             /* E_SELECT_OPT_WHERE 3 */
                    (yyvsp[-1].node),             /* E_SELECT_GROUP_BY 4 */
                    (yyvsp[0].node),             /* E_SELECT_HAVING 5 */
                    nullptr,        /* E_SELECT_SET_OPERATION 6 */
                    nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                    nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                    nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                    nullptr,        /* E_SELECT_ORDER_BY 10 */
                    nullptr,        /* E_SELECT_LIMIT 11 */
                    nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                    (yyvsp[-7].node),             /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    (yyvsp[-5].node)              /* E_SELECT_OPT_TOP 15 */
                    );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2433 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 323 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_UNION, "UNION");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-1].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-3].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        (yyvsp[0].node),                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr              /* E_SELECT_OPT_TOP 15 */
                        );
    (yyval.node)->serialize_format = {"{8}", " UNION ", "{7}", " ", "{9}"};
}
#line 2460 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 346 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_INTERSECT, "INTERSECT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-1].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-3].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        (yyvsp[0].node),                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr              /* E_SELECT_OPT_TOP 15 */
                        );
    (yyval.node)->serialize_format = {"{8}", " INTERSECT ", "{7}", " ", "{9}"};
}
#line 2487 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 369 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_EXCEPT, "EXCEPT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
                        nullptr,             /* E_SELECT_DISTINCT 0 */
                        nullptr,             /* E_SELECT_SELECT_EXPR_LIST 1 */
                        nullptr,             /* E_SELECT_FROM_LIST 2 */
                        nullptr,             /* E_SELECT_OPT_WHERE 3 */
                        nullptr,             /* E_SELECT_GROUP_BY 4 */
                        nullptr,             /* E_SELECT_HAVING 5 */
                        set_op,              /* E_SELECT_SET_OPERATION 6 */
                        (yyvsp[-1].node),                  /* E_SELECT_ALL_SPECIFIED 7 */
                        (yyvsp[-3].node),                  /* E_SELECT_FORMER_SELECT_STMT 8 */
                        (yyvsp[0].node),                  /* E_SELECT_LATER_SELECT_STMT 9 */
                        nullptr,             /* E_SELECT_ORDER_BY 10 */
                        nullptr,             /* E_SELECT_LIMIT 11 */
                        nullptr,             /* E_SELECT_FOR_UPDATE 12 */
                        nullptr,             /* E_SELECT_HINTS 13 */
                        nullptr,             /* E_SELECT_WHEN 14 */
                        nullptr              /* E_SELECT_OPT_TOP 15 */
                        );
    (yyval.node)->serialize_format = {"{8}", " EXCEPT ", "{7}", " ", "{9}"};
}
#line 2514 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 395 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2522 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 399 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"TOP ", "{0}"};
}
#line 2531 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 404 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"TOP ", "{0}", " WITH TIES"};
}
#line 2540 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 409 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"TOP ", "{0}", " PERCENT"};
}
#line 2549 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 414 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = {"TOP ", "{0}", " PERCENT WITH TIES"};
}
#line 2558 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 422 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 2567 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 431 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 2576 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 439 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2584 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 443 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHERE ", "{0}"};
}
#line 2593 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 451 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 0);
    (yyval.node)->serialize_format = {"FROM ", "DUAL"};
}
#line 2602 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 459 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"FROM ", "{0}"};
}
#line 2611 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 467 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"LIMIT ", "{0}", " OFFSET ", "{1}"};
}
#line 2620 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 472 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"OFFSET ", "{1}", " LIMIT ", "{0}"};
}
#line 2629 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 477 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = {"LIMIT ", "{0}"};
}
#line 2638 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 482 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"OFFSET ", "{1}"};
}
#line 2647 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 487 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"LIMIT ", "{1}", ", ", "{0}"};
}
#line 2656 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 495 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2664 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 502 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2672 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 506 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2680 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 513 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2686 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 515 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2692 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 520 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2698 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 522 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_BOOL, "FOR UPDATE");
    (yyval.node)->terminalToken_.i = 1;
}
#line 2707 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 530 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2713 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 532 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"GROUP", " BY ", "{0}"};
}
#line 2722 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 539 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2728 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 540 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2734 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 545 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"ORDER", " BY ", "{0}"};
}
#line 2743 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 553 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2749 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 555 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ", ", "{1}"};
}
#line 2758 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 563 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ", "{1}"};
}
#line 2767 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 571 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 2775 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 575 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 2783 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 579 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 2791 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 586 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2797 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 588 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = {"HAVING ", "{0}"};
}
#line 2806 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 596 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2814 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 600 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 2822 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 604 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 2830 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 612 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ", ", "{1}"};
}
#line 2839 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 620 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2848 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 625 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = {"{0}", " ", "{1}"};

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2860 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 633 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = {"{0}", " AS ", "{1}"};

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2872 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 641 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2882 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 650 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2888 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 652 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ", ", "{1}"};
}
#line 2897 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 660 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2905 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 667 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2913 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 671 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " AS ", "{1}"};
}
#line 2922 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 676 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ", "{1}"};
}
#line 2931 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 681 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " AS ", "{1}"};
}
#line 2940 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 686 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ", "{1}"};
}
#line 2949 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 693 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2955 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 698 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 2964 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 703 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}", " ON ", "{3}"};
}
#line 2973 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 708 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}", " ON ", "{3}"};
}
#line 2983 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 714 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}"};
}
#line 2993 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 720 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}", " USING ", "(", "{3}", ")"};
}
#line 3002 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 725 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}", " USING ", "(", "{3}", ")"};
}
#line 3012 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 734 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].node))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL");
    }
}
#line 3027 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 745 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].node))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT");
    }
}
#line 3042 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 756 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].node))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT");
    }
}
#line 3057 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 767 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 3065 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 771 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
}
#line 3073 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 777 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (Node*)1; /*this is a flag*/}
#line 3079 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 778 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3085 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 783 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3091 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 785 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHEN ", "{0}"};
}
#line 3100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 794 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ", ", "{1}"};
}
#line 3109 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 802 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ".", "{1}"};
}
#line 3118 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 807 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), nd);
    (yyval.node)->serialize_format = {"{0}", ".", "{1}"};
}
#line 3128 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 826 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 3138 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 835 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"EXISTS ", "{0}"};
}
#line 3147 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 844 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"+", "{0}"};
}
#line 3156 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 849 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"-", "{0}"};
}
#line 3165 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 854 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " + ", "{1}"};
}
#line 3174 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 859 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " - ", "{1}"};
}
#line 3183 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 864 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " * ", "{1}"};
}
#line 3192 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 869 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " / ", "{1}"};
}
#line 3201 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 874 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " % ", "{1}"};
}
#line 3210 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 879 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ^ ", "{1}"};
}
#line 3219 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 884 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " MOD ", "{1}"};
}
#line 3228 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 892 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " <= ", "{1}"};
}
#line 3237 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 897 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " < ", "{1}"};
}
#line 3246 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 902 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " = ", "{1}"};
}
#line 3255 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 907 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " >= ", "{1}"};
}
#line 3264 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 912 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " > ", "{1}"};
}
#line 3273 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 917 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " <> ", "{1}"};
}
#line 3282 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 922 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " LIKE ", "{1}"};
}
#line 3291 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 927 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " NOT LIKE ", "{1}"};
}
#line 3300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 932 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " AND ", "{1}"};
}
#line 3309 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 937 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " OR ", "{1}"};
}
#line 3318 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 942 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"NOT ", "{0}"};
}
#line 3327 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 947 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS ", "{1}"};
}
#line 3336 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 952 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS NOT ", "{1}"};
}
#line 3345 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 957 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS ", "{1}"};
}
#line 3354 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 962 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS NOT ", "{1}"};
}
#line 3363 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 967 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS ", "{1}"};
}
#line 3372 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 972 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS NOT ", "{1}"};
}
#line 3381 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 977 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " BETWEEN ", "{1}", " AND ", "{2}"};
}
#line 3390 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 982 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " NOT BETWEEN ", "{1}", " AND ", "{2}"};
}
#line 3399 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 987 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IN ", "{1}"};
}
#line 3408 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 992 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " NOT IN ", "{1}"};
}
#line 3417 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 997 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " || ", "{1}"};
}
#line 3426 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1005 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 3435 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1012 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"CASE ", "{0}", " ", "{1}", " ", "{2}", " END"};
}
#line 3444 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1020 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3452 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1027 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ", "{1}"};
}
#line 3461 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1034 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHEN ", "{0}", " THEN ", "{1}"};
}
#line 3470 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1041 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"ELSE ", "{0}"};
}
#line 3479 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1046 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3487 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1052 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), star);
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", ")"};
}
#line 3497 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1058 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{2}", " ", "{1}", ")"};
}
#line 3506 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1063 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", ")"};
}
#line 3515 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1068 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", " AS ", "{2}", ")"};
}
#line 3524 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1073 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"{0}", "()"};
}
#line 3533 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1080 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3541 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1084 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3549 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1103 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 3555 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1105 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 3561 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1107 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 3567 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1109 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 3573 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1111 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 3579 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1113 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 3585 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1115 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
#line 3591 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1117 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
#line 3597 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 3601 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
  *++yylsp = yyloc;

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
      yyerror (&yylloc, result, scanner, YY_("syntax error"));
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
        yyerror (&yylloc, result, scanner, yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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
                      yytoken, &yylval, &yylloc, result, scanner);
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

  yyerror_range[1] = yylsp[1-yylen];
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp, result, scanner);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

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
  yyerror (&yylloc, result, scanner, YY_("memory exhausted"));
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
                  yytoken, &yylval, &yylloc, result, scanner);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp, result, scanner);
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
#line 1120 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
