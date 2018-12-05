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
    PASSWORD = 370,
    PRECISION = 371,
    PREPARE = 372,
    PRIMARY = 373,
    READ_STATIC = 374,
    REAL = 375,
    RENAME = 376,
    REPLACE = 377,
    RESTRICT = 378,
    PRIVILEGES = 379,
    REVOKE = 380,
    RIGHT = 381,
    ROLLBACK = 382,
    KILL = 383,
    READ_CONSISTENCY = 384,
    SCHEMA = 385,
    SCOPE = 386,
    SELECT = 387,
    SESSION = 388,
    SESSION_ALIAS = 389,
    SET = 390,
    SHOW = 391,
    SMALLINT = 392,
    SNAPSHOT = 393,
    SPFILE = 394,
    START = 395,
    STATIC = 396,
    SYSTEM = 397,
    STRONG = 398,
    SET_MASTER_CLUSTER = 399,
    SET_SLAVE_CLUSTER = 400,
    SLAVE = 401,
    TABLE = 402,
    TABLES = 403,
    THEN = 404,
    TIME = 405,
    TIMESTAMP = 406,
    TINYINT = 407,
    TRAILING = 408,
    TRANSACTION = 409,
    TO = 410,
    UPDATE = 411,
    USER = 412,
    USING = 413,
    VALUES = 414,
    VARCHAR = 415,
    VARBINARY = 416,
    WHERE = 417,
    WHEN = 418,
    WITH = 419,
    WORK = 420,
    PROCESSLIST = 421,
    QUERY = 422,
    CONNECTION = 423,
    WEAK = 424
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 73 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 316 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 346 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYLAST   623

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  181
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  55
/* YYNRULES -- Number of rules.  */
#define YYNRULES  164
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   424

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
      36,    37,    30,    28,   180,    29,    38,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   179,
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
     174,   175,   176,   177,   178
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   182,   183,   191,   192,   197,   202,   209,
     214,   222,   223,   228,   234,   244,   265,   290,   291,   295,
     318,   340,   362,   388,   391,   399,   407,   415,   420,   425,
     430,   435,   444,   450,   454,   462,   463,   469,   470,   479,
     480,   488,   489,   493,   501,   503,   511,   520,   523,   527,
     535,   536,   545,   548,   552,   559,   560,   568,   573,   581,
     589,   598,   600,   607,   608,   615,   619,   624,   629,   634,
     641,   646,   651,   656,   662,   668,   673,   682,   693,   704,
     715,   719,   726,   727,   732,   733,   741,   742,   749,   750,
     755,   763,   764,   765,   766,   767,   768,   772,   773,   774,
     780,   781,   782,   783,   791,   792,   797,   802,   807,   812,
     817,   822,   827,   832,   839,   840,   845,   850,   855,   860,
     865,   870,   875,   880,   885,   890,   895,   900,   905,   910,
     915,   920,   925,   930,   935,   940,   945,   952,   953,   960,
     967,   969,   974,   975,   982,   989,   995,  1000,  1006,  1011,
    1016,  1021,  1028,  1032,  1039,  1042,  1045,  1048,  1051,  1053,
    1055,  1057,  1059,  1061,  1063
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
  "OPTION", "OUTER", "PARAMETERS", "PASSWORD", "PRECISION", "PREPARE",
  "PRIMARY", "READ_STATIC", "REAL", "RENAME", "REPLACE", "RESTRICT",
  "PRIVILEGES", "REVOKE", "RIGHT", "ROLLBACK", "KILL", "READ_CONSISTENCY",
  "SCHEMA", "SCOPE", "SELECT", "SESSION", "SESSION_ALIAS", "SET", "SHOW",
  "SMALLINT", "SNAPSHOT", "SPFILE", "START", "STATIC", "SYSTEM", "STRONG",
  "SET_MASTER_CLUSTER", "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES",
  "THEN", "TIME", "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO",
  "UPDATE", "USER", "USING", "VALUES", "VARCHAR", "VARBINARY", "WHERE",
  "WHEN", "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK",
  "';'", "','", "$accept", "sql_stmt", "stmt_list", "stmt", "select_stmt",
  "select_with_parens", "select_no_parens", "no_table_select",
  "select_clause", "simple_select", "opt_where", "from_dual",
  "from_clause", "select_limit", "opt_hint", "limit_expr",
  "opt_select_limit", "opt_for_update", "opt_groupby", "opt_order_by",
  "order_by", "sort_list", "sort_key", "opt_asc_desc", "opt_having",
  "opt_distinct", "select_expr_list", "projection", "from_list",
  "table_factor", "table_factor_non_join", "relation_factor",
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
     416,   417,   418,   419,   420,   421,   422,   423,   424,    59,
      44
};
# endif

