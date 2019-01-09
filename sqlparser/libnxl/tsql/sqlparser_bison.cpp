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
 * This Grammar is designed for Transact-SQL.
 * Most grammar rules refer to Microsoft's official documents.
 * sqlparser.y
 * defines sqlparser_bison.h
 * outputs sqlparser_bison.cpp
 *
 * Bison Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_bison.h"
#include "sqlparser_flex.h"

#include <stdio.h>
#include <string.h>
#include <strings.h>

/*
 * We provide parse error includes error message, first line, first column of error lex for debug
 */
int yyerror(YYLTYPE* llocp, ParseResult* result, yyscan_t scanner, const char *msg) {
    result->accept = false;
    result->errFirstLine = llocp->first_line;
    result->errFirstColumn = llocp->first_column;
    result->errDetail = msg;
	return 0;
}


#line 101 "sqlparser_bison.cpp" /* yacc.c:339  */

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
#line 41 "sqlparser.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 137 "sqlparser_bison.cpp" /* yacc.c:355  */

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
    CONDITIONLESS_JOIN = 266,
    CROSS = 267,
    FULL = 268,
    INNER = 269,
    JOIN = 270,
    LEFT = 271,
    NATURAL = 272,
    RIGHT = 273,
    ON = 274,
    USING = 275,
    UNION = 276,
    EXCEPT = 277,
    INTERSECT = 278,
    OR = 279,
    AND = 280,
    NOT = 281,
    COMP_LE = 282,
    COMP_LT = 283,
    COMP_EQ = 284,
    COMP_GT = 285,
    COMP_GE = 286,
    COMP_NE = 287,
    CNNOP = 288,
    LIKE = 289,
    BETWEEN = 290,
    IN = 291,
    IS = 292,
    MOD = 293,
    UMINUS = 294,
    WITH = 295,
    ADD = 296,
    ANY = 297,
    ALL = 298,
    ALTER = 299,
    AS = 300,
    ASC = 301,
    BEGI = 302,
    BIGINT = 303,
    BINARY = 304,
    BOOLEAN = 305,
    BOTH = 306,
    BROWSE = 307,
    BY = 308,
    CASCADE = 309,
    CASE = 310,
    CHARACTER = 311,
    CLUSTER = 312,
    COMMENT = 313,
    COMMIT = 314,
    CONSISTENT = 315,
    COLUMN = 316,
    COLUMNS = 317,
    CREATE = 318,
    CREATETIME = 319,
    CURRENT_USER = 320,
    CHANGE_OBI = 321,
    SWITCH_CLUSTER = 322,
    DATE = 323,
    DATETIME = 324,
    DEALLOCATE = 325,
    DECIMAL = 326,
    DEFAULT = 327,
    DELETE = 328,
    DESC = 329,
    DESCRIBE = 330,
    DISTINCT = 331,
    DOUBLE = 332,
    DROP = 333,
    DUAL = 334,
    ELSE = 335,
    END = 336,
    END_P = 337,
    ERROR = 338,
    EXECUTE = 339,
    EXISTS = 340,
    EXPLAIN = 341,
    FETCH = 342,
    FIRST = 343,
    FLOAT = 344,
    FOR = 345,
    FROM = 346,
    FROZEN = 347,
    FORCE = 348,
    GLOBAL = 349,
    GLOBAL_ALIAS = 350,
    GRANT = 351,
    GROUP = 352,
    HAVING = 353,
    HINT_BEGIN = 354,
    HINT_END = 355,
    HOTSPOT = 356,
    IDENTIFIED = 357,
    IF = 358,
    INTEGER = 359,
    INSERT = 360,
    INTO = 361,
    KEY = 362,
    LEADING = 363,
    LIMIT = 364,
    LOCAL = 365,
    LOCKED = 366,
    MEDIUMINT = 367,
    MEMORY = 368,
    MODIFYTIME = 369,
    MASTER = 370,
    NEXT = 371,
    NOEXPAND = 372,
    NUMERIC = 373,
    OFFSET = 374,
    ONLY = 375,
    ORDER = 376,
    OPTION = 377,
    OUTER = 378,
    PARAMETERS = 379,
    PERCENT = 380,
    PASSWORD = 381,
    PRECISION = 382,
    PREPARE = 383,
    PRIMARY = 384,
    READ_STATIC = 385,
    REAL = 386,
    RENAME = 387,
    REPLACE = 388,
    RESTRICT = 389,
    PRIVILEGES = 390,
    REVOKE = 391,
    ROLLBACK = 392,
    ROW = 393,
    ROWS = 394,
    KILL = 395,
    READ_CONSISTENCY = 396,
    SCHEMA = 397,
    SCOPE = 398,
    SELECT = 399,
    SESSION = 400,
    SESSION_ALIAS = 401,
    SET = 402,
    SHOW = 403,
    SMALLINT = 404,
    SNAPSHOT = 405,
    SPFILE = 406,
    START = 407,
    STATIC = 408,
    SYSTEM = 409,
    STRONG = 410,
    SET_MASTER_CLUSTER = 411,
    SET_SLAVE_CLUSTER = 412,
    SLAVE = 413,
    TABLE = 414,
    TABLES = 415,
    THEN = 416,
    TIES = 417,
    TIME = 418,
    TIMESTAMP = 419,
    TINYINT = 420,
    TRAILING = 421,
    TRANSACTION = 422,
    TO = 423,
    TOP = 424,
    UPDATE = 425,
    USER = 426,
    VALUES = 427,
    VARCHAR = 428,
    VARBINARY = 429,
    WHERE = 430,
    WHEN = 431,
    WORK = 432,
    PROCESSLIST = 433,
    QUERY = 434,
    CONNECTION = 435,
    WEAK = 436,
    LOOP = 437,
    HASH = 438,
    MERGE = 439,
    REMOTE = 440,
    CONCAT = 441,
    OPTIMIZE = 442,
    EXPAND = 443,
    VIEWS = 444,
    FAST = 445,
    DISABLE = 446,
    EXTERNALPUSHDOWN = 447,
    IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 448,
    KEEP = 449,
    PLAN = 450,
    KEEPFIXED = 451,
    MAX_GRANT_PERCENT = 452,
    MIN_GRANT_PERCENT = 453,
    MAXDOP = 454,
    MAXRECURSION = 455,
    NO_PERFORMANCE_SPOOL = 456,
    PARAMETERIZATION = 457,
    SIMPLE = 458,
    FORCED = 459,
    RECOMPILE = 460,
    ROBUST = 461,
    CHECKSUM = 462,
    BINARY_CHECKSUM = 463,
    RANK = 464,
    DENSE_RANK = 465,
    ROW_NUMBER = 466,
    NTILE = 467,
    PARTITION = 468,
    RANGE = 469,
    UNBOUNDED = 470,
    PRECEDING = 471,
    CURRENT = 472,
    FOLLOWING = 473,
    OVER = 474,
    VARP = 475,
    VAR = 476,
    SUM = 477,
    STDEVP = 478,
    STDEV = 479,
    MIN = 480,
    MAX = 481,
    LEAD = 482,
    LAST_VALUE = 483,
    LAG = 484,
    GROUPING_ID = 485,
    GROUPING = 486,
    FIRST_VALUE = 487,
    COUNT_BIG = 488,
    COUNT = 489,
    CHECKSUM_AGG = 490,
    AVG = 491,
    SYSTEM_USER = 492,
    STUFF = 493,
    SESSION_USER = 494,
    NULLIF = 495,
    MIN_ACTIVE_ROWVERSION = 496,
    ISNULL = 497,
    IDENTITY = 498,
    GETUTCDATE = 499,
    GETDATE = 500,
    DATEPART = 501,
    DATENAME = 502,
    DATEDIFF = 503,
    DATEADD = 504,
    CURRENT_TIMESTAMP = 505,
    CONVERT = 506,
    COALESCE = 507,
    CAST = 508
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 408 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 438 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   3773

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  265
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  382
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  822

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   508

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    42,     2,     2,
      47,    48,    40,    38,   264,    39,    49,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    50,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
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
      35,    36,    37,    43,    45,    46,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   206,   206,   216,   217,   227,   228,   229,   234,   238,
     243,   251,   258,   270,   271,   279,   280,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   319,   320,   324,   349,   374,   399,
     428,   429,   434,   439,   444,   452,   453,   461,   462,   463,
     472,   473,   481,   482,   490,   491,   499,   503,   504,   512,
     513,   517,   522,   531,   536,   541,   546,   551,   556,   561,
     566,   571,   576,   584,   585,   593,   602,   605,   609,   616,
     617,   625,   633,   634,   642,   650,   651,   655,   663,   664,
     672,   673,   677,   684,   685,   693,   700,   708,   716,   725,
     726,   734,   735,   739,   744,   749,   754,   759,   764,   772,
     773,   781,   782,   787,   797,   806,   819,   820,   821,   829,
     830,   835,   836,   841,   846,   851,   856,   861,   866,   874,
     879,   884,   890,   895,   901,   914,   925,   936,   947,   954,
     955,   956,   957,   958,   963,   964,   969,   970,   978,   979,
     984,   990,   995,  1001,  1006,  1012,  1017,  1023,  1028,  1034,
    1039,  1045,  1050,  1056,  1061,  1070,  1071,  1072,  1073,  1074,
    1075,  1080,  1081,  1082,  1088,  1089,  1090,  1091,  1100,  1101,
    1106,  1111,  1116,  1121,  1126,  1131,  1136,  1141,  1149,  1150,
    1155,  1160,  1165,  1170,  1175,  1180,  1185,  1190,  1195,  1200,
    1205,  1210,  1215,  1220,  1225,  1230,  1235,  1240,  1245,  1250,
    1255,  1263,  1264,  1272,  1280,  1281,  1285,  1286,  1294,  1302,
    1303,  1312,  1319,  1326,  1333,  1340,  1347,  1352,  1358,  1364,
    1370,  1376,  1383,  1390,  1397,  1404,  1411,  1416,  1422,  1428,
    1434,  1440,  1446,  1452,  1458,  1464,  1470,  1476,  1482,  1488,
    1494,  1500,  1506,  1512,  1518,  1524,  1530,  1536,  1542,  1548,
    1554,  1560,  1566,  1572,  1578,  1584,  1590,  1596,  1602,  1608,
    1614,  1620,  1626,  1632,  1638,  1644,  1650,  1656,  1662,  1668,
    1674,  1680,  1687,  1694,  1700,  1706,  1712,  1718,  1725,  1732,
    1738,  1744,  1750,  1756,  1762,  1768,  1774,  1782,  1792,  1798,
    1806,  1816,  1823,  1829,  1837,  1847,  1854,  1860,  1866,  1872,
    1882,  1892,  1900,  1908,  1914,  1920,  1930,  1936,  1942,  1950,
    1962,  1968,  1974,  1985,  1990,  1995,  2000,  2005,  2010,  2015,
    2020,  2028,  2034,  2043,  2045,  2047,  2049,  2051,  2053,  2055,
    2057,  2059,  2061,  2063,  2065,  2067,  2069,  2071,  2073,  2075,
    2077,  2079,  2081,  2083,  2085,  2087,  2089,  2091,  2093,  2095,
    2097,  2101,  2105,  2113,  2117,  2121,  2123,  2125,  2127,  2129,
    2131,  2133,  2135
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "CONDITIONLESS_JOIN",
  "CROSS", "FULL", "INNER", "JOIN", "LEFT", "NATURAL", "RIGHT", "ON",
  "USING", "UNION", "EXCEPT", "INTERSECT", "OR", "AND", "NOT", "COMP_LE",
  "COMP_LT", "COMP_EQ", "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE",
  "BETWEEN", "IN", "IS", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'",
  "UMINUS", "WITH", "'('", "')'", "'.'", "';'", "ADD", "ANY", "ALL",
  "ALTER", "AS", "ASC", "BEGI", "BIGINT", "BINARY", "BOOLEAN", "BOTH",
  "BROWSE", "BY", "CASCADE", "CASE", "CHARACTER", "CLUSTER", "COMMENT",
  "COMMIT", "CONSISTENT", "COLUMN", "COLUMNS", "CREATE", "CREATETIME",
  "CURRENT_USER", "CHANGE_OBI", "SWITCH_CLUSTER", "DATE", "DATETIME",
  "DEALLOCATE", "DECIMAL", "DEFAULT", "DELETE", "DESC", "DESCRIBE",
  "DISTINCT", "DOUBLE", "DROP", "DUAL", "ELSE", "END", "END_P", "ERROR",
  "EXECUTE", "EXISTS", "EXPLAIN", "FETCH", "FIRST", "FLOAT", "FOR", "FROM",
  "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT", "GROUP", "HAVING",
  "HINT_BEGIN", "HINT_END", "HOTSPOT", "IDENTIFIED", "IF", "INTEGER",
  "INSERT", "INTO", "KEY", "LEADING", "LIMIT", "LOCAL", "LOCKED",
  "MEDIUMINT", "MEMORY", "MODIFYTIME", "MASTER", "NEXT", "NOEXPAND",
  "NUMERIC", "OFFSET", "ONLY", "ORDER", "OPTION", "OUTER", "PARAMETERS",
  "PERCENT", "PASSWORD", "PRECISION", "PREPARE", "PRIMARY", "READ_STATIC",
  "REAL", "RENAME", "REPLACE", "RESTRICT", "PRIVILEGES", "REVOKE",
  "ROLLBACK", "ROW", "ROWS", "KILL", "READ_CONSISTENCY", "SCHEMA", "SCOPE",
  "SELECT", "SESSION", "SESSION_ALIAS", "SET", "SHOW", "SMALLINT",
  "SNAPSHOT", "SPFILE", "START", "STATIC", "SYSTEM", "STRONG",
  "SET_MASTER_CLUSTER", "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES",
  "THEN", "TIES", "TIME", "TIMESTAMP", "TINYINT", "TRAILING",
  "TRANSACTION", "TO", "TOP", "UPDATE", "USER", "VALUES", "VARCHAR",
  "VARBINARY", "WHERE", "WHEN", "WORK", "PROCESSLIST", "QUERY",
  "CONNECTION", "WEAK", "LOOP", "HASH", "MERGE", "REMOTE", "CONCAT",
  "OPTIMIZE", "EXPAND", "VIEWS", "FAST", "DISABLE", "EXTERNALPUSHDOWN",
  "IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX", "KEEP", "PLAN", "KEEPFIXED",
  "MAX_GRANT_PERCENT", "MIN_GRANT_PERCENT", "MAXDOP", "MAXRECURSION",
  "NO_PERFORMANCE_SPOOL", "PARAMETERIZATION", "SIMPLE", "FORCED",
  "RECOMPILE", "ROBUST", "CHECKSUM", "BINARY_CHECKSUM", "RANK",
  "DENSE_RANK", "ROW_NUMBER", "NTILE", "PARTITION", "RANGE", "UNBOUNDED",
  "PRECEDING", "CURRENT", "FOLLOWING", "OVER", "VARP", "VAR", "SUM",
  "STDEVP", "STDEV", "MIN", "MAX", "LEAD", "LAST_VALUE", "LAG",
  "GROUPING_ID", "GROUPING", "FIRST_VALUE", "COUNT_BIG", "COUNT",
  "CHECKSUM_AGG", "AVG", "SYSTEM_USER", "STUFF", "SESSION_USER", "NULLIF",
  "MIN_ACTIVE_ROWVERSION", "ISNULL", "IDENTITY", "GETUTCDATE", "GETDATE",
  "DATEPART", "DATENAME", "DATEDIFF", "DATEADD", "CURRENT_TIMESTAMP",
  "CONVERT", "COALESCE", "CAST", "','", "$accept", "sql_stmt", "stmt_list",
  "stmt", "select_stmt", "select_with_parens", "select_no_parens",
  "opt_option_query_hint", "query_hint_list", "query_hint",
  "select_clause", "simple_select", "opt_top", "top_count", "top_percent",
  "opt_for_clause", "opt_where", "opt_from_clause", "opt_hint",
  "opt_groupby", "opt_order_by", "order_by", "offset_fetch", "sort_list",
  "sort_key", "opt_asc_desc", "opt_having", "with_clause", "with_list",
  "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_factor_non_join", "opt_with_table_hint", "table_hint_list",
  "table_hint", "table_hint_expr", "opt_simple_ident_list_with_parens",
  "relation_factor", "joined_table", "join_type", "join_hint",
  "join_outer", "expr_list", "column_ref", "expr_const", "simple_expr",
  "arith_expr", "expr", "in_expr", "case_expr", "case_arg",
  "when_clause_list", "when_clause", "case_default", "func_expr",
  "over_clause", "row_or_range_clause", "window_frame_extent",
  "distinct_or_all", "relation_name", "column_label", "data_type", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    43,    45,
      42,    47,    37,   293,    94,   294,   295,    40,    41,    46,
      59,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,    44
};
# endif

