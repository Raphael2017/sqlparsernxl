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
    TEMP_VARIABLE = 266,
    COLLATE = 267,
    CONDITIONLESS_JOIN = 268,
    CROSS = 269,
    FULL = 270,
    INNER = 271,
    JOIN = 272,
    LEFT = 273,
    NATURAL = 274,
    RIGHT = 275,
    ON = 276,
    USING = 277,
    OUTER = 278,
    PIVOT = 279,
    UNPIVOT = 280,
    UNION = 281,
    EXCEPT = 282,
    INTERSECT = 283,
    OR = 284,
    AND = 285,
    NOT = 286,
    COMP_LE = 287,
    COMP_LT = 288,
    COMP_EQ = 289,
    COMP_GT = 290,
    COMP_GE = 291,
    COMP_NE = 292,
    CNNOP = 293,
    LIKE = 294,
    BETWEEN = 295,
    IN = 296,
    IS = 297,
    MOD = 298,
    UMINUS = 299,
    WITH = 300,
    FOR = 301,
    ADD = 302,
    ANY = 303,
    ALL = 304,
    ALTER = 305,
    AS = 306,
    ASC = 307,
    BEGI = 308,
    BIGINT = 309,
    BINARY = 310,
    BOTH = 311,
    BROWSE = 312,
    BY = 313,
    CASCADE = 314,
    CASE = 315,
    CHARACTER = 316,
    CLUSTER = 317,
    COMMENT = 318,
    COMMIT = 319,
    CONSISTENT = 320,
    COLUMN = 321,
    COLUMNS = 322,
    CREATE = 323,
    CREATETIME = 324,
    CURRENT_USER = 325,
    CHANGE_OBI = 326,
    SWITCH_CLUSTER = 327,
    DATE = 328,
    DATETIME = 329,
    DEALLOCATE = 330,
    DECIMAL = 331,
    DEFAULT = 332,
    DELETE = 333,
    DESC = 334,
    DESCRIBE = 335,
    DISTINCT = 336,
    DOUBLE = 337,
    DROP = 338,
    DUAL = 339,
    ELSE = 340,
    END = 341,
    END_P = 342,
    ERROR = 343,
    EXECUTE = 344,
    EXISTS = 345,
    EXPLAIN = 346,
    FETCH = 347,
    FIRST = 348,
    FLOAT = 349,
    FROM = 350,
    FROZEN = 351,
    FORCE = 352,
    GLOBAL = 353,
    GLOBAL_ALIAS = 354,
    GRANT = 355,
    GROUP = 356,
    HAVING = 357,
    HINT_BEGIN = 358,
    HINT_END = 359,
    HOTSPOT = 360,
    IDENTIFIED = 361,
    IF = 362,
    INSERT = 363,
    INTO = 364,
    KEY = 365,
    LEADING = 366,
    LIMIT = 367,
    LOCAL = 368,
    LOCKED = 369,
    MEMORY = 370,
    MODIFYTIME = 371,
    MASTER = 372,
    NEXT = 373,
    NOEXPAND = 374,
    NUMERIC = 375,
    OFFSET = 376,
    ONLY = 377,
    ORDER = 378,
    OPTION = 379,
    PARAMETERS = 380,
    PERCENT = 381,
    PASSWORD = 382,
    PRECISION = 383,
    PREPARE = 384,
    PRIMARY = 385,
    READ_STATIC = 386,
    REAL = 387,
    RENAME = 388,
    REPLACE = 389,
    RESTRICT = 390,
    PRIVILEGES = 391,
    REVOKE = 392,
    ROLLBACK = 393,
    ROW = 394,
    ROWS = 395,
    KILL = 396,
    READ_CONSISTENCY = 397,
    SCHEMA = 398,
    SCOPE = 399,
    SELECT = 400,
    SESSION = 401,
    SESSION_ALIAS = 402,
    SET = 403,
    SHOW = 404,
    SMALLINT = 405,
    SNAPSHOT = 406,
    SPFILE = 407,
    START = 408,
    STATIC = 409,
    SYSTEM = 410,
    STRONG = 411,
    SET_MASTER_CLUSTER = 412,
    SET_SLAVE_CLUSTER = 413,
    SLAVE = 414,
    TABLE = 415,
    TABLES = 416,
    THEN = 417,
    TIES = 418,
    TIME = 419,
    TIMESTAMP = 420,
    TINYINT = 421,
    TRAILING = 422,
    TRANSACTION = 423,
    TO = 424,
    TOP = 425,
    UPDATE = 426,
    USER = 427,
    VALUES = 428,
    VARCHAR = 429,
    VARBINARY = 430,
    WHERE = 431,
    WHEN = 432,
    WORK = 433,
    PROCESSLIST = 434,
    QUERY = 435,
    CONNECTION = 436,
    WEAK = 437,
    LOOP = 438,
    HASH = 439,
    MERGE = 440,
    REMOTE = 441,
    CONCAT = 442,
    OPTIMIZE = 443,
    EXPAND = 444,
    VIEWS = 445,
    FAST = 446,
    DISABLE = 447,
    EXTERNALPUSHDOWN = 448,
    IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 449,
    KEEP = 450,
    PLAN = 451,
    KEEPFIXED = 452,
    MAX_GRANT_PERCENT = 453,
    MIN_GRANT_PERCENT = 454,
    MAXDOP = 455,
    MAXRECURSION = 456,
    NO_PERFORMANCE_SPOOL = 457,
    PARAMETERIZATION = 458,
    SIMPLE = 459,
    FORCED = 460,
    RECOMPILE = 461,
    ROBUST = 462,
    CHECKSUM = 463,
    BINARY_CHECKSUM = 464,
    RANK = 465,
    DENSE_RANK = 466,
    ROW_NUMBER = 467,
    NTILE = 468,
    PARTITION = 469,
    RANGE = 470,
    UNBOUNDED = 471,
    PRECEDING = 472,
    CURRENT = 473,
    FOLLOWING = 474,
    OVER = 475,
    VARP = 476,
    VAR = 477,
    SUM = 478,
    STDEVP = 479,
    STDEV = 480,
    MIN = 481,
    MAX = 482,
    LEAD = 483,
    LAST_VALUE = 484,
    LAG = 485,
    GROUPING_ID = 486,
    GROUPING = 487,
    FIRST_VALUE = 488,
    COUNT_BIG = 489,
    COUNT = 490,
    CHECKSUM_AGG = 491,
    AVG = 492,
    SYSTEM_USER = 493,
    STUFF = 494,
    SESSION_USER = 495,
    NULLIF = 496,
    MIN_ACTIVE_ROWVERSION = 497,
    ISNULL = 498,
    IDENTITY = 499,
    GETUTCDATE = 500,
    GETDATE = 501,
    DATEPART = 502,
    DATENAME = 503,
    DATEDIFF = 504,
    DATEADD = 505,
    CURRENT_TIMESTAMP = 506,
    CONVERT = 507,
    COALESCE = 508,
    CAST = 509,
    BIT = 510,
    CHAR = 511,
    DATETIME2 = 512,
    DATETIMEOFFSET = 513,
    INT = 514,
    MONEY = 515,
    NCHAR = 516,
    NVARCHAR = 517,
    SMALLDATETIME = 518,
    SMALLMONEY = 519,
    TEXT = 520,
    APPLY = 521,
    SYSTEM_TIME = 522,
    OF = 523,
    CONTAINED = 524
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 424 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 454 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  23
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4749

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  282
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  459
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1009

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   524

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   281,    47,     2,     2,
      52,    53,    45,    43,   280,    44,    54,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    55,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    49,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    48,    50,
      51,    56,    57,    58,    59,    60,    61,    62,    63,    64,
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
     275,   276,   277,   278,   279
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   217,   217,   227,   228,   240,   241,   242,   246,   251,
     255,   260,   268,   275,   287,   288,   296,   297,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   336,   337,   341,   367,   393,
     419,   448,   449,   458,   459,   464,   469,   474,   482,   483,
     491,   492,   493,   502,   503,   511,   512,   520,   521,   529,
     530,   538,   539,   543,   548,   557,   562,   567,   572,   577,
     582,   587,   592,   597,   602,   610,   611,   619,   628,   631,
     635,   642,   643,   651,   659,   660,   668,   676,   677,   681,
     689,   690,   698,   699,   703,   710,   711,   719,   726,   734,
     742,   751,   752,   760,   761,   766,   771,   776,   781,   786,
     791,   796,   801,   806,   811,   816,   821,   826,   831,   836,
     841,   848,   855,   865,   866,   874,   876,   878,   880,   882,
     887,   895,   903,   908,   918,   919,   927,   928,   933,   943,
     952,   965,   966,   967,   975,   976,   981,   982,   987,   992,
     997,  1002,  1007,  1012,  1020,  1025,  1030,  1036,  1041,  1047,
    1053,  1059,  1065,  1070,  1075,  1080,  1085,  1090,  1098,  1106,
    1114,  1125,  1136,  1147,  1154,  1155,  1156,  1157,  1158,  1162,
    1163,  1168,  1169,  1177,  1178,  1183,  1189,  1194,  1200,  1205,
    1211,  1216,  1222,  1227,  1233,  1238,  1244,  1249,  1255,  1260,
    1269,  1270,  1271,  1272,  1273,  1274,  1275,  1276,  1277,  1281,
    1282,  1283,  1284,  1290,  1291,  1292,  1293,  1302,  1303,  1308,
    1313,  1318,  1323,  1328,  1333,  1338,  1343,  1351,  1352,  1353,
    1358,  1363,  1368,  1373,  1378,  1383,  1388,  1393,  1398,  1403,
    1408,  1413,  1418,  1423,  1428,  1433,  1438,  1443,  1448,  1453,
    1458,  1463,  1471,  1472,  1480,  1488,  1489,  1493,  1494,  1502,
    1510,  1511,  1520,  1521,  1522,  1523,  1524,  1531,  1537,  1545,
    1555,  1562,  1568,  1574,  1580,  1590,  1600,  1608,  1616,  1622,
    1628,  1638,  1644,  1650,  1658,  1670,  1676,  1682,  1693,  1699,
    1705,  1711,  1717,  1723,  1729,  1735,  1741,  1747,  1753,  1759,
    1765,  1771,  1777,  1783,  1789,  1795,  1801,  1807,  1813,  1819,
    1825,  1831,  1837,  1843,  1849,  1855,  1861,  1867,  1873,  1879,
    1885,  1891,  1897,  1903,  1909,  1916,  1923,  1929,  1935,  1941,
    1947,  1954,  1961,  1967,  1973,  1979,  1988,  1994,  2000,  2006,
    2014,  2024,  2030,  2038,  2050,  2056,  2062,  2068,  2077,  2084,
    2091,  2098,  2105,  2112,  2117,  2123,  2129,  2135,  2141,  2148,
    2155,  2162,  2169,  2176,  2181,  2187,  2193,  2199,  2207,  2212,
    2217,  2222,  2227,  2232,  2237,  2242,  2250,  2256,  2265,  2267,
    2269,  2271,  2273,  2275,  2277,  2279,  2281,  2283,  2285,  2287,
    2289,  2291,  2293,  2295,  2297,  2299,  2301,  2303,  2305,  2307,
    2309,  2311,  2313,  2315,  2317,  2319,  2323,  2327,  2335,  2339,
    2344,  2346,  2348,  2350,  2352,  2354,  2356,  2358,  2360,  2362,
    2364,  2366,  2368,  2370,  2372,  2374,  2376,  2378,  2380,  2382,
    2384,  2386,  2388,  2390,  2392,  2394,  2396,  2398,  2400,  2402,
    2404,  2406,  2408,  2410,  2412,  2414,  2416,  2418,  2420,  2422
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "TEMP_VARIABLE",
  "COLLATE", "CONDITIONLESS_JOIN", "CROSS", "FULL", "INNER", "JOIN",
  "LEFT", "NATURAL", "RIGHT", "ON", "USING", "OUTER", "PIVOT", "UNPIVOT",
  "UNION", "EXCEPT", "INTERSECT", "OR", "AND", "NOT", "COMP_LE", "COMP_LT",
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
  "'$'", "$accept", "sql_stmt", "stmt_list", "stmt", "dml_stmt",
  "select_stmt", "select_with_parens", "select_no_parens",
  "opt_option_query_hint", "query_hint_list", "query_hint",
  "select_clause", "simple_select", "opt_into_clause", "opt_top",
  "top_count", "top_percent", "opt_for_clause", "opt_where",
  "opt_from_clause", "opt_groupby", "opt_order_by", "order_by",
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
     295,   296,   297,    43,    45,    42,    47,    37,   298,    94,
     299,   300,    40,    41,    46,    59,   301,   302,   303,   304,
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
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
      44,    36
};
# endif