#define YYPACT_NINF -191

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-191)))

#define YYTABLE_NINF -157

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -34,   -34,  -191,    26,   -40,   -87,  -191,   -64,   -83,  -191,
      23,   -17,    59,    63,    -4,  -191,  -191,   -34,   425,  -191,
      -4,    -4,    -4,    45,   -90,     7,   -60,  -191,  -191,  -191,
    -191,  -191,   408,  -191,     5,  -191,  -191,  -191,  -191,  -191,
    -191,   425,   459,   459,   267,   425,    70,  -191,  -191,  -191,
    -191,   417,   584,  -191,  -191,  -191,    89,   110,   -28,   -28,
     -28,   425,    28,    28,    65,  -191,  -191,  -191,    58,   -33,
     530,   596,  -191,  -191,   137,   116,   167,   584,    -6,  -191,
     459,   459,   459,   459,   459,   459,   459,   425,   425,    86,
     425,   425,   425,   425,   425,   425,   425,   425,   459,   139,
      78,    42,   369,  -191,  -191,   166,  -191,   166,  -191,  -191,
      -3,   499,  -191,  -191,  -109,    87,  -191,    21,    32,    32,
    -191,  -191,   408,  -191,   194,  -191,  -191,   425,   425,   126,
      -6,   184,   184,   172,   172,   172,   172,  -191,   543,   596,
     425,   459,   139,   368,   368,   368,   368,   368,   368,    97,
     133,   442,   267,  -191,  -191,  -191,  -191,  -191,   192,  -191,
    -191,  -191,   171,  -191,  -191,  -191,   182,   114,   425,    -4,
     425,  -191,  -191,  -191,    28,    28,    28,  -191,     3,  -191,
      18,  -191,   181,  -191,    22,  -191,  -191,   425,   -90,   115,
    -191,  -191,  -191,   213,   425,   142,  -191,   133,   468,  -191,
     459,   205,  -191,  -191,  -191,  -191,  -191,   164,   560,   408,
    -191,  -191,  -191,  -191,    19,   247,   208,   244,  -191,  -191,
     127,  -191,    39,   127,   145,   127,    39,   146,   244,  -191,
     584,  -191,   203,   163,   425,   584,  -191,   459,   417,  -191,
    -191,  -191,  -191,  -191,  -191,  -191,  -191,   226,  -191,   173,
    -191,  -191,  -191,  -191,   199,  -191,    61,  -191,  -191,    39,
    -191,   425,   425,  -191,   584,   417,  -191,    39,   425,   228,
    -191,   223,  -191,   584,   584,   262,   425,   232,   240,   242,
     584,   262,  -191,   243,  -191
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    32,     0,     0,     3,     5,    18,    84,    11,
      42,    17,    18,     0,    52,     1,     2,     6,     0,     7,
      52,    52,    52,     0,     0,    37,     0,    12,    10,     9,
      53,    54,     0,     4,   154,    91,    92,    94,    93,    95,
      96,     0,     0,     0,     0,   141,     0,   102,    97,    98,
     104,   114,    85,   100,   101,    88,     0,     0,     0,     0,
       0,     0,     0,     0,    37,    13,    38,    60,    35,    55,
      57,   125,   105,   106,   102,     0,    86,   140,     0,   103,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,    18,    20,    17,    22,    21,    43,
      44,    47,    33,    34,    29,    30,    14,     0,    23,    23,
      36,    15,     0,   157,     0,    58,    99,     0,     0,   146,
     142,   107,   108,   109,   110,   111,   113,   112,   124,   123,
       0,     0,     0,   115,   116,   117,   119,   118,   120,   136,
     121,     0,     0,   137,   134,   128,   126,   130,     0,   154,
      90,    89,     0,   151,   152,   153,     0,    86,     0,    52,
       0,    48,    49,    46,     0,     0,     0,   155,     0,    25,
       0,    26,    61,    63,    65,    64,    70,     0,    35,    39,
      56,    59,    87,     0,     0,     0,   143,   122,     0,   135,
       0,     0,   129,   127,   131,   147,   149,     0,     0,     0,
      45,    27,    31,    28,    18,     0,    64,     0,    69,    81,
      83,    80,     0,    83,     0,    83,     0,     0,     0,    67,
      24,    16,     0,    50,     0,   145,   139,     0,   132,   138,
     162,   163,   161,   160,   164,   159,   158,     0,   148,     0,
      71,    68,    82,    77,     0,    78,     0,    79,    62,     0,
      66,     0,     0,    19,   144,   133,   150,     0,     0,     0,
      74,     0,    40,    51,    73,     0,     0,     0,   154,     0,
      72,     0,    76,     0,    75
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -191,  -191,   264,  -191,  -191,     0,    15,  -191,   112,   165,
     169,  -191,  -191,   260,   187,   -56,   103,     4,  -191,  -191,
    -191,   122,  -191,  -191,  -191,    -8,  -119,  -191,    72,  -155,
      43,  -191,   123,  -191,  -122,  -191,   -97,  -190,  -191,  -191,
     -32,   -14,   160,  -191,  -191,   175,  -191,  -191,  -191,  -191,
     207,   -15,  -191,   188,  -191
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    47,    13,     9,    10,    11,
     188,   118,   119,   120,    14,   114,   121,    27,   233,    24,
      25,   109,   110,   173,   263,    32,    68,    69,   181,   182,
     183,   184,   185,   227,   253,    19,    75,    48,    49,    50,
      51,    76,   154,    53,    78,   129,   130,   195,    54,   168,
      55,    56,    57,   125,   247
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    12,     1,   190,    52,   166,   177,   115,     1,   174,
      72,    73,    58,    59,    60,     8,    -8,     7,    70,    62,
     -37,   177,   177,   215,   177,   177,    15,    71,    63,    65,
     192,    77,     8,   112,    20,    21,    22,    30,   113,   178,
      16,  -156,   177,  -155,    74,   159,    79,   111,   131,   132,
     133,   134,   135,   136,   137,   201,    28,   178,   104,   104,
     104,   217,   217,   -37,   177,   228,   151,   254,   116,    26,
      31,   175,   160,   138,   139,   178,   143,   144,   145,   146,
     147,   148,   149,   150,   155,   279,   156,   157,   167,    18,
     249,   283,    17,    26,   158,    61,    28,     1,   179,   153,
      29,   255,   186,   257,   271,    66,     1,     2,    70,   198,
     140,   141,   142,   103,   193,    -8,   -41,   180,   211,   212,
     213,    97,    98,    99,   100,   -41,   197,   101,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   153,    23,     2,   117,   102,   122,   -18,   -18,
     -18,    26,    74,   126,   208,   -37,   111,   207,    98,    99,
     100,   209,   -37,   186,   272,   218,   128,    62,   238,   229,
     105,   107,   108,   230,    28,   152,    63,   170,   214,    22,
     235,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,    70,   176,   123,   202,   218,
     203,   204,   251,   187,   194,   265,    86,   186,   205,   232,
     240,   186,   241,   260,    82,    83,    84,    85,    86,   206,
     264,   236,   180,   106,   106,   106,   180,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   186,   239,   219,   186,   250,   -18,   177,   273,   252,
     256,   259,   186,   261,   274,   -18,   180,   -18,   262,   180,
     267,   219,   280,   266,   275,   278,   242,   180,   281,   220,
      34,    35,    36,    37,    38,    39,   243,    40,  -155,   282,
     284,    33,   221,    41,    64,   219,   222,   220,   189,   223,
     169,   231,   210,   244,   127,    42,    43,   224,   258,   270,
     221,   216,   199,    44,   222,   196,     0,   223,   161,   219,
     245,   220,   191,     0,     0,   224,   225,     0,   268,    45,
       0,     0,     0,     0,   221,   246,     0,     0,   222,     0,
       0,   223,     0,     0,   225,   220,     0,     0,     0,   224,
       0,     0,   276,     0,     0,     0,     0,   127,   221,     0,
      46,     0,   222,     0,     0,   223,     0,     0,   225,     0,
       0,   226,     0,   224,     0,     0,   269,     0,     0,     0,
       0,   234,    34,    35,    36,    37,    38,    39,     0,    40,
       0,     0,   225,     0,     0,    41,     0,     0,     0,     0,
     277,    96,    97,    98,    99,   100,     0,    42,    43,   162,
       0,     0,     0,     0,     0,    44,   163,     0,     2,     0,
     164,    34,    35,    36,    37,    38,    39,     0,    40,     0,
       0,    45,     0,     0,    41,     0,     0,     0,    34,    35,
      36,    37,    38,    39,     0,    40,    42,    43,    67,     0,
       0,    41,     0,   165,    44,    80,    81,    82,    83,    84,
      85,    86,    46,    42,    43,     0,     0,   200,     0,     0,
      45,    44,    34,    35,    36,    37,    38,    39,     0,    40,
      80,    81,    82,    83,    84,    85,    86,    45,     0,     0,
       0,     0,     0,   237,     0,     0,     0,    42,    43,     0,
       0,    46,     0,     0,     0,    44,    80,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,    46,     0,
       0,    45,     0,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,     0,     0,     0,
       0,     0,     0,   123,     0,     0,     0,     0,     0,     0,
       0,     0,    46,   171,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   172,     0,   124,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100
};

