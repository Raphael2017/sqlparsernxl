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
    COLLATE = 266,
    CONDITIONLESS_JOIN = 267,
    CROSS = 268,
    FULL = 269,
    INNER = 270,
    JOIN = 271,
    LEFT = 272,
    NATURAL = 273,
    RIGHT = 274,
    ON = 275,
    USING = 276,
    OUTER = 277,
    PIVOT = 278,
    UNPIVOT = 279,
    UNION = 280,
    EXCEPT = 281,
    INTERSECT = 282,
    OR = 283,
    AND = 284,
    NOT = 285,
    COMP_LE = 286,
    COMP_LT = 287,
    COMP_EQ = 288,
    COMP_GT = 289,
    COMP_GE = 290,
    COMP_NE = 291,
    CNNOP = 292,
    LIKE = 293,
    BETWEEN = 294,
    IN = 295,
    IS = 296,
    MOD = 297,
    UMINUS = 298,
    WITH = 299,
    FOR = 300,
    ADD = 301,
    ANY = 302,
    ALL = 303,
    ALTER = 304,
    AS = 305,
    ASC = 306,
    BEGI = 307,
    BIGINT = 308,
    BINARY = 309,
    BOTH = 310,
    BROWSE = 311,
    BY = 312,
    CASCADE = 313,
    CASE = 314,
    CHARACTER = 315,
    CLUSTER = 316,
    COMMENT = 317,
    COMMIT = 318,
    CONSISTENT = 319,
    COLUMN = 320,
    COLUMNS = 321,
    CREATE = 322,
    CREATETIME = 323,
    CURRENT_USER = 324,
    CHANGE_OBI = 325,
    SWITCH_CLUSTER = 326,
    DATE = 327,
    DATETIME = 328,
    DEALLOCATE = 329,
    DECIMAL = 330,
    DEFAULT = 331,
    DELETE = 332,
    DESC = 333,
    DESCRIBE = 334,
    DISTINCT = 335,
    DOUBLE = 336,
    DROP = 337,
    DUAL = 338,
    ELSE = 339,
    END = 340,
    END_P = 341,
    ERROR = 342,
    EXECUTE = 343,
    EXISTS = 344,
    EXPLAIN = 345,
    FETCH = 346,
    FIRST = 347,
    FLOAT = 348,
    FROM = 349,
    FROZEN = 350,
    FORCE = 351,
    GLOBAL = 352,
    GLOBAL_ALIAS = 353,
    GRANT = 354,
    GROUP = 355,
    HAVING = 356,
    HINT_BEGIN = 357,
    HINT_END = 358,
    HOTSPOT = 359,
    IDENTIFIED = 360,
    IF = 361,
    INSERT = 362,
    INTO = 363,
    KEY = 364,
    LEADING = 365,
    LIMIT = 366,
    LOCAL = 367,
    LOCKED = 368,
    MEMORY = 369,
    MODIFYTIME = 370,
    MASTER = 371,
    NEXT = 372,
    NOEXPAND = 373,
    NUMERIC = 374,
    OFFSET = 375,
    ONLY = 376,
    ORDER = 377,
    OPTION = 378,
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
    CAST = 508,
    BIT = 509,
    CHAR = 510,
    DATETIME2 = 511,
    DATETIMEOFFSET = 512,
    INT = 513,
    MONEY = 514,
    NCHAR = 515,
    NVARCHAR = 516,
    SMALLDATETIME = 517,
    SMALLMONEY = 518,
    TEXT = 519,
    APPLY = 520,
    SYSTEM_TIME = 521,
    OF = 522,
    CONTAINED = 523
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 423 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 453 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYLAST   4642

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  281
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  450
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  981

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   523

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   280,    46,     2,     2,
      51,    52,    44,    42,   279,    43,    53,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    54,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    48,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    47,    49,    50,
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
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   213,   213,   223,   224,   234,   235,   236,   241,   245,
     250,   258,   265,   277,   278,   286,   287,   296,   297,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   326,   327,   331,   356,   381,   406,
     435,   436,   441,   446,   451,   459,   460,   468,   469,   470,
     479,   480,   488,   489,   497,   498,   506,   510,   511,   519,
     520,   524,   529,   538,   543,   548,   553,   558,   563,   568,
     573,   578,   583,   591,   592,   600,   609,   612,   616,   623,
     624,   632,   640,   641,   649,   657,   658,   662,   670,   671,
     679,   680,   684,   691,   692,   700,   707,   715,   723,   732,
     733,   741,   742,   746,   751,   756,   761,   766,   771,   776,
     781,   786,   791,   796,   801,   809,   810,   818,   820,   822,
     824,   826,   831,   839,   847,   852,   862,   863,   871,   872,
     877,   887,   896,   909,   910,   911,   919,   920,   925,   926,
     931,   936,   941,   946,   951,   956,   964,   969,   974,   980,
     985,   991,   997,  1003,  1009,  1014,  1019,  1024,  1029,  1034,
    1042,  1050,  1058,  1069,  1080,  1091,  1098,  1099,  1100,  1101,
    1102,  1107,  1108,  1113,  1114,  1122,  1123,  1128,  1134,  1139,
    1145,  1150,  1156,  1161,  1167,  1172,  1178,  1183,  1189,  1194,
    1200,  1205,  1214,  1215,  1216,  1217,  1218,  1219,  1220,  1221,
    1222,  1227,  1228,  1229,  1235,  1236,  1237,  1238,  1247,  1248,
    1253,  1258,  1263,  1268,  1273,  1278,  1283,  1288,  1296,  1297,
    1298,  1303,  1308,  1313,  1318,  1323,  1328,  1333,  1338,  1343,
    1348,  1353,  1358,  1363,  1368,  1373,  1378,  1383,  1388,  1393,
    1398,  1403,  1408,  1416,  1417,  1425,  1433,  1434,  1438,  1439,
    1447,  1455,  1456,  1465,  1466,  1467,  1468,  1469,  1476,  1482,
    1490,  1500,  1507,  1513,  1519,  1525,  1535,  1545,  1553,  1561,
    1567,  1573,  1583,  1589,  1595,  1603,  1615,  1621,  1627,  1638,
    1644,  1650,  1656,  1662,  1668,  1674,  1680,  1686,  1692,  1698,
    1704,  1710,  1716,  1722,  1728,  1734,  1740,  1746,  1752,  1758,
    1764,  1770,  1776,  1782,  1788,  1794,  1800,  1806,  1812,  1818,
    1824,  1830,  1836,  1842,  1848,  1854,  1861,  1868,  1874,  1880,
    1886,  1892,  1899,  1906,  1912,  1918,  1924,  1933,  1939,  1945,
    1951,  1959,  1969,  1975,  1983,  1995,  2001,  2007,  2013,  2022,
    2029,  2036,  2043,  2050,  2057,  2062,  2068,  2074,  2080,  2086,
    2093,  2100,  2107,  2114,  2121,  2126,  2132,  2138,  2144,  2152,
    2157,  2162,  2167,  2172,  2177,  2182,  2187,  2195,  2201,  2210,
    2212,  2214,  2216,  2218,  2220,  2222,  2224,  2226,  2228,  2230,
    2232,  2234,  2236,  2238,  2240,  2242,  2244,  2246,  2248,  2250,
    2252,  2254,  2256,  2258,  2260,  2262,  2264,  2268,  2272,  2280,
    2284,  2289,  2291,  2293,  2295,  2297,  2299,  2301,  2303,  2305,
    2307,  2309,  2311,  2313,  2315,  2317,  2319,  2321,  2323,  2325,
    2327,  2329,  2331,  2333,  2335,  2337,  2339,  2341,  2343,  2345,
    2347,  2349,  2351,  2353,  2355,  2357,  2359,  2361,  2363,  2365,
    2367
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "COLLATE",
  "CONDITIONLESS_JOIN", "CROSS", "FULL", "INNER", "JOIN", "LEFT",
  "NATURAL", "RIGHT", "ON", "USING", "OUTER", "PIVOT", "UNPIVOT", "UNION",
  "EXCEPT", "INTERSECT", "OR", "AND", "NOT", "COMP_LE", "COMP_LT",
  "COMP_EQ", "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE", "BETWEEN",
  "IN", "IS", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "WITH", "'('", "')'", "'.'", "';'", "FOR", "ADD", "ANY", "ALL", "ALTER",
  "AS", "ASC", "BEGI", "BIGINT", "BINARY", "BOTH", "BROWSE", "BY",
  "CASCADE", "CASE", "CHARACTER", "CLUSTER", "COMMENT", "COMMIT",
  "CONSISTENT", "COLUMN", "COLUMNS", "CREATE", "CREATETIME",
  "CURRENT_USER", "CHANGE_OBI", "SWITCH_CLUSTER", "DATE", "DATETIME",
  "DEALLOCATE", "DECIMAL", "DEFAULT", "DELETE", "DESC", "DESCRIBE",
  "DISTINCT", "DOUBLE", "DROP", "DUAL", "ELSE", "END", "END_P", "ERROR",
  "EXECUTE", "EXISTS", "EXPLAIN", "FETCH", "FIRST", "FLOAT", "FROM",
  "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT", "GROUP", "HAVING",
  "HINT_BEGIN", "HINT_END", "HOTSPOT", "IDENTIFIED", "IF", "INSERT",
  "INTO", "KEY", "LEADING", "LIMIT", "LOCAL", "LOCKED", "MEMORY",
  "MODIFYTIME", "MASTER", "NEXT", "NOEXPAND", "NUMERIC", "OFFSET", "ONLY",
  "ORDER", "OPTION", "PARAMETERS", "PERCENT", "PASSWORD", "PRECISION",
  "PREPARE", "PRIMARY", "READ_STATIC", "REAL", "RENAME", "REPLACE",
  "RESTRICT", "PRIVILEGES", "REVOKE", "ROLLBACK", "ROW", "ROWS", "KILL",
  "READ_CONSISTENCY", "SCHEMA", "SCOPE", "SELECT", "SESSION",
  "SESSION_ALIAS", "SET", "SHOW", "SMALLINT", "SNAPSHOT", "SPFILE",
  "START", "STATIC", "SYSTEM", "STRONG", "SET_MASTER_CLUSTER",
  "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES", "THEN", "TIES", "TIME",
  "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO", "TOP", "UPDATE",
  "USER", "VALUES", "VARCHAR", "VARBINARY", "WHERE", "WHEN", "WORK",
  "PROCESSLIST", "QUERY", "CONNECTION", "WEAK", "LOOP", "HASH", "MERGE",
  "REMOTE", "CONCAT", "OPTIMIZE", "EXPAND", "VIEWS", "FAST", "DISABLE",
  "EXTERNALPUSHDOWN", "IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX", "KEEP",
  "PLAN", "KEEPFIXED", "MAX_GRANT_PERCENT", "MIN_GRANT_PERCENT", "MAXDOP",
  "MAXRECURSION", "NO_PERFORMANCE_SPOOL", "PARAMETERIZATION", "SIMPLE",
  "FORCED", "RECOMPILE", "ROBUST", "CHECKSUM", "BINARY_CHECKSUM", "RANK",
  "DENSE_RANK", "ROW_NUMBER", "NTILE", "PARTITION", "RANGE", "UNBOUNDED",
  "PRECEDING", "CURRENT", "FOLLOWING", "OVER", "VARP", "VAR", "SUM",
  "STDEVP", "STDEV", "MIN", "MAX", "LEAD", "LAST_VALUE", "LAG",
  "GROUPING_ID", "GROUPING", "FIRST_VALUE", "COUNT_BIG", "COUNT",
  "CHECKSUM_AGG", "AVG", "SYSTEM_USER", "STUFF", "SESSION_USER", "NULLIF",
  "MIN_ACTIVE_ROWVERSION", "ISNULL", "IDENTITY", "GETUTCDATE", "GETDATE",
  "DATEPART", "DATENAME", "DATEDIFF", "DATEADD", "CURRENT_TIMESTAMP",
  "CONVERT", "COALESCE", "CAST", "BIT", "CHAR", "DATETIME2",
  "DATETIMEOFFSET", "INT", "MONEY", "NCHAR", "NVARCHAR", "SMALLDATETIME",
  "SMALLMONEY", "TEXT", "APPLY", "SYSTEM_TIME", "OF", "CONTAINED", "','",
  "'$'", "$accept", "sql_stmt", "stmt_list", "stmt", "select_stmt",
  "select_with_parens", "select_no_parens", "opt_option_query_hint",
  "query_hint_list", "query_hint", "select_clause", "simple_select",
  "opt_top", "top_count", "top_percent", "opt_for_clause", "opt_where",
  "opt_from_clause", "opt_hint", "opt_groupby", "opt_order_by", "order_by",
  "offset_fetch", "sort_list", "sort_key", "opt_asc_desc", "opt_having",
  "with_clause", "with_list", "common_table_expr",
  "opt_derived_column_list", "simple_ident_list_with_parens",
  "simple_ident_list", "opt_distinct", "select_expr_list", "projection",
  "from_list", "table_factor", "table_factor_non_join",
  "opt_for_system_time", "system_time", "table_value_constructor_parens",
  "table_value_constructor", "row_value_expression_list_parens_list",
  "opt_with_table_hint", "table_hint_list", "table_hint",
  "table_hint_expr", "opt_simple_ident_list_with_parens",
  "relation_factor", "joined_table", "pivot_clause", "unpivot_clause",
  "join_type", "join_hint", "join_outer", "expr_list", "column_ref",
  "expr_const", "simple_expr", "arith_expr", "expr", "in_expr",
  "case_expr", "case_arg", "when_clause_list", "when_clause",
  "case_default", "func_expr", "aggregate_windowed_function",
  "analytic_windowed_function", "ranking_windowed_function",
  "scalar_function", "over_clause", "row_or_range_clause",
  "window_frame_extent", "distinct_or_all", "relation_name",
  "column_label", "data_type", YY_NULLPTR
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
     295,   296,    43,    45,    42,    47,    37,   297,    94,   298,
     299,    40,    41,    46,    59,   300,   301,   302,   303,   304,
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
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,    44,
      36
};
# endif