#define YYPACT_NINF -854

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-854)))

#define YYTABLE_NINF -63

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      38,    26,     5,  -854,   136,    43,   -58,    38,    36,  -854,
    -854,  -854,    23,  -854,     2,    34,  -854,  -202,   105,   143,
    -854,  -854,   -55,  -854,  -854,  -854,  -854,   136,   136,   136,
     166,   204,  -854,    23,   276,   229,  -854,    26,  -854,  -854,
      31,  1354,     2,     2,     2,  2458,   252,   193,   204,    16,
     280,   287,  -854,   218,  -854,  2458,   343,   262,   290,  -854,
    -854,  -854,  -854,  -854,  -854,  -854,   359,   386,  2458,  2720,
    2720,  -854,   918,  2458,  -854,  -854,   287,   387,   411,   414,
     433,   436,   437,   440,   452,   456,   495,   496,   503,   506,
     523,   527,   528,   535,   540,   558,   562,   576,   583,   592,
     599,  -854,   600,  -854,   607,  -854,   614,   619,   622,   636,
     637,   638,   639,   640,  -854,   644,   645,   646,   410,  -854,
     282,   423,  -854,  -854,  -854,   711,  3451,  -854,  -854,  -854,
    -854,  -854,  -854,  -854,   672,   672,  -854,   570,   424,  3081,
    -854,   653,  -854,   193,   276,  -854,  -854,  3532,   537,   656,
    1616,   152,  1669,  1722,   783,   468,   468,   479,   655,  1051,
    4707,   525,  -854,   971,  1024,   658,   660,   661,  2458,   178,
    1286,  1286,  1286,  1286,  1286,  1286,  1286,  2458,  2458,  2458,
    2458,  2458,  2458,   546,   650,  1286,  1286,  2458,  2458,  2458,
    3375,   668,   673,   712,   724,   725,   726,  3375,  2458,  2458,
    -854,  -854,   728,   627,  1354,  2720,  2720,  2720,  2720,  2720,
    2720,  2720,  -854,   730,  2458,  2458,    82,  2458,  2458,  2458,
    2458,  2458,  2458,  2458,  2458,  2720,   682,   358,   735,  -854,
    2458,  -854,  2458,  -854,  -854,  -854,  2664,  -854,  -854,   603,
    -854,   567,  -854,   690,   369,  -854,    72,  -854,   691,  -854,
     692,  -854,  2458,  2458,   651,   525,   695,  -854,   696,   698,
    -854,   699,   531,   531,   531,  3563,  -854,    47,   694,    47,
     -31,   710,  -854,  -854,  3622,  2458,  3653,  2458,  3684,  2458,
    3715,  2458,  3746,  2458,  3777,  2458,  3808,  2458,    32,  3839,
      65,   718,  3870,  3901,   719,  3932,  2458,   720,  3963,  2458,
    3994,  2458,  4025,  2458,  1378,  1426,  1440,  -854,   722,  -854,
    -854,   723,   760,   790,  -854,  -854,   791,  -854,   792,   793,
    -854,   794,   795,   796,  -854,  -854,   798,   814,  -854,  -854,
    -854,   -32,  -854,  -854,   571,   587,   594,   595,   596,   824,
    3435,   825,  -854,  3029,   729,  -854,   468,   468,   829,   829,
     829,   829,  -854,  -854,   823,   783,  2458,  2720,   682,   481,
     481,   481,   481,   481,   481,   407,   469,   453,   918,  -854,
    -854,  -854,  -854,  -854,   422,  -854,  2482,  -854,   -92,   805,
     900,    62,   181,   892,   863,   727,   925,  -854,   731,   733,
     898,   899,   929,   930,  -854,   145,  -854,   741,   895,   677,
    -854,  -854,  1984,   184,   382,   949,  -854,  -854,  -854,  2814,
    2458,   862,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,
     531,   732,    48,   736,   811,  -854,  2458,  -854,  -854,   911,
    -854,   531,  4056,   531,  4087,   531,  4118,   531,  4149,   531,
    4180,   531,  4211,   531,  4242,   531,  2458,   531,   531,  2458,
    -854,  -854,   531,   531,   531,  4273,   531,   531,  4304,  -854,
    4335,   531,  4366,   960,  2458,  2458,   963,   966,   967,   968,
     975,     3,    12,   978,   979,   980,   981,    15,  -854,   982,
    2458,  2458,  2458,  2458,  2458,  -854,  3375,   158,   404,   148,
    2982,   124,  -854,   201,  -854,   149,   934,  -854,    89,  2458,
     881,   469,   494,  -854,  2720,   940,  -854,  -854,  -854,   893,
     894,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,
    -854,   985,  -854,  -854,  -854,  -854,   477,   520,  -854,  -854,
    -854,  -854,  -854,  -854,  2664,  -854,   944,   476,  -854,   996,
    2037,    39,   946,  2458,  4707,  -854,  -854,  -854,   332,   336,
     852,  -854,  -854,   100,  -854,  -854,   531,  -854,   531,  -854,
     531,  -854,   531,  -854,   531,  -854,   531,  -854,   531,  -854,
     344,  -854,  -854,   438,  -854,  -854,  -854,   531,  -854,  -854,
     531,  -854,  -854,   531,   737,  4397,  4428,   950,   -27,   951,
     -26,   953,   954,   955,   956,   957,   958,   959,   969,   972,
     973,   983,   739,  4459,  4490,  1749,  2117,   799,   984,   986,
     188,   211,  -854,  3127,  1010,  -854,   987,   434,  1082,   990,
     992,  1010,  -854,  -854,    34,    -8,   997,   258,  3029,   997,
     997,   745,   994,   995,  3029,  1016,  1010,  -854,    34,   761,
     185,  1010,  -854,  4707,   988,   936,  2720,   711,  -854,   129,
     198,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  2090,    79,
     524,  -854,   999,  1000,  -854,   219,  4707,  1019,  1020,  1023,
    1027,  1029,  -854,   -21,  1007,  -854,  -854,  -854,  -854,  -854,
    -854,  -854,   531,  2458,   531,  2458,  -854,  -854,  -854,  1056,
    -854,  -854,  -854,  -854,  1057,  -854,  -854,  1059,  -854,  -854,
    -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  1060,
    -854,  -854,  2458,  2458,  -854,  2458,  -854,   266,  1012,  1067,
     534,   267,   554,   159,  -854,  2458,  -854,  -854,  -854,    34,
    -854,  3029,  3029,  -854,   258,  -854,  -854,  -854,  -854,  -854,
     579,   258,   258,  3029,   709,   162,  2458,   197,  -854,  3029,
      34,  -854,   -24,  1022,  1010,  -854,  1021,  -854,  2458,  2458,
    -854,   711,  2458,  2458,  2458,  2458,  -854,  1025,   557,  -854,
    2352,   278,  -854,   326,  -854,  -854,   104,   108,    54,   112,
     115,  -854,  1042,  -854,  -854,  4521,  -854,  4552,   821,  1050,
    1055,  1061,  4583,  4614,  4645,  1058,  1072,  1106,  -854,   268,
     563,   311,  1010,  -854,    34,  1062,  -854,  -854,  -854,  -854,
    2458,  1064,  -854,  -854,  -854,  1054,  1010,  -854,  3489,  1010,
    -854,   662,  -854,  1109,  -854,   839,  1114,  1078,  -854,  3077,
    1021,  -854,  -854,  4707,  2744,  2799,  2975,  3034,  -854,  2405,
     345,  -854,  1068,  -854,  -854,  -854,  -854,   392,   393,   974,
     396,   402,   976,   901,   891,   412,   977,   413,   420,   993,
     421,   435,   998,  -854,   531,   531,  2458,  -854,  -854,  -854,
    -854,  -854,  -854,  1119,  -854,  -854,   582,  1124,   611,  1126,
      34,  -854,   850,  4707,   276,  1128,  -854,  1128,  -854,  2458,
    1080,  1103,  1130,   964,  1083,   301,  3174,  1091,  2667,  -854,
    -854,  -854,  1013,  1014,  1052,  1053,  1063,  1065,  1066,  1104,
    -854,  1133,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,
    -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,
    -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,  -854,
    -854,  -854,  4676,  -854,  1180,  1135,   314,  1136,  -854,   987,
    1143,  1146,  1196,  1197,  4707,   276,  1235,  -854,  1236,  1237,
    2458,  -854,  -854,  3077,  -854,  -854,  -854,  -854,  -854,  -854,
    -854,  -854,  -854,  -854,  -854,  1198,   615,  1245,  -854,  -854,
     304,    34,    34,  1200,  -854,  -854,  1015,  4707,  -854,  1246,
    1135,  1244,   334,  1247,  1248,  -854,  1295,  1198,   307,  1249,
    -854,  -854,  1254,  1255,  1299,  -854,   354,  1256,  1257
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,   102,     0,     0,     3,     7,     8,
      46,     9,    71,    45,     0,    97,    93,    94,    46,     0,
     103,   104,    53,     1,     2,     4,     6,   102,   102,   102,
       0,    63,    72,    71,     0,     0,    98,     0,    11,    10,
       0,     0,     0,     0,     0,     0,     0,    14,    63,   100,
       0,     0,    95,    58,    60,     0,    54,     0,   193,   210,
     211,   213,   212,   214,   215,   220,     0,     0,     0,     0,
       0,   110,     0,   265,   283,   216,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,   295,     0,   292,     0,     0,     0,     0,
       0,     0,     0,     0,   282,     0,     0,     0,     0,   225,
      51,   105,   219,   221,   227,   237,   107,   223,   224,   274,
     275,   273,   272,   238,    48,    50,    49,    73,    85,    88,
      64,     0,    12,    14,     0,    99,    96,     0,     0,    56,
       0,     0,     0,     0,   250,   228,   229,   225,     0,   191,
     266,     0,   226,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     217,   218,     0,    67,     0,     0,     0,     0,     0,     0,
       0,     0,   419,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   108,
       0,    74,     0,    89,    90,    87,     0,    13,   101,    59,
      55,     0,   363,     0,   194,   195,     0,   365,     0,   364,
       0,   222,     0,     0,   270,   267,     0,   367,     0,     0,
     366,     0,     0,     0,     0,     0,   385,     0,     0,     0,
       0,     0,   416,   417,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   420,   456,   435,
     441,   426,     0,   429,   433,   422,   443,   423,   448,   459,
     430,   445,   439,   437,   421,   431,   451,   454,   440,   432,
     449,     0,   289,   288,     0,     0,     0,     0,     0,     0,
       0,   156,    52,     0,    65,   106,   230,   231,   232,   233,
     234,   236,   235,   239,   249,   248,     0,     0,     0,   240,
     241,   242,   244,   243,   245,   261,   246,     0,     0,   262,
     259,   253,   251,   255,     0,   109,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,    39,     0,    43,     0,     0,    16,
      57,   373,     0,     0,     0,     0,   375,   374,   192,     0,
       0,     0,   268,   280,   377,   276,   376,   354,   355,   356,
       0,     0,     0,     0,     0,   386,     0,   387,   383,     0,
     384,   327,     0,   323,     0,   311,     0,   319,     0,   315,
       0,   307,     0,   303,     0,     0,     0,     0,     0,     0,
     345,   344,     0,   341,   337,     0,   335,   331,     0,   342,
       0,   299,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   291,     0,
       0,     0,     0,     0,     0,   281,     0,     0,   156,   129,
       0,   154,    68,   111,   113,   154,   133,   114,   126,     0,
      69,   247,     0,   260,     0,     0,   254,   252,   256,    75,
      76,    28,    29,    19,    23,    25,    21,    18,    24,    22,
      20,     0,    26,    27,    31,    32,     0,     0,    37,    38,
      41,    42,    44,    15,     0,   362,     0,   196,   197,     0,
       0,     0,     0,     0,   271,   264,   357,   389,     0,     0,
       0,   388,   390,     0,   379,   326,   329,   322,   325,   310,
     313,   318,   321,   314,   317,   306,   309,   302,   305,   351,
       0,   347,   348,     0,   346,   340,   336,   339,   334,   330,
     333,   343,   298,   301,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   157,
       0,     0,   418,     0,     0,   128,     0,   154,     0,     0,
     114,     0,   155,   120,   154,     0,   189,   184,     0,   189,
     189,     0,     0,     0,     0,     0,     0,   123,   154,     0,
     144,     0,   125,    66,     0,    91,     0,   257,   263,     0,
       0,    40,    34,    33,    36,    35,    17,   372,     0,     0,
       0,   361,     0,   200,   201,     0,   269,     0,     0,     0,
       0,     0,   382,     0,     0,   328,   324,   312,   320,   316,
     308,   304,     0,     0,     0,     0,   338,   332,   300,     0,
     293,   297,   455,   425,     0,   434,   428,     0,   442,   446,
     447,   457,   458,   444,   438,   436,   450,   452,   453,     0,
     287,   286,     0,     0,   278,     0,   277,     0,   159,     0,
     157,     0,     0,   154,   127,     0,   141,   140,   164,   154,
     119,     0,     0,   190,   184,   185,   186,   187,   188,   183,
       0,   184,   184,     0,     0,   174,     0,   177,   112,     0,
     154,   122,     0,     0,     0,   115,   144,   124,     0,     0,
      47,   258,     0,     0,     0,     0,   360,     0,   198,   199,
       0,     0,   371,     0,   208,   209,     0,     0,     0,     0,
       0,   381,     0,   380,   352,     0,   349,     0,     0,     0,
       0,     0,     0,     0,     0,   158,     0,     0,   163,     0,
     159,     0,     0,   132,   154,     0,   118,   169,   170,   180,
       0,     0,   181,   182,   171,     0,     0,   173,     0,     0,
     176,     0,   121,     0,   139,     0,     0,     0,   134,     0,
     144,   117,    70,    92,     0,     0,     0,     0,   370,     0,
       0,   359,     0,   206,   207,   204,   205,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   378,     0,     0,     0,   424,   427,   290,
     285,   284,   279,     0,   162,   161,   158,     0,     0,     0,
     154,   131,   142,   166,     0,     0,   172,     0,   175,     0,
       0,     0,     0,     0,     0,   152,     0,     0,   146,   149,
     151,   116,     0,     0,     0,     0,     0,     0,     0,     0,
     358,     0,   202,   203,   369,   397,   412,   392,   407,   402,
     400,   415,   395,   410,   405,   396,   411,   391,   406,   401,
     399,   414,   394,   409,   404,   398,   413,   393,   408,   403,
     353,   350,     0,   160,     0,   162,     0,     0,   130,     0,
       0,   193,     0,     0,   165,     0,     0,   135,     0,     0,
       0,   150,   145,     0,   148,    77,    79,    78,    80,    81,
      83,    82,    84,   368,   294,   160,     0,     0,   143,   168,
       0,     0,     0,     0,   137,   136,     0,   153,   147,     0,
       0,   194,     0,     0,     0,   167,     0,     0,     0,     0,
     178,   179,     0,   196,     0,   138,     0,     0,   198
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -854,  -854,  1301,  -854,  -854,  -854,     4,   244,  1108,   778,
    -854,   349,  -854,  -854,  -854,  -854,  -854,  1265,  -854,  -854,
    -854,  1281,  -166,  -854,  1084,  -854,  -854,  -854,  -854,  1278,
    -854,  -854,   -15,  -142,   517,  1115,  -854,   684,  -465,  -854,
    -854,  -854,  -854,  -854,   371,  -722,  -853,  -854,   425,  -435,
    1120,   833,  -854,  -854,  -854,  -315,  -225,  -140,  -354,  -854,
    -854,   -39,   -40,   970,  -854,  -854,  1069,  -854,  -854,  -336,
     581,  -854,  -854,  -854,  -148,  -251,  1070,   398,  -290,  1098,
    -183
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     5,     6,     7,     8,     9,   119,    19,   142,   398,
     399,    12,    13,   203,    41,    56,    57,    47,   500,   344,
     645,    31,    32,   231,   137,   138,   235,   760,    14,    16,
      17,    35,   622,    50,    22,   120,   121,   492,   493,   494,
     640,   828,   495,   619,   726,   755,   897,   898,   899,   623,
     496,   497,   745,   747,   635,   739,   734,   158,   122,   123,
     124,   125,   159,   370,   127,   161,   254,   255,   411,   128,
     129,   130,   131,   132,   133,   271,   425,   275,   624,   229,
     331
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      36,   126,   238,   270,    10,   139,    18,   498,   592,   731,
     243,    10,   248,   250,   338,   147,   823,   594,    10,   429,
     600,   478,   428,   258,   261,   618,   693,   696,   154,    15,
     155,   156,   781,   160,   831,   824,    53,   825,    54,    24,
     291,   511,   663,    23,   213,   964,    10,    10,    10,    27,
      28,    29,   421,   548,     2,   146,     1,     2,   339,   853,
     637,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   404,   157,   213,    37,   515,
     162,   826,   768,    55,   664,   445,    34,   422,   516,     1,
       2,    26,   612,     3,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   901,   847,
     988,   512,   408,   850,   417,   418,   419,   857,   448,   267,
     860,   356,   357,   358,   769,    40,   405,   612,   265,   267,
     274,   276,   278,   280,   282,   284,   286,   288,   289,   290,
     854,   292,   293,   295,   298,   300,   302,   304,   305,   306,
     641,   612,   612,   672,   498,   244,    30,     4,    38,   340,
       4,   609,   612,   740,   126,   612,   346,   347,   348,   349,
     350,   351,   352,   517,   354,   355,    34,   359,   360,   361,
     362,   363,   364,   365,   366,   621,   367,   537,   612,   730,
     376,   718,   139,     4,   269,    20,    39,   245,   518,   615,
     612,    34,   613,   751,   269,   638,   246,   519,   642,   614,
     636,    34,   610,   409,   720,   625,   626,   627,   628,   629,
     802,   630,   774,   816,   631,   632,   633,    21,   505,   538,
     369,   266,   762,    30,    45,   432,   753,   434,   539,   436,
     593,   438,   719,   440,    11,   442,   754,   444,   479,   595,
     267,    11,   601,   694,   697,   827,   455,   763,   819,   458,
      46,   460,   536,   462,   775,   721,   807,   808,   732,   795,
     800,   876,   546,   423,   549,   424,   550,   723,   814,    49,
     855,   843,   856,   555,   821,   557,   553,   559,   803,   561,
      51,   563,   498,   565,   806,   567,   144,   569,   498,   571,
     572,   764,   674,   608,   574,   575,   576,   991,   578,   579,
    1003,    30,   446,   582,   878,   822,   501,   976,   502,   140,
     796,   719,   877,   844,   724,   269,   765,   141,   267,   845,
     848,   729,   849,   145,   851,   960,   852,   999,   858,     2,
     859,   861,   150,   862,   151,   449,   750,   491,   912,   245,
     756,   757,   538,   150,   -61,   801,   213,  1008,   992,   530,
     531,  1004,   369,    33,   371,   879,   372,   373,   977,   881,
     544,   846,   157,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   673,   405,   374,
     913,   134,   135,   136,   148,   498,   498,   682,   149,   769,
     662,   202,   268,   269,   741,   742,   570,   498,   675,   573,
     676,   152,   677,   498,   678,   200,   679,   201,   680,   809,
     681,   402,   782,   403,   585,   586,   812,   813,   506,   686,
     507,   508,   687,   804,   540,   688,   541,   612,   153,   163,
     603,   604,   605,   606,   607,   948,   224,   225,   226,   227,
     213,   735,   736,   737,   738,   817,   150,   820,   611,   643,
     -46,   -46,   -46,   164,   830,   647,   165,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   634,   652,   504,   653,   166,    34,    38,   167,   168,
     -46,   684,   169,   900,   617,   621,   205,   206,   207,   208,
     209,   210,   211,   666,   170,   -46,   -46,   -46,   171,   225,
     226,   227,   880,   207,   208,   209,   210,   211,   767,   223,
     224,   225,   226,   227,   646,   654,   886,   655,   658,   888,
     659,   952,    38,   953,   784,   -46,   786,   205,   206,   207,
     208,   209,   210,   211,    42,    43,    44,   172,   173,    58,
      59,    60,    61,    62,    63,   174,    64,    65,   175,   667,
     900,   668,   900,   669,    66,   670,    67,   -46,   -46,   277,
     279,   281,   283,   285,   287,   176,   770,    68,   771,   177,
     178,   296,   299,   301,   303,   805,   402,   179,   799,    69,
      70,   294,   180,   625,   626,   627,   628,   629,    72,   630,
     810,   811,   631,   632,   633,   272,   150,   761,   801,   839,
     181,   840,   -46,   -46,   182,   540,    73,   797,   832,   915,
     917,   916,   918,   920,   683,   921,    74,   900,   183,   922,
     842,   923,   491,    75,   658,   184,   944,   273,   491,   927,
     930,   928,   931,   785,   185,   787,    76,   932,   935,   933,
     936,   186,   187,    58,    59,    60,    61,    62,    63,   188,
      64,    65,   937,   402,   938,   946,   189,   658,    66,   989,
      67,   190,   792,   793,   191,   794,   625,   626,   627,   628,
     629,    68,   630,   889,   890,   631,   632,   633,   192,   193,
     194,   195,   196,    69,    70,   297,   197,   198,   199,   911,
      29,   230,    72,   204,   232,   236,   818,   241,   251,   272,
     240,   262,   253,   263,   264,   334,   940,   941,   685,   833,
      73,   332,   834,   835,   836,   837,   333,   335,   336,   337,
      74,   341,   343,   353,   368,   491,   491,    75,   212,   -62,
     400,   273,   950,   401,   406,   407,   410,   491,   413,   414,
      76,   415,   416,   491,   205,   206,   207,   208,   209,   210,
     211,    83,   426,   430,    77,    78,    79,    80,    81,    82,
     883,   450,   453,   456,   466,   467,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   213,   468,   983,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   942,   118,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   469,   470,   471,   472,   473,   474,   475,   954,
     476,   480,   714,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   477,   481,    77,    78,
      79,    80,    81,    82,   482,   483,   484,   485,   211,   487,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   499,   513,   514,   520,   521,
     987,    58,    59,    60,    61,    62,    63,   522,    64,    65,
     523,   118,   526,   527,   528,   529,    66,   524,    67,   525,
      84,    85,    86,    87,    88,    89,    90,   532,   533,    68,
      94,    95,   542,    97,    98,    99,   100,   534,   545,   547,
     552,    69,    70,   551,   554,   584,   993,   994,   587,     1,
      72,   588,   589,   590,    58,    59,    60,    61,    62,    63,
     591,    64,    65,   596,   597,   598,   599,   602,    73,    66,
     639,    67,   644,   648,   651,   649,   650,   657,    74,   660,
     665,   671,    68,   692,   695,    75,   698,   699,   700,   701,
     702,   703,   704,   612,    69,    70,   256,   689,    76,   709,
     733,   743,   705,    72,   257,   706,   707,    58,    59,    60,
      61,    62,    63,   749,    64,    65,   708,   716,   752,   725,
     717,    73,    66,   727,    67,   728,   744,   746,   759,   776,
     777,    74,   772,   778,   773,    68,   758,   779,    75,   780,
     783,   788,   789,   213,   790,   791,   797,    69,    70,   259,
     798,    76,   753,     4,   829,   874,    72,   260,   838,   715,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,    73,   863,   625,   626,   627,   628,
     629,   866,   630,   867,    74,   631,   632,   633,   868,   875,
     885,    75,   873,   891,   869,   882,   884,   892,   893,   894,
     926,   914,   943,   919,    76,   924,   929,   945,   925,   947,
     949,   951,   955,   956,   957,   959,    77,    78,    79,    80,
      81,    82,   934,   958,   962,   965,   966,   939,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   975,   967,   968,   973,   770,   540,    77,
      78,    79,    80,    81,    82,   969,   979,   970,   971,   118,
     980,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   972,   981,   982,   984,
     985,   986,    77,    78,    79,    80,    81,    82,   990,   997,
     839,   237,   118,   995,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    58,
      59,    60,    61,    62,    63,   996,    64,    65,   998,  1002,
    1000,  1001,  1007,   541,    66,   118,    67,  1005,    25,  1006,
     771,   840,   656,   143,    48,    52,   377,    68,   748,   345,
     978,   961,   342,   620,   412,   815,   375,     0,   503,    69,
      70,   252,     0,     0,     0,     0,     0,     0,    72,   427,
       0,     0,     0,     0,     0,   272,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,    58,    59,    60,
      61,    62,    63,     0,    64,    65,    74,     0,     0,     0,
       0,     0,    66,    75,    67,     0,     0,   273,     0,     0,
       0,     0,     0,     0,     0,    68,    76,     0,     0,     0,
     213,     0,     0,     0,     0,     0,     0,    69,    70,    71,
       0,     0,     0,     0,     0,     0,    72,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,     0,     0,     0,    73,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,   213,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   213,     0,    76,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   118,     0,     0,
       0,     0,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,    58,
      59,    60,    61,    62,    63,     0,    64,    65,     0,     0,
       0,     0,     0,     0,    66,   118,    67,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   463,    69,
      70,     0,     0,     0,     0,     0,     0,     0,    72,   242,
       0,     0,    58,    59,    60,    61,    62,    63,     0,    64,
      65,     0,     0,     0,     0,     0,    73,    66,     0,    67,
       0,     0,     0,     0,     0,     0,    74,     0,     0,     0,
      68,     0,     0,    75,     0,     0,   464,     0,     0,     0,
       0,     0,    69,    70,     0,     0,    76,     0,     0,     0,
     465,    72,   247,     0,     0,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,     0,     0,     0,     0,    73,
      66,     0,    67,     0,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    68,     0,     0,    75,     0,     0,     0,
       0,   213,     0,     0,     0,    69,    70,     0,     0,    76,
       0,     0,     0,     0,    72,   249,     0,     0,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,     0,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    77,    78,    79,    80,    81,    82,
       0,     0,     0,     0,     0,     0,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,     0,     0,     0,     0,     0,     0,    77,    78,    79,
      80,    81,    82,     0,     0,     0,     0,   118,     0,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,     0,     0,     0,     0,     0,     0,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
     118,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,     0,     0,     0,
       0,     0,    66,   118,    67,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    69,    70,   712,
       0,     0,     0,     0,     0,     0,    72,   535,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,     0,
       0,     0,     0,     0,    73,    66,     0,    67,     0,     0,
       0,     0,     0,     0,    74,     0,     0,     0,    68,     0,
       0,    75,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    70,     0,     0,    76,     0,     0,     0,     0,    72,
     661,     0,     0,    58,    59,    60,    61,    62,    63,     0,
      64,    65,     0,     0,     0,     0,     0,    73,    66,     0,
      67,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,    68,     0,     0,    75,     0,     0,     0,     0,   213,
       0,     0,     0,    69,    70,     0,     0,    76,     0,     0,
       0,     0,    72,   766,     0,     0,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
      73,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,     0,     0,     0,     0,     0,    75,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,     0,
       0,     0,     0,     0,     0,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,   118,     0,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,     0,     0,    77,    78,
      79,    80,    81,    82,     0,     0,     0,     0,   118,     0,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,     0,     0,     0,     0,     0,
      66,   118,    67,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    69,    70,   713,     0,     0,
       0,     0,     0,     0,    72,   841,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,     0,     0,
       0,     0,    73,    66,     0,    67,     0,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    68,     0,     0,    75,
       0,     0,     0,     0,     0,     0,     0,     0,    69,    70,
       0,     0,    76,     0,     0,     0,     0,    72,   910,     0,
       0,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,     0,     0,     0,     0,    73,    66,     0,    67,     0,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    68,
       0,     0,    75,     0,   213,     0,     0,     0,     0,     0,
       0,    69,    70,     0,     0,    76,     0,     0,     0,     0,
      72,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,     0,     0,     0,    73,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,     0,     0,    75,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,    78,    79,    80,    81,    82,     0,     0,     0,     0,
       0,     0,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,     0,     0,     0,
       0,     0,     0,    77,    78,    79,    80,    81,    82,     0,
       0,   509,   510,   118,     0,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     895,     0,     0,     0,     0,     0,    77,    78,    79,    80,
      81,    82,     0,     0,     0,    66,   118,    67,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,    58,    59,    60,    61,    62,    63,     0,
      64,    65,     0,     0,     0,     0,     0,     0,    66,   118,
      67,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,     0,   213,     0,     0,     0,
       0,     0,     0,    69,    70,     0,     0,     0,     0,     0,
       0,   378,    72,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,     0,     0,
      73,     0,     0,     0,     0,     0,   896,   379,     0,     0,
      74,     0,     0,     0,     0,     0,     0,    75,     0,     0,
       0,   213,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,     0,     0,     0,     0,   213,     0,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,     0,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   380,   381,   382,
       0,   383,   384,   385,     0,   386,     0,     0,   387,   388,
       0,   389,   390,   391,   392,   393,   394,   395,     0,     0,
     396,   397,     0,     0,     0,    77,    78,    79,    80,    81,
      82,     0,     0,   902,   903,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     0,     0,     0,     0,    77,    78,
      79,    80,    81,    82,     0,     0,     0,   963,   904,   905,
       0,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   488,   543,   213,     0,     0,
       0,     0,     0,   489,     0,     0,     0,     0,     0,     0,
      66,   118,    67,     0,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   488,     1,   490,     0,     0,     0,     0,     0,
     489,     0,     0,     0,     0,     0,   213,    66,     0,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,     0,     0,     0,
     895,   490,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   213,     0,    66,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   906,   907,     0,     0,     0,     0,
     722,     0,     0,     0,     0,     0,     0,     4,     0,     0,
       0,     0,     0,   233,     0,    66,     0,    67,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,     0,
       0,     0,     0,     0,     0,   616,     0,     0,     0,     0,
     234,     0,     0,     0,     0,     0,     0,   895,     0,     0,
       0,     0,     0,   908,   909,     0,     0,     0,     0,     0,
       0,     0,    66,     0,    67,     0,     0,     0,     0,     0,
      77,    78,    79,    80,    81,    82,   896,    74,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,    77,    78,    79,
      80,    81,    82,     0,    74,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,     0,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     0,     0,     0,    77,    78,    79,    80,    81,
      82,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,    77,    78,    79,    80,    81,    82,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   307,
     308,     0,     0,     0,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,   212,     0,     0,     0,   309,   310,
       0,   311,     0,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,     0,   312,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,     0,     0,   486,     0,     0,     0,
       0,   213,     0,     0,     0,   313,     0,     0,     0,     0,
       0,     0,   228,     0,     0,     0,     0,   314,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,     0,     0,     0,   315,     0,     0,     0,     0,
       0,     0,     0,     0,   213,   887,     0,     0,     0,   316,
       0,   317,     0,     0,     0,     0,     0,     0,     0,   318,
     319,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   239,     0,     0,     0,     0,
       0,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   420,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   213,     0,     0,     0,     0,     0,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   431,     0,     0,     0,     0,
       0,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   433,     0,     0,     0,
       0,     0,     0,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   435,     0,     0,
       0,     0,     0,     0,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   437,     0,
       0,     0,     0,     0,     0,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   439,
       0,     0,     0,     0,     0,     0,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     441,     0,     0,     0,     0,     0,     0,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,     0,     0,     0,     0,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   447,     0,     0,     0,     0,     0,     0,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   451,     0,     0,     0,     0,     0,     0,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   452,     0,     0,     0,     0,     0,
       0,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   454,     0,     0,     0,     0,
       0,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,     0,     0,     0,
       0,     0,     0,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   459,     0,     0,
       0,     0,     0,     0,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   461,     0,
       0,     0,     0,     0,     0,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   556,
       0,     0,     0,     0,     0,     0,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     558,     0,     0,     0,     0,     0,     0,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,     0,     0,     0,     0,     0,     0,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   562,     0,     0,     0,     0,     0,     0,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   564,     0,     0,     0,     0,     0,     0,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   566,     0,     0,     0,     0,     0,
       0,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   568,     0,     0,     0,     0,
       0,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   577,     0,     0,     0,
       0,     0,     0,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   580,     0,     0,
       0,     0,     0,     0,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   581,     0,
       0,     0,     0,     0,     0,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   583,
       0,     0,     0,     0,     0,     0,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     690,     0,     0,     0,     0,     0,     0,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   691,     0,     0,     0,     0,     0,     0,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   213,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   710,     0,     0,     0,     0,     0,     0,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   213,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   711,     0,     0,     0,     0,     0,     0,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   213,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   864,     0,     0,     0,     0,     0,
       0,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   865,     0,     0,     0,     0,
       0,     0,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   213,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   870,     0,     0,     0,
       0,     0,     0,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   213,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   871,     0,     0,
       0,     0,     0,     0,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   213,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   872,     0,
       0,     0,     0,     0,     0,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   974,
       0,     0,     0,     0,     0,     0,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227
};