#define YYPACT_NINF -626

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-626)))

#define YYTABLE_NINF -130

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     179,    29,    13,  -626,  -626,    52,    -7,   179,    56,  -626,
    -626,   233,  -626,     2,    65,  -626,  -119,    94,   130,     1,
    -626,  -626,  -626,  -626,     1,     1,     1,   127,   135,  -626,
     233,   247,   237,  -626,    29,  -626,  -626,  -626,  -626,   109,
       2,     2,     2,  2326,   245,   180,   135,    81,   314,   327,
    -626,   246,  1243,   372,   372,  -626,    -3,  -626,  -626,  -626,
    -626,  -626,  -626,   398,   399,  2326,  2587,  2587,   831,  2326,
    -626,   327,   421,   457,   473,   474,   487,   491,   496,   500,
     521,   522,   523,   526,   539,   545,   556,   557,   565,   568,
     583,   584,   585,   586,   587,  -626,   588,  -626,   589,  -626,
     591,   593,   594,   595,   597,   613,   621,   624,  -626,   625,
     626,   677,  -626,   244,   197,  -626,  -626,  -626,   414,  2350,
    -626,  -626,  -626,   678,  -626,   180,   247,  -626,  -626,   407,
    -626,  2326,   623,   504,  -626,   627,   462,  2641,  1504,    50,
    1554,  1604,  2396,   423,   423,   239,   679,   445,  1656,   544,
    -626,   881,  1142,   683,   684,   685,  2326,  1192,  1192,  1192,
    1192,  1192,  1192,  1192,  2326,  2326,  2326,  2326,  2326,  2326,
     519,   780,  1192,  1192,  2326,  2326,  2326,   426,   687,   741,
     731,   788,   789,   792,   426,  2326,  2326,  2326,  -626,  2326,
    2587,  2587,  2587,  2587,  2587,  2587,  2587,  2326,  2326,   333,
    2326,  2326,  2326,  2326,  2326,  2326,  2326,  2326,  2587,   750,
     312,  -626,  -626,  -626,  1113,  -626,  -626,  2687,   628,   753,
     242,   616,  1243,  -626,   799,  -626,  -626,   755,   119,  -626,
      17,  -626,   756,  -626,   757,  -626,  2326,  2326,   724,   544,
     767,  -626,   768,   773,  -626,   774,   596,   596,   596,  2712,
    -626,  -626,  2875,  2326,  2900,  2326,  2925,  2326,  2950,  2326,
    2975,  2326,  3000,  2326,  3025,  2326,    47,  3050,   248,   775,
    3075,  3100,   776,  3125,  2326,   778,  3150,  2326,  3175,  2326,
    3200,  2326,   592,   686,   906,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,   -45,  -626,  -626,   553,   564,   566,   567,
     576,   781,  2383,  1318,  -626,   423,   423,   798,   798,   798,
     798,  -626,  2016,  2396,  2326,  2587,   750,   463,   463,   463,
     463,   463,   463,   356,   342,   704,   831,  -626,  -626,  -626,
    -626,  -626,   326,  -116,   725,   828,    -2,    14,   823,   746,
     649,   845,  -626,   646,   647,   824,   825,   853,   854,  -626,
    -120,  -626,   655,   813,   598,   728,  -626,   692,   816,    11,
      53,  -626,    27,  -626,   150,  -626,  2326,   760,  -626,  -626,
    -626,  1865,    61,   220,   865,  -626,  -626,  -626,   622,  2326,
     782,  -626,  -626,  -626,  -626,  -626,   827,  -626,  -626,  -626,
     596,   596,  3225,   596,  3250,   596,  3275,   596,  3300,   596,
    3325,   596,  3350,   596,  3375,   596,  2326,   596,   596,  2326,
    -626,  -626,   596,   596,   596,  3400,   596,   596,  3425,  -626,
    3450,   596,  3475,   866,  2326,  2326,  -626,   867,  2326,  2326,
    2326,  2326,  2326,  -626,   426,   779,   783,   342,   769,  -626,
    2587,   833,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,   870,  -626,  -626,  -626,  -626,
     319,   323,  -626,  -626,  -626,  -626,  -626,  -626,  1113,  -626,
      62,   328,   537,   834,  -626,   880,  -626,  -626,    65,   875,
     759,   338,   242,   759,   759,   242,   878,   847,   880,  -626,
     849,  1656,   835,   793,  -626,   852,   394,  -626,   899,  1915,
     101,   855,  2326,  1656,  -626,    20,  -626,  -626,   596,  -626,
     596,  -626,   596,  -626,   596,  -626,   596,  -626,   596,  -626,
     596,  -626,   324,  -626,  -626,   373,  -626,  -626,  -626,   596,
    -626,  -626,   596,  -626,  -626,   596,   639,  3500,  3525,   641,
    3550,  3575,   937,  1267,   403,   860,    74,   168,  2587,   414,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,   861,   121,  -626,
      65,  -626,   242,  -626,   338,  -626,  -626,  -626,  -626,  -626,
     475,   338,   338,  -626,   242,  2537,   849,  -626,  2326,  2326,
    -626,  -626,  1965,   225,   436,  -626,   863,   864,  -626,   230,
    1656,  -626,    15,   846,    15,    -1,   868,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,   596,  2326,   596,  2326,  -626,  -626,
    -626,   907,  -626,  -626,   909,  -626,  -626,  2326,  2326,  -626,
    2326,  -626,  2326,  2326,  2326,  2326,   414,   183,   869,   912,
    -626,  -626,  -626,  2326,   876,  -626,  -626,   495,   280,  2635,
     874,   444,  -626,  -626,  -626,  -626,  1656,  -626,   877,   469,
    -626,  2226,   255,  -626,   261,  -626,  -626,   -54,   691,   698,
     796,  -626,  2326,  -626,  -626,   879,  -626,  -626,  3600,  -626,
    3625,   681,   900,  3650,  3675,  3700,  1629,  1679,  1990,  2040,
     898,   946,   948,  -626,  1656,   247,  2326,   905,  2326,   214,
    -626,  -626,  2537,  -626,  -626,  2276,   265,  -626,   910,  -626,
    -626,  -626,  -626,   194,   313,   805,  -626,  -626,  -626,   -40,
    -626,   596,   596,  2326,  -626,  -626,  -626,  -626,   829,   830,
     848,   850,   851,   856,   857,   858,   951,  -626,  -626,   927,
    1656,   247,  1656,   497,   952,  -626,  -626,   929,  -626,  -626,
    -626,   932,   954,   957,   958,   959,  -626,     0,   941,  -626,
    -626,  3725,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,   942,   254,   944,  -626,   -51,   -50,   -26,   -12,
      22,  -626,   945,  -626,  -626,  -626,   507,   989,   337,   350,
     859,   361,   365,   896,   370,   371,   897,   374,   381,   908,
     382,   385,   911,  -626,   991,   949,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,   956
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,    66,     0,     0,     3,     7,    45,
       8,    69,    44,     0,    95,    91,    92,    45,     0,   100,
       1,     2,     4,     6,   100,   100,   100,     0,    60,    70,
      69,     0,     0,    96,     0,    10,     9,   101,   102,    50,
       0,     0,     0,     0,     0,    13,    60,    98,     0,     0,
      93,     0,     0,    47,    49,    48,   158,   175,   176,   178,
     177,   179,   180,     0,     0,     0,     0,     0,     0,   224,
     318,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,     0,   330,     0,   327,
       0,     0,     0,     0,     0,     0,     0,     0,   317,     0,
       0,     0,   186,    71,    83,   181,   182,   188,   198,    86,
     184,   185,    61,     0,    11,    13,     0,    97,    94,    55,
      57,     0,    51,     0,   108,    64,   103,   105,     0,     0,
       0,     0,   209,   189,   190,   186,     0,   156,   225,     0,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,    88,    85,     0,    12,    99,     0,     0,    53,
       0,    62,     0,   374,     0,   106,   236,     0,   159,   160,
       0,   238,     0,   237,     0,   183,     0,     0,   229,   226,
       0,   240,     0,     0,   239,     0,     0,     0,     0,     0,
     371,   372,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   379,   380,   382,   378,   377,
     381,   376,   375,     0,   324,   323,     0,     0,     0,     0,
       0,     0,     0,     0,    84,   191,   192,   193,   194,   195,
     197,   196,   208,   207,     0,     0,     0,   199,   200,   201,
     203,   202,   204,   220,   205,     0,     0,   221,   218,   212,
     210,   214,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,     0,     0,     0,    38,
       0,    42,     0,     0,    15,    56,    52,     0,   131,     0,
     129,    65,   109,   111,   119,   112,     0,    67,   104,   107,
     246,     0,     0,     0,     0,   248,   247,   157,     0,     0,
       0,   227,   315,   250,   311,   249,     0,   251,   252,   253,
       0,   284,     0,   280,     0,   268,     0,   276,     0,   272,
       0,   264,     0,   260,     0,     0,     0,     0,     0,     0,
     302,   301,     0,   298,   294,     0,   292,   288,     0,   299,
       0,   256,     0,     0,     0,     0,   326,     0,     0,     0,
       0,     0,     0,   316,     0,    73,    74,   206,     0,   219,
       0,     0,   213,   211,   215,    27,    28,    18,    22,    24,
      20,    17,    23,    21,    19,     0,    25,    26,    30,    31,
       0,     0,    36,    37,    40,    41,    43,    14,     0,    54,
       0,    45,     0,   112,   373,     0,   130,   118,   129,     0,
     154,   149,     0,   154,   154,     0,     0,     0,     0,   113,
     119,    63,     0,    89,   235,     0,   161,   162,     0,     0,
       0,     0,     0,   230,   223,     0,   254,   283,   286,   279,
     282,   267,   270,   275,   278,   271,   274,   263,   266,   259,
     262,   308,     0,   304,   305,     0,   303,   297,   293,   296,
     291,   287,   290,   300,   255,   258,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
     222,    39,    33,    32,    35,    34,    16,   132,     0,   139,
     129,   117,     0,   155,   149,   150,   151,   152,   153,   148,
       0,   149,   149,   110,     0,     0,   119,   115,     0,     0,
      46,   245,     0,     0,     0,   234,     0,   165,   166,     0,
     228,   340,     0,     0,     0,     0,     0,   285,   281,   269,
     277,   273,   265,   261,     0,     0,     0,     0,   295,   289,
     257,     0,   328,   332,     0,   322,   321,     0,     0,   313,
       0,   312,     0,     0,     0,     0,   217,     0,   134,     0,
     116,   144,   145,     0,     0,   146,   147,     0,   127,     0,
       0,   121,   124,   126,   114,    68,    90,   233,     0,   163,
     164,     0,     0,   244,     0,   173,   174,     0,     0,     0,
       0,   341,     0,   342,   338,     0,   339,   309,     0,   306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     133,     0,     0,   138,   141,     0,     0,     0,     0,     0,
     125,   120,     0,   123,   243,     0,     0,   232,     0,   171,
     172,   169,   170,     0,     0,     0,   344,   343,   345,     0,
     334,     0,     0,     0,   325,   320,   319,   314,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   137,   136,     0,
     140,     0,   128,     0,     0,   122,   231,     0,   167,   168,
     242,     0,     0,     0,     0,     0,   337,     0,     0,   310,
     307,     0,    75,    77,    76,    78,    79,    81,    80,    82,
     135,   143,     0,     0,     0,   241,     0,     0,     0,     0,
       0,   336,     0,   335,   329,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   333,     0,     0,   352,   367,   347,   362,
     357,   355,   370,   350,   365,   360,   351,   366,   346,   361,
     356,   354,   369,   349,   364,   359,   353,   368,   348,   363,
     358,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -626,  -626,   988,  -626,  -626,    21,   290,   883,   536,  -626,
     273,  -626,  -626,  -626,  -626,   960,  -626,  -626,  -626,  -626,
     975,  -500,  -626,   820,  -626,  -626,  -626,  -626,  1012,  -626,
    -626,  1033,  -125,   393,   832,  -626,   570,  -335,  -626,  -478,
    -625,  -626,   418,  -453,  -626,   699,  -626,  -122,  -167,  -134,
    -626,  -626,  -626,   -56,   -43,   744,  -626,  -626,   871,  -626,
    -626,  -393,  -210,  -559,   501,   253,  -267,   872,  -182
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,   112,    18,   124,   353,   354,
      11,    12,    52,   132,   133,    45,   367,   221,    19,   493,
      28,    29,   188,   113,   114,   213,   580,    13,    15,    16,
      32,   476,    48,    39,   135,   136,   361,   362,   363,   489,
     640,   641,   642,   477,   364,   365,   486,   569,   564,   146,
     115,   116,   117,   118,   147,   328,   120,   149,   238,   239,
     380,   121,   387,   596,   661,   253,   478,   225,   293
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     119,   216,   300,   426,   227,   595,   232,   234,   746,   137,
     143,   144,   577,   449,   358,   445,   693,   242,   245,   450,
     373,     9,   142,    17,   472,   561,   148,   703,     9,   452,
     778,   781,    14,   269,     9,   453,   665,   388,   389,   479,
     480,   481,   482,   483,   138,   484,   139,   664,   771,     2,
     657,   301,    20,   228,    37,   784,   474,     1,   359,     1,
       2,     9,     9,     9,   496,   557,   374,   735,   591,   787,
     128,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,    21,   446,    38,   217,   145,
     229,    27,   150,   464,   465,   405,   658,   490,   644,   230,
      31,   497,   377,   790,   587,   451,    23,   630,   475,   592,
     498,   558,    31,   249,   252,   254,   256,   258,   260,   262,
     264,   266,   267,   268,   628,   270,   271,   273,   276,   278,
     280,   282,   283,   284,   305,   306,   307,   308,   309,   310,
     311,   588,    35,   302,   303,    34,   119,   570,   592,   592,
     748,    27,   325,   474,   312,   313,     4,   317,   318,   319,
     320,   321,   322,   323,   324,     4,   371,     4,   372,   592,
     629,   704,   622,   705,   779,   782,   780,   783,    36,   137,
     506,   507,   643,   509,   594,   511,   680,   513,   772,   515,
      43,   517,   441,   519,   378,   521,   487,   523,   524,   785,
     623,   786,   526,   527,   528,   488,   530,   531,   560,   747,
     392,   534,   394,   788,   396,   789,   398,   733,   400,   427,
     402,   576,   404,   594,   594,     1,     2,   631,   649,     3,
     327,   415,   681,   655,   418,    44,   420,   495,   422,   637,
     659,   360,   660,   593,   594,   358,   643,   791,   643,   792,
      47,   129,   545,   130,    24,    25,    26,   776,   699,   438,
     -45,   -45,   -45,   734,   701,   650,   624,   499,   738,   500,
     656,   437,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,    30,    35,    51,   359,
      10,   485,    49,   131,   625,   700,   408,    10,   597,   643,
     598,   702,   599,   777,   600,   739,   601,   122,   602,   688,
     603,   406,   123,    53,    54,    55,   571,   572,   329,   608,
     330,   331,   609,   491,   552,   610,   553,   138,   554,   689,
     555,   474,   442,     4,   443,   444,   503,   327,   332,   -45,
    -129,  -129,  -129,  -129,  -129,   126,  -129,   145,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   127,   522,    27,   586,   525,   314,   315,   316,
     -45,   -45,   604,   187,     2,    31,    35,   208,   209,   210,
     471,   537,   538,   475,   549,   540,   541,   542,   543,   544,
     207,   208,   209,   210,   667,    26,   669,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   255,   257,   259,   261,   263,   265,    40,    41,    42,
     741,   606,   742,   274,   277,   279,   281,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   582,   632,   583,   645,   140,   141,   638,   648,   635,
     636,   619,   190,   191,   192,   193,   194,   195,   196,   590,
      63,   189,    64,   192,   193,   194,   195,   196,   151,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   651,   285,   652,   286,   479,   480,   481,
     482,   483,   626,   484,   633,   634,   206,   207,   208,   209,
     210,   749,   750,   360,   152,   287,   360,   479,   480,   481,
     482,   483,   409,   484,   686,   687,   695,   698,   696,    70,
     153,   154,    56,    57,    58,    59,    60,    61,   709,    62,
     565,   566,   567,   568,   155,    63,   646,    64,   156,   743,
     288,   744,   -58,   157,   371,    65,   763,   158,   289,   479,
     480,   481,   482,   483,   582,   484,   794,    66,    67,   272,
     729,   737,   668,   796,   670,   797,    68,   290,   159,   160,
     161,   639,   250,   162,   673,   674,   798,   675,   799,   676,
     677,   678,   679,   360,    69,   291,   163,   801,   605,   802,
     684,   803,   164,   804,    70,   360,   806,   808,   807,   809,
     811,   292,   812,   165,   166,   251,   762,   813,   816,   814,
     817,   818,   167,   819,    71,   168,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     169,   170,   171,   172,   173,   174,   175,   607,   176,   219,
     177,   178,   179,   730,   180,   732,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     181,    72,    73,    74,    75,    76,    77,   620,   182,   218,
     751,   183,   184,   185,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   692,   236,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   186,   214,   222,   235,   220,   440,
     237,   246,   247,   248,   296,   294,    72,    73,    74,    75,
      76,    77,   190,   191,   192,   193,   194,   195,   196,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,    56,    57,    58,    59,    60,    61,   295,
      62,   297,   298,   502,   548,   299,    63,   326,    64,   357,
     356,   366,   223,   370,   375,   376,    65,   190,   191,   192,
     193,   194,   195,   196,   379,   382,   383,   428,    66,    67,
     275,   384,   385,   410,   413,   386,   416,    68,   429,   433,
     430,   431,   447,   250,    56,    57,    58,    59,    60,    61,
     432,    62,   196,   448,   454,    69,   455,    63,   456,    64,
     457,   458,   459,   460,   461,    70,   423,    65,   462,   463,
     466,   467,   468,   -59,   469,   470,   251,   492,   501,    66,
      67,   536,   539,   504,   505,    71,   546,     1,    68,   551,
     547,   550,   559,   474,    56,    57,    58,    59,    60,    61,
     562,    62,   563,   574,   575,   487,    69,    63,   578,    64,
     581,   579,   584,   611,   589,   614,    70,    65,   621,   662,
     627,   653,   671,   654,   672,   683,   666,   706,   682,    66,
      67,   240,   691,   685,   707,   694,    71,   710,    68,   241,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   708,   713,    69,   726,   714,   727,
     424,   728,   731,   745,   760,   764,    70,   766,   740,   752,
     753,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   761,    71,   765,   754,   767,
     755,   756,   768,   769,   770,     4,   757,   758,   759,   773,
     775,   499,   795,   793,   821,    22,   651,    72,    73,    74,
      75,    76,    77,   695,   556,    46,   125,   800,   215,   304,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   805,   810,    50,    33,    72,    73,
      74,    75,    76,    77,   368,   573,   815,   690,   473,   820,
     439,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   663,   369,     0,    72,    73,
      74,    75,    76,    77,     0,     0,     0,     0,     0,     0,
     381,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,    56,    57,    58,    59,    60,
      61,     0,    62,     0,     0,     0,     0,     0,    63,     0,
      64,     0,     0,     0,     0,     0,     0,     0,    65,     0,
     425,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    67,   243,     0,     0,     0,     0,     0,     0,    68,
     244,     0,     0,     0,     0,    56,    57,    58,    59,    60,
      61,   617,    62,     0,     0,     0,     0,    69,    63,     0,
      64,     0,     0,     0,     0,     0,   333,    70,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    67,     0,     0,     0,     0,     0,    71,     0,    68,
       0,     0,     0,     0,   334,   250,    56,    57,    58,    59,
      60,    61,     0,    62,     0,     0,     0,    69,     0,    63,
       0,    64,     0,     0,     0,     0,     0,    70,     0,    65,
       0,     0,     0,     0,     0,     0,     0,     0,   251,     0,
       0,    66,    67,   134,     0,     0,     0,    71,     0,     0,
      68,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   335,   336,   337,    69,   338,
     339,   340,     0,   341,     0,     0,   342,   343,    70,   344,
     345,   346,   347,   348,   349,   350,     0,     0,   351,   352,
       0,     0,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,     0,     0,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,    72,
      73,    74,    75,    76,    77,     0,     0,     0,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,   435,   436,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,    56,    57,    58,
      59,    60,    61,     0,    62,     0,     0,     0,     0,     0,
      63,     0,    64,     0,     0,     0,     0,     0,     0,     0,
      65,   618,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,     0,     0,     0,     0,
       0,    68,   226,     0,     0,     0,     0,    56,    57,    58,
      59,    60,    61,     0,    62,     0,     0,     0,     0,    69,
      63,     0,    64,     0,     0,     0,     0,     0,     0,    70,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,     0,     0,     0,    71,
       0,    68,   231,     0,     0,     0,     0,    56,    57,    58,
      59,    60,    61,     0,    62,     0,     0,     0,     0,    69,
      63,     0,    64,     0,     0,     0,     0,     0,     0,    70,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,     0,     0,     0,    71,
       0,    68,   233,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,     0,     0,     0,     0,     0,    71,
       0,     0,     0,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,     0,     0,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
       0,    72,    73,    74,    75,    76,    77,   718,   719,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,     0,     0,
       0,    72,    73,    74,    75,    76,    77,   720,   721,     0,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,    56,    57,
      58,    59,    60,    61,     0,    62,     0,     0,     0,     0,
       0,    63,     0,    64,     0,     0,     0,     0,     0,     0,
       0,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    67,     0,     0,     0,     0,     0,
       0,     0,    68,   494,     0,     0,     0,     0,    56,    57,
      58,    59,    60,    61,     0,    62,     0,     0,     0,     0,
      69,    63,     0,    64,     0,     0,     0,     0,     0,     0,
      70,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    67,     0,     0,     0,     0,     0,
      71,     0,    68,   585,     0,     0,     0,     0,    56,    57,
      58,    59,    60,    61,     0,    62,     0,     0,     0,     0,
      69,    63,     0,    64,     0,     0,     0,     0,     0,     0,
      70,    65,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    66,    67,     0,     0,     0,     0,     0,
      71,     0,    68,   647,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,    72,    73,    74,    75,    76,    77,   722,   723,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,     0,
       0,     0,    72,    73,    74,    75,    76,    77,   724,   725,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,    56,
      57,    58,    59,    60,    61,     0,    62,     0,     0,     0,
       0,     0,    63,     0,    64,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,     0,     0,     0,     0,
       0,     0,     0,    68,   697,     0,     0,     0,     0,    56,
      57,    58,    59,    60,    61,     0,    62,     0,     0,     0,
       0,    69,    63,     0,    64,     0,     0,     0,     0,     0,
       0,    70,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,     0,     0,     0,     0,
       0,    71,     0,    68,   736,     0,     0,     0,     0,    56,
      57,    58,    59,    60,    61,     0,    62,     0,     0,     0,
       0,    69,    63,     0,    64,     0,     0,     0,     0,     0,
       0,    70,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,     0,     0,     0,     0,
       0,    71,     0,    68,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,   211,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,    71,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   212,     0,     0,     0,   434,     0,
       0,     0,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
       0,     0,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     638,     0,     0,    72,    73,    74,    75,    76,    77,     0,
       0,     0,     0,    63,     0,    64,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
      56,    57,    58,    59,    60,    61,     0,    62,     0,     0,
       0,     0,     0,    63,     0,    64,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,     0,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,   638,     0,
       0,     0,     0,     0,   223,     0,     0,     0,     0,     0,
       0,    63,    69,    64,     0,     0,     0,     0,     0,     0,
       0,     0,    70,     0,   639,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   355,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
     390,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     0,     0,     0,    72,    73,    74,    75,    76,    77,
       0,     0,     0,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,     0,    72,    73,    74,    75,    76,    77,     0,     0,
       0,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   391,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   393,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   395,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   399,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   401,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   403,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   407,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   412,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   414,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   417,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   419,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   421,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   508,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   510,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   512,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   514,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   516,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   518,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   520,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   529,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   532,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   533,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   535,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   612,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   613,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   615,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   616,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   711,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   712,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   715,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   716,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   717,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   774
};