#define YYPACT_NINF -804

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-804)))

#define YYTABLE_NINF -60

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     213,    84,   253,  -804,  -804,    29,   -22,   213,    23,  -804,
    -804,    90,  -804,   -10,    52,  -804,  -156,   134,   165,   235,
    -804,  -804,  -804,  -804,   235,   235,   235,   102,   139,  -804,
      90,   231,   178,  -804,    84,  -804,  -804,  -804,  -804,    83,
     -10,   -10,   -10,  2586,   203,   147,   139,    47,   293,   236,
    -804,   142,  1482,   324,   324,  -804,   225,  -804,  -804,  -804,
    -804,  -804,  -804,   309,   344,  2586,  2848,  2848,  1046,  2586,
    -804,  -804,   236,   351,   354,   358,   376,   379,   380,   391,
     412,   423,   451,   452,   455,   495,   526,   530,   533,   556,
     560,   561,   571,   582,   585,   586,   593,  -804,   609,  -804,
     623,  -804,   632,   641,   647,   662,   666,   667,   674,   680,
    -804,   710,   714,   715,   308,  -804,   377,   489,  -804,  -804,
    -804,   572,  3105,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,   730,  -804,   147,   231,  -804,  -804,   400,  -804,  2586,
     733,   651,  -804,   689,   505,  1177,  1744,   256,  1797,  1850,
    1209,   372,   372,    58,   744,   300,  4601,   611,  -804,  1099,
    1152,   746,   748,   752,  2586,    94,  1414,  1414,  1414,  1414,
    1414,  1414,  1414,  2586,  2586,  2586,  2586,  2586,  2586,   716,
     784,  1414,  1414,  2586,  2586,  2586,  3455,   753,   755,   805,
     806,   807,   808,  3455,  2586,  2586,  -804,  -804,  2586,  -804,
    2586,  2848,  2848,  2848,  2848,  2848,  2848,  2848,   809,  2586,
    2586,   494,  2586,  2586,  2586,  2586,  2586,  2586,  2586,  2586,
    2848,   765,   384,  -804,  -804,  -804,   875,  -804,  -804,  2243,
     645,   768,  3159,   634,  1482,  -804,   817,  -804,  -804,   769,
     320,  -804,    66,  -804,   770,  -804,   772,  -804,  2586,  2586,
     731,   611,   777,  -804,   778,   779,  -804,   780,   604,   604,
     604,  3166,  -804,    67,   767,    67,    36,   785,  -804,  -804,
    3211,  2586,  3265,  2586,  3513,  2586,  3569,  2586,  3612,  2586,
    3643,  2586,  3702,  2586,    26,  3733,   348,   786,  3764,  3795,
     787,  3826,  2586,   788,  3857,  2586,  3888,  2586,  3919,  2586,
     520,   534,   617,  -804,   790,  -804,  -804,   792,   793,   794,
    -804,  -804,   795,  -804,   796,   797,  -804,   798,   799,   800,
    -804,  -804,   803,   804,  -804,  -804,  -804,   -37,  -804,  -804,
     557,   577,   580,   581,   587,   810,  1875,  1558,  -804,   372,
     372,   813,   813,   813,   813,  -804,  -804,   953,  1209,  2586,
    2848,   765,   439,   439,   439,   439,   439,   439,   427,   499,
     547,  1046,  -804,  -804,  -804,  -804,  -804,   356,   -98,   747,
     842,    86,   200,   839,   812,   669,   860,  -804,   664,   668,
     838,   843,   867,   870,  -804,  -175,  -804,   672,   826,   600,
     749,  -804,   709,   355,  3110,   185,  -804,    77,  -804,   224,
     827,  -804,    49,  2586,   775,  -804,  -804,  -804,  2112,   268,
     385,   883,  -804,  -804,  -804,  1507,  2586,   816,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,  -804,   604,   661,    21,   663,
     740,  -804,  2586,  -804,  -804,   840,  -804,   604,  3950,   604,
    3981,   604,  4012,   604,  4043,   604,  4074,   604,  4105,   604,
    4136,   604,  2586,   604,   604,  2586,  -804,  -804,   604,   604,
     604,  4167,   604,   604,  4198,  -804,  4229,   604,  4260,   885,
    2586,  2586,   886,   888,   889,   921,   922,     8,    13,   923,
     924,   925,   934,    20,  -804,   935,  2586,  2586,  2586,  2586,
    2586,  -804,  3455,   841,   879,   499,   554,  -804,  2848,   891,
    -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,   932,  -804,  -804,  -804,  -804,   434,   465,
    -804,  -804,  -804,  -804,  -804,  -804,   875,  -804,    68,   893,
     583,   649,   943,   945,  -804,   995,  -804,  -804,    52,     6,
     977,   335,  3159,   977,   977,   725,   957,   958,  3159,   994,
     995,  -804,    52,   735,   149,   995,  -804,  4601,   981,   901,
    -804,  1003,   527,  -804,  1054,  2165,    42,  1005,  2586,  4601,
    -804,  -804,  -804,   359,   378,   911,  -804,  -804,    98,  -804,
    -804,   604,  -804,   604,  -804,   604,  -804,   604,  -804,   604,
    -804,   604,  -804,   604,  -804,   421,  -804,  -804,   453,  -804,
    -804,  -804,   604,  -804,  -804,   604,  -804,  -804,   604,   781,
    4291,  4322,  1009,   -28,  1010,   -21,  1014,  1018,  1022,  1025,
    1028,  1040,  1041,  1042,  1043,  1047,  1048,   819,  4353,  4384,
     869,   884,   484,  1049,   -54,   241,  2848,   572,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,   570,   104,  2586,  -804,  -804,
    -804,    52,  -804,  3159,  3159,  -804,   335,  -804,  -804,  -804,
    -804,  -804,   728,   335,   335,  3159,   445,   145,  2586,   151,
    -804,  3159,    52,  -804,    10,  1057,   995,  -804,  1060,  -804,
    2586,  2586,  -804,  -804,  2218,   115,   578,  -804,  1059,  1061,
    -804,   117,  4601,  1083,  1084,  1088,  1090,  1091,  -804,    46,
    1069,  -804,  -804,  -804,  -804,  -804,  -804,  -804,   604,  2586,
     604,  2586,  -804,  -804,  -804,  1117,  -804,  -804,  -804,  -804,
    1118,  -804,  -804,  1119,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,  1121,  -804,  -804,  2586,  2586,
    -804,  2586,  -804,  2586,  2586,  2586,  2586,   572,   148,   579,
    1124,  1076,  -804,  -804,  -804,  -804,  2586,  1079,  -804,  -804,
    -804,  1078,   995,  -804,  1572,   995,  -804,   756,  -804,  1127,
    -804,   857,  1131,  1096,  -804,  3206,  1060,  -804,  -804,  4601,
    -804,  1085,   589,  -804,  2480,   280,  -804,   303,  -804,  -804,
      27,    41,    70,    71,    74,  -804,  1086,  -804,  -804,  4415,
    -804,  4446,   861,  1087,  1092,  1094,  4477,  4508,  4539,  2610,
    2872,  2924,  2966,   608,  1144,  1146,  -804,   873,  4601,   231,
    1150,  -804,  1150,  -804,  2586,  1103,  1132,  1160,   987,  1115,
     382,  3254,  1120,  2795,  -804,  -804,  -804,  -804,  2533,   313,
    -804,  1122,  -804,  -804,  -804,  -804,   456,   480,  1019,   481,
     501,  1027,   944,   948,   502,  1029,   508,   511,  1031,   512,
     528,  1033,  -804,   604,   604,  2586,  -804,  -804,  -804,  -804,
    -804,  -804,  1052,  1053,  1055,  1056,  1058,  1062,  1066,  1068,
    1170,  1139,  -804,   893,  1140,  1138,  1161,  1162,  4601,   231,
    1215,  -804,  1216,  1218,  2586,   160,  -804,  -804,  3206,  -804,
    -804,  1171,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  -804,  4570,  -804,  -804,  -804,  -804,  -804,  -804,  -804,
    -804,  1173,  -804,  -804,   305,    52,    52,  1174,  -804,  -804,
     946,  4601,   659,  1224,  -804,  -804,  -804,  1175,   229,  1178,
    1180,  -804,  1225,   237,  1182,   350,  1181,  -804,  -804,  1183,
     702,  1233,  1199,  1250,  -804,  1251,  1139,   352,  1202,  1173,
    1203
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
      93,     0,     0,    47,    49,    48,   185,   202,   203,   205,
     204,   206,   207,     0,     0,     0,     0,     0,     0,   256,
     274,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   287,     0,   286,
       0,   283,     0,     0,     0,     0,     0,     0,     0,     0,
     273,     0,     0,     0,     0,   216,    71,    83,   211,   212,
     218,   228,    86,   214,   215,   265,   266,   264,   263,   229,
      61,     0,    11,    13,     0,    97,    94,    55,    57,     0,
      51,     0,   108,    64,   103,   105,     0,     0,     0,     0,
     241,   219,   220,   216,     0,   183,   257,     0,   217,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   209,   210,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,    88,    85,     0,    12,    99,     0,
       0,    53,     0,    62,     0,   410,     0,   106,   354,     0,
     186,   187,     0,   356,     0,   355,     0,   213,     0,     0,
     261,   258,     0,   358,     0,     0,   357,     0,     0,     0,
       0,     0,   376,     0,     0,     0,     0,     0,   407,   408,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   411,   447,   426,   432,   417,     0,   420,
     424,   413,   434,   414,   439,   450,   421,   436,   430,   428,
     412,   422,   442,   445,   431,   423,   440,     0,   280,   279,
       0,     0,     0,     0,     0,     0,     0,     0,    84,   221,
     222,   223,   224,   225,   227,   226,   230,   240,   239,     0,
       0,     0,   231,   232,   233,   235,   234,   236,   252,   237,
       0,     0,   253,   250,   244,   242,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    29,     0,     0,
       0,     0,     0,     0,    38,     0,    42,     0,     0,    15,
      56,    52,     0,   148,     0,   146,    65,   109,   111,   146,
     125,   112,   124,     0,    67,   104,   107,   364,     0,     0,
       0,     0,   366,   365,   184,     0,     0,     0,   259,   271,
     368,   267,   367,   345,   346,   347,     0,     0,     0,     0,
       0,   377,     0,   378,   374,     0,   375,   318,     0,   314,
       0,   302,     0,   310,     0,   306,     0,   298,     0,   294,
       0,     0,     0,     0,     0,     0,   336,   335,     0,   332,
     328,     0,   326,   322,     0,   333,     0,   290,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   282,     0,     0,     0,     0,     0,
       0,   272,     0,    73,    74,   238,     0,   251,     0,     0,
     245,   243,   247,    27,    28,    18,    22,    24,    20,    17,
      23,    21,    19,     0,    25,    26,    30,    31,     0,     0,
      36,    37,    40,    41,    43,    14,     0,    54,     0,     0,
     146,     0,     0,   112,   409,     0,   147,   118,   146,     0,
     181,   176,     0,   181,   181,     0,     0,     0,     0,     0,
       0,   121,   146,     0,   136,     0,   123,    63,     0,    89,
     353,     0,   188,   189,     0,     0,     0,     0,     0,   262,
     255,   348,   380,     0,     0,     0,   379,   381,     0,   370,
     317,   320,   313,   316,   301,   304,   309,   312,   305,   308,
     297,   300,   293,   296,   342,     0,   338,   339,     0,   337,
     331,   327,   330,   325,   321,   324,   334,   289,   292,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   248,   254,    39,
      33,    32,    35,    34,    16,   149,     0,     0,   133,   132,
     156,   146,   117,     0,     0,   182,   176,   177,   178,   179,
     180,   175,     0,   176,   176,     0,     0,   166,     0,   169,
     110,     0,   146,   120,     0,     0,     0,   113,   136,   122,
       0,     0,    46,   363,     0,     0,     0,   352,     0,   192,
     193,     0,   260,     0,     0,     0,     0,     0,   373,     0,
       0,   319,   315,   303,   311,   307,   299,   295,     0,     0,
       0,     0,   329,   323,   291,     0,   284,   288,   446,   416,
       0,   425,   419,     0,   433,   437,   438,   448,   449,   435,
     429,   427,   441,   443,   444,     0,   278,   277,     0,     0,
     269,     0,   268,     0,     0,     0,     0,   249,     0,   151,
       0,     0,   116,   161,   162,   172,     0,     0,   173,   174,
     163,     0,     0,   165,     0,     0,   168,     0,   119,     0,
     131,     0,     0,     0,   126,     0,   136,   115,    68,    90,
     351,     0,   190,   191,     0,     0,   362,     0,   200,   201,
       0,     0,     0,     0,     0,   372,     0,   371,   343,     0,
     340,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   150,     0,     0,   155,   134,   158,     0,
       0,   164,     0,   167,     0,     0,     0,     0,     0,     0,
     144,     0,     0,   138,   141,   143,   114,   361,     0,     0,
     350,     0,   198,   199,   196,   197,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   369,     0,     0,     0,   415,   418,   281,   276,
     275,   270,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   154,   153,     0,     0,   185,     0,     0,   157,     0,
       0,   127,     0,     0,     0,     0,   142,   137,     0,   140,
     349,     0,   194,   195,   360,   388,   403,   383,   398,   393,
     391,   406,   386,   401,   396,   387,   402,   382,   397,   392,
     390,   405,   385,   400,   395,   389,   404,   384,   399,   394,
     344,   341,     0,    75,    77,    76,    78,    79,    81,    80,
      82,   152,   135,   160,     0,     0,     0,     0,   129,   128,
       0,   145,     0,     0,   139,   359,   285,   186,     0,     0,
       0,   159,     0,     0,     0,     0,     0,   170,   171,     0,
       0,     0,   188,     0,   130,     0,     0,     0,     0,     0,
     190
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -804,  -804,  1252,  -804,  -804,    40,    28,  1125,   734,  -804,
     357,  -804,  -804,  -804,  -804,  1211,  -804,  -804,  -804,  -804,
    1231,  -157,  -804,  1070,  -804,  -804,  -804,  -804,  1228,  -804,
    -804,   -14,  -132,   518,  1035,  -804,   723,  -380,  -804,  -804,
    -804,  -804,  -804,   389,  -642,  -803,  -804,   442,  -349,  -804,
     880,  -804,  -804,  -804,  -252,  -120,  -143,   -58,  -804,  -804,
     -23,   -42,   959,  -804,  -804,  1063,  -804,  -804,  -228,   646,
    -804,  -804,  -804,  -239,  -259,  1050,   329,  -390,  1075,  -182
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,   115,    18,   132,   388,   389,
      11,    12,    52,   140,   141,    45,   404,   233,    19,   559,
      28,    29,   199,   116,   117,   225,   682,    13,    15,    16,
      32,   536,    48,    39,   143,   144,   396,   397,   398,   554,
     774,   399,   532,   648,   677,   832,   833,   834,   537,   400,
     401,   667,   669,   549,   661,   656,   154,   118,   119,   120,
     121,   155,   363,   123,   157,   250,   251,   417,   124,   125,
     126,   127,   128,   129,   267,   431,   271,   538,   237,   327
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,   122,   228,   239,   402,   244,   246,   435,   266,   552,
     145,   334,   556,   617,   531,   484,   254,   257,   619,   423,
     424,   425,   653,   150,   719,   625,   573,   156,    10,    20,
     899,   722,   846,   287,   503,    10,   777,   208,   522,   523,
       9,     2,    17,   151,   152,   689,   849,     9,   743,   769,
     551,   335,   534,     9,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   770,   410,
     771,   645,   427,   744,    21,   852,   856,    23,   451,   859,
       9,     9,     9,   -45,   -45,   -45,   690,    14,   434,   136,
     539,   540,   541,   542,   543,   954,   544,   229,   795,   545,
     546,   547,   507,    31,   504,   414,   428,   749,   153,   555,
      35,   508,   158,   -45,   772,    24,    25,    26,   782,   411,
     788,   646,   261,    34,   270,   272,   274,   276,   278,   280,
     282,   284,   285,   286,   836,   288,   289,   291,   294,   296,
     298,   300,   301,   302,     4,   651,   262,   137,   534,   138,
     698,   813,   534,   336,   534,   853,   337,   750,   122,   783,
     672,   789,   662,   952,   678,   679,   402,   347,   348,    43,
     352,   353,   354,   355,   356,   357,   358,   359,   339,   340,
     341,   342,   343,   344,   345,   263,    35,   571,   534,   652,
     -45,   -45,   145,   139,    44,   263,   509,   360,   580,   675,
     582,   814,   584,   673,   586,   762,   588,   415,   590,   676,
     592,   765,   594,   953,   596,   597,   510,    36,   499,   599,
     600,   601,    27,   603,   604,   511,    27,   534,   607,   438,
      27,   440,   966,   442,    47,   444,    31,   446,    49,   448,
     970,   450,   485,   263,   618,   535,   574,   263,   575,   620,
     461,   720,   847,   464,   848,   466,   626,   468,   723,   240,
     265,   362,    51,     1,     2,   561,   850,     3,   851,   130,
     265,   562,   395,   753,   754,    31,   146,   763,   147,   766,
     131,   654,   411,   842,   550,   760,   776,     2,   773,   578,
     971,   767,   429,    37,   430,   854,   857,   855,   858,   860,
     241,   861,   752,     1,     2,   452,   844,   495,   957,   242,
     633,   208,   563,   196,   402,   197,   902,   264,   265,   700,
     402,   564,   265,   768,   843,    38,   134,   496,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   701,   745,   702,   135,   703,   845,   704,   241,
     705,    26,   706,   972,   707,   980,   548,   903,   958,   208,
     148,   557,   500,   712,   501,   502,   713,     4,   746,   714,
      30,   408,   821,   409,   569,   823,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     364,   362,   365,   366,   563,   149,   783,    53,    54,    55,
     454,   153,   159,   973,   755,   160,   146,     4,   528,   161,
     595,   758,   759,   598,   367,   894,   203,   204,   205,   206,
     207,   699,   688,   663,   664,   402,   402,   162,   610,   611,
     163,   164,   208,   146,   530,   895,   565,   402,   566,   640,
     796,   641,   165,   402,   628,   629,   630,   631,   632,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   166,   208,   219,   220,   221,   222,   798,
     642,   800,   643,   708,   167,   637,   218,   219,   220,   221,
     222,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   208,   273,   275,   277,   279,
     281,   283,   168,   169,   751,   710,   170,   198,   292,   295,
     297,   299,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   692,   657,   658,   659,
     660,   208,   349,   350,   351,   -58,   740,   778,   220,   221,
     222,   781,    40,    41,    42,   208,   171,   835,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   498,   172,   684,   248,
     685,   173,   395,   636,   174,   693,   534,   694,   395,   201,
     202,   203,   204,   205,   206,   207,   201,   202,   203,   204,
     205,   206,   207,   835,   695,   835,   696,   175,   -45,   -45,
     -45,   176,   177,   747,   201,   202,   203,   204,   205,   206,
     207,   408,   178,   748,   930,   931,   764,   455,   208,   784,
     565,   785,   815,   179,    31,    35,   180,   181,   -45,   779,
     838,   841,   839,   535,   182,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   684,
     183,   880,   539,   540,   541,   542,   543,   799,   544,   801,
     835,   545,   546,   547,   184,    80,    81,    82,    83,    84,
      85,    86,   905,   185,   906,    90,    91,   884,    93,    94,
      95,    96,   186,   395,   395,   901,   806,   807,   187,   808,
     709,   809,   810,   811,   812,   395,   907,   910,   908,   911,
     408,   395,   963,   188,   818,   -45,   -45,   189,   190,    56,
      57,    58,    59,    60,    61,   191,    62,   912,   917,   913,
     918,   192,   711,    63,   920,    64,   921,   922,   925,   923,
     926,   539,   540,   541,   542,   543,    65,   544,   756,   757,
     545,   546,   547,   684,   927,   975,   928,   947,    66,    67,
     290,   193,   886,   741,   887,   194,   195,    68,   200,   539,
     540,   541,   542,   543,   268,   544,   824,   825,   545,   546,
     547,   226,   888,   230,   234,    69,   231,    56,    57,    58,
      59,    60,    61,   232,    62,    70,   247,   249,   258,   469,
     259,    63,    71,    64,   260,   328,   269,   329,   330,   331,
     332,   333,   346,   470,    65,    72,   361,   391,   392,   403,
     235,   407,   412,   932,   413,   416,    66,    67,   293,   419,
     420,   421,   422,    79,   432,    68,   486,   436,   456,   459,
     462,   472,   268,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   951,    69,   482,   483,   487,   505,   506,   488,
     489,   207,   491,    70,   512,   515,   490,   513,   514,   516,
      71,   518,   520,   517,   269,   521,   519,   524,   525,   526,
     208,   527,   553,    72,   -59,   558,   567,   572,   577,   576,
     609,   612,   579,   613,   614,   208,   471,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   570,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   615,   616,   621,   622,
     623,   959,   960,    73,    74,    75,    76,    77,    78,   624,
     627,   639,   634,   638,   647,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     635,   368,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   649,   114,   650,   534,   655,
     665,    73,    74,    75,    76,    77,    78,   369,   666,   668,
     671,   674,   681,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   680,    56,
      57,    58,    59,    60,    61,   683,    62,   686,   691,   697,
     715,   718,   721,    63,   114,    64,   724,   370,   371,   372,
     725,   373,   374,   375,   726,   376,    65,   727,   377,   378,
     728,   379,   380,   381,   382,   383,   384,   385,    66,    67,
     386,   387,   729,   730,   731,   732,     1,    68,   735,   733,
     734,   742,    56,    57,    58,    59,    60,    61,   775,    62,
     675,   786,   790,   791,   787,    69,    63,   792,    64,   793,
     794,   797,   802,   803,   804,    70,   805,   816,   817,    65,
     819,   826,    71,   820,   827,   828,   829,   837,   862,   866,
     865,    66,    67,   252,   867,    72,   868,   881,   738,   882,
      68,   253,   883,   885,   889,    56,    57,    58,    59,    60,
      61,   890,    62,   739,   891,   892,   893,   909,    69,    63,
     915,    64,   897,   941,   904,   914,   916,   919,    70,   924,
     235,   929,    65,   933,   934,    71,   935,   936,   208,   937,
     784,   944,   943,   938,    66,    67,   255,   939,    72,   940,
       4,   945,   946,    68,   256,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   948,
     949,    69,   950,   955,   838,   962,   961,   964,   965,   969,
     967,    70,   968,   565,   566,   974,   976,   236,    71,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,    72,   977,   978,   979,   785,   839,   133,   227,    22,
     644,    46,    50,    73,    74,    75,    76,    77,    78,   405,
     338,   670,   942,   896,   533,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     497,   406,   761,     0,   418,   433,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,   114,     0,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,     0,     0,     0,     0,   114,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,    56,    57,    58,
      59,    60,    61,     0,    62,     0,     0,     0,     0,     0,
       0,    63,   114,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,     0,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     0,   268,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,    56,    57,    58,    59,    60,
      61,     0,    62,    70,     0,     0,     0,     0,     0,    63,
      71,    64,     0,     0,   269,     0,     0,     0,     0,     0,
       0,     0,    65,    72,     0,     0,     0,     0,   208,     0,
       0,     0,     0,     0,    66,    67,   142,     0,     0,     0,
       0,     0,     0,    68,     0,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,     0,
       0,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,     0,     0,     0,    71,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   208,     0,     0,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   822,     0,     0,
       0,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   568,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   114,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,     0,   493,   494,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,    56,    57,    58,
      59,    60,    61,     0,    62,     0,     0,     0,     0,     0,
       0,    63,   114,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    66,    67,     0,     0,
       0,     0,     0,     0,     0,    68,   238,     0,     0,     0,
      56,    57,    58,    59,    60,    61,     0,    62,     0,     0,
       0,     0,     0,    69,    63,     0,    64,     0,     0,     0,
       0,     0,     0,    70,     0,     0,     0,    65,     0,     0,
      71,     0,     0,     0,     0,     0,     0,     0,     0,    66,
      67,     0,     0,    72,     0,     0,     0,     0,    68,   243,
       0,     0,     0,    56,    57,    58,    59,    60,    61,     0,
      62,     0,     0,     0,     0,     0,    69,    63,     0,    64,
       0,     0,     0,     0,     0,     0,    70,     0,     0,     0,
      65,     0,     0,    71,     0,     0,   208,     0,     0,     0,
       0,     0,    66,    67,     0,     0,    72,     0,     0,     0,
       0,    68,   245,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,     0,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,     0,     0,   492,    71,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,     0,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     0,     0,
       0,     0,     0,     0,    73,    74,    75,    76,    77,    78,
       0,     0,     0,     0,   114,     0,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,     0,     0,     0,     0,   114,     0,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,    56,    57,    58,    59,    60,
      61,     0,    62,     0,     0,     0,     0,     0,     0,    63,
     114,    64,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    66,    67,     0,     0,     0,     0,
       0,     0,     0,    68,   560,     0,     0,     0,    56,    57,
      58,    59,    60,    61,     0,    62,     0,     0,     0,     0,
       0,    69,    63,     0,    64,     0,     0,     0,     0,     0,
       0,    70,     0,     0,     0,    65,     0,     0,    71,     0,
       0,     0,     0,     0,     0,     0,     0,    66,    67,     0,
       0,    72,     0,     0,     0,     0,    68,   687,     0,     0,
       0,    56,    57,    58,    59,    60,    61,     0,    62,     0,
       0,     0,     0,     0,    69,    63,     0,    64,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,    65,     0,
       0,    71,     0,     0,   208,     0,     0,     0,     0,     0,
      66,    67,     0,     0,    72,     0,     0,     0,     0,    68,
     780,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,    69,     0,     0,
       0,     0,     0,     0,     0,   390,     0,    70,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,     0,     0,     0,     0,     0,
       0,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     0,     0,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,     0,     0,
       0,     0,   114,     0,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
      78,     0,     0,     0,     0,   114,     0,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,    56,    57,    58,    59,    60,    61,     0,
      62,     0,     0,     0,     0,     0,     0,    63,   114,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    67,     0,     0,     0,     0,     0,     0,
       0,    68,   840,     0,     0,     0,    56,    57,    58,    59,
      60,    61,     0,    62,     0,     0,     0,     0,     0,    69,
      63,     0,    64,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,    65,     0,     0,    71,     0,     0,     0,
       0,     0,     0,     0,     0,    66,    67,     0,     0,    72,
       0,     0,     0,     0,    68,   900,     0,     0,     0,    56,
      57,    58,    59,    60,    61,     0,    62,     0,     0,     0,
       0,     0,    69,    63,     0,    64,     0,     0,     0,     0,
       0,     0,    70,     0,     0,     0,    65,     0,     0,    71,
       0,   208,     0,     0,     0,     0,     0,     0,    66,    67,
       0,     0,    72,     0,     0,     0,     0,    68,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,     0,     0,     0,    69,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,     0,     0,     0,     0,     0,     0,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,     0,     0,     0,     0,     0,
      73,    74,    75,    76,    77,    78,     0,     0,   872,   873,
     114,     0,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     0,   830,     0,
       0,     0,     0,    73,    74,    75,    76,    77,    78,     0,
       0,     0,    63,   114,    64,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,    56,    57,    58,    59,    60,    61,     0,    62,     0,
       0,     0,     0,     0,     0,    63,   114,    64,     0,     0,
       0,     0,     0,     0,    70,     0,     0,     0,     0,     0,
       0,     0,     0,   208,     0,     0,     0,     0,     0,     0,
      66,    67,     0,     0,     0,     0,     0,     0,     0,    68,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,     0,     0,     0,    69,     0,     0,
       0,     0,     0,   831,     0,     0,     0,    70,     0,     0,
       0,     0,     0,     0,    71,   208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,     0,
       0,     0,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,     0,
       0,     0,    73,    74,    75,    76,    77,    78,     0,     0,
     874,   875,     0,     0,     0,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     0,
       0,     0,     0,     0,     0,    73,    74,    75,    76,    77,
      78,     0,   876,   877,   898,     0,     0,     0,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     0,   393,   878,   879,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,   114,    64,
       0,     0,     0,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,   394,   393,     0,     0,     0,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    63,   208,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
       0,     0,     0,   224,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,     0,   830,
     394,     0,     0,     0,     0,     0,     0,     0,   426,     0,
       0,     0,   208,    63,     0,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    70,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,     0,     0,     0,     0,   830,     0,     0,
       0,     0,     0,   437,     4,     0,     0,     0,     0,     0,
       0,    63,     0,    64,     0,     0,   208,     0,     0,     0,
       0,     0,     0,     0,     0,    70,     0,     0,     0,     0,
       0,     0,   529,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   439,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,    74,    75,
      76,    77,    78,    70,   831,     0,     0,     0,     0,     0,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     0,     0,    73,    74,    75,    76,
      77,    78,     0,     0,     0,     0,     0,     0,     0,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    73,    74,    75,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       0,    73,    74,    75,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   303,   304,
       0,     0,     0,     0,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   305,   306,     0,
     307,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,   308,     0,
       0,     0,     0,     0,     0,   441,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     208,     0,     0,     0,   309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   310,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,     0,     0,     0,   311,     0,     0,     0,     0,     0,
       0,   443,     0,   208,     0,     0,     0,     0,   312,     0,
     313,     0,     0,     0,     0,     0,     0,     0,   314,   315,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   445,     0,     0,     0,     0,     0,
       0,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   208,     0,     0,     0,     0,     0,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   449,     0,     0,     0,     0,     0,
       0,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   453,     0,     0,     0,     0,
       0,     0,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,     0,     0,     0,
       0,     0,     0,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   458,     0,     0,
       0,     0,     0,     0,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   460,     0,
       0,     0,     0,     0,     0,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   463,
       0,     0,     0,     0,     0,     0,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     465,     0,     0,     0,     0,     0,     0,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   467,     0,     0,     0,     0,     0,     0,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   581,     0,     0,     0,     0,     0,     0,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   583,     0,     0,     0,     0,     0,     0,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   585,     0,     0,     0,     0,     0,
       0,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   587,     0,     0,     0,     0,
       0,     0,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   589,     0,     0,     0,
       0,     0,     0,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   591,     0,     0,
       0,     0,     0,     0,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   593,     0,
       0,     0,     0,     0,     0,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   602,
       0,     0,     0,     0,     0,     0,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     605,     0,     0,     0,     0,     0,     0,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   606,     0,     0,     0,     0,     0,     0,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   608,     0,     0,     0,     0,     0,     0,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   208,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   716,     0,     0,     0,     0,     0,     0,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   208,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   717,     0,     0,     0,     0,     0,
       0,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   208,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   736,     0,     0,     0,     0,
       0,     0,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   208,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   737,     0,     0,     0,
       0,     0,     0,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   863,     0,     0,
       0,     0,     0,     0,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   208,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   864,     0,
       0,     0,     0,     0,     0,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   869,
       0,     0,     0,     0,     0,     0,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     208,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     870,     0,     0,     0,     0,     0,     0,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   208,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   871,     0,     0,     0,     0,     0,     0,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   208,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   956,     0,     0,     0,     0,     0,     0,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222
};