static const yytype_int16 yycheck[] =
{
      15,    41,   144,   169,     0,    45,     2,   343,     5,    17,
     150,     7,   152,   153,   197,    55,    40,     5,    14,   270,
       5,    53,    53,   163,   164,   490,    53,    53,    68,     3,
      69,    70,    53,    73,   756,    59,     5,    61,     7,    97,
     180,   133,     3,     0,    12,   898,    42,    43,    44,    26,
      27,    28,     5,     5,    52,    51,    51,    52,   198,     5,
     495,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,     3,    72,    12,   280,    17,
      76,   105,     3,    52,    45,    53,    52,    40,    26,    51,
      52,    55,     3,    55,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,   830,     5,
     963,   203,   252,     5,   262,   263,   264,     5,    53,   150,
       5,    39,    40,    41,    45,   180,    54,     3,   168,   150,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
      86,   181,   182,   183,   184,   185,   186,   187,   188,   189,
      61,     3,     3,    53,   490,     3,   133,   155,    53,   199,
     155,     3,     3,   628,   204,     3,   205,   206,   207,   208,
     209,   210,   211,   111,   214,   215,    52,   217,   218,   219,
     220,   221,   222,   223,   224,    61,   225,     3,     3,   624,
     230,     3,   232,   155,   225,    59,    53,    45,    17,   489,
       3,    52,    54,   638,   225,   495,    54,    26,   498,    61,
      61,    52,    54,   253,     3,    14,    15,    16,    17,    18,
      61,    20,     3,    61,    23,    24,    25,    91,   368,    45,
     226,    53,   103,   133,    68,   275,    51,   277,    54,   279,
     237,   281,    54,   283,     0,   285,    61,   287,   280,   237,
     150,     7,   237,   280,   280,   279,   296,   128,    61,   299,
      56,   301,   402,   303,    45,    54,   731,   732,   276,     3,
       3,     3,   420,   226,   226,   228,   228,   613,   743,     3,
     226,     3,   228,   431,   749,   433,   426,   435,   723,   437,
      61,   439,   628,   441,   729,   443,   280,   445,   634,   447,
     448,   103,   553,   486,   452,   453,   454,     3,   456,   457,
       3,   133,   280,   461,     3,   750,   356,     3,   357,    67,
      54,    54,    54,    45,   614,   225,   128,   134,   150,     3,
     226,   621,   228,    53,   226,    34,   228,     3,   226,    52,
     228,   226,    52,   228,    54,   280,   636,   343,     3,    45,
     640,   641,    45,    52,   136,    54,    12,     3,    54,   214,
     215,    54,   358,    14,     6,    54,     8,     9,    54,   804,
     410,    45,   368,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   553,    54,    31,
      45,    42,    43,    44,    51,   731,   732,    53,   136,    45,
     540,   119,   224,   225,   629,   630,   446,   743,   556,   449,
     558,    52,   560,   749,   562,     5,   564,     7,   566,   734,
     568,    52,   673,    54,   464,   465,   741,   742,     6,   577,
       8,     9,   580,   723,    52,   583,    54,     3,    52,    52,
     480,   481,   482,   483,   484,   880,    39,    40,    41,    42,
      12,   193,   194,   195,   196,   745,    52,   747,    54,   499,
      26,    27,    28,    52,   754,   504,    52,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,   280,     5,    30,     7,    52,    52,    53,    52,    52,
      56,    53,    52,   829,   490,    61,    43,    44,    45,    46,
      47,    48,    49,   543,    52,    26,    27,    28,    52,    40,
      41,    42,   802,    45,    46,    47,    48,    49,   658,    38,
      39,    40,    41,    42,    30,     5,   816,     7,    52,   819,
      54,   885,    53,   887,   682,    56,   684,    43,    44,    45,
      46,    47,    48,    49,    27,    28,    29,    52,    52,     3,
       4,     5,     6,     7,     8,    52,    10,    11,    52,   227,
     896,   229,   898,   227,    18,   229,    20,   133,   134,   171,
     172,   173,   174,   175,   176,    52,    52,    31,    54,    52,
      52,   183,   184,   185,   186,   725,    52,    52,    54,    43,
      44,    45,    52,    14,    15,    16,    17,    18,    52,    20,
      21,    22,    23,    24,    25,    59,    52,   646,    54,    52,
      52,    54,   133,   134,    52,    52,    70,    54,   758,   227,
     227,   229,   229,   227,   280,   229,    80,   963,    52,   227,
     770,   229,   628,    87,    52,    52,    54,    91,   634,   227,
     227,   229,   229,   683,    52,   685,   100,   227,   227,   229,
     229,    52,    52,     3,     4,     5,     6,     7,     8,    52,
      10,    11,   227,    52,   229,    54,    52,    52,    18,    54,
      20,    52,   712,   713,    52,   715,    14,    15,    16,    17,
      18,    31,    20,    21,    22,    23,    24,    25,    52,    52,
      52,    52,    52,    43,    44,    45,    52,    52,    52,   839,
      28,   131,    52,   280,   280,    52,   746,    51,    53,    59,
     173,    53,   187,    53,    53,     3,   864,   865,   280,   759,
      70,    53,   762,   763,   764,   765,    53,     3,     3,     3,
      80,     3,   105,     3,    52,   731,   732,    87,     3,   136,
     173,    91,   884,    53,    53,    53,    95,   743,    53,    53,
     100,    53,    53,   749,    43,    44,    45,    46,    47,    48,
      49,   230,    68,    53,   218,   219,   220,   221,   222,   223,
     810,    53,    53,    53,    52,    52,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    12,    52,   955,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,   866,   281,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    52,    52,    52,    52,    52,    52,    52,   889,
      52,   280,    53,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    52,   280,   218,   219,
     220,   221,   222,   223,   280,   280,   280,    53,    49,    54,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   186,   111,    17,    26,    56,
     960,     3,     4,     5,     6,     7,     8,   200,    10,    11,
       5,   281,    34,    34,     5,     5,    18,   206,    20,   206,
     231,   232,   233,   234,   235,   236,   237,   206,    53,    31,
     241,   242,     3,   244,   245,   246,   247,   280,    96,   227,
     149,    43,    44,   227,    53,     5,   981,   982,     5,    51,
      52,     5,     5,     5,     3,     4,     5,     6,     7,     8,
       5,    10,    11,     5,     5,     5,     5,     5,    70,    18,
      56,    20,   111,    53,     9,   102,   102,    53,    80,     3,
      54,   149,    31,    53,    53,    87,    53,    53,    53,    53,
      53,    53,    53,     3,    43,    44,    45,   280,   100,   280,
      23,   276,    53,    52,    53,    53,    53,     3,     4,     5,
       6,     7,     8,    17,    10,    11,    53,    53,   277,    52,
      54,    70,    18,    53,    20,    53,    52,    52,   112,    30,
      30,    80,    53,    30,    54,    31,    68,    30,    87,    30,
      53,     5,     5,    12,     5,     5,    54,    43,    44,    45,
       3,   100,    51,   155,    52,     3,    52,    53,    53,   280,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    70,    53,    14,    15,    16,    17,
      18,   280,    20,    53,    80,    23,    24,    25,    53,     3,
      56,    87,    54,     4,    53,    53,    52,   278,     4,    41,
     229,    53,     3,   149,   100,   149,   149,     3,   227,     3,
     280,     3,    52,    30,     4,    52,   218,   219,   220,   221,
     222,   223,   149,   179,    53,   132,   132,   149,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,     3,   132,   132,    53,    52,    52,   218,
     219,   220,   221,   222,   223,   132,    53,   132,   132,   281,
      54,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   132,    41,    41,     4,
       4,     4,   218,   219,   220,   221,   222,   223,     3,     3,
      52,   143,   281,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,     3,
       4,     5,     6,     7,     8,   280,    10,    11,    54,     4,
      53,    53,     3,    54,    18,   281,    20,    53,     7,    54,
      54,    54,   534,    48,    33,    37,   232,    31,   634,   204,
     949,   896,   202,   490,   255,   744,   228,    -1,   358,    43,
      44,   280,    -1,    -1,    -1,    -1,    -1,    -1,    52,   269,
      -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    70,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    80,    -1,    -1,    -1,
      -1,    -1,    18,    87,    20,    -1,    -1,    91,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,   100,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    12,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,   100,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,   281,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   280,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    70,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,
      31,    -1,    -1,    87,    -1,    -1,   280,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    -1,   100,    -1,    -1,    -1,
     280,    52,    53,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    70,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      -1,    -1,    -1,    31,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    43,    44,    -1,    -1,   100,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   218,   219,   220,   221,   222,   223,
      -1,    -1,    -1,    -1,    -1,    -1,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,
     221,   222,   223,    -1,    -1,    -1,    -1,   281,    -1,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
     281,    -1,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    18,   281,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,   280,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    70,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    31,    -1,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    44,    -1,    -1,   100,    -1,    -1,    -1,    -1,    52,
      53,    -1,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    70,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    31,    -1,    -1,    87,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    43,    44,    -1,    -1,   100,    -1,    -1,
      -1,    -1,    52,    53,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,    -1,    -1,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    -1,
      -1,    -1,    -1,    -1,    -1,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,   281,    -1,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,    -1,   281,    -1,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,   281,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,   280,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    70,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    -1,    31,    -1,    -1,    87,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      -1,    -1,   100,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    70,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    31,
      -1,    -1,    87,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,   100,    -1,    -1,    -1,    -1,
      52,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    70,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,   222,   223,    -1,    -1,    -1,    -1,
      -1,    -1,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,    -1,    -1,    -1,
      -1,    -1,    -1,   218,   219,   220,   221,   222,   223,    -1,
      -1,   149,   150,   281,    -1,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
       3,    -1,    -1,    -1,    -1,    -1,   218,   219,   220,   221,
     222,   223,    -1,    -1,    -1,    18,   281,    20,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,   281,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    52,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
      70,    -1,    -1,    -1,    -1,    -1,   129,   133,    -1,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     100,    -1,    -1,    -1,    -1,    -1,    12,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,   193,   194,   195,
      -1,   197,   198,   199,    -1,   201,    -1,    -1,   204,   205,
      -1,   207,   208,   209,   210,   211,   212,   213,    -1,    -1,
     216,   217,    -1,    -1,    -1,   218,   219,   220,   221,   222,
     223,    -1,    -1,   149,   150,    -1,    -1,    -1,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,    -1,    -1,    -1,    -1,   218,   219,
     220,   221,   222,   223,    -1,    -1,    -1,   280,   149,   150,
      -1,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,     3,   172,    12,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,   281,    20,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    51,    52,    -1,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    12,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    -1,    -1,    -1,
       3,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   149,   150,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,   155,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,   149,   150,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
     218,   219,   220,   221,   222,   223,   129,    80,    -1,    -1,
      -1,    -1,    -1,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   218,   219,   220,
     221,   222,   223,    -1,    80,    -1,    -1,    -1,    -1,    -1,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,    -1,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,    -1,    -1,    -1,   218,   219,   220,   221,   222,
     223,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   218,   219,   220,   221,   222,   223,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,    64,
      65,    -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    83,    84,
      -1,    86,    -1,    12,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,   104,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,   130,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,   142,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    56,    -1,    -1,    -1,   174,
      -1,   176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   184,
     185,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    51,    52,    55,   155,   283,   284,   285,   286,   287,
     288,   289,   293,   294,   310,     3,   311,   312,   288,   289,
      59,    91,   316,     0,    97,   284,    55,    26,    27,    28,
     133,   303,   304,   293,    52,   313,   314,   280,    53,    53,
     180,   296,   316,   316,   316,    68,    56,   299,   303,     3,
     315,    61,   311,     5,     7,    52,   297,   298,     3,     4,
       5,     6,     7,     8,    10,    11,    18,    20,    31,    43,
      44,    45,    52,    70,    80,    87,   100,   218,   219,   220,
     221,   222,   223,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   281,   288,
     317,   318,   340,   341,   342,   343,   344,   346,   351,   352,
     353,   354,   355,   356,   293,   293,   293,   306,   307,   344,
      67,   134,   290,   299,   280,    53,   288,   344,    51,   136,
      52,    54,    52,    52,   344,   343,   343,   288,   339,   344,
     344,   347,   288,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    52,    52,
       5,     7,   119,   295,   280,    43,    44,    45,    46,    47,
      48,    49,     3,    12,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    61,   361,
     131,   305,   280,    62,    89,   308,    52,   290,   315,    53,
     173,    51,    53,   339,     3,    45,    54,    53,   339,    53,
     339,    53,   280,   187,   348,   349,    45,    53,   339,    45,
      53,   339,    53,    53,    53,   344,    53,   150,   224,   225,
     304,   357,    59,    91,   344,   359,   344,   359,   344,   359,
     344,   359,   344,   359,   344,   359,   344,   359,   344,   344,
     344,   339,   344,   344,    45,   344,   359,    45,   344,   359,
     344,   359,   344,   359,   344,   344,   344,    64,    65,    83,
      84,    86,   104,   130,   142,   160,   174,   176,   184,   185,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   362,    53,    53,     3,     3,     3,     3,   362,   339,
     344,     3,   332,   105,   301,   317,   343,   343,   343,   343,
     343,   343,   343,     3,   344,   344,    39,    40,    41,   344,
     344,   344,   344,   344,   344,   344,   344,   343,    52,   288,
     345,     6,     8,     9,    31,   361,   344,   306,   107,   133,
     193,   194,   195,   197,   198,   199,   201,   204,   205,   207,
     208,   209,   210,   211,   212,   213,   216,   217,   291,   292,
     173,    53,    52,    54,     3,    54,    53,    53,   339,   344,
      95,   350,   348,    53,    53,    53,    53,   356,   356,   356,
      53,     5,    40,   226,   228,   358,    68,   358,    53,   357,
      53,    53,   344,    53,   344,    53,   344,    53,   344,    53,
     344,    53,   344,    53,   344,    53,   280,    53,    53,   280,
      53,    53,    53,    53,    53,   344,    53,    53,   344,    53,
     344,    53,   344,   280,   280,   280,    52,    52,    52,    52,
      52,    52,    52,    52,    52,    52,    52,    52,    53,   280,
     280,   280,   280,   280,   280,    53,    61,    54,     3,    11,
      52,   288,   319,   320,   321,   324,   332,   333,   351,   186,
     300,   344,   343,   345,    30,   339,     6,     8,     9,   149,
     150,   133,   203,   111,    17,    17,    26,   111,    17,    26,
      26,    56,   200,     5,   206,   206,    34,    34,     5,     5,
     214,   215,   206,    53,   280,    53,   339,     3,    45,    54,
      52,    54,     3,   172,   344,    96,   356,   227,     5,   226,
     228,   227,   149,   339,    53,   356,    53,   356,    53,   356,
      53,   356,    53,   356,    53,   356,    53,   356,    53,   356,
     344,   356,   356,   344,   356,   356,   356,    53,   356,   356,
      53,    53,   356,    53,     5,   344,   344,     5,     5,     5,
       5,     5,     5,   237,     5,   237,     5,     5,     5,     5,
       5,   237,     5,   344,   344,   344,   344,   344,   362,     3,
      54,    54,     3,    54,    61,   360,   183,   288,   320,   325,
     333,    61,   314,   331,   360,    14,    15,    16,    17,    18,
      20,    23,    24,    25,   280,   336,    61,   331,   360,    56,
     322,    61,   360,   344,   111,   302,    30,   343,    53,   102,
     102,     9,     5,     7,     5,     7,   291,    53,    52,    54,
       3,    53,   339,     3,    45,    54,   344,   227,   229,   227,
     229,   149,    53,   304,   357,   356,   356,   356,   356,   356,
     356,   356,    53,   280,    53,   280,   356,   356,   356,   280,
      53,    53,    53,    53,   280,    53,    53,   280,    53,    53,
      53,    53,    53,    53,    53,    53,    53,    53,    53,   280,
      53,    53,   280,   280,    53,   280,    53,    54,     3,    54,
       3,    54,     3,   351,   360,    52,   326,    53,    53,   360,
     331,    17,   276,    23,   338,   193,   194,   195,   196,   337,
     320,   338,   338,   276,    52,   334,    52,   335,   319,    17,
     360,   331,   277,    51,    61,   327,   360,   360,    68,   112,
     309,   343,   103,   128,   103,   128,    53,   339,     3,    45,
      52,    54,    53,    54,     3,    45,    30,    30,    30,    30,
      30,    53,   357,    53,   356,   344,   356,   344,     5,     5,
       5,     5,   344,   344,   344,     3,    54,    54,     3,    54,
       3,    54,    61,   331,   360,   339,   331,   320,   320,   337,
      21,    22,   337,   337,   320,   352,    61,   360,   344,    61,
     360,   320,   331,    40,    59,    61,   105,   279,   323,    52,
     360,   327,   339,   344,   344,   344,   344,   344,    53,    52,
      54,    53,   339,     3,    45,     3,    45,     5,   226,   228,
       5,   226,   228,     5,    86,   226,   228,     5,   226,   228,
       5,   226,   228,    53,    53,    53,   280,    53,    53,    53,
      53,    53,    53,    54,     3,     3,     3,    54,     3,    54,
     360,   331,    53,   344,    52,    56,   360,    56,   360,    21,
      22,     4,   278,     4,    41,     3,   129,   328,   329,   330,
     351,   327,   149,   150,   149,   150,   149,   150,   149,   150,
      53,   339,     3,    45,    53,   227,   229,   227,   229,   149,
     227,   229,   227,   229,   149,   227,   229,   227,   229,   149,
     227,   229,   227,   229,   149,   227,   229,   227,   229,   149,
     356,   356,   344,     3,    54,     3,    54,     3,   331,   280,
     315,     3,   340,   340,   344,    52,    30,     4,   179,    52,
      34,   330,    53,   280,   328,   132,   132,   132,   132,   132,
     132,   132,   132,    53,    53,     3,     3,    54,   326,    53,
      54,    41,    41,   315,     4,     4,     4,   344,   328,    54,
       3,     3,    54,   314,   314,    53,   280,     3,    54,     3,
      53,    53,     4,     3,    54,    53,    54,     3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   282,   283,   284,   284,   285,   285,   285,   286,   287,
     288,   288,   289,   289,   290,   290,   291,   291,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   292,   292,   292,   292,   292,
     292,   292,   292,   292,   292,   293,   293,   294,   294,   294,
     294,   295,   295,   296,   296,   296,   296,   296,   297,   297,
     298,   298,   298,   299,   299,   300,   300,   301,   301,   302,
     302,   303,   303,   304,   304,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   306,   306,   307,   308,   308,
     308,   309,   309,   310,   311,   311,   312,   313,   313,   314,
     315,   315,   316,   316,   316,   317,   317,   318,   318,   318,
     318,   319,   319,   320,   320,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   322,   322,   323,   323,   323,   323,   323,
     324,   325,   326,   326,   327,   327,   328,   328,   328,   329,
     329,   330,   330,   330,   331,   331,   332,   332,   332,   332,
     332,   332,   332,   332,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   334,   335,
     336,   336,   336,   336,   337,   337,   337,   337,   337,   338,
     338,   339,   339,   340,   340,   340,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   340,   340,   340,   340,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   342,
     342,   342,   342,   342,   342,   342,   342,   343,   343,   343,
     343,   343,   343,   343,   343,   343,   343,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   344,   344,   344,   344,   344,   344,   344,   344,
     344,   344,   345,   345,   346,   347,   347,   348,   348,   349,
     350,   350,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   353,   353,   353,   353,
     353,   353,   353,   353,   354,   354,   354,   354,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   355,   355,
     355,   355,   355,   355,   355,   355,   355,   355,   356,   356,
     356,   356,   356,   356,   356,   356,   357,   357,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   359,   359,   360,   361,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     1,     1,
       3,     3,     4,     5,     0,     4,     1,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       1,     2,     2,     3,     3,     3,     3,     2,     2,     1,
       3,     2,     2,     1,     2,     1,     1,     9,     4,     4,
       4,     0,     2,     0,     2,     4,     3,     5,     1,     3,
       1,     1,     3,     0,     2,     0,     2,     0,     2,     0,
       3,     0,     1,     3,     4,     3,     3,     8,     8,     8,
       8,     8,     8,     8,     8,     1,     3,     2,     0,     1,
       1,     0,     2,     2,     1,     3,     4,     0,     1,     3,
       1,     3,     0,     1,     1,     1,     3,     1,     2,     3,
       1,     1,     3,     1,     1,     3,     5,     4,     4,     3,
       2,     4,     3,     2,     3,     2,     1,     3,     2,     1,
       6,     5,     4,     0,     3,     3,     4,     4,     7,     1,
       3,     2,     3,     5,     0,     4,     1,     3,     2,     1,
       2,     1,     1,     3,     0,     1,     1,     3,     5,     4,
       7,     6,     6,     5,     3,     6,     5,     8,     7,     4,
       4,     4,     5,     4,     3,     5,     4,     3,     7,     7,
       3,     3,     3,     2,     0,     1,     1,     1,     1,     0,
       1,     1,     3,     1,     3,     3,     5,     5,     7,     7,
       6,     6,     9,     9,     8,     8,     8,     8,     7,     7,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     1,
       1,     1,     3,     1,     1,     1,     2,     1,     2,     2,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       2,     3,     4,     3,     4,     3,     4,     5,     6,     3,
       4,     3,     1,     3,     5,     0,     1,     1,     2,     4,
       0,     2,     1,     1,     1,     1,     4,     6,     6,     8,
       4,     4,     1,     1,     8,     8,     6,     6,     3,     3,
       8,     4,     1,     6,    10,     1,     1,     6,     5,     4,
       6,     5,     5,     4,     6,     5,     5,     4,     6,     5,
       5,     4,     6,     5,     5,     4,     6,     5,     5,     4,
       6,     5,     5,     4,     6,     5,     5,     4,     6,     5,
       5,     4,     6,     5,     5,     4,     5,     4,     6,     5,
       5,     4,     4,     5,     4,     4,     5,     5,     5,     7,
       9,     5,     7,     9,     4,     4,     4,     5,     9,     8,
       7,     6,     5,     3,     3,     3,     3,     3,    10,     9,
       8,     7,     6,     4,     4,     4,     4,     4,     8,     5,
       7,     7,     6,     4,     4,     3,     2,     2,     2,     2,
       2,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     6,     4,     1,     6,     4,     1,
       1,     1,     1,     1,     4,     1,     4,     1,     4,     1,
       1,     1,     4,     1,     4,     1,     4,     4,     1,     1,
       4,     1,     4,     4,     1,     4,     1,     4,     4,     1
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
#line 2861 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2867 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2873 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2879 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2885 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2891 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2897 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2903 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TEMP_VARIABLE  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2909 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* sql_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2915 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 284: /* stmt_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2921 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 285: /* stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2927 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 286: /* dml_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2933 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 287: /* select_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2939 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 288: /* select_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2945 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 289: /* select_no_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2951 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 290: /* opt_option_query_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2957 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 291: /* query_hint_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2963 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 292: /* query_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2969 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 293: /* select_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2975 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 294: /* simple_select  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2981 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* opt_into_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2987 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 296: /* opt_top  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2993 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* top_count  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2999 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* top_percent  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3005 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* opt_for_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3011 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* opt_where  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3017 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* opt_from_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3023 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* opt_groupby  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3029 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* opt_order_by  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3035 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* order_by  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3041 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* offset_fetch  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3047 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* sort_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3053 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* sort_key  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3059 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* opt_asc_desc  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3065 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 309: /* opt_having  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3071 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* with_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3077 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* with_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3083 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 312: /* common_table_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3089 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 313: /* opt_derived_column_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3095 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* simple_ident_list_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3101 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* simple_ident_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3107 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 316: /* opt_distinct  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3113 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 317: /* select_expr_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3119 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 318: /* projection  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3125 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 319: /* from_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3131 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 320: /* table_factor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3137 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 321: /* table_factor_non_join  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3143 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 322: /* opt_for_system_time  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3149 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 323: /* system_time  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3155 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 324: /* table_value_constructor_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3161 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 325: /* table_value_constructor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3167 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 326: /* row_value_expression_list_parens_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3173 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 327: /* opt_with_table_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3179 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 328: /* table_hint_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3185 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 329: /* table_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3191 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 330: /* table_hint_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3197 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 331: /* opt_simple_ident_list_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3203 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 332: /* relation_factor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3209 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 333: /* joined_table  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3215 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 334: /* pivot_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3221 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 335: /* unpivot_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3227 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 336: /* join_type  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3233 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 339: /* expr_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3239 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 340: /* column_ref  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3245 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 341: /* expr_const  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3251 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 342: /* simple_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3257 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 343: /* arith_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3263 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 344: /* expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3269 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 345: /* in_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3275 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 346: /* case_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3281 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 347: /* case_arg  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3287 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 348: /* when_clause_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3293 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 349: /* when_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3299 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 350: /* case_default  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3305 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 351: /* func_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3311 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 352: /* aggregate_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3317 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 353: /* analytic_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3323 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 354: /* ranking_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3329 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 355: /* scalar_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3335 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 356: /* over_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3341 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 357: /* row_or_range_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3347 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 358: /* window_frame_extent  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3353 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 359: /* distinct_or_all  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3359 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 360: /* relation_name  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3365 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 361: /* column_label  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3371 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 362: /* data_type  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3377 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 3494 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 218 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3688 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 229 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3697 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 240 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3703 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 256 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3712 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 261 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3721 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 269 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 3732 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 276 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 3744 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 287 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3750 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 289 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPTION_CLAUSE, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
#line 3759 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 298 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 3768 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 306 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH GROUP"); }
#line 3774 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 307 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ORDER GROUP"); }
#line 3780 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 308 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("CONCAT UNION"); }
#line 3786 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 309 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH UNION"); }
#line 3792 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 310 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE UNION"); }
#line 3798 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 311 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("LOOP JOIN"); }
#line 3804 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 312 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE JOIN"); }
#line 3810 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 313 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH JOIN"); }
#line 3816 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 314 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("EXPAND VIEWS"); }
#line 3822 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 315 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FAST", (yyvsp[0].node)); }
#line 3828 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 316 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE ORDER"); }
#line 3834 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 317 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
#line 3840 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 318 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
#line 3846 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 319 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 3852 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 320 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 3858 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 321 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3864 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 322 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3870 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 323 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3876 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 324 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 3882 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 325 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXDOP", (yyvsp[0].node)); }
#line 3888 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 326 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXRECURSION", (yyvsp[0].node)); }
#line 3894 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 327 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
#line 3900 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 328 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("OPTIMIZE FOR", (yyvsp[0].node)); }
#line 3906 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 329 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
#line 3912 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 330 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION FORCED"); }
#line 3918 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 331 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("RECOMPILE"); }
#line 3924 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 332 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ROBUST PLAN"); }
#line 3930 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 343 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                    (yyvsp[-7].node),             /* E_SELECT_DISTINCT 0 */
                    (yyvsp[-5].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
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
                    nullptr,        /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    (yyvsp[-6].node),             /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr,        /* E_SELECT_OPT_OPTION 17 */
	            (yyvsp[-4].node)              /* E_SELECT_OPT_INTO 18 */
                    );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 3959 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 368 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    (yyval.node)->serialize_format = &SELECT_UNION_SERIALIZE_FORMAT;
}
#line 3989 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 394 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr,            /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    (yyval.node)->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
#line 4019 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 420 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    (yyval.node)->serialize_format = &SELECT_EXCEPT_SERIALIZE_FORMAT;
}
#line 4049 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 448 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4055 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 450 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INTO_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &INTO_CLAUSE_SERIALIZE_FORMAT;
}
#line 4064 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 458 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4070 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 460 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 4079 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 465 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 4088 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 470 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 4097 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 475 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 4106 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 484 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4115 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 494 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4124 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 502 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 504 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_CLAUSE, 1, nullptr);
    (yyval.node)->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