static const yytype_int16 yycheck[] =
{
      43,   126,   184,    48,   138,   505,   140,   141,    48,    52,
      66,    67,   490,    15,     3,   131,   641,   151,   152,    21,
       3,     0,    65,     2,   359,   478,    69,    81,     7,    15,
      81,    81,     3,   167,    13,    21,   595,   247,   248,    12,
      13,    14,    15,    16,    47,    18,    49,    48,    48,    47,
      35,   185,     0,     3,    53,    81,     3,    46,    47,    46,
      47,    40,    41,    42,     3,     3,    49,   692,    48,    81,
      49,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    92,   202,    86,   131,    68,
      40,   131,    71,   213,   214,    48,    81,   364,   576,    49,
      47,    40,   236,    81,     3,   107,    50,   560,    55,   149,
      49,    49,    47,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,     3,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   190,   191,   192,   193,   194,   195,
     196,    40,    48,   186,   187,   264,   189,   482,   149,   149,
     709,   131,   208,     3,   197,   198,   154,   200,   201,   202,
     203,   204,   205,   206,   207,   154,    47,   154,    49,   149,
      49,   225,    98,   227,   225,   225,   227,   227,    48,   222,
     390,   391,   575,   393,   224,   395,     3,   397,   747,   399,
      63,   401,   326,   403,   237,   405,    46,   407,   408,   225,
     126,   227,   412,   413,   414,    55,   416,   417,   475,   709,
     253,   421,   255,   225,   257,   227,   259,     3,   261,   264,
     263,   488,   265,   224,   224,    46,    47,   562,     3,    50,
     209,   274,    49,     3,   277,   100,   279,   371,   281,   574,
     225,   220,   227,   223,   224,     3,   639,   225,   641,   227,
       3,     5,   434,     7,    21,    22,    23,     3,     3,   315,
      21,    22,    23,    49,     3,    40,    98,    47,     3,    49,
      40,   314,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    13,    48,   179,    47,
       0,   264,    55,    47,   126,    40,    48,     7,   508,   692,
     510,    40,   512,    49,   514,    40,   516,    62,   518,    29,
     520,   264,   132,    40,    41,    42,   483,   484,     6,   529,
       8,     9,   532,   366,     5,   535,     7,    47,     5,    49,
       7,     3,     6,   154,     8,     9,   379,   316,    26,   100,
      12,    13,    14,    15,    16,   264,    18,   326,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    48,   406,   131,   499,   409,    34,    35,    36,
     131,   132,    48,   129,    47,    47,    48,    35,    36,    37,
     359,   424,   425,    55,   440,   428,   429,   430,   431,   432,
      34,    35,    36,    37,   604,    23,   606,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,   158,   159,   160,   161,   162,   163,    24,    25,    26,
     226,    48,   228,   170,   171,   172,   173,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    47,   564,    49,   578,    47,    47,     3,   582,   571,
     572,    48,    38,    39,    40,    41,    42,    43,    44,   502,
      16,   264,    18,    40,    41,    42,    43,    44,    47,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    47,    58,    49,    60,    12,    13,    14,
      15,    16,   548,    18,    19,    20,    33,    34,    35,    36,
      37,   711,   712,   482,    47,    79,   485,    12,    13,    14,
      15,    16,   264,    18,    19,    20,    47,   651,    49,    75,
      47,    47,     3,     4,     5,     6,     7,     8,   662,    10,
     192,   193,   194,   195,    47,    16,   579,    18,    47,   226,
     114,   228,   135,    47,    47,    26,    49,    47,   122,    12,
      13,    14,    15,    16,    47,    18,    49,    38,    39,    40,
     685,   695,   605,   226,   607,   228,    47,   141,    47,    47,
      47,   127,    53,    47,   617,   618,   226,   620,   228,   622,
     623,   624,   625,   562,    65,   159,    47,   226,   264,   228,
     633,   226,    47,   228,    75,   574,   226,   226,   228,   228,
     226,   175,   228,    47,    47,    86,   731,   226,   226,   228,
     228,   226,    47,   228,    95,    47,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      47,    47,    47,    47,    47,    47,    47,   264,    47,   135,
      47,    47,    47,   686,    47,   688,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      47,   217,   218,   219,   220,   221,   222,   264,    47,    46,
     713,    47,    47,    47,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   264,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    47,    47,   264,    48,   101,    25,
     186,    48,    48,    48,     3,    48,   217,   218,   219,   220,
     221,   222,    38,    39,    40,    41,    42,    43,    44,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,     3,     4,     5,     6,     7,     8,    48,
      10,     3,     3,   171,    25,     3,    16,    47,    18,    46,
     172,   185,     3,    48,    48,    48,    26,    38,    39,    40,
      41,    42,    43,    44,    90,    48,    48,   264,    38,    39,
      40,    48,    48,    48,    48,   229,    48,    47,   264,    48,
     264,   264,   107,    53,     3,     4,     5,     6,     7,     8,
     264,    10,    44,    15,    21,    65,   100,    16,   199,    18,
       5,   205,   205,    29,    29,    75,   264,    26,     5,     5,
     205,    48,   264,   135,   172,    49,    86,   107,     3,    38,
      39,     5,     5,    91,    47,    95,    97,    46,    47,     9,
      97,    48,    48,     3,     3,     4,     5,     6,     7,     8,
      15,    10,   133,    15,    47,    46,    65,    16,    63,    18,
      48,   108,     3,   264,    49,   264,    75,    26,    48,    63,
      49,    48,     5,    49,     5,     3,    48,   226,    49,    38,
      39,    40,    48,    47,   226,    48,    95,    48,    47,    48,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,   148,   264,    65,    49,    48,     3,
     264,     3,    47,   148,     3,     3,    75,    25,    48,   130,
     130,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    48,    95,    48,   130,    25,
     130,   130,    25,    25,    25,   154,   130,   130,   130,    48,
      48,    47,     3,    48,     3,     7,    47,   217,   218,   219,
     220,   221,   222,    47,   468,    30,    46,   148,   125,   189,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   148,   148,    34,    14,   217,   218,
     219,   220,   221,   222,   222,   485,   148,   639,   359,   148,
     316,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   594,   224,    -1,   217,   218,
     219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,
     239,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
     264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,   264,    10,    -1,    -1,    -1,    -1,    65,    16,    -1,
      18,    -1,    -1,    -1,    -1,    -1,   103,    75,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    95,    -1,    47,
      -1,    -1,    -1,    -1,   131,    53,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    -1,    -1,    65,    -1,    16,
      -1,    18,    -1,    -1,    -1,    -1,    -1,    75,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    38,    39,    40,    -1,    -1,    -1,    95,    -1,    -1,
      47,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,   192,   193,   194,    65,   196,
     197,   198,    -1,   200,    -1,    -1,   203,   204,    75,   206,
     207,   208,   209,   210,   211,   212,    -1,    -1,   215,   216,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    -1,
      -1,    -1,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    -1,    -1,   217,
     218,   219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,    -1,    -1,    -1,   217,
     218,   219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,    -1,    -1,    -1,    -1,
     217,   218,   219,   220,   221,   222,   148,   149,    -1,    -1,
      -1,    -1,    -1,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,   264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,    65,
      16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    47,    48,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,    65,
      16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    47,    48,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    65,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    75,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    95,
      -1,    -1,    -1,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    -1,    -1,    -1,
      -1,   217,   218,   219,   220,   221,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,    -1,    -1,
      -1,   217,   218,   219,   220,   221,   222,   148,   149,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,    -1,    -1,
      -1,   217,   218,   219,   220,   221,   222,   148,   149,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      65,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    47,    48,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      65,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    47,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      95,    -1,    -1,    -1,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,   217,   218,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,    -1,   217,   218,   219,   220,   221,   222,   148,   149,
      -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,    -1,   217,   218,   219,   220,   221,   222,   148,   149,
      -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    65,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    47,    48,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    65,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    47,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    75,    -1,    -1,    -1,    -1,    56,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    95,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    84,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,   217,   218,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
      -1,    -1,    -1,   217,   218,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
       3,    -1,    -1,   217,   218,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,    16,    -1,    18,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    47,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    16,    65,    18,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    75,    -1,   127,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    -1,
      -1,    -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,   217,   218,   219,   220,   221,   222,
      48,    -1,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,    -1,    -1,    -1,   217,   218,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,    -1,   217,   218,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    46,    47,    50,   154,   266,   267,   268,   269,   270,
     271,   275,   276,   292,     3,   293,   294,   270,   271,   283,
       0,    92,   267,    50,    21,    22,    23,   131,   285,   286,
     275,    47,   295,   296,   264,    48,    48,    53,    86,   298,
     298,   298,   298,    63,   100,   280,   285,     3,   297,    55,
     293,   179,   277,   275,   275,   275,     3,     4,     5,     6,
       7,     8,    10,    16,    18,    26,    38,    39,    47,    65,
      75,    95,   217,   218,   219,   220,   221,   222,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   270,   288,   289,   315,   316,   317,   318,   319,
     321,   326,    62,   132,   272,   280,   264,    48,   270,     5,
       7,    47,   278,   279,    40,   299,   300,   319,    47,    49,
      47,    47,   319,   318,   318,   270,   314,   319,   319,   322,
     270,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    47,    47,    47,    47,   129,   287,   264,
      38,    39,    40,    41,    42,    43,    44,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    56,    84,   290,    47,   272,   297,   319,    46,   135,
     101,   282,   264,     3,    55,   332,    48,   314,     3,    40,
      49,    48,   314,    48,   314,    48,   264,   186,   323,   324,
      40,    48,   314,    40,    48,   314,    48,    48,    48,   319,
      53,    86,   319,   330,   319,   330,   319,   330,   319,   330,
     319,   330,   319,   330,   319,   330,   319,   319,   319,   314,
     319,   319,    40,   319,   330,    40,   319,   330,   319,   330,
     319,   330,   319,   319,   319,    58,    60,    79,   114,   122,
     141,   159,   175,   333,    48,    48,     3,     3,     3,     3,
     333,   314,   319,   319,   288,   318,   318,   318,   318,   318,
     318,   318,   319,   319,    34,    35,    36,   319,   319,   319,
     319,   319,   319,   319,   319,   318,    47,   270,   320,     6,
       8,     9,    26,   103,   131,   192,   193,   194,   196,   197,
     198,   200,   203,   204,   206,   207,   208,   209,   210,   211,
     212,   215,   216,   273,   274,    48,   172,    46,     3,    47,
     270,   301,   302,   303,   309,   310,   185,   281,   299,   332,
      48,    47,    49,     3,    49,    48,    48,   314,   319,    90,
     325,   323,    48,    48,    48,    48,   229,   327,   327,   327,
      48,    48,   319,    48,   319,    48,   319,    48,   319,    48,
     319,    48,   319,    48,   319,    48,   264,    48,    48,   264,
      48,    48,    48,    48,    48,   319,    48,    48,   319,    48,
     319,    48,   319,   264,   264,   264,    48,   264,   264,   264,
     264,   264,   264,    48,    55,   148,   149,   319,   318,   320,
      25,   314,     6,     8,     9,   131,   202,   107,    15,    15,
      21,   107,    15,    21,    21,   100,   199,     5,   205,   205,
      29,    29,     5,     5,   213,   214,   205,    48,   264,   172,
      49,   270,   302,   310,     3,    55,   296,   308,   331,    12,
      13,    14,    15,    16,    18,   264,   311,    46,    55,   304,
     331,   319,   107,   284,    48,   314,     3,    40,    49,    47,
      49,     3,   171,   319,    91,    47,   327,   327,    48,   327,
      48,   327,    48,   327,    48,   327,    48,   327,    48,   327,
      48,   327,   319,   327,   327,   319,   327,   327,   327,    48,
     327,   327,    48,    48,   327,    48,     5,   319,   319,     5,
     319,   319,   319,   319,   319,   333,    97,    97,    25,   318,
      48,     9,     5,     7,     5,     7,   273,     3,    49,    48,
     331,   308,    15,   133,   313,   192,   193,   194,   195,   312,
     302,   313,   313,   301,    15,    47,   331,   304,    63,   108,
     291,    48,    47,    49,     3,    48,   314,     3,    40,    49,
     319,    48,   149,   223,   224,   286,   328,   327,   327,   327,
     327,   327,   327,   327,    48,   264,    48,   264,   327,   327,
     327,   264,    48,    48,   264,    48,    48,   264,   264,    48,
     264,    48,    98,   126,    98,   126,   318,    49,     3,    49,
     308,   302,   312,    19,    20,   312,   312,   302,     3,   127,
     305,   306,   307,   326,   304,   314,   319,    48,   314,     3,
      40,    47,    49,    48,    49,     3,    40,    35,    81,   225,
     227,   329,    63,   329,    48,   328,    48,   327,   319,   327,
     319,     5,     5,   319,   319,   319,   319,   319,   319,   319,
       3,    49,    49,     3,   319,    47,    19,    20,    29,    49,
     307,    48,   264,   305,    48,    47,    49,    48,   314,     3,
      40,     3,    40,    81,   225,   227,   226,   226,   148,   314,
      48,    48,    48,   264,    48,    48,    48,    48,   148,   149,
     148,   149,   148,   149,   148,   149,    49,     3,     3,   297,
     319,    47,   319,     3,    49,   305,    48,   314,     3,    40,
      48,   226,   228,   226,   228,   148,    48,   286,   328,   327,
     327,   319,   130,   130,   130,   130,   130,   130,   130,   130,
       3,    48,   297,    49,     3,    48,    25,    25,    25,    25,
      25,    48,   328,    48,    48,    48,     3,    49,    81,   225,
     227,    81,   225,   227,    81,   225,   227,    81,   225,   227,
      81,   225,   227,    48,    49,     3,   226,   228,   226,   228,
     148,   226,   228,   226,   228,   148,   226,   228,   226,   228,
     148,   226,   228,   226,   228,   148,   226,   228,   226,   228,
     148,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   265,   266,   267,   267,   268,   268,   268,   269,   270,
     270,   271,   271,   272,   272,   273,   273,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   275,   275,   276,   276,   276,   276,
     277,   277,   277,   277,   277,   278,   278,   279,   279,   279,
     280,   280,   281,   281,   282,   282,   283,   284,   284,   285,
     285,   286,   286,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   288,   288,   289,   290,   290,   290,   291,
     291,   292,   293,   293,   294,   295,   295,   296,   297,   297,
     298,   298,   298,   299,   299,   300,   300,   300,   300,   301,
     301,   302,   302,   303,   303,   303,   303,   303,   303,   304,
     304,   305,   305,   305,   306,   306,   307,   307,   307,   308,
     308,   309,   309,   309,   309,   309,   309,   309,   309,   310,
     310,   310,   310,   310,   310,   311,   311,   311,   311,   312,
     312,   312,   312,   312,   313,   313,   314,   314,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   316,   316,   316,   316,   316,
     316,   317,   317,   317,   317,   317,   317,   317,   318,   318,
     318,   318,   318,   318,   318,   318,   318,   318,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   319,   319,   319,   319,   319,
     319,   320,   320,   321,   322,   322,   323,   323,   324,   325,
     325,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   327,   327,   327,   327,   327,   327,   327,
     327,   328,   328,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     329,   330,   330,   331,   332,   333,   333,   333,   333,   333,
     333,   333,   333
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     1,     3,
       3,     4,     5,     0,     4,     1,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       2,     2,     3,     3,     3,     3,     2,     2,     1,     3,
       2,     2,     1,     2,     1,     1,     9,     4,     4,     4,
       0,     2,     4,     3,     5,     1,     3,     1,     1,     3,
       0,     2,     0,     2,     0,     2,     0,     0,     3,     0,
       1,     3,     4,     3,     3,     8,     8,     8,     8,     8,
       8,     8,     8,     1,     3,     2,     0,     1,     1,     0,
       2,     2,     1,     3,     4,     0,     1,     3,     1,     3,
       0,     1,     1,     1,     3,     1,     2,     3,     1,     1,
       3,     1,     1,     2,     4,     3,     4,     3,     2,     0,
       4,     1,     3,     2,     1,     2,     1,     1,     3,     0,
       1,     1,     3,     5,     4,     7,     6,     6,     5,     3,
       6,     5,     8,     7,     4,     3,     3,     3,     2,     0,
       1,     1,     1,     1,     0,     1,     1,     3,     1,     3,
       3,     5,     5,     7,     7,     6,     6,     9,     9,     8,
       8,     8,     8,     7,     7,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     2,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     2,
       3,     4,     3,     4,     3,     4,     5,     6,     3,     4,
       3,     1,     3,     5,     0,     1,     1,     2,     4,     0,
       2,     9,     8,     7,     6,     5,     3,     3,     3,     3,
       3,    10,     9,     8,     7,     6,     4,     4,     4,     4,
       4,     4,     4,     4,     5,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     6,     5,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     5,     4,     6,     5,     5,     4,     4,
       5,     4,     4,     5,     5,     5,     7,     9,     5,     7,
       9,     4,     6,     6,     8,     4,     4,     1,     1,     8,
       8,     6,     6,     3,     3,     8,     4,     1,     6,    10,
       1,     1,     6,     8,     5,     7,     7,     6,     4,     4,
       3,     2,     2,     2,     2,     2,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
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
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2559 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2565 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2571 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2577 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2583 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2589 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2595 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2601 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* sql_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2607 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* stmt_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2613 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2619 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* select_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2625 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* select_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2631 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 271: /* select_no_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2637 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* opt_option_query_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2643 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* query_hint_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2649 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* query_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2655 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* select_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2661 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* simple_select  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2667 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* opt_top  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2673 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 278: /* top_count  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2679 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 279: /* top_percent  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2685 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 280: /* opt_for_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2691 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 281: /* opt_where  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2697 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 282: /* opt_from_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2703 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* opt_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2709 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 284: /* opt_groupby  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2715 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 285: /* opt_order_by  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2721 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 286: /* order_by  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2727 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 287: /* offset_fetch  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2733 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 288: /* sort_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2739 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 289: /* sort_key  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2745 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 290: /* opt_asc_desc  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2751 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 291: /* opt_having  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2757 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 292: /* with_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2763 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 293: /* with_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2769 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 294: /* common_table_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2775 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* opt_derived_column_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2781 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 296: /* simple_ident_list_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2787 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* simple_ident_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2793 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* opt_distinct  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2799 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* select_expr_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2805 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* projection  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2811 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* from_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2817 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* table_factor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2823 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* table_factor_non_join  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2829 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* opt_with_table_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2835 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* table_hint_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2841 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* table_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2847 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* table_hint_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2853 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* opt_simple_ident_list_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2859 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 309: /* relation_factor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2865 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* joined_table  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2871 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* join_type  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2877 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* expr_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2883 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* column_ref  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2889 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 316: /* expr_const  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2895 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 317: /* simple_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2901 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 318: /* arith_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2907 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 319: /* expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2913 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 320: /* in_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2919 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 321: /* case_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2925 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 322: /* case_arg  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2931 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 323: /* when_clause_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2937 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 324: /* when_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2943 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 325: /* case_default  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2949 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 326: /* func_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2955 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 327: /* over_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2961 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 328: /* row_or_range_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2967 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 329: /* window_frame_extent  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2973 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 330: /* distinct_or_all  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2979 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 331: /* relation_name  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2985 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 332: /* column_label  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2991 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 333: /* data_type  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2997 "sqlparser_bison.cpp" /* yacc.c:1257  */
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
#line 65 "sqlparser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 3114 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 207 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3308 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 218 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3317 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 227 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3323 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 239 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3332 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 244 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3341 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 252 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 3352 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 259 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 3364 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 270 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3370 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 272 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPTION_CLAUSE, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
#line 3379 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 281 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 3388 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 289 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH GROUP"); }
#line 3394 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 290 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ORDER GROUP"); }
#line 3400 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 291 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("CONCAT UNION"); }
#line 3406 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 292 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH UNION"); }
#line 3412 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 293 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE UNION"); }
#line 3418 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 294 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("LOOP JOIN"); }
#line 3424 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 295 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE JOIN"); }
#line 3430 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 296 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH JOIN"); }
#line 3436 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 297 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("EXPAND VIEWS"); }
#line 3442 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 298 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FAST", (yyvsp[0].node)); }
#line 3448 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 299 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE ORDER"); }
#line 3454 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 300 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
#line 3460 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 301 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
#line 3466 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 302 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 3472 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 303 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 3478 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 304 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3484 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 305 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3490 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 306 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3496 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 307 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3502 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 308 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXDOP", (yyvsp[0].node)); }
#line 3508 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 309 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXRECURSION", (yyvsp[0].node)); }
#line 3514 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 310 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
#line 3520 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 311 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("OPTIMIZE FOR", (yyvsp[0].node)); }
#line 3526 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 312 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
#line 3532 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 313 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION FORCED"); }
#line 3538 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 314 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("RECOMPILE"); }
#line 3544 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 315 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ROBUST PLAN"); }
#line 3550 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 326 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
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
                    (yyvsp[-5].node),             /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr	    /* E_SELECT_OPT_OPTION 17 */
                    );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 3578 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 350 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_UNION, "UNION");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
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
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
                        );
    (yyval.node)->serialize_format = &SELECT_UNION_SERIALIZE_FORMAT;
}
#line 3607 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 375 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_INTERSECT, "INTERSECT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
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
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
                        );
    (yyval.node)->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