static const yytype_int16 yycheck[] =
{
      14,    43,   134,   146,   232,   148,   149,   266,   165,   399,
      52,   193,   402,     5,   394,    52,   159,   160,     5,   258,
     259,   260,    16,    65,    52,     5,     5,    69,     0,     0,
     833,    52,     5,   176,   132,     7,   678,    11,   213,   214,
       0,    51,     2,    66,    67,     3,     5,     7,   102,    39,
     399,   194,     3,    13,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    58,     3,
      60,     3,     5,   127,    96,     5,     5,    54,    52,     5,
      40,    41,    42,    25,    26,    27,    44,     3,    52,    49,
      13,    14,    15,    16,    17,   898,    19,   139,    52,    22,
      23,    24,    16,    51,   202,   248,    39,     3,    68,    60,
      52,    25,    72,    55,   104,    25,    26,    27,     3,    53,
       3,    53,   164,   279,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   776,   177,   178,   179,   180,   181,
     182,   183,   184,   185,   154,   535,    52,     5,     3,     7,
      52,     3,     3,   195,     3,    85,   198,    53,   200,    44,
     550,    44,   542,     3,   554,   555,   394,   209,   210,    67,
     212,   213,   214,   215,   216,   217,   218,   219,   201,   202,
     203,   204,   205,   206,   207,   149,    52,   426,     3,   538,
     132,   133,   234,    51,    55,   149,   110,   220,   437,    50,
     439,    53,   441,   552,   443,    60,   445,   249,   447,    60,
     449,    60,   451,    53,   453,   454,    16,    52,   361,   458,
     459,   460,   132,   462,   463,    25,   132,     3,   467,   271,
     132,   273,     3,   275,     3,   277,    51,   279,    60,   281,
       3,   283,   279,   149,   236,    60,   225,   149,   227,   236,
     292,   279,   225,   295,   227,   297,   236,   299,   279,     3,
     224,   221,   179,    50,    51,   408,   225,    54,   227,    66,
     224,     3,   232,   653,   654,    51,    51,   667,    53,   669,
     133,   275,    53,     3,    60,   665,   676,    51,   278,   432,
      53,   671,   225,    58,   227,   225,   225,   227,   227,   225,
      44,   227,   651,    50,    51,   279,     3,   349,     3,    53,
     492,    11,    44,     5,   542,     7,     3,   223,   224,   578,
     548,    53,   224,   672,    44,    90,   279,   350,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,   581,   102,   583,    52,   585,    44,   587,    44,
     589,    27,   591,     3,   593,     3,   279,    44,    53,    11,
      51,   403,     6,   602,     8,     9,   605,   154,   127,   608,
      13,    51,   762,    53,   416,   765,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
       6,   351,     8,     9,    44,    51,    44,    40,    41,    42,
      52,   361,    51,    53,   656,    51,    51,   154,    53,    51,
     452,   663,   664,   455,    30,    33,    44,    45,    46,    47,
      48,   578,   565,   543,   544,   653,   654,    51,   470,   471,
      51,    51,    11,    51,   394,    53,    51,   665,    53,     5,
     699,     7,    51,   671,   486,   487,   488,   489,   490,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    51,    11,    38,    39,    40,    41,   708,
       5,   710,     7,    52,    51,   498,    37,    38,    39,    40,
      41,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    11,   167,   168,   169,   170,
     171,   172,    51,    51,   647,    52,    51,   130,   179,   180,
     181,   182,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   568,   192,   193,   194,
     195,    11,    38,    39,    40,   135,    52,   680,    39,    40,
      41,   684,    24,    25,    26,    11,    51,   775,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    29,    51,    51,   279,
      53,    51,   542,    29,    51,   226,     3,   228,   548,    42,
      43,    44,    45,    46,    47,    48,    42,    43,    44,    45,
      46,    47,    48,   831,   226,   833,   228,    51,    25,    26,
      27,    51,    51,   636,    42,    43,    44,    45,    46,    47,
      48,    51,    51,    53,   863,   864,   668,   279,    11,    51,
      51,    53,    53,    51,    51,    52,    51,    51,    55,   681,
      51,   784,    53,    60,    51,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    51,
      51,    53,    13,    14,    15,    16,    17,   709,    19,   711,
     898,    22,    23,    24,    51,   230,   231,   232,   233,   234,
     235,   236,   226,    51,   228,   240,   241,   819,   243,   244,
     245,   246,    51,   653,   654,   838,   738,   739,    51,   741,
     279,   743,   744,   745,   746,   665,   226,   226,   228,   228,
      51,   671,    53,    51,   756,   132,   133,    51,    51,     3,
       4,     5,     6,     7,     8,    51,    10,   226,   226,   228,
     228,    51,   279,    17,   226,    19,   228,   226,   226,   228,
     228,    13,    14,    15,    16,    17,    30,    19,    20,    21,
      22,    23,    24,    51,   226,    53,   228,   889,    42,    43,
      44,    51,   820,   279,   822,    51,    51,    51,   279,    13,
      14,    15,    16,    17,    58,    19,    20,    21,    22,    23,
      24,    51,   824,    50,   279,    69,   135,     3,     4,     5,
       6,     7,     8,   104,    10,    79,    52,   186,    52,   279,
      52,    17,    86,    19,    52,    52,    90,    52,     3,     3,
       3,     3,     3,   279,    30,    99,    51,   172,    50,   185,
       3,    52,    52,   865,    52,    94,    42,    43,    44,    52,
      52,    52,    52,   229,    67,    51,   279,    52,    52,    52,
      52,    51,    58,    51,    51,    51,    51,    51,    51,    51,
      51,    51,   894,    69,    51,    51,   279,   110,    16,   279,
     279,    48,    52,    79,    25,     5,   279,    55,   199,   205,
      86,    33,     5,   205,    90,     5,    33,   205,    52,   279,
      11,   172,    55,    99,   135,   110,     3,   226,   148,   226,
       5,     5,    52,     5,     5,    11,   279,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    95,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     5,     5,     5,     5,
       5,   945,   946,   217,   218,   219,   220,   221,   222,     5,
       5,     9,   101,    52,    51,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     101,   106,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    52,   280,    52,     3,    22,
     275,   217,   218,   219,   220,   221,   222,   132,    51,    51,
      16,   276,   111,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,    67,     3,
       4,     5,     6,     7,     8,    52,    10,     3,    53,   148,
     279,    52,    52,    17,   280,    19,    52,   192,   193,   194,
      52,   196,   197,   198,    52,   200,    30,    52,   203,   204,
      52,   206,   207,   208,   209,   210,   211,   212,    42,    43,
     215,   216,    52,    52,    52,    52,    50,    51,   279,    52,
      52,    52,     3,     4,     5,     6,     7,     8,    51,    10,
      50,    52,    29,    29,    53,    69,    17,    29,    19,    29,
      29,    52,     5,     5,     5,    79,     5,     3,    52,    30,
      51,     4,    86,    55,   277,     4,    40,    52,    52,    52,
     279,    42,    43,    44,    52,    99,    52,     3,   279,     3,
      51,    52,   279,     3,    51,     3,     4,     5,     6,     7,
       8,    29,    10,   279,     4,   178,    51,   148,    69,    17,
     226,    19,    52,     3,    52,   148,   228,   148,    79,   148,
       3,   148,    30,   131,   131,    86,   131,   131,    11,   131,
      51,    53,    52,   131,    42,    43,    44,   131,    99,   131,
     154,    40,    40,    51,    52,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     4,
       4,    69,     4,    52,    51,   279,    52,     3,    53,     4,
      52,    79,    52,    51,    53,    52,     3,    60,    86,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    99,    53,     3,     3,    53,    53,    46,   133,     7,
     526,    30,    34,   217,   218,   219,   220,   221,   222,   234,
     200,   548,   883,   831,   394,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     351,   236,   666,    -1,   251,   265,   217,   218,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,   280,    -1,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,   219,   220,   221,   222,    -1,    -1,    -1,    -1,   280,
      -1,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,   280,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    79,    -1,    -1,    -1,    -1,    -1,    17,
      86,    19,    -1,    -1,    90,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    99,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    69,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    99,    -1,    11,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,   217,   218,   219,   220,   221,   222,    -1,    -1,    -1,
      -1,    -1,    -1,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   171,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   280,    -1,    -1,    -1,    -1,   217,
     218,   219,   220,   221,   222,    -1,   148,   149,    -1,    -1,
      -1,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,   280,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    -1,
      -1,    -1,    -1,    69,    17,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    30,    -1,    -1,
      86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    99,    -1,    -1,    -1,    -1,    51,    52,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    69,    17,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      30,    -1,    -1,    86,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    99,    -1,    -1,    -1,
      -1,    51,    52,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    60,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,   218,   219,   220,   221,   222,    -1,    -1,    -1,
      -1,    -1,    -1,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,    -1,    -1,
      -1,    -1,    -1,    -1,   217,   218,   219,   220,   221,   222,
      -1,    -1,    -1,    -1,   280,    -1,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,   219,
     220,   221,   222,    -1,    -1,    -1,    -1,   280,    -1,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    17,
     280,    19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    51,    52,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,    -1,
      -1,    69,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    30,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    99,    -1,    -1,    -1,    -1,    51,    52,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    69,    17,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    30,    -1,
      -1,    86,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    99,    -1,    -1,    -1,    -1,    51,
      52,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,
     218,   219,   220,   221,   222,    -1,    -1,    -1,    -1,    -1,
      -1,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,    -1,    -1,    -1,    -1,
      -1,    -1,   217,   218,   219,   220,   221,   222,    -1,    -1,
      -1,    -1,   280,    -1,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,   219,   220,   221,
     222,    -1,    -1,    -1,    -1,   280,    -1,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    17,   280,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    51,    52,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    69,
      17,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    30,    -1,    -1,    86,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    99,
      -1,    -1,    -1,    -1,    51,    52,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    69,    17,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    30,    -1,    -1,    86,
      -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    99,    -1,    -1,    -1,    -1,    51,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    -1,    -1,    69,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,   219,
     220,   221,   222,    -1,    -1,    -1,    -1,    -1,    -1,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,    -1,    -1,    -1,    -1,    -1,    -1,
     217,   218,   219,   220,   221,   222,    -1,    -1,   148,   149,
     280,    -1,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,    -1,     3,    -1,
      -1,    -1,    -1,   217,   218,   219,   220,   221,   222,    -1,
      -1,    -1,    17,   280,    19,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      -1,    -1,    -1,    -1,    -1,    17,   280,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,   128,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    99,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    -1,
      -1,    -1,   217,   218,   219,   220,   221,   222,    -1,    -1,
     148,   149,    -1,    -1,    -1,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,    -1,
      -1,    -1,    -1,    -1,    -1,   217,   218,   219,   220,   221,
     222,    -1,   148,   149,   279,    -1,    -1,    -1,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,    -1,     3,   148,   149,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,   280,    19,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    51,     3,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    11,    19,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    88,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,     3,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    11,    17,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    52,   154,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    -1,    19,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,   182,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,   218,   219,
     220,   221,   222,    79,   128,    -1,    -1,    -1,    -1,    -1,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,    -1,    -1,   217,   218,   219,   220,
     221,   222,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   217,   218,   219,   220,   221,   222,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
      -1,   217,   218,   219,   220,   221,   222,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,    63,    64,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    -1,
      85,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,   103,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,   129,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   141,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    11,    -1,    -1,    -1,    -1,   173,    -1,
     175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   183,   184,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    -1,    -1,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    50,    51,    54,   154,   282,   283,   284,   285,   286,
     287,   291,   292,   308,     3,   309,   310,   286,   287,   299,
       0,    96,   283,    54,    25,    26,    27,   132,   301,   302,
     291,    51,   311,   312,   279,    52,    52,    58,    90,   314,
     314,   314,   314,    67,    55,   296,   301,     3,   313,    60,
     309,   179,   293,   291,   291,   291,     3,     4,     5,     6,
       7,     8,    10,    17,    19,    30,    42,    43,    51,    69,
      79,    86,    99,   217,   218,   219,   220,   221,   222,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   280,   286,   304,   305,   338,   339,
     340,   341,   342,   344,   349,   350,   351,   352,   353,   354,
      66,   133,   288,   296,   279,    52,   286,     5,     7,    51,
     294,   295,    44,   315,   316,   342,    51,    53,    51,    51,
     342,   341,   341,   286,   337,   342,   342,   345,   286,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    51,     5,     7,   130,   303,
     279,    42,    43,    44,    45,    46,    47,    48,    11,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    61,    88,   306,    51,   288,   313,   342,
      50,   135,   104,   298,   279,     3,    60,   359,    52,   337,
       3,    44,    53,    52,   337,    52,   337,    52,   279,   186,
     346,   347,    44,    52,   337,    44,    52,   337,    52,    52,
      52,   342,    52,   149,   223,   224,   302,   355,    58,    90,
     342,   357,   342,   357,   342,   357,   342,   357,   342,   357,
     342,   357,   342,   357,   342,   342,   342,   337,   342,   342,
      44,   342,   357,    44,   342,   357,   342,   357,   342,   357,
     342,   342,   342,    63,    64,    82,    83,    85,   103,   129,
     141,   159,   173,   175,   183,   184,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   360,    52,    52,
       3,     3,     3,     3,   360,   337,   342,   342,   304,   341,
     341,   341,   341,   341,   341,   341,     3,   342,   342,    38,
      39,    40,   342,   342,   342,   342,   342,   342,   342,   342,
     341,    51,   286,   343,     6,     8,     9,    30,   106,   132,
     192,   193,   194,   196,   197,   198,   200,   203,   204,   206,
     207,   208,   209,   210,   211,   212,   215,   216,   289,   290,
      52,   172,    50,     3,    51,   286,   317,   318,   319,   322,
     330,   331,   349,   185,   297,   315,   359,    52,    51,    53,
       3,    53,    52,    52,   337,   342,    94,   348,   346,    52,
      52,    52,    52,   354,   354,   354,    52,     5,    39,   225,
     227,   356,    67,   356,    52,   355,    52,    52,   342,    52,
     342,    52,   342,    52,   342,    52,   342,    52,   342,    52,
     342,    52,   279,    52,    52,   279,    52,    52,    52,    52,
      52,   342,    52,    52,   342,    52,   342,    52,   342,   279,
     279,   279,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    52,   279,   279,   279,   279,   279,
     279,    52,    60,   148,   149,   342,   341,   343,    29,   337,
       6,     8,     9,   132,   202,   110,    16,    16,    25,   110,
      16,    25,    25,    55,   199,     5,   205,   205,    33,    33,
       5,     5,   213,   214,   205,    52,   279,   172,    53,   182,
     286,   318,   323,   331,     3,    60,   312,   329,   358,    13,
      14,    15,    16,    17,    19,    22,    23,    24,   279,   334,
      60,   329,   358,    55,   320,    60,   358,   342,   110,   300,
      52,   337,     3,    44,    53,    51,    53,     3,   171,   342,
      95,   354,   226,     5,   225,   227,   226,   148,   337,    52,
     354,    52,   354,    52,   354,    52,   354,    52,   354,    52,
     354,    52,   354,    52,   354,   342,   354,   354,   342,   354,
     354,   354,    52,   354,   354,    52,    52,   354,    52,     5,
     342,   342,     5,     5,     5,     5,     5,     5,   236,     5,
     236,     5,     5,     5,     5,     5,   236,     5,   342,   342,
     342,   342,   342,   360,   101,   101,    29,   341,    52,     9,
       5,     7,     5,     7,   289,     3,    53,    51,   324,    52,
      52,   358,   329,    16,   275,    22,   336,   192,   193,   194,
     195,   335,   318,   336,   336,   275,    51,   332,    51,   333,
     317,    16,   358,   329,   276,    50,    60,   325,   358,   358,
      67,   111,   307,    52,    51,    53,     3,    52,   337,     3,
      44,    53,   342,   226,   228,   226,   228,   148,    52,   302,
     355,   354,   354,   354,   354,   354,   354,   354,    52,   279,
      52,   279,   354,   354,   354,   279,    52,    52,    52,    52,
     279,    52,    52,   279,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,   279,    52,    52,   279,   279,
      52,   279,    52,   102,   127,   102,   127,   341,    53,     3,
      53,   337,   329,   318,   318,   335,    20,    21,   335,   335,
     318,   350,    60,   358,   342,    60,   358,   318,   329,    39,
      58,    60,   104,   278,   321,    51,   358,   325,   337,   342,
      52,   337,     3,    44,    51,    53,    52,    53,     3,    44,
      29,    29,    29,    29,    29,    52,   355,    52,   354,   342,
     354,   342,     5,     5,     5,     5,   342,   342,   342,   342,
     342,   342,   342,     3,    53,    53,     3,    52,   342,    51,
      55,   358,    55,   358,    20,    21,     4,   277,     4,    40,
       3,   128,   326,   327,   328,   349,   325,    52,    51,    53,
      52,   337,     3,    44,     3,    44,     5,   225,   227,     5,
     225,   227,     5,    85,   225,   227,     5,   225,   227,     5,
     225,   227,    52,    52,    52,   279,    52,    52,    52,    52,
      52,    52,   148,   149,   148,   149,   148,   149,   148,   149,
      53,     3,     3,   279,   313,     3,   338,   338,   342,    51,
      29,     4,   178,    51,    33,    53,   328,    52,   279,   326,
      52,   337,     3,    44,    52,   226,   228,   226,   228,   148,
     226,   228,   226,   228,   148,   226,   228,   226,   228,   148,
     226,   228,   226,   228,   148,   226,   228,   226,   228,   148,
     354,   354,   342,   131,   131,   131,   131,   131,   131,   131,
     131,     3,   324,    52,    53,    40,    40,   313,     4,     4,
       4,   342,     3,    53,   326,    52,    52,     3,    53,   312,
     312,    52,   279,    53,     3,    53,     3,    52,    52,     4,
       3,    53,     3,    53,    52,    53,     3,    53,     3,     3,
       3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   281,   282,   283,   283,   284,   284,   284,   285,   286,
     286,   287,   287,   288,   288,   289,   289,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   290,   290,   290,   290,   290,   290,
     290,   290,   290,   290,   291,   291,   292,   292,   292,   292,
     293,   293,   293,   293,   293,   294,   294,   295,   295,   295,
     296,   296,   297,   297,   298,   298,   299,   300,   300,   301,
     301,   302,   302,   303,   303,   303,   303,   303,   303,   303,
     303,   303,   303,   304,   304,   305,   306,   306,   306,   307,
     307,   308,   309,   309,   310,   311,   311,   312,   313,   313,
     314,   314,   314,   315,   315,   316,   316,   316,   316,   317,
     317,   318,   318,   319,   319,   319,   319,   319,   319,   319,
     319,   319,   319,   319,   319,   320,   320,   321,   321,   321,
     321,   321,   322,   323,   324,   324,   325,   325,   326,   326,
     326,   327,   327,   328,   328,   328,   329,   329,   330,   330,
     330,   330,   330,   330,   330,   330,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     332,   333,   334,   334,   334,   334,   335,   335,   335,   335,
     335,   336,   336,   337,   337,   338,   338,   338,   338,   338,
     338,   338,   338,   338,   338,   338,   338,   338,   338,   338,
     338,   338,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   340,   340,   340,   340,   340,   340,   340,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   342,   342,   343,   343,   344,   345,   345,   346,   346,
     347,   348,   348,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   349,
     349,   349,   349,   349,   349,   349,   349,   349,   349,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   351,   351,   351,
     351,   351,   351,   351,   351,   352,   352,   352,   352,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   354,
     354,   354,   354,   354,   354,   354,   354,   355,   355,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   357,   357,   358,
     359,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360
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
       3,     1,     1,     3,     5,     4,     4,     3,     2,     4,
       3,     2,     3,     2,     1,     0,     3,     3,     4,     4,
       7,     1,     3,     2,     3,     5,     0,     4,     1,     3,
       2,     1,     2,     1,     1,     3,     0,     1,     1,     3,
       5,     4,     7,     6,     6,     5,     3,     6,     5,     8,
       7,     4,     4,     4,     5,     4,     3,     5,     4,     3,
       7,     7,     3,     3,     3,     2,     0,     1,     1,     1,
       1,     0,     1,     1,     3,     1,     3,     3,     5,     5,
       7,     7,     6,     6,     9,     9,     8,     8,     8,     8,
       7,     7,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     1,     1,     3,     1,     1,     1,     2,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     2,     3,     4,     3,     4,     3,     4,     5,     6,
       3,     4,     3,     1,     3,     5,     0,     1,     1,     2,
       4,     0,     2,     1,     1,     1,     1,     4,     6,     6,
       8,     4,     4,     1,     1,     8,     8,     6,     6,     3,
       3,     8,     4,     1,     6,    10,     1,     1,     6,     5,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     6,     5,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     6,     5,     5,     4,     5,     4,     6,
       5,     5,     4,     4,     5,     4,     4,     5,     5,     5,
       7,     9,     5,     7,     9,     4,     4,     4,     5,     9,
       8,     7,     6,     5,     3,     3,     3,     3,     3,    10,
       9,     8,     7,     6,     4,     4,     4,     4,     4,     8,
       5,     7,     7,     6,     4,     4,     3,     2,     2,     2,
       2,     2,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     4,     1,     6,     4,
       1,     1,     1,     1,     1,     4,     1,     4,     1,     4,
       1,     1,     1,     4,     1,     4,     1,     4,     4,     1,
       1,     4,     1,     4,     4,     1,     4,     1,     4,     4,
       1
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
#line 2831 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2837 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2843 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2849 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2855 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2861 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2867 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2873 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 282: /* sql_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2879 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* stmt_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2885 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 284: /* stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2891 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 285: /* select_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2897 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 286: /* select_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2903 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 287: /* select_no_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2909 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 288: /* opt_option_query_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2915 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 289: /* query_hint_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2921 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 290: /* query_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2927 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 291: /* select_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2933 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 292: /* simple_select  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2939 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 293: /* opt_top  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2945 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 294: /* top_count  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2951 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* top_percent  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2957 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 296: /* opt_for_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2963 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* opt_where  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2969 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* opt_from_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2975 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* opt_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2981 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* opt_groupby  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2987 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* opt_order_by  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2993 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* order_by  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2999 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* offset_fetch  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3005 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* sort_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3011 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* sort_key  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3017 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* opt_asc_desc  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3023 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* opt_having  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3029 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* with_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3035 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 309: /* with_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3041 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* common_table_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3047 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* opt_derived_column_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3053 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 312: /* simple_ident_list_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3059 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 313: /* simple_ident_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3065 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* opt_distinct  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3071 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* select_expr_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3077 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 316: /* projection  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3083 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 317: /* from_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3089 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 318: /* table_factor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3095 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 319: /* table_factor_non_join  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3101 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 320: /* opt_for_system_time  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3107 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 321: /* system_time  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3113 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 322: /* table_value_constructor_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3119 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 323: /* table_value_constructor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3125 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 324: /* row_value_expression_list_parens_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3131 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 325: /* opt_with_table_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3137 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 326: /* table_hint_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3143 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 327: /* table_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3149 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 328: /* table_hint_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3155 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 329: /* opt_simple_ident_list_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3161 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 330: /* relation_factor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3167 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 331: /* joined_table  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3173 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 332: /* pivot_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3179 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 333: /* unpivot_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3185 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 334: /* join_type  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3191 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 337: /* expr_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3197 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 338: /* column_ref  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3203 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 339: /* expr_const  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3209 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 340: /* simple_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3215 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 341: /* arith_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3221 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 342: /* expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3227 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 343: /* in_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3233 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 344: /* case_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3239 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 345: /* case_arg  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3245 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 346: /* when_clause_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3251 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 347: /* when_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3257 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 348: /* case_default  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3263 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 349: /* func_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3269 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 350: /* aggregate_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3275 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 351: /* analytic_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3281 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 352: /* ranking_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3287 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 353: /* scalar_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3293 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 354: /* over_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3299 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 355: /* row_or_range_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3305 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 356: /* window_frame_extent  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3311 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 357: /* distinct_or_all  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3317 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 358: /* relation_name  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3323 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 359: /* column_label  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3329 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 360: /* data_type  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3335 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 3452 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 214 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3646 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 225 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3655 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 234 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3661 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 246 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3670 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 251 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3679 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 259 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 3690 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 266 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 3702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 277 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3708 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 279 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPTION_CLAUSE, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
#line 3717 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 288 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 3726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 296 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH GROUP"); }
#line 3732 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 297 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ORDER GROUP"); }
#line 3738 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 298 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("CONCAT UNION"); }
#line 3744 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 299 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH UNION"); }
#line 3750 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 300 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE UNION"); }
#line 3756 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 301 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("LOOP JOIN"); }
#line 3762 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 302 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE JOIN"); }
#line 3768 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 303 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH JOIN"); }
#line 3774 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 304 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("EXPAND VIEWS"); }
#line 3780 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 305 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FAST", (yyvsp[0].node)); }
#line 3786 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 306 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE ORDER"); }
#line 3792 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 307 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
#line 3798 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 308 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
#line 3804 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 309 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 3810 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 310 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 3816 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 311 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3822 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 312 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3828 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 313 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3834 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 314 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3840 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 315 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXDOP", (yyvsp[0].node)); }
#line 3846 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 316 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXRECURSION", (yyvsp[0].node)); }
#line 3852 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 317 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
#line 3858 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 318 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("OPTIMIZE FOR", (yyvsp[0].node)); }
#line 3864 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 319 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
#line 3870 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 320 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION FORCED"); }
#line 3876 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 321 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("RECOMPILE"); }
#line 3882 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 322 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ROBUST PLAN"); }
#line 3888 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 333 "sqlparser.y" /* yacc.c:1646  */
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
#line 3916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 357 "sqlparser.y" /* yacc.c:1646  */
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
#line 3945 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 382 "sqlparser.y" /* yacc.c:1646  */
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
#line 3974 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 407 "sqlparser.y" /* yacc.c:1646  */
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
#line 4003 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 435 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4009 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 437 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 4018 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 442 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 4027 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 447 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 4036 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 452 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 4045 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 461 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4054 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 471 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4063 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 479 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4069 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 481 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_CLAUSE, 1, nullptr);
    (yyval.node)->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
#line 4078 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 488 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4084 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 490 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4093 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 497 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4099 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 499 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4108 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 506 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4114 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 510 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4120 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 512 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4129 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 519 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4135 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 525 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4144 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 530 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4153 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 539 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
#line 4162 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 544 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
#line 4171 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 549 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
#line 4180 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 554 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
#line 4189 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 559 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
#line 4198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 564 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
#line 4207 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 569 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
#line 4216 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 574 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
#line 4225 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 579 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
#line 4234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 584 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
#line 4243 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 593 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4252 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 601 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4261 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 609 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4269 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 613 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4277 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 617 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4285 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 623 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4291 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 625 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 633 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4309 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 642 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4318 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 650 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4327 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 657 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4333 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 663 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 672 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4351 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 679 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4357 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 681 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4365 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 685 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4373 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 693 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4382 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 701 "sqlparser.y" /* yacc.c:1646  */
    {
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias((yyvsp[0].node));
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, nd);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4393 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 708 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4405 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 716 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4417 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 724 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4427 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 734 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4436 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 747 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 4445 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 752 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4454 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 757 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 4463 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 762 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4472 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 767 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4481 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 772 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4490 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 777 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4499 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 782 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4508 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 787 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4517 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 792 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4526 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 797 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4535 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 802 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4544 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 809 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4550 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 811 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_SYSTEM_TIME, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FOR_SYSTEM_TIME_SERIALIZE_FORMAT;
}
#line 4559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 819 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "AS OF "+(yyvsp[0].node)->text()); }
#line 4565 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 821 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "FROM "+(yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text()); }
#line 4571 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 823 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text()); }
#line 4577 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 825 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "CONTAINED IN("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); }
#line 4583 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 827 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "ALL"); }
#line 4589 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 832 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4598 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 840 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 4607 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 848 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4616 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 853 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, 1, (yyvsp[-3].node));
    nd->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS_LIST, 2, nd, (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4627 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 862 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4633 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 864 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
#line 4642 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 873 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4651 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 878 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4660 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 888 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 4673 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 897 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[-1]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
#line 4687 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 912 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4696 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 919 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 927 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4711 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 932 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4720 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 937 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4729 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 942 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4738 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 947 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4747 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 952 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4756 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 957 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4765 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 965 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4774 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 970 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4783 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 975 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4793 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 981 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 4802 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 986 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 4812 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 992 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4822 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 998 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 4832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1004 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "OUTER");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 4842 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1010 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4851 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1015 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4860 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1020 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4869 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1025 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4878 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1030 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4887 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1035 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4896 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1043 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_CLAUSE, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4905 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1051 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_CLAUSE, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4914 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1059 "sqlparser.y" /* yacc.c:1646  */
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
#line 4929 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1070 "sqlparser.y" /* yacc.c:1646  */
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
#line 4944 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1081 "sqlparser.y" /* yacc.c:1646  */
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
#line 4959 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1092 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 4967 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1098 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4973 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1099 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 4979 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1100 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 4985 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1101 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 3; }
#line 4991 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1102 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 4; }
#line 4997 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1107 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5003 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1108 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5009 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1115 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5018 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1124 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5027 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1129 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nd, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5037 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1135 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5046 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1140 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, nd, (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5056 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1146 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5065 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1151 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5075 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1157 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5084 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1162 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5094 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1168 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5103 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1173 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5113 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1179 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5122 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1184 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1190 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5141 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1195 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5151 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1201 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5160 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1206 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5170 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1220 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5176 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1221 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); }
#line 5182 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1222 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); }
#line 5188 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1230 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1239 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 5207 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1249 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 5216 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1254 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 5225 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1259 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 5234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1264 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 5243 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1269 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 5252 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1274 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 5261 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1279 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 5270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1284 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 5279 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1289 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 5288 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1299 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_COLLATE_SERIALIZE_FORMAT;
}
#line 5297 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1304 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 5306 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1309 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 5315 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1314 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 5324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1319 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 5333 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1324 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 5342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1329 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 5351 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1334 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 5360 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1339 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 5369 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1344 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 5378 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1349 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 5387 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1354 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 5396 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1359 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5405 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1364 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5414 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1369 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5423 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1374 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5432 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1379 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5441 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1384 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5450 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1389 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 5459 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1394 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 5468 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1399 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 5477 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1404 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 5486 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1409 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 5495 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1418 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5504 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1426 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 5513 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1433 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5519 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1440 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5528 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1448 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1455 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5543 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1457 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5552 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1470 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5563 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1477 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 5, fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5573 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1483 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5585 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1491 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5599 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1501 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5610 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1508 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5620 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1514 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5630 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1520 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5640 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1526 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEADD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5654 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1536 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEDIFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5668 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1546 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATENAME");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5680 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1554 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEPART");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5692 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1562 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1568 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETUTCDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5712 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1574 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1584 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5736 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1590 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN_ACTIVE_ROWVERSION");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5746 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1596 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5758 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1604 "sqlparser.y" /* yacc.c:1646  */
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
#line 5774 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1616 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5784 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1622 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5794 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1628 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ISNULL");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5806 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1639 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5816 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1645 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5826 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1651 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5836 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1657 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5846 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1663 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5856 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1669 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5866 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1675 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5876 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1681 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5886 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1687 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5896 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1693 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5906 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1699 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1705 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5926 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1711 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5936 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1717 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5946 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1723 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5956 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1729 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5966 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1735 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5976 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1741 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5986 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1747 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5996 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1753 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6006 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1759 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6016 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1765 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6026 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1771 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6036 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1777 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6046 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1783 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6056 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1789 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6066 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1795 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6076 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1801 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6086 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1807 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6096 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1813 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6106 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1819 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6116 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1825 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6126 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1831 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6136 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1837 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6146 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1843 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6156 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1849 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6166 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1855 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6177 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1862 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6188 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1869 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1875 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6208 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1881 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6218 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1887 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6228 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1893 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6239 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1900 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6250 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1907 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6260 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1913 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1919 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6280 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1925 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING_ID");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6290 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1934 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "FIRST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1940 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6310 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1946 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6320 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1952 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6332 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1960 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1970 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6356 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1976 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6368 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1984 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6382 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1996 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6392 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2002 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6402 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2008 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6412 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2014 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NTILE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6422 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2023 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6433 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2030 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6444 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2037 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6455 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2044 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6466 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2051 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6477 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2058 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6486 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2063 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6496 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2069 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6506 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2075 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6516 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2081 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6526 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2087 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2094 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6548 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2101 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2108 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2115 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6581 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2122 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6590 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2127 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6600 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2133 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6610 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2139 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6620 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2145 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6630 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2153 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6639 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2158 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6648 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2163 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6657 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2168 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6666 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2173 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6675 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2178 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2183 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6693 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2188 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2196 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, 2, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6712 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2202 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, 2, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6722 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2211 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 6728 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2213 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); }
#line 6734 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2215 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 6740 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2217 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 6746 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2219 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); }
#line 6752 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2221 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 6758 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2223 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 6764 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2225 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 6770 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2227 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6776 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2229 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6782 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2231 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6788 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2233 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6794 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2235 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6800 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2237 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 6806 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2239 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); }
#line 6812 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2241 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 6818 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2243 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 6824 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2245 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); }
#line 6830 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2247 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 6836 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2249 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 6842 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2251 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 6848 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2253 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 6854 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2255 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 6860 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2257 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 6866 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2259 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); }
#line 6872 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2261 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); }
#line 6878 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2263 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); }
#line 6884 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2265 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); }
#line 6890 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2269 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6898 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2273 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6906 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2290 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIGINT"); }
#line 6912 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2292 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "INT"); }
#line 6918 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2294 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLINT"); }
#line 6924 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2296 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TINYINT"); }
#line 6930 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2298 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); }
#line 6936 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2300 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-1].node)->text()+")"); }
#line 6942 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2302 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL"); }
#line 6948 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2304 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); }
#line 6954 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2306 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-1].node)->text()+")"); }
#line 6960 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2308 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC"); }
#line 6966 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2310 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIT"); }
#line 6972 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2312 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "MONEY"); }
#line 6978 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2314 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLMONEY"); }
#line 6984 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2316 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "REAL"); }
#line 6990 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2318 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "FLOAT("+(yyvsp[-1].node)->text()+")"); }
#line 6996 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2320 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATE"); }
#line 7002 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2322 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET("+(yyvsp[-1].node)->text()+")"); }
#line 7008 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2324 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET"); }
#line 7014 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2326 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2("+(yyvsp[-1].node)->text()+")"); }
#line 7020 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2328 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2"); }
#line 7026 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2330 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLDATETIME"); }
#line 7032 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2332 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME"); }
#line 7038 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2334 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME("+(yyvsp[-1].node)->text()+")"); }
#line 7044 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2336 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME"); }
#line 7050 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2338 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR("+(yyvsp[-1].node)->text()+")"); }
#line 7056 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2340 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR"); }
#line 7062 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2342 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR("+(yyvsp[-1].node)->text()+")"); }
#line 7068 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2344 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR(MAX)"); }
#line 7074 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2346 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR"); }
#line 7080 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2348 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TEXT"); }
#line 7086 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2350 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR("+(yyvsp[-1].node)->text()+")"); }
#line 7092 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2352 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR"); }
#line 7098 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2354 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR("+(yyvsp[-1].node)->text()+")"); }
#line 7104 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2356 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR(MAX)"); }
#line 7110 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2358 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR"); }
#line 7116 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2360 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY("+(yyvsp[-1].node)->text()+")"); }
#line 7122 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2362 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY"); }
#line 7128 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2364 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY("+(yyvsp[-1].node)->text()+")"); }
#line 7134 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2366 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY(MAX)"); }
#line 7140 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2368 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY"); }
#line 7146 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 7150 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2371 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