#line 4139 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 511 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4145 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 513 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4154 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 520 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4160 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 522 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4169 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 529 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4175 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 531 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4184 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 538 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4190 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 544 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4199 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 549 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4208 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 558 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
#line 4217 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 563 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
#line 4226 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 568 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
#line 4235 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 573 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
#line 4244 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 578 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
#line 4253 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 583 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
#line 4262 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 588 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
#line 4271 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 593 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
#line 4280 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 598 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
#line 4289 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 603 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
#line 4298 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 612 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4307 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 620 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 628 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 632 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4332 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 636 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4340 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 642 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 644 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4355 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 652 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4364 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 661 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4373 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 669 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4382 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 676 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4388 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 682 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4397 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 691 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4406 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 698 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4412 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 700 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4420 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 704 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4428 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 712 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4437 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 720 "sqlparser.y" /* yacc.c:1646  */
    {
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias((yyvsp[0].node));
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, nd);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4448 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 727 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4460 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 735 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4472 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 743 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4482 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 753 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4491 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 767 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 4500 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 772 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4509 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 777 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 4518 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 782 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4527 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 787 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4536 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 792 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4545 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 797 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4554 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 802 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4563 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 807 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4572 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 812 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4581 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 817 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4590 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 822 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4599 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 827 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4608 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 832 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4617 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 837 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4626 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 842 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-5].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4637 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 849 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-2].node), (yyvsp[-4].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4648 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 856 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-1].node), (yyvsp[-3].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4659 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 865 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4665 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 867 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_SYSTEM_TIME, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FOR_SYSTEM_TIME_SERIALIZE_FORMAT;
}
#line 4674 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 875 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "AS OF "+(yyvsp[0].node)->text()); }
#line 4680 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 877 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "FROM "+(yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text()); }
#line 4686 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 879 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text()); }
#line 4692 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 881 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "CONTAINED IN("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); }
#line 4698 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 883 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "ALL"); }
#line 4704 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 888 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4713 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 896 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 4722 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 904 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4731 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 909 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, 1, (yyvsp[-3].node));
    nd->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS_LIST, 2, nd, (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4742 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 918 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4748 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 920 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
#line 4757 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 929 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4766 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 934 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4775 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 944 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 4788 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 953 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[-1]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
#line 4802 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 968 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4811 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 975 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4817 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 983 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4826 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 988 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4835 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 993 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4844 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 998 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4853 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1003 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4862 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1008 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4871 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1013 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4880 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1021 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4889 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1026 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4898 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1031 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4908 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1037 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 4917 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1042 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 4927 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1048 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4937 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1054 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 4947 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1060 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "OUTER");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 4957 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1066 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4966 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1071 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4975 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1076 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4984 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1081 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 4993 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1086 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5002 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1091 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5011 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1099 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_CLAUSE, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5020 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1107 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_CLAUSE, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5029 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1115 "sqlparser.y" /* yacc.c:1646  */
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
#line 5044 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1126 "sqlparser.y" /* yacc.c:1646  */
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
#line 5059 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1137 "sqlparser.y" /* yacc.c:1646  */
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
#line 5074 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1148 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 5082 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1154 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5088 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1155 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 5094 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1156 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 5100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1157 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 3; }
#line 5106 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1158 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 4; }
#line 5112 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1162 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5118 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1163 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5124 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1170 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5133 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1179 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5142 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1184 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nd, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5152 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1190 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5161 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1195 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, nd, (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5171 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1201 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5180 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1206 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5190 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1212 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5199 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1217 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5209 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1223 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5218 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1228 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5228 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1234 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5237 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1239 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5247 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1245 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5256 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1250 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5266 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1256 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5275 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1261 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5285 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1275 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5291 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1276 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); }
#line 5297 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1277 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); }
#line 5303 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1285 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5313 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1294 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 5322 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1304 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 5331 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1309 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 5340 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1314 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 5349 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1319 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 5358 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1324 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 5367 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1329 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 5376 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1334 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 5385 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1339 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 5394 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1344 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 5403 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1354 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_COLLATE_SERIALIZE_FORMAT;
}
#line 5412 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1359 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 5421 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1364 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 5430 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1369 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 5439 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1374 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 5448 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1379 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 5457 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1384 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 5466 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1389 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 5475 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1394 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 5484 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1399 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 5493 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1404 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 5502 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1409 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 5511 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1414 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5520 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1419 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5529 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1424 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5538 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1429 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5547 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1434 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5556 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1439 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5565 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1444 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 5574 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1449 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 5583 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1454 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 5592 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1459 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 5601 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1464 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 5610 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1473 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5619 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1481 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 5628 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1488 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5634 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1495 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5643 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1503 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5652 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1510 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5658 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1512 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5667 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1525 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1532 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 5, fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5688 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1538 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5700 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1546 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5714 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1556 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5725 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1563 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5735 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1569 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5745 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1575 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5755 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1581 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEADD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5769 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1591 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEDIFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5783 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1601 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATENAME");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5795 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1609 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEPART");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5807 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1617 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5817 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1623 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETUTCDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5827 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1629 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5841 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1639 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5851 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1645 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN_ACTIVE_ROWVERSION");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5861 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1651 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5873 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1659 "sqlparser.y" /* yacc.c:1646  */
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
#line 5889 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1671 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5899 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1677 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5909 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1683 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ISNULL");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5921 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1694 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5931 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1700 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5941 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1706 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5951 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1712 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5961 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1718 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5971 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1724 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5981 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1730 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5991 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1736 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6001 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1742 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6011 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1748 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6021 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1754 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6031 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1760 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6041 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1766 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6051 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1772 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6061 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1778 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6071 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1784 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6081 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1790 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6091 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1796 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6101 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1802 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6111 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1808 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6121 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1814 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6131 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1820 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6141 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1826 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6151 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1832 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6161 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1838 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6171 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1844 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6181 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1850 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6191 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1856 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6201 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1862 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6211 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1868 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6221 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1874 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6231 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1880 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6241 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1886 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6251 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1892 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6261 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1898 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6271 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1904 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6281 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1910 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6292 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1917 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6303 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1924 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6313 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1930 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6323 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1936 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6333 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1942 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6343 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1948 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6354 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1955 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6365 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1962 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6375 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1968 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6385 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1974 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6395 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1980 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING_ID");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6405 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1989 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "FIRST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6415 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1995 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6425 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2001 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6435 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2007 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6447 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2015 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6461 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2025 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6471 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2031 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6483 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2039 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6497 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2051 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6507 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2057 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6517 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2063 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6527 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2069 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NTILE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2078 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6548 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2085 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2092 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2099 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6581 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2106 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6592 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2113 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6601 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2118 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6611 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2124 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6621 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2130 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6631 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2136 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6641 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2142 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6652 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2149 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6663 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2156 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6674 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2163 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6685 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2170 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6696 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2177 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6705 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2182 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6715 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2188 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6725 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2194 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6735 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2200 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6745 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2208 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6754 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2213 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6763 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2218 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6772 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2223 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6781 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2228 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6790 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2233 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6799 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2238 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6808 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2243 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 6817 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2251 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, 2, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6827 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2257 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, 2, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6837 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2266 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 6843 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2268 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); }
#line 6849 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2270 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 6855 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2272 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 6861 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2274 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); }
#line 6867 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2276 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 6873 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2278 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 6879 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2280 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 6885 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2282 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6891 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2284 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6897 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2286 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6903 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2288 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6909 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2290 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); }
#line 6915 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2292 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 6921 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2294 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); }
#line 6927 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2296 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 6933 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2298 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 6939 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2300 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); }
#line 6945 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2302 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 6951 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2304 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 6957 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2306 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 6963 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2308 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 6969 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2310 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 6975 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2312 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 6981 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2314 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); }
#line 6987 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2316 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); }
#line 6993 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2318 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); }
#line 6999 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2320 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); }
#line 7005 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2324 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 7013 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2328 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 7021 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2345 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIGINT"); }
#line 7027 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2347 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "INT"); }
#line 7033 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2349 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLINT"); }
#line 7039 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2351 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TINYINT"); }
#line 7045 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2353 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); }
#line 7051 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2355 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-1].node)->text()+")"); }
#line 7057 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2357 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL"); }
#line 7063 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2359 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); }
#line 7069 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2361 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-1].node)->text()+")"); }
#line 7075 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2363 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC"); }
#line 7081 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2365 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIT"); }
#line 7087 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2367 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "MONEY"); }
#line 7093 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2369 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLMONEY"); }
#line 7099 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2371 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "REAL"); }
#line 7105 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2373 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "FLOAT("+(yyvsp[-1].node)->text()+")"); }
#line 7111 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2375 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATE"); }
#line 7117 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2377 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET("+(yyvsp[-1].node)->text()+")"); }
#line 7123 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2379 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET"); }
#line 7129 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2381 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2("+(yyvsp[-1].node)->text()+")"); }
#line 7135 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2383 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2"); }
#line 7141 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2385 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLDATETIME"); }
#line 7147 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2387 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME"); }
#line 7153 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2389 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME("+(yyvsp[-1].node)->text()+")"); }
#line 7159 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2391 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME"); }
#line 7165 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2393 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR("+(yyvsp[-1].node)->text()+")"); }
#line 7171 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2395 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR"); }
#line 7177 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2397 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR("+(yyvsp[-1].node)->text()+")"); }
#line 7183 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2399 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR(MAX)"); }
#line 7189 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2401 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR"); }
#line 7195 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2403 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TEXT"); }
#line 7201 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2405 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR("+(yyvsp[-1].node)->text()+")"); }
#line 7207 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2407 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR"); }
#line 7213 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2409 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR("+(yyvsp[-1].node)->text()+")"); }
#line 7219 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2411 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR(MAX)"); }
#line 7225 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2413 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR"); }
#line 7231 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2415 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY("+(yyvsp[-1].node)->text()+")"); }
#line 7237 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2417 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY"); }
#line 7243 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 2419 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY("+(yyvsp[-1].node)->text()+")"); }
#line 7249 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 2421 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY(MAX)"); }
#line 7255 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2423 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY"); }
#line 7261 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 7265 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2426 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