#line 3636 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 400 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_EXCEPT, "EXCEPT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
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
                        nullptr,             /* E_SELECT_OPT_TOP 15 */
                        nullptr,             /* E_SELECT_OPT_WITH 16 */
                        nullptr	             /* E_SELECT_OPT_OPTION 17 */
                        );
    (yyval.node)->serialize_format = &SELECT_EXCEPT_SERIALIZE_FORMAT;
}
#line 3665 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 428 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3671 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 430 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 3680 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 435 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 3689 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 440 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 3698 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 445 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 3707 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 454 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3716 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 464 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3725 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 472 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3731 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 474 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_CLAUSE, 1, nullptr);
    (yyval.node)->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
#line 3740 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 481 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3746 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 483 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 3755 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 490 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3761 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 492 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 3770 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 499 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3776 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 503 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3782 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 505 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 3791 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 512 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3797 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 518 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 3806 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 523 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 3815 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 532 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
#line 3824 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 537 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
#line 3833 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 542 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
#line 3842 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 547 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
#line 3851 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 552 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
#line 3860 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 557 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
#line 3869 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 562 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
#line 3878 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 567 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
#line 3887 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 572 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
#line 3896 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 577 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
#line 3905 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 586 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 3914 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 594 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 3923 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 602 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 3931 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 606 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 3939 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 610 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 3947 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 616 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3953 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 618 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 3962 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 626 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 3971 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 635 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3980 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 643 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 3989 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 650 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3995 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 656 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4004 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 665 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4013 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 672 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4019 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 674 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4027 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 678 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4035 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 686 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4044 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 694 "sqlparser.y" /* yacc.c:1646  */
    {
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias((yyvsp[0].node));
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, nd);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4055 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 701 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4067 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 709 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4079 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 717 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4089 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 727 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4098 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 740 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4107 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 745 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4116 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 750 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4125 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 755 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4134 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 760 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4143 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 765 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4152 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 772 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4158 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 774 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
#line 4167 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 783 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4176 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 788 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4185 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 798 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 4198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 807 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[-1]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
#line 4212 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 822 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4221 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 829 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4227 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 837 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4236 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 842 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4245 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 847 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4254 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 852 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4263 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 857 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4272 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 862 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4281 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 867 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4290 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 875 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4299 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 880 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4308 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 885 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4318 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 891 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 4327 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 896 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 4337 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 902 "sqlparser.y" /* yacc.c:1646  */
    {
    //Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    //$$ = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, $1, $4, nullptr);
    //$$->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    Node* cj = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), nullptr, nullptr);
    cj->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
    (yyval.node) = Node::addjust_cross_join((yyvsp[0].node), cj);
}
#line 4351 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 915 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL OUTER"+Node::convert_join_hint((yyvsp[0].ival)));
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL"+Node::convert_join_hint((yyvsp[0].ival)));
    }
}
#line 4366 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 926 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT OUTER"+Node::convert_join_hint((yyvsp[0].ival)));
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT"+Node::convert_join_hint((yyvsp[0].ival)));
    }
}
#line 4381 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 937 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT OUTER"+Node::convert_join_hint((yyvsp[0].ival)));
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT"+Node::convert_join_hint((yyvsp[0].ival)));
    }
}
#line 4396 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 948 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 4404 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 954 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4410 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 955 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 4416 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 956 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 4422 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 957 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 3; }
#line 4428 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 958 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 4; }
#line 4434 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 963 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4440 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 964 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 4446 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 971 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4455 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 980 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4464 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 985 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nd, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4474 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 991 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4483 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 996 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, nd, (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4493 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1002 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4502 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1007 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4512 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1013 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4521 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1018 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4531 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1024 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4540 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1029 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4550 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1035 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1040 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4569 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1046 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4578 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1051 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4588 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1057 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4597 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1062 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4607 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1083 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4617 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1092 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 4626 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1102 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 4635 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1107 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 4644 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1112 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 4653 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1117 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 4662 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1122 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 4671 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1127 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 4680 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1132 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 4689 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1137 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 4698 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1142 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 4707 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1151 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 4716 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1156 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 4725 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1161 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4734 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1166 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 4743 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1171 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 4752 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1176 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 4761 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1181 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 4770 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1186 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 4779 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1191 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 4788 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1196 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 4797 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1201 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 4806 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1206 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4815 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1211 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4824 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1216 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4833 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1221 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4842 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1226 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 4851 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1231 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 4860 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1236 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 4869 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1241 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 4878 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1246 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 4887 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1251 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 4896 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1256 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 4905 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1265 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4914 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1273 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 4923 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1280 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4929 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1287 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4938 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1295 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 4947 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1302 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4953 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1304 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 4962 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1313 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4973 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1320 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4984 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1327 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4995 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1334 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5006 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1341 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5017 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1348 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5026 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1353 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5036 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1359 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5046 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1365 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5056 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1371 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5066 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1377 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5077 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1384 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5088 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1391 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5099 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1398 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5110 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1405 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5121 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1412 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1417 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5140 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1423 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5150 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1429 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5160 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1435 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5170 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1441 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5180 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1447 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5190 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1453 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5200 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1459 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NTILE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5210 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1465 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5220 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1471 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5230 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1477 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1483 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5250 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1489 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5260 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1495 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1501 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5280 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1507 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5290 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1513 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1519 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5310 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1525 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5320 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1531 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5330 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1537 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5340 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1543 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5350 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1549 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5360 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1555 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5370 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1561 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5380 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1567 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5390 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1573 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5400 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1579 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5410 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1585 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5420 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1591 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5430 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1597 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5440 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1603 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5450 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1609 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5460 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1615 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5470 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1621 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5480 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1627 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5490 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1633 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5500 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1639 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5510 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1645 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5520 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1651 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5530 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1657 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5540 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1663 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5550 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1669 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5560 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1675 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1681 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5581 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1688 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5592 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1695 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5602 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1701 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5612 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1707 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5622 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1713 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5632 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1719 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5643 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1726 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5654 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1733 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5664 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1739 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5674 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1745 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1751 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING_ID");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5694 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1757 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "FIRST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5704 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1763 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5714 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1769 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5724 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1775 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5736 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1783 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5750 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1793 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5760 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1799 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5772 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1807 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5786 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1817 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5797 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1824 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 5, fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5807 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1830 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5819 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1838 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5833 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1848 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5844 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1855 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5854 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1861 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5864 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1867 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5874 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1873 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEADD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5888 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1883 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEDIFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5902 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1893 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATENAME");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5914 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1901 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEPART");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5926 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1909 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5936 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1915 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETUTCDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5946 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1921 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5960 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1931 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5970 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1937 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN_ACTIVE_ROWVERSION");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5980 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1943 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5992 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1951 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list2 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list2->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list2);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-7].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STUFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6008 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1963 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6018 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1969 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6028 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1975 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ISNULL");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6040 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1986 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6049 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1991 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6058 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1996 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6067 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 2001 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6076 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 2006 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6085 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 2011 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6094 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 2016 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6103 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2021 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6112 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2029 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, 2, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6122 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2035 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, 2, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2044 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 6138 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2046 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DECIMAL PRECEDING"); }
#line 6144 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2048 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 6150 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2050 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 6156 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2052 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL PRECEDING AND UNBOUNDED PRECEDING"); }
#line 6162 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2054 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 6168 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2056 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 6174 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2058 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 6180 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2060 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL PRECEDING"); }
#line 6186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2062 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL PRECEDING AND DECIMAL PRECEDING"); }
#line 6192 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2064 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND DECIMAL PRECEDING"); }
#line 6198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2066 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND DECIMAL PRECEDING"); }
#line 6204 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2068 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL FOLLOWING AND DECIMAL PRECEDING"); }
#line 6210 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2070 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 6216 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2072 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL PRECEDING AND CURRENT ROW"); }
#line 6222 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2074 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 6228 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2076 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 6234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2078 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL FOLLOWING AND CURRENT ROW"); }
#line 6240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2080 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 6246 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2082 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 6252 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2084 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 6258 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2086 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 6264 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2088 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 6270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2090 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 6276 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2092 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL PRECEDING AND DECIMAL FOLLOWING"); }
#line 6282 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2094 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND DECIMAL FOLLOWING"); }
#line 6288 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2096 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND DECIMAL FOLLOWING"); }
#line 6294 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2098 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN DECIMAL FOLLOWING AND DECIMAL FOLLOWING"); }
#line 6300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2102 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6308 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2106 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2122 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 6322 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2124 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 6328 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2126 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 6334 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2128 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 6340 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2130 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 6346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2132 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 6352 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2134 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
#line 6358 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2136 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
#line 6364 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 6368 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2139 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