static const yytype_int16 yycheck[] =
{
       0,     1,    36,   122,    18,   102,     3,    63,    36,   118,
      42,    43,    20,    21,    22,     0,    80,    17,    32,   109,
      37,     3,     3,   178,     3,     3,     0,    41,   118,    25,
     127,    45,    17,     5,    11,    12,    13,    41,    10,    36,
      80,    36,     3,    38,    44,     3,    46,    61,    80,    81,
      82,    83,    84,    85,    86,   152,    37,    36,    58,    59,
      60,    43,    43,    80,     3,    43,    98,   222,    64,    86,
      74,   180,    30,    87,    88,    36,    90,    91,    92,    93,
      94,    95,    96,    97,     6,   275,     8,     9,   102,   172,
     209,   281,   179,    86,    16,    50,    37,    36,    77,    99,
      37,   223,   117,   225,   259,   165,    36,   141,   122,   141,
      24,    25,    26,   141,   128,   179,   109,   117,   174,   175,
     176,    24,    25,    26,    27,   118,   140,    38,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   142,   120,   141,    87,    36,   180,    11,    12,
      13,    86,   152,    37,   168,   172,   170,    43,    25,    26,
      27,   169,   179,   178,   261,   180,   172,   109,   200,   184,
      58,    59,    60,   187,    37,    36,   118,   180,   178,    13,
     194,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   209,   109,     3,     6,   214,
       8,     9,   217,   171,    78,   237,    34,   222,    37,    94,
      46,   226,    48,   228,    30,    31,    32,    33,    34,    37,
     234,    79,   222,    58,    59,    60,   226,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   256,    37,    62,   259,    37,   109,     3,   262,   122,
     105,   105,   267,    50,   268,   118,   256,   120,    95,   259,
      87,    62,   276,    37,    36,     3,   102,   267,    36,    88,
       3,     4,     5,     6,     7,     8,   112,    10,    38,    37,
      37,    17,   101,    16,    24,    62,   105,    88,   119,   108,
     103,   188,   170,   129,   180,    28,    29,   116,   226,   256,
     101,   178,   142,    36,   105,   130,    -1,   108,   101,    62,
     146,    88,   124,    -1,    -1,   116,   135,    -1,   119,    52,
      -1,    -1,    -1,    -1,   101,   161,    -1,    -1,   105,    -1,
      -1,   108,    -1,    -1,   135,    88,    -1,    -1,    -1,   116,
      -1,    -1,   119,    -1,    -1,    -1,    -1,   180,   101,    -1,
      83,    -1,   105,    -1,    -1,   108,    -1,    -1,   135,    -1,
      -1,   180,    -1,   116,    -1,    -1,   167,    -1,    -1,    -1,
      -1,   158,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    -1,   135,    -1,    -1,    16,    -1,    -1,    -1,    -1,
     167,    23,    24,    25,    26,    27,    -1,    28,    29,    30,
      -1,    -1,    -1,    -1,    -1,    36,    37,    -1,   141,    -1,
      41,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      -1,    52,    -1,    -1,    16,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    28,    29,    30,    -1,
      -1,    16,    -1,    74,    36,    28,    29,    30,    31,    32,
      33,    34,    83,    28,    29,    -1,    -1,    15,    -1,    -1,
      52,    36,     3,     4,     5,     6,     7,     8,    -1,    10,
      28,    29,    30,    31,    32,    33,    34,    52,    -1,    -1,
      -1,    -1,    -1,    15,    -1,    -1,    -1,    28,    29,    -1,
      -1,    83,    -1,    -1,    -1,    36,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    52,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    44,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    72,    -1,    43,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    37,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,   141,   182,   183,   184,   185,   186,   187,   188,
     189,   190,   186,   187,   195,     0,    80,   179,   172,   216,
      11,    12,    13,   120,   200,   201,    86,   198,    37,    37,
      41,    74,   206,   183,     3,     4,     5,     6,     7,     8,
      10,    16,    28,    29,    36,    52,    83,   186,   218,   219,
     220,   221,   222,   224,   229,   231,   232,   233,   206,   206,
     206,    50,   109,   118,   194,   198,   165,    30,   207,   208,
     222,   222,   221,   221,   186,   217,   222,   222,   225,   186,
      28,    29,    30,    31,    32,    33,    34,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    38,    36,   141,   186,   189,   190,   189,   189,   202,
     203,   222,     5,    10,   196,   196,   198,    87,   192,   193,
     194,   197,   180,     3,    43,   234,    37,   180,   172,   226,
     227,   221,   221,   221,   221,   221,   221,   221,   222,   222,
      24,    25,    26,   222,   222,   222,   222,   222,   222,   222,
     222,   221,    36,   186,   223,     6,     8,     9,    16,     3,
      30,   231,    30,    37,    41,    74,   217,   222,   230,   195,
     180,    44,    72,   204,   118,   180,   109,     3,    36,    77,
     186,   209,   210,   211,   212,   213,   232,   171,   191,   191,
     207,   234,   217,   222,    78,   228,   226,   222,   221,   223,
      15,   217,     6,     8,     9,    37,    37,    43,   222,   206,
     202,   196,   196,   196,   186,   210,   213,    43,   232,    62,
      88,   101,   105,   108,   116,   135,   180,   214,    43,   232,
     222,   197,    94,   199,   158,   222,    79,    15,   221,    37,
      46,    48,   102,   112,   129,   146,   161,   235,    37,   207,
      37,   232,   122,   215,   210,   215,   105,   215,   209,   105,
     232,    50,    95,   205,   222,   221,    37,    87,   119,   167,
     211,   210,   217,   222,   222,    36,   119,   167,     3,   218,
     222,    36,    37,   218,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   181,   182,   183,   183,   184,   184,   185,   185,   186,
     186,   187,   187,   187,   187,   188,   188,   189,   189,   190,
     190,   190,   190,   191,   191,   192,   193,   194,   194,   194,
     194,   194,   195,   196,   196,   197,   197,   198,   198,   199,
     199,   200,   200,   201,   202,   202,   203,   204,   204,   204,
     205,   205,   206,   206,   206,   207,   207,   208,   208,   208,
     208,   209,   209,   210,   210,   211,   211,   211,   211,   211,
     212,   213,   213,   213,   213,   213,   213,   214,   214,   214,
     214,   214,   215,   215,   216,   216,   217,   217,   218,   218,
     218,   219,   219,   219,   219,   219,   219,   220,   220,   220,
     220,   220,   220,   220,   221,   221,   221,   221,   221,   221,
     221,   221,   221,   221,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   222,   222,   222,
     222,   222,   222,   222,   222,   222,   222,   223,   223,   224,
     225,   225,   226,   226,   227,   228,   228,   229,   229,   229,
     229,   229,   230,   230,   231,   232,   233,   234,   235,   235,
     235,   235,   235,   235,   235
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     2,     1,     3,
       3,     1,     2,     3,     4,     5,     7,     1,     1,     8,
       4,     4,     4,     0,     2,     2,     2,     4,     4,     2,
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
       1,     1,     1,     1,     1
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
#line 1571 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1577 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1583 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1589 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1595 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1601 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1607 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1613 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* sql_stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1619 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* stmt_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1625 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1631 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* select_stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1637 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* select_with_parens  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1643 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* select_no_parens  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1649 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* no_table_select  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1655 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1661 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* simple_select  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1667 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* opt_where  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1673 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* from_dual  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1679 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* from_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1685 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* select_limit  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1691 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* opt_hint  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1697 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* limit_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1703 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_select_limit  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1709 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_for_update  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1715 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_groupby  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1721 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_order_by  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1727 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* order_by  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1733 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* sort_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1739 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* sort_key  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1745 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_asc_desc  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1751 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* opt_having  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1757 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_distinct  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1763 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* select_expr_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1769 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* projection  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1775 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* from_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1781 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* table_factor  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1787 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* table_factor_non_join  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1793 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* relation_factor  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1799 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* joined_table  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1805 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* join_type  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1811 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* join_outer  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1817 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_when  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1823 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* expr_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1829 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* column_ref  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1835 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* expr_const  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1841 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* simple_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1847 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* arith_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1853 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1859 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* in_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1865 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* case_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1871 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* case_arg  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1877 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* when_clause_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1883 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* when_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1889 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* case_default  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1895 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* func_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1901 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* distinct_or_all  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1907 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* column_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1913 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* relation_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1919 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* function_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1925 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* column_label  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1931 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* data_type  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1937 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 2054 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
    YYACCEPT;
}
#line 2247 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 184 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "; ", "{1}"};
}
#line 2256 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 192 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2262 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 198 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_WHEN, (yyvsp[0].node));
}
#line 2271 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 203 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2279 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 210 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"( ", "{0}", " )"};
}
#line 2288 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 215 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"( ", "{0}", " )"};
}
#line 2297 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 224 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyvsp[-1].node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2306 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 229 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 235 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2327 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 245 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 15,
            (yyvsp[-2].node),             /* E_SELECT_DISTINCT 0 */
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
            (yyvsp[-3].node),             /* E_SELECT_HINTS 13 */
            nullptr         /* E_SELECT_WHEN 14 */
            );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2352 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 267 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 15,
                (yyvsp[-4].node),             /* E_SELECT_DISTINCT 0 */
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
                (yyvsp[-5].node),             /* E_SELECT_HINTS 13 */
                nullptr         /* E_SELECT_WHEN 14 */
                );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2377 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 298 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 15,
                    (yyvsp[-5].node),             /* E_SELECT_DISTINCT 0 */
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
                    (yyvsp[-6].node),             /* E_SELECT_HINTS 13 */
                    nullptr         /* E_SELECT_WHEN 14 */
                    );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2402 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 319 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_UNION, "UNION");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 15,
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
                        nullptr              /* E_SELECT_WHEN 14 */
                        );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2428 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 341 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_INTERSECT, "INTERSECT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 15,
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
                        nullptr              /* E_SELECT_WHEN 14 */
                        );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2454 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 363 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_EXCEPT, "EXCEPT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 15,
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
                        nullptr              /* E_SELECT_WHEN 14 */
                        );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2480 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 388 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2488 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 392 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHERE", "{0}"};
}
#line 2497 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 400 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 0);
    (yyval.node)->serialize_format = {"FROM", "DUAL"};
}
#line 2506 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 408 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"FROM", "{0}"};
}
#line 2515 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 416 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"LIMIT", "{0}", "OFFSET", "{1}"};
}
#line 2524 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 421 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"OFFSET", "{1}", "LIMIT", "{0}"};
}
#line 2533 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 426 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = {"LIMIT", "{0}"};
}
#line 2542 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 431 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"OFFSET", "{1}"};
}
#line 2551 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 436 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"LIMIT", "{1}", ",", "{0}"};
}
#line 2560 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 444 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2568 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 451 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2576 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 455 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2584 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 462 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2590 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 464 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2596 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 469 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2602 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 471 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_BOOL, "FOR UPDATE");
    (yyval.node)->terminalToken_.i = 1;
}
#line 2611 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 479 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2617 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 481 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"GROUP", "BY", "{0}"};
}
#line 2626 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 488 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2632 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 489 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2638 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 494 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"ORDER", "BY", "{0}"};
}
#line 2647 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 502 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2653 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 504 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ",", "{1}"};
}
#line 2662 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 512 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "{1}"};
}
#line 2671 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 520 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 2679 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 524 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 2687 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 528 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 2695 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 535 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2701 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 537 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = {"HAVING", "{0}"};
}
#line 2710 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 545 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2718 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 549 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 2726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 553 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 2734 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 561 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ",", "{1}"};
}
#line 2743 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 569 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2752 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 574 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = {"{0}", "{1}"};

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2764 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 582 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = {"{0}", "AS", "{1}"};

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2776 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 590 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2786 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 599 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2792 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 601 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ",", "{1}"};
}
#line 2801 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 609 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2809 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 616 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2817 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 620 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "AS", "{1}"};
}
#line 2826 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 625 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "{1}"};
}
#line 2835 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 630 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "AS", "{1}"};
}
#line 2844 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 635 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "{1}"};
}
#line 2853 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 642 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2859 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 647 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 2868 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 652 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{1}", "{0}", "JOIN", "{2}", "ON", "{3}"};
}
#line 2877 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 657 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{1}", "{0}", "JOIN", "{2}", "ON", "{3}"};
}
#line 2887 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 663 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = {"{1}", "{0}", "JOIN", "{2}"};
}
#line 2897 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 669 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{1}", "{0}", "JOIN", "{2}", "USING", "(", "{3}", ")"};
}
#line 2906 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 674 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{1}", "{0}", "JOIN", "{2}", "USING", "(", "{3}", ")"};
}
#line 2916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 683 "sqlparser.y" /* yacc.c:1646  */
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
#line 2931 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 694 "sqlparser.y" /* yacc.c:1646  */
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
#line 2946 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 705 "sqlparser.y" /* yacc.c:1646  */
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
#line 2961 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 716 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 2969 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 720 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
}
#line 2977 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 726 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (Node*)1; /*this is a flag*/}
#line 2983 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 727 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2989 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 732 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 2995 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 734 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHEN", "{0}"};
}
#line 3004 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 743 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ",", "{1}"};
}
#line 3013 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 751 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ".", "{1}"};
}
#line 3022 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 756 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), nd);
    (yyval.node)->serialize_format = {"{0}", ".", "{1}"};
}
#line 3032 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 775 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 3042 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 784 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"EXISTS", "{0}"};
}
#line 3051 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 793 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"+", "{0}"};
}
#line 3060 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 798 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"-", "{0}"};
}
#line 3069 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 803 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "+", "{1}"};
}
#line 3078 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 808 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "-", "{1}"};
}
#line 3087 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 813 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "*", "{1}"};
}
#line 3096 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 818 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "/", "{1}"};
}
#line 3105 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 823 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "%", "{1}"};
}
#line 3114 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 828 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "^", "{1}"};
}
#line 3123 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 833 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "MOD", "{1}"};
}
#line 3132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 841 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "<=", "{1}"};
}
#line 3141 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 846 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "<", "{1}"};
}
#line 3150 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 851 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "=", "{1}"};
}
#line 3159 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 856 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ">=", "{1}"};
}
#line 3168 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 861 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ">", "{1}"};
}
#line 3177 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 866 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "<>", "{1}"};
}
#line 3186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 871 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "LIKE", "{1}"};
}
#line 3195 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 876 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "NOT LIKE", "{1}"};
}
#line 3204 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 881 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "AND", "{1}"};
}
#line 3213 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 886 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "OR", "{1}"};
}
#line 3222 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 891 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"NOT", "{0}"};
}
#line 3231 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 896 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "IS", "{1}"};
}
#line 3240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 901 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "IS NOT", "{1}"};
}
#line 3249 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 906 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "IS", "{1}"};
}
#line 3258 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 911 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "IS NOT", "{1}"};
}
#line 3267 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 916 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "IS", "{1}"};
}
#line 3276 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 921 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "IS NOT", "{1}"};
}
#line 3285 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 926 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "BETWEEN", "{1}", "AND", "{2}"};
}
#line 3294 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 931 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "NOT BETWEEN", "{1}", "AND", "{2}"};
}
#line 3303 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 936 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "IN", "{1}"};
}
#line 3312 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 941 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "NOT IN", "{1}"};
}
#line 3321 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 946 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "||", "{1}"};
}
#line 3330 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 954 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 3339 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 961 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"CASE", "{0}", "{1}", "{2}", "END"};
}
#line 3348 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 969 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3356 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 976 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "{1}"};
}
#line 3365 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 983 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHEN", "{0}", "THEN", "{1}"};
}
#line 3374 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 990 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"ELSE", "{0}"};
}
#line 3383 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 995 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3391 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1001 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), star);
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", ")"};
}
#line 3401 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1007 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{2}", "{1}", ")"};
}
#line 3410 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1012 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", ")"};
}
#line 3419 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1017 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", "AS", "{2}", ")"};
}
#line 3428 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1022 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"{0}", "()"};
}
#line 3437 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1029 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3445 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1033 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3453 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1052 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 3459 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1054 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 3465 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1056 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 3471 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1058 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 3477 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1060 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 3483 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1062 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 3489 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1064 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "E_TYPE_DOUBLE"); }
#line 3495 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 3499 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 1067 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
