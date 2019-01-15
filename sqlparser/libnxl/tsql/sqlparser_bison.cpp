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
    ASSIGN = 284,
    ASSIGN_ADD = 285,
    ASSGIN_MINUS = 286,
    ASSIGN_MUL = 287,
    ASSIGN_DIV = 288,
    ASSIGN_REM = 289,
    ASSIGN_BITWISE_AND = 290,
    ASSIGN_BITWISE_OR = 291,
    ASSIGN_BITWISE_XOR = 292,
    OR = 293,
    AND = 294,
    NOT = 295,
    COMP_LE = 296,
    COMP_LT = 297,
    COMP_EQ = 298,
    COMP_GT = 299,
    COMP_GE = 300,
    COMP_NE = 301,
    CNNOP = 302,
    LIKE = 303,
    BETWEEN = 304,
    IN = 305,
    IS = 306,
    MOD = 307,
    UMINUS = 308,
    WITH = 309,
    FOR = 310,
    ADD = 311,
    ANY = 312,
    ALL = 313,
    ALTER = 314,
    AS = 315,
    ASC = 316,
    BEGI = 317,
    BIGINT = 318,
    BINARY = 319,
    BOTH = 320,
    BROWSE = 321,
    BY = 322,
    CASCADE = 323,
    CASE = 324,
    CHARACTER = 325,
    CLUSTER = 326,
    COMMENT = 327,
    COMMIT = 328,
    CONSISTENT = 329,
    COLUMN = 330,
    COLUMNS = 331,
    CREATE = 332,
    CREATETIME = 333,
    CURRENT_USER = 334,
    CHANGE_OBI = 335,
    SWITCH_CLUSTER = 336,
    DATE = 337,
    DATETIME = 338,
    DEALLOCATE = 339,
    DECIMAL = 340,
    DEFAULT = 341,
    DELETE = 342,
    DESC = 343,
    DESCRIBE = 344,
    DISTINCT = 345,
    DOUBLE = 346,
    DROP = 347,
    DUAL = 348,
    ELSE = 349,
    END = 350,
    END_P = 351,
    ERROR = 352,
    EXECUTE = 353,
    EXISTS = 354,
    EXPLAIN = 355,
    FETCH = 356,
    FIRST = 357,
    FLOAT = 358,
    FROM = 359,
    FROZEN = 360,
    FORCE = 361,
    GLOBAL = 362,
    GLOBAL_ALIAS = 363,
    GRANT = 364,
    GROUP = 365,
    HAVING = 366,
    HINT_BEGIN = 367,
    HINT_END = 368,
    HOTSPOT = 369,
    IDENTIFIED = 370,
    IF = 371,
    INSERT = 372,
    INTO = 373,
    KEY = 374,
    LEADING = 375,
    LIMIT = 376,
    LOCAL = 377,
    LOCKED = 378,
    MEMORY = 379,
    MODIFYTIME = 380,
    MASTER = 381,
    NEXT = 382,
    NOEXPAND = 383,
    NUMERIC = 384,
    OFFSET = 385,
    ONLY = 386,
    ORDER = 387,
    OPTION = 388,
    PARAMETERS = 389,
    PERCENT = 390,
    PASSWORD = 391,
    PRECISION = 392,
    PREPARE = 393,
    PRIMARY = 394,
    READ_STATIC = 395,
    REAL = 396,
    RENAME = 397,
    REPLACE = 398,
    RESTRICT = 399,
    PRIVILEGES = 400,
    REVOKE = 401,
    ROLLBACK = 402,
    ROW = 403,
    ROWS = 404,
    KILL = 405,
    READ_CONSISTENCY = 406,
    SCHEMA = 407,
    SCOPE = 408,
    SELECT = 409,
    SESSION = 410,
    SESSION_ALIAS = 411,
    SET = 412,
    SHOW = 413,
    SMALLINT = 414,
    SNAPSHOT = 415,
    SPFILE = 416,
    START = 417,
    STATIC = 418,
    SYSTEM = 419,
    STRONG = 420,
    SET_MASTER_CLUSTER = 421,
    SET_SLAVE_CLUSTER = 422,
    SLAVE = 423,
    TABLE = 424,
    TABLES = 425,
    THEN = 426,
    TIES = 427,
    TIME = 428,
    TIMESTAMP = 429,
    TINYINT = 430,
    TRAILING = 431,
    TRANSACTION = 432,
    TO = 433,
    TOP = 434,
    UPDATE = 435,
    USER = 436,
    VALUES = 437,
    VARCHAR = 438,
    VARBINARY = 439,
    WHERE = 440,
    WHEN = 441,
    WORK = 442,
    PROCESSLIST = 443,
    QUERY = 444,
    CONNECTION = 445,
    WEAK = 446,
    LOOP = 447,
    HASH = 448,
    MERGE = 449,
    REMOTE = 450,
    CONCAT = 451,
    OPTIMIZE = 452,
    EXPAND = 453,
    VIEWS = 454,
    FAST = 455,
    DISABLE = 456,
    EXTERNALPUSHDOWN = 457,
    IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 458,
    KEEP = 459,
    PLAN = 460,
    KEEPFIXED = 461,
    MAX_GRANT_PERCENT = 462,
    MIN_GRANT_PERCENT = 463,
    MAXDOP = 464,
    MAXRECURSION = 465,
    NO_PERFORMANCE_SPOOL = 466,
    PARAMETERIZATION = 467,
    SIMPLE = 468,
    FORCED = 469,
    RECOMPILE = 470,
    ROBUST = 471,
    CHECKSUM = 472,
    BINARY_CHECKSUM = 473,
    RANK = 474,
    DENSE_RANK = 475,
    ROW_NUMBER = 476,
    NTILE = 477,
    PARTITION = 478,
    RANGE = 479,
    UNBOUNDED = 480,
    PRECEDING = 481,
    CURRENT = 482,
    FOLLOWING = 483,
    OVER = 484,
    VARP = 485,
    VAR = 486,
    SUM = 487,
    STDEVP = 488,
    STDEV = 489,
    MIN = 490,
    MAX = 491,
    LEAD = 492,
    LAST_VALUE = 493,
    LAG = 494,
    GROUPING_ID = 495,
    GROUPING = 496,
    FIRST_VALUE = 497,
    COUNT_BIG = 498,
    COUNT = 499,
    CHECKSUM_AGG = 500,
    AVG = 501,
    SYSTEM_USER = 502,
    STUFF = 503,
    SESSION_USER = 504,
    NULLIF = 505,
    MIN_ACTIVE_ROWVERSION = 506,
    ISNULL = 507,
    IDENTITY = 508,
    GETUTCDATE = 509,
    GETDATE = 510,
    DATEPART = 511,
    DATENAME = 512,
    DATEDIFF = 513,
    DATEADD = 514,
    CURRENT_TIMESTAMP = 515,
    CONVERT = 516,
    COALESCE = 517,
    CAST = 518,
    BIT = 519,
    CHAR = 520,
    DATETIME2 = 521,
    DATETIMEOFFSET = 522,
    INT = 523,
    MONEY = 524,
    NCHAR = 525,
    NVARCHAR = 526,
    SMALLDATETIME = 527,
    SMALLMONEY = 528,
    TEXT = 529,
    APPLY = 530,
    SYSTEM_TIME = 531,
    OF = 532,
    CONTAINED = 533,
    OUTPUT = 534,
    DELETED = 535,
    INSERTED = 536,
    DOLLAR_ACTION = 537
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 437 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 467 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  28
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6397

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  295
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  88
/* YYNRULES -- Number of rules.  */
#define YYNRULES  499
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1101

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   537

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   294,    56,     2,     2,
      61,    62,    54,    52,   293,    53,    63,    55,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    64,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    58,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    57,    59,    60,
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
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   226,   226,   236,   237,   249,   250,   251,   255,   256,
     261,   264,   267,   270,   276,   277,   278,   279,   280,   284,
     285,   289,   301,   302,   303,   304,   308,   309,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   331,   335,   340,   348,   355,   367,   368,   376,
     377,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   416,   417,
     421,   447,   473,   499,   528,   529,   538,   539,   544,   549,
     554,   562,   563,   571,   572,   573,   582,   583,   591,   592,
     600,   601,   609,   610,   618,   619,   623,   628,   637,   642,
     647,   652,   657,   662,   667,   672,   677,   682,   690,   691,
     699,   708,   711,   715,   722,   723,   731,   739,   740,   748,
     756,   757,   761,   769,   770,   778,   779,   783,   790,   791,
     799,   806,   814,   822,   831,   832,   840,   841,   846,   851,
     856,   861,   866,   871,   876,   881,   886,   891,   896,   901,
     906,   911,   916,   921,   928,   935,   945,   946,   954,   959,
     965,   971,   977,   982,   990,   998,  1003,  1013,  1014,  1022,
    1023,  1028,  1038,  1047,  1060,  1061,  1062,  1070,  1071,  1076,
    1081,  1086,  1091,  1096,  1101,  1106,  1111,  1119,  1124,  1129,
    1135,  1141,  1147,  1153,  1158,  1163,  1168,  1173,  1178,  1186,
    1194,  1202,  1213,  1224,  1235,  1242,  1243,  1244,  1245,  1246,
    1250,  1251,  1256,  1257,  1265,  1270,  1275,  1281,  1286,  1292,
    1297,  1303,  1308,  1314,  1319,  1325,  1330,  1336,  1341,  1347,
    1352,  1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,  1369,
    1373,  1374,  1375,  1376,  1382,  1383,  1384,  1385,  1394,  1395,
    1400,  1405,  1410,  1415,  1420,  1425,  1430,  1435,  1443,  1444,
    1445,  1450,  1455,  1460,  1465,  1470,  1475,  1480,  1485,  1490,
    1495,  1500,  1505,  1510,  1515,  1520,  1525,  1530,  1535,  1540,
    1545,  1550,  1555,  1560,  1565,  1570,  1575,  1580,  1585,  1590,
    1595,  1603,  1604,  1612,  1620,  1621,  1625,  1626,  1634,  1642,
    1643,  1652,  1653,  1654,  1655,  1656,  1663,  1669,  1677,  1687,
    1694,  1700,  1706,  1712,  1722,  1732,  1740,  1748,  1754,  1760,
    1770,  1776,  1782,  1790,  1802,  1808,  1814,  1825,  1831,  1837,
    1843,  1849,  1855,  1861,  1867,  1873,  1879,  1885,  1891,  1897,
    1903,  1909,  1915,  1921,  1927,  1933,  1939,  1945,  1951,  1957,
    1963,  1969,  1975,  1981,  1987,  1993,  1999,  2005,  2011,  2017,
    2023,  2029,  2035,  2041,  2048,  2055,  2061,  2067,  2073,  2079,
    2086,  2093,  2099,  2105,  2111,  2120,  2126,  2132,  2138,  2146,
    2156,  2162,  2170,  2182,  2188,  2194,  2200,  2209,  2216,  2223,
    2230,  2237,  2244,  2249,  2255,  2261,  2267,  2273,  2280,  2287,
    2294,  2301,  2308,  2313,  2319,  2325,  2331,  2339,  2344,  2349,
    2354,  2359,  2364,  2369,  2374,  2382,  2388,  2397,  2399,  2401,
    2403,  2405,  2407,  2409,  2411,  2413,  2415,  2417,  2419,  2421,
    2423,  2425,  2427,  2429,  2431,  2433,  2435,  2437,  2439,  2441,
    2443,  2445,  2447,  2449,  2451,  2455,  2459,  2467,  2471,  2472,
    2477,  2479,  2481,  2483,  2485,  2487,  2489,  2491,  2493,  2495,
    2497,  2499,  2501,  2503,  2505,  2507,  2509,  2511,  2513,  2515,
    2517,  2519,  2521,  2523,  2525,  2527,  2529,  2531,  2533,  2535,
    2537,  2539,  2541,  2543,  2545,  2547,  2549,  2551,  2553,  2555
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
  "UNION", "EXCEPT", "INTERSECT", "ASSIGN", "ASSIGN_ADD", "ASSGIN_MINUS",
  "ASSIGN_MUL", "ASSIGN_DIV", "ASSIGN_REM", "ASSIGN_BITWISE_AND",
  "ASSIGN_BITWISE_OR", "ASSIGN_BITWISE_XOR", "OR", "AND", "NOT", "COMP_LE",
  "COMP_LT", "COMP_EQ", "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE",
  "BETWEEN", "IN", "IS", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'",
  "UMINUS", "WITH", "'('", "')'", "'.'", "';'", "FOR", "ADD", "ANY", "ALL",
  "ALTER", "AS", "ASC", "BEGI", "BIGINT", "BINARY", "BOTH", "BROWSE", "BY",
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
  "SMALLMONEY", "TEXT", "APPLY", "SYSTEM_TIME", "OF", "CONTAINED",
  "OUTPUT", "DELETED", "INSERTED", "DOLLAR_ACTION", "','", "'$'",
  "$accept", "sql_stmt", "stmt_list", "stmt", "dml_stmt", "update_stmt",
  "opt_update_where", "update_elem_list", "update_elem",
  "opt_output_clause", "dml_select_list", "dml_select_item", "select_stmt",
  "select_with_parens", "select_no_parens", "opt_option_query_hint",
  "query_hint_list", "query_hint", "select_clause", "simple_select",
  "opt_into_clause", "opt_top", "top_count", "top_percent",
  "opt_for_clause", "opt_where", "opt_from_clause", "opt_groupby",
  "opt_order_by", "order_by", "offset_fetch", "sort_list", "sort_key",
  "opt_asc_desc", "opt_having", "with_clause", "with_list",
  "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_factor_non_join", "opt_for_system_time", "system_time",
  "table_value_constructor_parens", "table_value_constructor",
  "row_value_expression_list_parens_list", "opt_with_table_hint",
  "table_hint_list", "table_hint", "table_hint_expr",
  "opt_simple_ident_list_with_parens", "relation_factor", "joined_table",
  "pivot_clause", "unpivot_clause", "join_type", "join_hint", "join_outer",
  "expr_list", "column_ref", "expr_const", "simple_expr", "arith_expr",
  "expr", "in_expr", "case_expr", "case_arg", "when_clause_list",
  "when_clause", "case_default", "func_expr",
  "aggregate_windowed_function", "analytic_windowed_function",
  "ranking_windowed_function", "scalar_function", "over_clause",
  "row_or_range_clause", "window_frame_extent", "distinct_or_all",
  "relation_name", "column_label", "data_type", YY_NULLPTR
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
     305,   306,    43,    45,    42,    47,    37,   307,    94,   308,
     309,    40,    41,    46,    59,   310,   311,   312,   313,   314,
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
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,    44,    36
};
# endif

#define YYPACT_NINF -627

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-627)))

#define YYTABLE_NINF -96

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     188,    27,     4,  -627,    -2,  -137,    75,   -28,   188,    25,
    -627,  -627,  -627,  -627,   208,  -627,   -30,    38,  -627,  -188,
      70,   122,     1,  -627,  -627,  -137,   391,    76,  -627,  -627,
    -627,  -627,    -2,    -2,    -2,    85,   146,  -627,  -137,   208,
     211,   168,  -627,    27,  -627,  -627,  1936,   132,  -627,  3591,
     260,   138,   268,   288,   288,     1,     1,     1,  3591,   277,
     231,   476,   146,   104,   332,   351,  -627,   404,  -627,  -627,
    -627,  -627,  -627,  -627,  -627,   394,   423,  3591,  3862,  3862,
    -627,  1264,  3591,  -627,  -627,   351,   439,   453,   457,   466,
     473,   477,   487,   495,   529,   530,   535,   594,   616,   620,
     625,   634,   644,   645,   655,   659,   726,   731,   734,   740,
    -627,   752,  -627,   767,  -627,   784,   791,   794,   796,   797,
     806,   810,   811,  -627,   812,   813,   814,   510,  -627,   443,
     264,  -627,  -627,  -627,   584,  4744,  -627,  -627,  -627,  -627,
    -627,  -627,  -627,  4866,   390,   696,    74,   816,   711,   712,
     852,   852,  -627,   508,   589,  3964,  -627,   820,  -627,   288,
     288,   231,   211,  -627,  -627,  2207,   360,  2267,  2538,   906,
     475,   475,   219,   821,    79,  6346,   688,  -627,  1535,  1595,
     823,   824,   825,  3591,   159,  1866,  1866,  1866,  1866,  1866,
    1866,  1866,  3591,  3591,  3591,  3591,  3591,  3591,   923,  1194,
    1866,  1866,  3591,  3591,  3591,  1477,   829,   830,   890,   891,
     892,   893,  1477,  3591,  3591,  -627,  -627,   895,   785,  1936,
    3862,  3862,  3862,  3862,  3862,  3862,  3862,  -627,  -627,   897,
    3591,  3591,  3591,  3591,  3591,  3591,  3591,  3591,  3591,  3591,
     545,  3591,  3591,  3591,  3591,  3591,  3591,  3591,  3591,  3862,
     840,   468,   338,  -627,   757,  -627,   721,   841,   321,  4157,
    3591,  3591,  3591,  -627,  3591,  -627,  -627,  -627,   333,   738,
     739,  -627,  -627,  -627,   846,   481,  -627,   337,  -627,   849,
    -627,   850,  -627,  3591,  3591,   803,   688,   851,  -627,   854,
     855,  -627,   856,   675,   675,   675,  4906,  -627,     7,   842,
       7,   -24,   858,  -627,  -627,  4946,  3591,  4986,  3591,  5026,
    3591,  5066,  3591,  5106,  3591,  5146,  3591,  5186,  3591,   695,
    5226,  1008,   860,  5266,  5306,   861,  5346,  3591,   862,  5386,
    3591,  5426,  3591,  5466,  3591,  2347,  2678,  3009,  -627,   874,
    -627,  -627,   875,   876,   878,  -627,  -627,   879,  -627,   881,
     883,  -627,   898,   899,   900,  -627,  -627,   901,   903,  -627,
    -627,  -627,   -36,  -627,  -627,   665,   672,   673,   674,   676,
     908,  4785,  -627,  4077,   773,  -627,   475,   475,   913,   913,
     913,   913,  -627,  -627,  2369,  2369,  2369,  2369,  2369,  2369,
    2369,  2369,   729,   906,  3591,  3862,   840,   514,   514,   514,
     514,   514,   514,   532,   474,   521,  1264,  -627,  -627,  -627,
    -627,  -627,   488,  -627,  -627,   356,   909,   970,   408,  4262,
     912,   357,  -627,  -627,   689,   690,  6346,   689,  4424,  -627,
     -41,   859,   963,    50,    56,   955,   917,   776,   981,  -627,
     772,   774,   947,   949,   988,   989,  -627,   216,  -627,   780,
     934,   704,  3591,  3591,  -627,  2598,   362,   506,   995,  -627,
    -627,  -627,  3859,  3591,   894,  -627,  -627,  -627,  -627,  -627,
    -627,  -627,  -627,   675,   764,    31,   765,   847,  -627,  3591,
    -627,  -627,   941,  -627,   675,  5506,   675,  5546,   675,  5586,
     675,  5626,   675,  5666,   675,  5706,   675,  5746,   675,  3591,
     675,   675,  3591,  -627,  -627,   675,   675,   675,  5786,   675,
     675,  5826,  -627,  5866,   675,  5906,   999,  3591,  3591,  1001,
    1002,  1003,  1004,  1005,    16,    18,  1006,  1009,  1010,  1011,
      28,  -627,  1012,  3591,  3591,  3591,  3591,  3591,  -627,  1477,
     582,   251,  3972,   269,  -627,    26,  -627,   319,   948,  -627,
     136,  3591,   902,   474,   605,  -627,  3862,   956,  -627,  -627,
    -627,   958,  1021,  1022,  -627,  3591,   368,  -627,  -627,  4157,
    -627,   836,   785,  3591,   785,   915,   916,  -627,  -627,  -627,
    -627,  -627,  -627,  -627,  -627,  -627,  -627,  1019,  -627,  -627,
    -627,  -627,   642,   646,  -627,  -627,  -627,  -627,  -627,  -627,
     333,   689,   689,  -627,   967,   615,  -627,  1027,  2869,    77,
     968,  3591,  6346,  -627,  -627,  -627,   451,   458,   877,  -627,
    -627,    24,  -627,  -627,   675,  -627,   675,  -627,   675,  -627,
     675,  -627,   675,  -627,   675,  -627,   675,  -627,  1344,  -627,
    -627,  1675,  -627,  -627,  -627,   675,  -627,  -627,   675,  -627,
    -627,   675,   741,  5946,  5986,   971,   -23,   974,   -15,   975,
     998,  1007,  1048,  1049,  1050,  1051,  1052,  1053,  1054,  1055,
     778,  6026,  6066,  3340,  3671,  2016,  1056,   379,  -627,  4349,
    1069,  -627,  1013,   340,   782,  1057,  1058,  1069,  -627,  -627,
      38,    10,  1098,   462,  4077,  1098,  1098,   788,  1061,  1062,
    4077,  1107,  1069,  -627,    38,   839,   160,  1069,  -627,  6346,
    1059,  1014,  3862,   584,  -627,  1126,  -627,  -627,  6346,   637,
    1128,  -627,  1070,  1071,  -627,  1015,   844,  -627,   937,  -627,
     937,   100,   246,  -627,  -627,  -627,  -627,  -627,  -627,   785,
     785,  -627,  2929,   164,   641,  -627,  1076,  1077,  -627,   170,
    6346,  1100,  1102,  1103,  1105,  1106,  -627,    -9,  1084,  -627,
    -627,  -627,  -627,  -627,  -627,  -627,   675,  3591,   675,  3591,
    -627,  -627,  -627,  1142,  -627,  -627,  -627,  -627,  1143,  -627,
    -627,  1144,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,
    -627,  -627,  -627,  1151,  -627,  -627,  3591,  3591,  -627,  3591,
    -627,   660,   382,   686,   334,  -627,  3591,  -627,  -627,  -627,
      38,  -627,  4077,  4077,  -627,   462,  -627,  -627,  -627,  -627,
    -627,   694,   462,   462,  4077,   429,   206,  3591,   223,  -627,
    4077,    38,  -627,    22,  1069,  -627,   288,  -627,  3591,  3591,
    -627,   584,  -627,   385,  1096,   367,   383,   482,   836,  3200,
     231,  -627,   231,  3591,  3591,  3591,  3591,   937,   937,  -627,
    1097,   687,  -627,  3260,   387,  -627,   414,  -627,  -627,    78,
      88,    69,    97,   101,  -627,  1099,  -627,  -627,  6106,  -627,
    6146,   865,  1141,  1145,  1146,  6186,  6226,  6266,   400,   692,
    1069,  -627,    38,  1147,  -627,  -627,  -627,  -627,  3591,  -627,
    -627,  -627,  1095,  1069,  -627,  4826,  1069,  -627,   845,  -627,
    1202,  -627,   924,  1206,  1163,  -627,   288,  -627,  -627,  6346,
     697,  1212,   247,   341,   343,   352,    38,    38,  -627,   929,
    -627,  -627,  4524,  4611,  4654,  4694,   231,   231,  -627,  3531,
     424,  -627,  1156,  -627,  -627,  -627,  -627,   526,   552,  1063,
     555,   576,  1064,   983,   982,   587,  1065,   588,   600,  1066,
     612,   613,  1067,  -627,   675,   675,  3591,  -627,  -627,  -627,
    -627,  -627,  -627,   720,  1223,    38,  -627,   935,  6346,  1224,
    -627,  1224,  -627,  3591,  1190,  1226,  1043,  1171,  -627,  1230,
    1174,   338,  -627,   338,  -627,   338,  -627,   338,  -627,  -627,
    -627,    58,  1101,  1104,  1108,  1109,  1110,  1111,  1112,  1113,
    -627,  -627,  -627,  1175,  -627,  -627,  -627,  -627,  -627,  -627,
    -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,
    -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,  -627,
    -627,  -627,  -627,  -627,  6306,  1233,  1174,  -627,  1013,  1176,
    1188,  1191,  6346,  1236,  -627,  1239,  1240,  1195,  -627,  -627,
    -627,  -627,  -627,  -627,   496,  -627,  -627,  -627,  -627,  -627,
    -627,  -627,  -627,  -627,  -627,  1195,  -627,   366,    38,    38,
    -627,  -627,   964,  -627,  -627,  1196,   403,  1198,  1199,  1254,
     370,  1200,  -627,  -627,  1203,  1201,  1263,  -627,   432,  1213,
    1214
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,   135,    86,     0,     0,     3,     7,
       9,     8,    79,    42,   104,    78,     0,   130,   126,   127,
      79,     0,     0,   136,   137,    86,     0,     0,     1,     2,
       4,     6,   135,   135,   135,     0,    96,   105,    86,   104,
       0,     0,   131,     0,    44,    43,     0,    91,    93,     0,
      87,     0,   189,   177,   177,     0,     0,     0,     0,     0,
      47,     0,    96,   133,     0,     0,   128,   224,   241,   242,
     244,   243,   245,   246,   251,     0,     0,     0,     0,     0,
     143,     0,   304,   322,   247,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     335,     0,   334,     0,   331,     0,     0,     0,     0,     0,
       0,     0,     0,   321,     0,     0,     0,     0,   256,    84,
     138,   250,   252,   258,   268,   140,   254,   255,   313,   314,
     312,   311,   269,     0,     0,    89,     0,     0,     0,     0,
      81,    83,    82,   106,   118,   121,    97,     0,    45,   177,
     177,    47,     0,   132,   129,     0,     0,     0,     0,   289,
     259,   260,   256,     0,   222,   305,     0,   257,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   248,   249,     0,   100,     0,
       0,     0,     0,     0,     0,     0,     0,   458,   459,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,    92,    88,     0,   190,     0,     0,
       0,     0,     0,   107,     0,   122,   123,   120,     0,     0,
       0,    46,   134,   402,     0,   225,   226,     0,   404,     0,
     403,     0,   253,     0,     0,   309,   306,     0,   406,     0,
       0,   405,     0,     0,     0,     0,     0,   424,     0,     0,
       0,     0,     0,   455,   456,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   460,   496,
     475,   481,   466,     0,   469,   473,   462,   483,   463,   488,
     499,   470,   485,   479,   477,   461,   471,   491,   494,   480,
     472,   489,     0,   328,   327,     0,     0,     0,     0,     0,
       0,     0,    85,     0,    98,   139,   261,   262,   263,   264,
     265,   267,   266,   270,   281,   282,   283,   284,   285,   286,
     287,   288,   280,   279,     0,     0,     0,   271,   272,   273,
     275,   274,   276,   300,   277,     0,     0,   301,   298,   292,
     290,   294,     0,   142,    90,     0,   192,     0,   185,     0,
       0,   179,   182,   184,    22,    19,    21,    22,     0,   119,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    63,
       0,     0,     0,     0,     0,     0,    72,     0,    76,     0,
       0,    49,     0,     0,   412,     0,     0,     0,     0,   414,
     413,   223,     0,     0,     0,   307,   319,   416,   315,   415,
     393,   394,   395,     0,     0,     0,     0,     0,   425,     0,
     426,   422,     0,   423,   366,     0,   362,     0,   350,     0,
     358,     0,   354,     0,   346,     0,   342,     0,     0,     0,
       0,     0,     0,   384,   383,     0,   380,   376,     0,   374,
     370,     0,   381,     0,   338,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   330,     0,     0,     0,     0,     0,     0,   320,     0,
     189,   162,     0,   187,   101,   144,   146,   187,   166,   147,
     159,     0,   102,   278,     0,   299,     0,     0,   293,   291,
     295,   191,     0,     0,   196,     0,     0,   183,   178,     0,
     181,     0,   100,     0,   100,   108,   109,    61,    62,    52,
      56,    58,    54,    51,    57,    55,    53,     0,    59,    60,
      64,    65,     0,     0,    70,    71,    74,    75,    77,    48,
       0,    22,    22,   401,     0,   227,   228,     0,     0,     0,
       0,     0,   310,   303,   396,   428,     0,     0,     0,   427,
     429,     0,   418,   365,   368,   361,   364,   349,   352,   357,
     360,   353,   356,   345,   348,   341,   344,   390,     0,   386,
     387,     0,   385,   379,   375,   378,   373,   369,   372,   382,
     337,   340,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   457,     0,
       0,   161,     0,   187,     0,     0,   147,     0,   188,   153,
     187,     0,   220,   215,     0,   220,   220,     0,     0,     0,
       0,     0,     0,   156,   187,     0,   177,     0,   158,    99,
       0,   124,     0,   296,   302,     0,   195,   194,   186,     0,
       0,   180,     0,     0,    41,    23,    26,    40,    98,    20,
      98,     0,     0,    73,    67,    66,    69,    68,    50,   100,
     100,   411,     0,     0,     0,   400,     0,   231,   232,     0,
     308,     0,     0,     0,     0,     0,   421,     0,     0,   367,
     363,   351,   359,   355,   347,   343,     0,     0,     0,     0,
     377,   371,   339,     0,   332,   336,   495,   465,     0,   474,
     468,     0,   482,   486,   487,   497,   498,   484,   478,   476,
     490,   492,   493,     0,   326,   325,     0,     0,   317,     0,
     316,   190,     0,     0,   187,   160,     0,   174,   173,   197,
     187,   152,     0,     0,   221,   215,   216,   217,   218,   219,
     214,     0,   215,   215,     0,     0,   205,     0,   208,   145,
       0,   187,   155,     0,     0,   148,   177,   157,     0,     0,
      80,   297,   193,     0,     0,     0,     0,     0,     0,     0,
      47,    14,    47,     0,     0,     0,     0,    98,    98,   399,
       0,   229,   230,     0,     0,   410,     0,   239,   240,     0,
       0,     0,     0,     0,   420,     0,   419,   391,     0,   388,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   192,
       0,   165,   187,     0,   151,   200,   201,   211,     0,   212,
     213,   202,     0,     0,   204,     0,     0,   207,     0,   154,
       0,   172,     0,     0,     0,   167,   177,   150,   103,   125,
       0,     0,    30,    33,    36,    39,   130,   130,    27,     0,
      13,    12,     0,     0,     0,     0,    47,    47,   409,     0,
       0,   398,     0,   237,   238,   235,   236,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   417,     0,     0,     0,   464,   467,   329,
     324,   323,   318,   191,     0,   187,   164,   175,   199,     0,
     203,     0,   206,     0,     0,     0,     0,     0,   149,     0,
       0,     0,    29,     0,    32,     0,    35,     0,    38,    25,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    10,   397,     0,   233,   234,   408,   436,   451,   431,
     446,   441,   439,   454,   434,   449,   444,   435,   450,   430,
     445,   440,   438,   453,   433,   448,   443,   437,   452,   432,
     447,   442,   392,   389,     0,     0,   195,   163,     0,   224,
       0,     0,   198,     0,   168,     0,     0,     0,    28,    31,
      34,    37,    17,    18,     0,   110,   112,   111,   113,   114,
     116,   115,   117,   407,   333,   193,   176,     0,     0,     0,
     170,   169,     0,    15,    16,   225,     0,     0,     0,     0,
       0,     0,   209,   210,     0,   227,     0,   171,     0,     0,
     229
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -627,  -627,  1270,  -627,  -627,  -627,  -626,  -245,  -627,  -373,
     431,  -627,  -627,     3,   511,  -151,   680,  -627,   448,  -627,
    -627,    47,  -627,  -627,  1219,   911,  -517,  -627,  1247,  -177,
    -627,  1023,  -627,  -627,  -627,   513,  1245,  -627,  -466,   -17,
    1127,   599,  1072,  -549,   592,  -533,  -627,  -627,  -627,  -627,
    -627,   245,   -52,  -397,  -627,   880,  -477,   -13,   753,  -627,
    -627,  -627,  -313,  -215,  -150,  -144,  -627,  -627,   -44,   -45,
     904,  -627,  -627,  1016,  -627,  -627,  -178,   471,  -627,  -627,
    -627,  -198,  -295,   997,   631,  -447,  -232,  -204
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,     7,     8,     9,    10,   850,   424,   425,   572,
     725,   726,    11,   128,    21,   158,   450,   451,    14,    15,
     218,    27,    50,    51,    60,   851,   374,   711,    36,    37,
     263,   153,   154,   267,   840,    22,    18,    19,    41,   688,
      64,    25,   129,   130,   544,   545,   546,   706,   915,   547,
     685,   807,   148,   420,   421,   422,   689,   548,   549,   826,
     828,   701,   820,   815,   173,   131,   132,   133,   134,   174,
     408,   136,   176,   285,   286,   464,   137,   138,   139,   140,
     141,   142,   302,   478,   306,   690,   253,   362
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      42,   135,   149,    12,   143,    20,   482,   301,   369,   684,
     271,    12,   474,   155,    54,   274,   427,   279,   281,    12,
     413,   660,   727,   662,   570,    12,   531,   812,   289,   292,
      17,     2,   169,   668,   170,   171,   616,   175,   481,   777,
     691,   692,   693,   694,   695,   322,   696,   780,   160,   697,
     698,   699,    26,   874,   574,   728,   475,   730,    12,    12,
      12,  1062,     2,   370,     1,     2,    23,   581,   164,  1063,
     703,   910,    46,   584,   953,    28,   582,   257,    29,    52,
     747,   423,   585,   947,   172,    61,   756,    53,   177,    31,
     911,   229,   912,   950,   681,   470,   471,   472,    24,    40,
     704,   577,   957,   708,   852,    43,   960,   269,   270,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   748,    44,   461,     4,   298,   913,   258,   296,   678,
     305,   307,   309,   311,   313,   315,   317,   319,   320,   321,
     298,   323,   324,   326,   329,   331,   333,   335,   336,   337,
      38,   821,    58,   678,   954,     4,    35,   861,     4,   371,
     583,   578,   721,   867,   135,  1064,   376,   377,   378,   379,
     380,   381,   382,   298,    45,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   550,   397,   398,   399,   400,
     401,   402,   403,   404,   372,   405,   707,   601,   602,   678,
     300,    59,   853,   811,    63,   426,   426,   428,   862,   155,
     147,   297,   857,   858,   868,   300,   678,   832,   739,   740,
     834,   936,   937,   805,    32,    33,    34,   854,    65,   462,
     810,   423,   476,   423,   477,   -79,   -79,   -79,     1,     2,
     227,   228,     3,   407,   678,   831,   557,   532,   300,   836,
     837,   485,   661,   487,   663,   489,   617,   491,   618,   493,
     778,   495,   678,   497,   669,   614,   903,   -94,   781,   895,
     896,    44,   508,   145,   -79,   511,   623,   513,   625,   515,
     627,   901,   629,   906,   631,   813,   633,   908,   635,   727,
     637,    35,   639,   640,   955,   604,   956,   642,   643,   644,
     914,   646,   647,   948,   679,   949,   650,   991,   298,   700,
     144,   680,   678,   951,   416,   952,   758,   891,   729,   621,
      40,   146,   958,   894,   959,   676,   961,   678,   962,   687,
     457,   227,   228,   678,   227,   228,   227,   228,   147,   553,
      35,   554,     4,   156,   909,   227,   228,   892,   855,   561,
     418,   -79,   -79,   275,   550,   605,   -79,   -79,   -79,  1085,
     922,   719,   283,  1095,   157,    75,   543,    76,     5,   904,
      40,   907,   801,   856,   417,   889,   924,   916,   920,   702,
     943,   423,   299,   300,   163,    40,    47,   162,    48,   407,
     458,    40,    44,   973,   890,   -79,  1091,   426,   426,   172,
     687,   993,     2,   995,   276,   976,   606,   945,   612,   562,
     276,   923,   997,   277,   606,   607,   759,  1014,   760,  1086,
     761,   720,   762,  1096,   763,  1100,   764,   925,   765,   596,
     597,   944,   802,   975,   757,   417,    83,   770,   921,   430,
     771,   565,    49,   772,   638,   167,   980,   641,   746,   982,
     999,  1000,   875,   974,    39,   165,   458,   166,   946,   165,
      39,   566,   653,   654,   409,   431,   410,   411,  1015,    52,
     822,   823,   -79,   -79,   168,    52,   862,   159,   671,   672,
     673,   674,   675,   926,   558,   419,   559,   560,  1047,  1083,
     178,   804,   897,   150,   151,   152,   709,  1084,   412,   899,
     900,    13,   713,    16,   179,   215,   550,   216,   180,    13,
     718,    16,   550,   249,   250,   251,   135,   181,   426,   222,
     223,   224,   225,   226,   182,   432,   433,   434,   183,   435,
     436,   437,   455,   438,   456,   683,   439,   440,   184,   441,
     442,   443,   444,   445,   446,   447,   185,   219,   448,   449,
     556,   247,   248,   249,   250,   251,   750,   608,   877,   609,
     879,   217,   255,   220,   221,   222,   223,   224,   225,   226,
     248,   249,   250,   251,    86,    87,    88,    89,    90,    91,
     186,   187,   860,   394,   395,   396,   188,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    55,    56,    57,   550,   550,   220,   221,   222,   223,
     224,   225,   226,   165,   712,   677,   550,   734,   262,   735,
     569,   736,   550,   737,   835,   189,   893,   220,   221,   222,
     223,   224,   225,   226,   816,   817,   818,   819,   841,    93,
      94,    95,    96,    97,    98,    99,   742,   190,   743,   103,
     104,   191,   106,   107,   108,   109,   192,   751,   918,   752,
     992,   994,   996,   998,   753,   193,   754,   543,   455,   930,
     843,   931,   863,   543,   864,   194,   195,   229,   691,   692,
     693,   694,   695,   942,   696,   898,   196,   697,   698,   699,
     197,   455,   878,   888,   880,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   165,   939,   566,
     940,   885,   886,   608,   887,   563,   256,   498,   742,  1058,
     989,  1059,  1017,  1060,  1018,  1061,  1042,  1043,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   742,   905,  1045,   917,  1010,  1011,   198,  1019,  1013,
    1020,  1022,   199,  1023,   919,   200,   691,   692,   693,   694,
     695,   201,   696,   135,   709,   697,   698,   699,   932,   933,
     934,   935,  1024,   202,  1025,   543,   543,   308,   310,   312,
     314,   316,   318,  1029,  1032,  1030,  1033,   543,   203,   327,
     330,   332,   334,   543,   927,  1050,  1034,  1051,  1035,    67,
      68,    69,    70,    71,    72,   204,    73,    74,  1037,  1039,
    1038,  1040,   205,   978,    75,   206,    76,   207,   208,   691,
     692,   693,   694,   695,   988,   696,   983,   209,   697,   698,
     699,   210,   211,   212,   213,   214,    77,   259,   260,   261,
      34,   268,   264,   282,   284,   293,   294,   295,    78,    79,
      80,   363,   364,   365,   366,   367,   368,    81,    52,   373,
     383,   406,   -95,   414,   415,   452,   453,   463,   454,    42,
      42,   459,   460,   466,    92,    82,   467,   468,   469,   479,
     483,  1044,   503,   506,   509,    83,    67,    68,    69,    70,
      71,    72,    84,    73,    74,   519,   520,   521,  1052,   522,
     523,    75,   524,    76,   525,    85,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   533,   526,
     527,   528,   529,    77,   530,   534,   535,   536,   551,   537,
     538,   226,   563,   564,   568,    78,    79,   325,   571,   579,
     580,   586,   587,   573,    81,   588,   589,   590,   499,   591,
     592,   303,   593,   594,   595,   598,   599,   600,   610,   613,
     615,   619,    82,   622,   652,   620,   655,   656,   657,   658,
     659,   664,    83,   705,   665,   666,   667,   670,   714,    84,
     229,   715,   710,   304,   716,   717,   731,   732,   733,   741,
     744,   749,    85,   776,   773,   755,   779,   782,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     783,  1087,  1088,    86,    87,    88,    89,    90,    91,   784,
     501,   793,   678,   824,   806,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     785,   786,   787,   788,   789,   790,   791,   792,   800,   808,
     809,   814,   825,   827,   830,   833,   722,   723,   724,   842,
     127,   844,   849,   845,   846,   839,   838,   848,   865,   869,
     866,   870,   871,   847,   872,   873,   876,   881,   882,   883,
      86,    87,    88,    89,    90,    91,   884,   608,   966,   938,
     979,   963,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,    67,    68,    69,
      70,    71,    72,   967,    73,    74,   984,   968,   969,   977,
     986,   985,    75,   987,    76,   990,  1001,   127,  1016,  1027,
    1028,  1021,  1026,  1031,  1036,  1041,  1046,  1049,  1048,  1053,
    1054,  1055,  1056,  1057,    77,   863,  1075,  1073,  1078,  1077,
    1080,  1079,  1065,  1081,  1082,  1066,    78,    79,   328,  1067,
    1068,  1069,  1070,  1071,  1072,    81,   939,  1089,  1094,  1090,
    1092,  1093,   303,   609,  1098,  1097,  1099,    67,    68,    69,
      70,    71,    72,    82,    73,    74,   864,   940,    30,   928,
     738,   161,    75,    83,    76,   552,    62,   429,    66,   272,
      84,   375,   829,  1076,   304,   686,   902,   480,     0,   567,
     555,   502,   465,    85,    77,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
       0,     0,     0,     0,     1,    81,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,     0,   229,     0,     0,     0,
      84,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    85,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   766,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    86,    87,    88,    89,    90,    91,     0,     4,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   127,     0,
       0,    86,    87,    88,    89,    90,    91,     0,     0,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,    67,    68,
      69,    70,    71,    72,     0,    73,    74,     0,     0,     0,
     338,   339,     0,    75,     0,    76,     0,     0,   127,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   340,
     341,     0,   342,     0,     0,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,   287,
     343,     0,     0,     0,     0,     0,    81,   288,    67,    68,
      69,    70,    71,    72,     0,    73,    74,     0,     0,     0,
       0,     0,     0,    75,    82,    76,   344,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,     0,   345,     0,
       0,    84,     0,     0,     0,    77,     0,   767,     0,     0,
       0,     0,     0,     0,    85,     0,   346,    78,    79,   290,
       0,     0,     0,     0,     0,     0,    81,   291,     0,     0,
     347,     0,   348,     0,     0,     0,     0,     0,     0,     0,
     349,   350,     0,     0,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    83,     0,     0,   229,     0,     0,
       0,    84,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    85,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   768,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,    86,    87,    88,    89,    90,    91,     0,     0,
       0,     0,     0,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    86,    87,    88,    89,    90,    91,     0,   127,
       0,     0,     0,     0,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,    67,
      68,    69,    70,    71,    72,     0,    73,    74,     0,     0,
       0,     0,     0,     0,    75,     0,    76,     0,     0,   127,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,     0,     0,   303,     0,     0,     0,     0,    67,
      68,    69,    70,    71,    72,    82,    73,    74,     0,     0,
       0,     0,     0,     0,    75,    83,    76,     0,     0,     0,
       0,     0,    84,     0,     0,     0,   304,     0,   769,     0,
       0,     0,     0,     0,     0,    85,    77,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
      80,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,     0,     0,   229,     0,
       0,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    85,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   798,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     127,     0,     0,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,     0,     0,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
      67,    68,    69,    70,    71,    72,     0,    73,    74,     0,
       0,     0,     0,     0,     0,    75,     0,    76,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,     0,     0,     0,     0,     0,     0,    81,   273,
      67,    68,    69,    70,    71,    72,     0,    73,    74,     0,
       0,     0,     0,     0,     0,    75,    82,    76,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,     0,     0,    84,     0,     0,     0,    77,     0,   799,
       0,     0,     0,     0,     0,     0,    85,     0,     0,    78,
      79,     0,     0,     0,     0,     0,     0,     0,    81,   278,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    82,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,   229,
       0,     0,     0,    84,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    85,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,   127,     0,     0,     0,     0,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,     0,    76,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     280,    67,    68,    69,    70,    71,    72,     0,    73,    74,
       0,     0,     0,     0,     0,     0,    75,    82,    76,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
       0,     0,     0,     0,    84,     0,     0,     0,    77,     0,
     516,     0,     0,     0,     0,     0,     0,    85,     0,     0,
      78,    79,     0,     0,     0,     0,     0,     0,     0,    81,
     603,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    83,     0,     0,
     229,     0,     0,     0,    84,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    85,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,     0,     0,     0,     0,     0,     0,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    86,    87,    88,    89,    90,
      91,     0,   127,     0,     0,     0,     0,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,    67,    68,    69,    70,    71,    72,     0,    73,
      74,     0,     0,     0,     0,     0,     0,    75,     0,    76,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    79,     0,     0,     0,     0,     0,     0,     0,
      81,   745,    67,    68,    69,    70,    71,    72,     0,    73,
      74,     0,     0,     0,     0,     0,     0,    75,    82,    76,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,     0,     0,     0,     0,    84,     0,     0,     0,    77,
       0,   517,     0,     0,     0,     0,     0,     0,    85,     0,
       0,    78,    79,     0,     0,     0,     0,     0,     0,     0,
      81,   859,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    82,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    83,     0,
       0,   229,     0,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    85,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,     0,     0,     0,     0,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    86,    87,    88,    89,
      90,    91,     0,   127,     0,     0,     0,     0,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,    67,    68,    69,    70,    71,    72,     0,
      73,    74,     0,     0,     0,     0,     0,     0,    75,     0,
      76,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      77,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,     0,     0,     0,     0,
       0,    81,     0,    67,    68,    69,    70,    71,    72,     0,
      73,    74,     0,     0,     0,     0,     0,     0,    75,    82,
      76,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,     0,     0,     0,     0,    84,     0,     0,     0,
      77,     0,   518,     0,     0,     0,     0,     0,     0,    85,
       0,     0,    78,    79,     0,     0,     0,     0,     0,     0,
       0,    81,   941,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    82,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    83,
       0,     0,   229,     0,     0,     0,    84,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    85,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,   929,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    86,    87,    88,
      89,    90,    91,     0,   127,     0,     0,     0,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,    67,    68,    69,    70,    71,    72,
       0,    73,    74,     0,     0,     0,     0,     0,     0,    75,
       0,    76,     0,     0,   127,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,    79,     0,     0,     0,     0,     0,
       0,     0,    81,  1012,    67,    68,    69,    70,    71,    72,
       0,    73,    74,     0,     0,     0,     0,     0,     0,    75,
      82,    76,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,     0,     0,     0,     0,    84,     0,     0,
       0,    77,     0,   796,     0,     0,     0,     0,     0,     0,
      85,     0,     0,    78,    79,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      83,     0,     0,   229,     0,     0,     0,    84,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      85,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     0,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    86,    87,
      88,    89,    90,    91,     0,   127,     0,     0,     0,     0,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,    67,    68,    69,    70,    71,
      72,   229,    73,    74,     0,     0,     0,     0,     0,     0,
      75,     0,    76,     0,     0,   127,     0,     0,     0,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,     0,     0,     0,    78,    79,     0,     0,     0,     0,
       0,     0,     0,    81,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    82,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,     0,     0,     0,     0,     0,     0,    84,     0,
       0,     0,     0,     0,   797,     0,     0,     0,     0,     0,
       0,    85,     0,     0,     0,   540,   229,     0,     0,     0,
       0,     0,     0,   541,     0,     0,     0,     0,     0,     0,
      75,     0,    76,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     1,   542,     0,   265,     0,     0,     0,     0,
     611,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    83,   266,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     540,     0,     0,     0,     0,     0,     0,     0,   541,    86,
      87,    88,    89,    90,    91,    75,     0,    76,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,     4,     0,   542,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   127,     0,     0,     0,
     418,     0,     0,     0,   682,     0,    83,     0,     0,     0,
       0,     0,     0,     0,     0,    75,     0,    76,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   418,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      75,     0,    76,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   419,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,    83,   803,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    75,     0,    76,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    86,    87,    88,    89,    90,    91,
       0,     0,     0,     0,     0,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,     0,     0,     0,     0,     0,   229,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    86,
      87,    88,    89,    90,    91,     0,     0,     0,     0,     0,
       0,     0,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,    86,    87,    88,    89,
      90,    91,   575,   576,     0,     0,     0,     0,     0,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   229,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,     0,     0,     0,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1002,  1003,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     0,   227,   228,     0,
       0,     0,     0,     0,     0,     0,   229,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1004,
    1005,     0,     0,     0,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,     0,   229,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1006,  1007,   252,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,     0,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1008,  1009,     0,   539,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   981,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   254,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   473,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   484,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   486,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   488,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   490,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   492,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   494,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   496,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   500,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   504,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   505,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   507,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   510,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   512,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   514,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   624,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   626,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   628,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   630,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   632,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   634,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   636,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   645,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   648,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   649,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   651,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   774,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   775,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   794,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   795,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   964,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   965,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   970,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   971,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   972,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   229,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1074,     0,
       0,     0,     0,     0,     0,     0,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251
};

static const yytype_int16 yycheck[] =
{
      17,    46,    54,     0,    49,     2,   301,   184,   212,   542,
     161,     8,     5,    58,    27,   165,   261,   167,   168,    16,
     252,     5,   571,     5,   421,    22,    62,    17,   178,   179,
       3,    61,    77,     5,    78,    79,     5,    82,    62,    62,
      14,    15,    16,    17,    18,   195,    20,    62,    61,    23,
      24,    25,   189,    62,   427,   572,    49,   574,    55,    56,
      57,     3,    61,   213,    60,    61,    68,    17,    65,    11,
     547,    49,    25,    17,     5,     0,    26,     3,   106,     3,
       3,   259,    26,     5,    81,    38,    62,    11,    85,    64,
      68,    12,    70,     5,   541,   293,   294,   295,   100,    61,
     547,   142,     5,   550,   730,   293,     5,   159,   160,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    54,    62,   283,   164,   159,   114,    63,   183,     3,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     159,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     190,   694,    77,     3,    95,   164,   142,     3,   164,   214,
     120,   212,   569,     3,   219,   117,   220,   221,   222,   223,
     224,   225,   226,   159,    62,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   373,   241,   242,   243,   244,
     245,   246,   247,   248,   217,   249,    70,   452,   453,     3,
     234,    65,   112,   690,     3,   260,   261,   262,    54,   264,
      60,    62,   739,   740,    54,   234,     3,   704,   601,   602,
      70,   857,   858,   680,    26,    27,    28,   137,    70,   284,
     687,   419,   235,   421,   237,    26,    27,    28,    60,    61,
       3,     4,    64,   250,     3,   702,   406,   293,   234,   706,
     707,   306,   246,   308,   246,   310,   235,   312,   237,   314,
     293,   316,     3,   318,   246,   473,    70,   145,   293,   812,
     813,    62,   327,   145,    65,   330,   484,   332,   486,   334,
     488,   824,   490,    70,   492,   285,   494,   830,   496,   848,
     498,   142,   500,   501,   235,   455,   237,   505,   506,   507,
     288,   509,   510,   235,    63,   237,   514,    70,   159,   293,
      60,    70,     3,   235,     3,   237,   621,   804,   573,   479,
      61,    63,   235,   810,   237,   539,   235,     3,   237,    70,
       3,     3,     4,     3,     3,     4,     3,     4,    60,   394,
     142,   395,   164,    76,   831,     3,     4,   804,   112,     3,
       3,   142,   143,     3,   542,     3,    26,    27,    28,     3,
       3,     3,   293,     3,   143,    18,   373,    20,   190,   826,
      61,   828,     3,   137,    63,     3,     3,   834,     3,    70,
       3,   569,   233,   234,    62,    61,     5,   293,     7,   396,
      63,    61,    62,     3,    70,    65,     3,   452,   453,   406,
      70,    70,    61,    70,    54,   892,    54,     3,   463,    63,
      54,    54,    70,    63,    54,    63,   624,     3,   626,    63,
     628,    63,   630,    63,   632,     3,   634,    54,   636,   223,
     224,    54,    63,   890,   621,    63,    89,   645,    63,   116,
     648,    43,    61,   651,   499,    61,   903,   502,   608,   906,
     926,   927,   757,    63,    16,    61,    63,    63,    54,    61,
      22,    63,   517,   518,     6,   142,     8,     9,    54,     3,
     695,   696,   142,   143,    61,     3,    54,    11,   533,   534,
     535,   536,   537,    11,     6,   138,     8,     9,   975,     3,
      61,   679,   815,    55,    56,    57,   551,    11,    40,   822,
     823,     0,   556,     0,    61,     5,   694,     7,    61,     8,
     565,     8,   700,    49,    50,    51,   571,    61,   573,    54,
      55,    56,    57,    58,    61,   202,   203,   204,    61,   206,
     207,   208,    61,   210,    63,   542,   213,   214,    61,   216,
     217,   218,   219,   220,   221,   222,    61,   293,   225,   226,
      39,    47,    48,    49,    50,    51,   611,    61,   766,    63,
     768,   128,   182,    52,    53,    54,    55,    56,    57,    58,
      48,    49,    50,    51,   227,   228,   229,   230,   231,   232,
      61,    61,   742,    48,    49,    50,    61,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    32,    33,    34,   812,   813,    52,    53,    54,    55,
      56,    57,    58,    61,    39,    63,   824,     5,   140,     7,
     293,     5,   830,     7,   706,    61,   806,    52,    53,    54,
      55,    56,    57,    58,   202,   203,   204,   205,   712,   240,
     241,   242,   243,   244,   245,   246,    61,    61,    63,   250,
     251,    61,   253,   254,   255,   256,    61,   236,   838,   238,
     922,   923,   924,   925,   236,    61,   238,   694,    61,   850,
      63,   852,    61,   700,    63,    61,    61,    12,    14,    15,
      16,    17,    18,   863,    20,    21,    61,    23,    24,    25,
      61,    61,   767,    63,   769,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    61,    61,    63,
      63,   796,   797,    61,   799,    63,    60,    62,    61,   991,
      63,   993,   236,   995,   238,   997,   964,   965,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    61,   827,    63,   836,   936,   937,    61,   236,   939,
     238,   236,    61,   238,   839,    61,    14,    15,    16,    17,
      18,    61,    20,   848,   849,    23,    24,    25,   853,   854,
     855,   856,   236,    61,   238,   812,   813,   186,   187,   188,
     189,   190,   191,   236,   236,   238,   238,   824,    61,   198,
     199,   200,   201,   830,   847,   979,   236,   981,   238,     3,
       4,     5,     6,     7,     8,    61,    10,    11,   236,   236,
     238,   238,    61,   898,    18,    61,    20,    61,    61,    14,
      15,    16,    17,    18,   916,    20,    21,    61,    23,    24,
      25,    61,    61,    61,    61,    61,    40,    61,   167,   167,
      28,    61,   293,    62,   196,    62,    62,    62,    52,    53,
      54,    62,    62,     3,     3,     3,     3,    61,     3,   114,
       3,    61,   145,   182,    63,   167,   167,   104,    62,   926,
     927,    62,    62,    62,   239,    79,    62,    62,    62,    77,
      62,   966,    62,    62,    62,    89,     3,     4,     5,     6,
       7,     8,    96,    10,    11,    61,    61,    61,   983,    61,
      61,    18,    61,    20,    61,   109,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   293,    61,
      61,    61,    61,    40,    61,   293,   293,   293,   195,   293,
      62,    58,    63,     3,    62,    52,    53,    54,   289,   120,
      17,    26,    65,   293,    61,   209,     5,   215,   293,   215,
      43,    68,    43,     5,     5,   215,    62,   293,     3,   105,
     236,   236,    79,    62,     5,   158,     5,     5,     5,     5,
       5,     5,    89,    65,     5,     5,     5,     5,    62,    96,
      12,    63,   120,   100,     3,     3,   111,   111,     9,    62,
       3,    63,   109,    62,   293,   158,    62,    62,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      62,  1078,  1079,   227,   228,   229,   230,   231,   232,    62,
      62,   293,     3,   285,    61,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    23,    61,    61,    17,   286,   290,   291,   292,     3,
     294,     3,   195,    63,    63,   121,    77,   293,    62,    39,
      63,    39,    39,   128,    39,    39,    62,     5,     5,     5,
     227,   228,   229,   230,   231,   232,     5,    61,   293,    62,
      65,    62,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,     3,     4,     5,
       6,     7,     8,    62,    10,    11,     4,    62,    62,    62,
       4,   287,    18,    50,    20,     3,   287,   294,    62,   236,
     238,   158,   158,   158,   158,   158,     3,     3,   293,    39,
       4,   188,    61,     3,    40,    61,     3,    62,    50,    63,
       4,    50,   141,     4,     4,   141,    52,    53,    54,   141,
     141,   141,   141,   141,   141,    61,    61,   293,     4,    63,
      62,    62,    68,    63,    63,    62,     3,     3,     4,     5,
       6,     7,     8,    79,    10,    11,    63,    63,     8,   848,
     600,    62,    18,    89,    20,   374,    39,   264,    43,   162,
      96,   219,   700,  1048,   100,   542,   825,   300,    -1,   419,
     396,   293,   286,   109,    40,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    12,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   109,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   227,   228,   229,   230,   231,   232,    -1,   164,    -1,
      -1,    -1,    -1,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,
      -1,   227,   228,   229,   230,   231,   232,    -1,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   273,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      73,    74,    -1,    18,    -1,    20,    -1,    -1,   294,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    -1,    95,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,
     113,    -1,    -1,    -1,    -1,    -1,    61,    62,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    79,    20,   139,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,   151,    -1,
      -1,    96,    -1,    -1,    -1,    40,    -1,   293,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,   169,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
     183,    -1,   185,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     193,   194,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    12,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   227,   228,   229,   230,   231,   232,    -1,    -1,
      -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   227,   228,   229,   230,   231,   232,    -1,   294,
      -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,     3,
       4,     5,     6,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,   294,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    79,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    89,    20,    -1,    -1,    -1,
      -1,    -1,    96,    -1,    -1,    -1,   100,    -1,   293,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    12,    -1,
      -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   109,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,    -1,    -1,   227,   228,   229,   230,   231,   232,    -1,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
       3,     4,     5,     6,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,   293,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,    52,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    12,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,   232,
      -1,   294,    -1,    -1,    -1,    -1,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
     293,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,
     232,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,
     232,    -1,   294,    -1,    -1,    -1,    -1,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,
      -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,
      -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,   228,   229,   230,
     231,   232,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   227,   228,   229,   230,
     231,   232,    -1,   294,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,     3,     4,     5,     6,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    79,
      20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      40,    -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,
      -1,    -1,    12,    -1,    -1,    -1,    96,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,   229,
     230,   231,   232,    -1,    -1,    -1,    -1,   237,    -1,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,   229,
     230,   231,   232,    -1,   294,    -1,    -1,    -1,    -1,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,   294,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      79,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    40,    -1,   293,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    12,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,
     229,   230,   231,   232,    -1,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,   228,
     229,   230,   231,   232,    -1,   294,    -1,    -1,    -1,    -1,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,     3,     4,     5,     6,     7,
       8,    12,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,   294,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,   293,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,     3,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    60,    61,    -1,    71,    -1,    -1,    -1,    -1,
     181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,   227,
     228,   229,   230,   231,   232,    18,    -1,    20,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   164,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,
       3,    -1,    -1,    -1,   192,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    89,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   227,   228,   229,   230,   231,   232,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,    -1,    -1,    -1,    -1,    -1,    12,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   227,
     228,   229,   230,   231,   232,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   227,   228,   229,   230,
     231,   232,   158,   159,    -1,    -1,    -1,    -1,    -1,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,   273,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   159,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,
     159,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   159,    70,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   158,   159,    -1,    70,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    60,    61,    64,   164,   190,   296,   297,   298,   299,
     300,   307,   308,   309,   313,   314,   330,     3,   331,   332,
     308,   309,   330,    68,   100,   336,   189,   316,     0,   106,
     297,    64,    26,    27,    28,   142,   323,   324,   190,   313,
      61,   333,   334,   293,    62,    62,   316,     5,     7,    61,
     317,   318,     3,    11,   352,   336,   336,   336,    77,    65,
     319,   316,   323,     3,   335,    70,   331,     3,     4,     5,
       6,     7,     8,    10,    11,    18,    20,    40,    52,    53,
      54,    61,    79,    89,    96,   109,   227,   228,   229,   230,
     231,   232,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   294,   308,   337,
     338,   360,   361,   362,   363,   364,   366,   371,   372,   373,
     374,   375,   376,   364,    60,   145,    63,    60,   347,   347,
     313,   313,   313,   326,   327,   364,    76,   143,   310,    11,
     352,   319,   293,    62,   308,    61,    63,    61,    61,   364,
     363,   363,   308,   359,   364,   364,   367,   308,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,     5,     7,   128,   315,   293,
      52,    53,    54,    55,    56,    57,    58,     3,     4,    12,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    70,   381,    62,   182,    60,     3,    63,    61,
     167,   167,   140,   325,   293,    71,    98,   328,    61,   347,
     347,   310,   335,    62,   359,     3,    54,    63,    62,   359,
      62,   359,    62,   293,   196,   368,   369,    54,    62,   359,
      54,    62,   359,    62,    62,    62,   364,    62,   159,   233,
     234,   324,   377,    68,   100,   364,   379,   364,   379,   364,
     379,   364,   379,   364,   379,   364,   379,   364,   379,   364,
     364,   364,   359,   364,   364,    54,   364,   379,    54,   364,
     379,   364,   379,   364,   379,   364,   364,   364,    73,    74,
      92,    93,    95,   113,   139,   151,   169,   183,   185,   193,
     194,   274,   275,   276,   277,   278,   279,   280,   281,   282,
     283,   284,   382,    62,    62,     3,     3,     3,     3,   382,
     359,   364,   352,   114,   321,   337,   363,   363,   363,   363,
     363,   363,   363,     3,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,    48,    49,    50,   364,   364,   364,
     364,   364,   364,   364,   364,   363,    61,   308,   365,     6,
       8,     9,    40,   381,   182,    63,     3,    63,     3,   138,
     348,   349,   350,   371,   302,   303,   364,   302,   364,   326,
     116,   142,   202,   203,   204,   206,   207,   208,   210,   213,
     214,   216,   217,   218,   219,   220,   221,   222,   225,   226,
     311,   312,   167,   167,    62,    61,    63,     3,    63,    62,
      62,   359,   364,   104,   370,   368,    62,    62,    62,    62,
     376,   376,   376,    62,     5,    49,   235,   237,   378,    77,
     378,    62,   377,    62,    62,   364,    62,   364,    62,   364,
      62,   364,    62,   364,    62,   364,    62,   364,    62,   293,
      62,    62,   293,    62,    62,    62,    62,    62,   364,    62,
      62,   364,    62,   364,    62,   364,   293,   293,   293,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    62,   293,   293,   293,   293,   293,   293,    62,    70,
       3,    11,    61,   308,   339,   340,   341,   344,   352,   353,
     371,   195,   320,   364,   363,   365,    39,   359,     6,     8,
       9,     3,    63,    63,     3,    43,    63,   350,    62,   293,
     348,   289,   304,   293,   304,   158,   159,   142,   212,   120,
      17,    17,    26,   120,    17,    26,    26,    65,   209,     5,
     215,   215,    43,    43,     5,     5,   223,   224,   215,    62,
     293,   302,   302,    62,   359,     3,    54,    63,    61,    63,
       3,   181,   364,   105,   376,   236,     5,   235,   237,   236,
     158,   359,    62,   376,    62,   376,    62,   376,    62,   376,
      62,   376,    62,   376,    62,   376,    62,   376,   364,   376,
     376,   364,   376,   376,   376,    62,   376,   376,    62,    62,
     376,    62,     5,   364,   364,     5,     5,     5,     5,     5,
       5,   246,     5,   246,     5,     5,     5,     5,     5,   246,
       5,   364,   364,   364,   364,   364,   382,    63,     3,    63,
      70,   380,   192,   308,   340,   345,   353,    70,   334,   351,
     380,    14,    15,    16,    17,    18,    20,    23,    24,    25,
     293,   356,    70,   351,   380,    65,   342,    70,   380,   364,
     120,   322,    39,   363,    62,    63,     3,     3,   364,     3,
      63,   348,   290,   291,   292,   305,   306,   338,   321,   302,
     321,   111,   111,     9,     5,     7,     5,     7,   311,   304,
     304,    62,    61,    63,     3,    62,   359,     3,    54,    63,
     364,   236,   238,   236,   238,   158,    62,   324,   377,   376,
     376,   376,   376,   376,   376,   376,    62,   293,    62,   293,
     376,   376,   376,   293,    62,    62,    62,    62,   293,    62,
      62,   293,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    62,    62,   293,    62,    62,   293,   293,    62,   293,
      62,     3,    63,     3,   371,   380,    61,   346,    62,    62,
     380,   351,    17,   285,    23,   358,   202,   203,   204,   205,
     357,   340,   358,   358,   285,    61,   354,    61,   355,   339,
      17,   380,   351,   286,    70,   347,   380,   380,    77,   121,
     329,   363,     3,    63,     3,    63,    63,   128,   293,   195,
     301,   320,   301,   112,   137,   112,   137,   321,   321,    62,
     359,     3,    54,    61,    63,    62,    63,     3,    54,    39,
      39,    39,    39,    39,    62,   377,    62,   376,   364,   376,
     364,     5,     5,     5,     5,   364,   364,   364,    63,     3,
      70,   351,   380,   359,   351,   340,   340,   357,    21,   357,
     357,   340,   372,    70,   380,   364,    70,   380,   340,   351,
      49,    68,    70,   114,   288,   343,   380,   347,   359,   364,
       3,    63,     3,    54,     3,    54,    11,   352,   305,   237,
     310,   310,   364,   364,   364,   364,   301,   301,    62,    61,
      63,    62,   359,     3,    54,     3,    54,     5,   235,   237,
       5,   235,   237,     5,    95,   235,   237,     5,   235,   237,
       5,   235,   237,    62,    62,    62,   293,    62,    62,    62,
      62,    62,    62,     3,    63,   380,   351,    62,   364,    65,
     380,    65,   380,    21,     4,   287,     4,    50,   347,    63,
       3,    70,   381,    70,   381,    70,   381,    70,   381,   333,
     333,   287,   158,   159,   158,   159,   158,   159,   158,   159,
     310,   310,    62,   359,     3,    54,    62,   236,   238,   236,
     238,   158,   236,   238,   236,   238,   158,   236,   238,   236,
     238,   158,   236,   238,   236,   238,   158,   236,   238,   236,
     238,   158,   376,   376,   364,    63,     3,   351,   293,     3,
     360,   360,   364,    39,     4,   188,    61,     3,   381,   381,
     381,   381,     3,    11,   117,   141,   141,   141,   141,   141,
     141,   141,   141,    62,    62,     3,   346,    63,    50,    50,
       4,     4,     4,     3,    11,     3,    63,   334,   334,   293,
      63,     3,    62,    62,     4,     3,    63,    62,    63,     3,
       3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   295,   296,   297,   297,   298,   298,   298,   299,   299,
     300,   300,   300,   300,   301,   301,   301,   301,   301,   302,
     302,   303,   304,   304,   304,   304,   305,   305,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   306,   306,
     306,   306,   307,   308,   308,   309,   309,   310,   310,   311,
     311,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   313,   313,
     314,   314,   314,   314,   315,   315,   316,   316,   316,   316,
     316,   317,   317,   318,   318,   318,   319,   319,   320,   320,
     321,   321,   322,   322,   323,   323,   324,   324,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   326,   326,
     327,   328,   328,   328,   329,   329,   330,   331,   331,   332,
     333,   333,   334,   335,   335,   336,   336,   336,   337,   337,
     338,   338,   338,   338,   339,   339,   340,   340,   341,   341,
     341,   341,   341,   341,   341,   341,   341,   341,   341,   341,
     341,   341,   341,   341,   341,   341,   342,   342,   343,   343,
     343,   343,   343,   344,   345,   346,   346,   347,   347,   348,
     348,   348,   349,   349,   350,   350,   350,   351,   351,   352,
     352,   352,   352,   352,   352,   352,   352,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   354,
     355,   356,   356,   356,   356,   357,   357,   357,   357,   357,
     358,   358,   359,   359,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     362,   362,   362,   362,   362,   362,   362,   362,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   365,   365,   366,   367,   367,   368,   368,   369,   370,
     370,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   371,   371,   371,
     371,   371,   371,   371,   371,   371,   371,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   372,   372,   372,   372,   372,
     372,   372,   372,   372,   372,   373,   373,   373,   373,   373,
     373,   373,   373,   374,   374,   374,   374,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   376,   376,   376,
     376,   376,   376,   376,   376,   377,   377,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   378,   378,   378,   378,   378,
     378,   378,   378,   378,   378,   379,   379,   380,   381,   381,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     1,     1,
      11,    11,    10,    10,     1,     5,     5,     4,     4,     1,
       3,     1,     0,     2,     5,     5,     1,     3,     5,     4,
       3,     5,     4,     3,     5,     4,     3,     5,     4,     3,
       1,     1,     1,     3,     3,     4,     5,     0,     4,     1,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     3,     3,     3,     3,
       2,     2,     1,     3,     2,     2,     1,     2,     1,     1,
       9,     4,     4,     4,     0,     2,     0,     2,     4,     3,
       5,     1,     3,     1,     1,     3,     0,     2,     0,     2,
       0,     2,     0,     3,     0,     1,     3,     4,     3,     3,
       8,     8,     8,     8,     8,     8,     8,     8,     1,     3,
       2,     0,     1,     1,     0,     2,     2,     1,     3,     4,
       0,     1,     3,     1,     3,     0,     1,     1,     1,     3,
       1,     2,     3,     1,     1,     3,     1,     1,     3,     5,
       4,     4,     3,     2,     4,     3,     2,     3,     2,     1,
       3,     2,     1,     6,     5,     4,     0,     3,     3,     4,
       4,     7,     1,     3,     2,     3,     5,     0,     4,     1,
       3,     2,     1,     2,     1,     1,     3,     0,     1,     1,
       3,     5,     4,     7,     6,     6,     5,     3,     6,     5,
       4,     4,     4,     5,     4,     3,     5,     4,     3,     7,
       7,     3,     3,     3,     2,     0,     1,     1,     1,     1,
       0,     1,     1,     3,     1,     3,     3,     5,     5,     7,
       7,     6,     6,     9,     9,     8,     8,     8,     8,     7,
       7,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     3,     1,     1,     1,     2,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       3,     4,     3,     4,     3,     4,     5,     6,     3,     4,
       3,     1,     3,     5,     0,     1,     1,     2,     4,     0,
       2,     1,     1,     1,     1,     4,     6,     6,     8,     4,
       4,     1,     1,     8,     8,     6,     6,     3,     3,     8,
       4,     1,     6,    10,     1,     1,     6,     5,     4,     6,
       5,     5,     4,     6,     5,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     6,     5,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     5,     4,     6,     5,     5,
       4,     4,     5,     4,     4,     5,     5,     5,     7,     9,
       5,     7,     9,     4,     4,     4,     5,     9,     8,     7,
       6,     5,     3,     3,     3,     3,     3,    10,     9,     8,
       7,     6,     4,     4,     4,     4,     4,     8,     5,     7,
       7,     6,     4,     4,     3,     2,     2,     2,     2,     2,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     1,     1,     1,     1,     1,
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
#line 3252 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3258 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3264 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3270 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3276 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3282 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3288 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3294 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TEMP_VARIABLE  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3300 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 296: /* sql_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3306 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* stmt_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3312 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3318 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* dml_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3324 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* update_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3330 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* opt_update_where  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3336 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* update_elem_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3342 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* update_elem  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3348 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* opt_output_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3354 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* dml_select_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3360 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* dml_select_item  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3366 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* select_stmt  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3372 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* select_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3378 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 309: /* select_no_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3384 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* opt_option_query_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3390 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* query_hint_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3396 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 312: /* query_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3402 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 313: /* select_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3408 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* simple_select  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3414 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* opt_into_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3420 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 316: /* opt_top  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3426 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 317: /* top_count  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3432 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 318: /* top_percent  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3438 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 319: /* opt_for_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3444 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 320: /* opt_where  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3450 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 321: /* opt_from_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3456 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 322: /* opt_groupby  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3462 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 323: /* opt_order_by  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3468 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 324: /* order_by  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3474 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 325: /* offset_fetch  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3480 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 326: /* sort_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3486 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 327: /* sort_key  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3492 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 328: /* opt_asc_desc  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3498 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 329: /* opt_having  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3504 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 330: /* with_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3510 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 331: /* with_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3516 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 332: /* common_table_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3522 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 333: /* opt_derived_column_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3528 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 334: /* simple_ident_list_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3534 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 335: /* simple_ident_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3540 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 336: /* opt_distinct  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3546 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 337: /* select_expr_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3552 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 338: /* projection  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3558 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 339: /* from_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3564 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 340: /* table_factor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3570 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 341: /* table_factor_non_join  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3576 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 342: /* opt_for_system_time  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3582 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 343: /* system_time  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3588 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 344: /* table_value_constructor_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3594 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 345: /* table_value_constructor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3600 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 346: /* row_value_expression_list_parens_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3606 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 347: /* opt_with_table_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3612 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 348: /* table_hint_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3618 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 349: /* table_hint  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3624 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 350: /* table_hint_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3630 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 351: /* opt_simple_ident_list_with_parens  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3636 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 352: /* relation_factor  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3642 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 353: /* joined_table  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3648 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 354: /* pivot_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3654 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 355: /* unpivot_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3660 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 356: /* join_type  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3666 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 359: /* expr_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3672 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 360: /* column_ref  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3678 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 361: /* expr_const  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3684 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 362: /* simple_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3690 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 363: /* arith_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3696 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 364: /* expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3702 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 365: /* in_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3708 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 366: /* case_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3714 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 367: /* case_arg  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3720 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 368: /* when_clause_list  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3726 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 369: /* when_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3732 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 370: /* case_default  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3738 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 371: /* func_expr  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3744 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 372: /* aggregate_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3750 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 373: /* analytic_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3756 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 374: /* ranking_windowed_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3762 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 375: /* scalar_function  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3768 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 376: /* over_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3774 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 377: /* row_or_range_clause  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3780 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 378: /* window_frame_extent  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3786 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 379: /* distinct_or_all  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3792 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 380: /* relation_name  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3798 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 381: /* column_label  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3804 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 382: /* data_type  */
#line 95 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3810 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 3927 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 227 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 4121 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 238 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 4130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 249 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4136 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 290 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_update_item((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "update element format error");
    	YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 4149 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 301 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4155 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 336 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4164 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 341 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4173 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 349 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 4184 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 356 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 4196 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 367 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4202 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 369 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPTION_CLAUSE, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
#line 4211 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 378 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4220 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 386 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH GROUP"); }
#line 4226 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 387 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ORDER GROUP"); }
#line 4232 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 388 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("CONCAT UNION"); }
#line 4238 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 389 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH UNION"); }
#line 4244 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 390 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE UNION"); }
#line 4250 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 391 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("LOOP JOIN"); }
#line 4256 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 392 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE JOIN"); }
#line 4262 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 393 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH JOIN"); }
#line 4268 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 394 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("EXPAND VIEWS"); }
#line 4274 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 395 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FAST", (yyvsp[0].node)); }
#line 4280 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 396 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE ORDER"); }
#line 4286 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 397 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
#line 4292 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 398 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
#line 4298 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 399 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 4304 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 400 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 4310 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 401 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 402 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4322 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 403 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4328 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 404 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4334 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 405 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXDOP", (yyvsp[0].node)); }
#line 4340 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 406 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXRECURSION", (yyvsp[0].node)); }
#line 4346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 407 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
#line 4352 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 408 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("OPTIMIZE FOR", (yyvsp[0].node)); }
#line 4358 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 409 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
#line 4364 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 410 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION FORCED"); }
#line 4370 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 411 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("RECOMPILE"); }
#line 4376 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 412 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ROBUST PLAN"); }
#line 4382 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 423 "sqlparser.y" /* yacc.c:1646  */
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
#line 4411 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 448 "sqlparser.y" /* yacc.c:1646  */
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
#line 4441 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 474 "sqlparser.y" /* yacc.c:1646  */
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
#line 4471 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 500 "sqlparser.y" /* yacc.c:1646  */
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
#line 4501 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 528 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4507 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 530 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INTO_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &INTO_CLAUSE_SERIALIZE_FORMAT;
}
#line 4516 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 538 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4522 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 540 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 4531 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 545 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 4540 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 550 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 4549 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 555 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 4558 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 564 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4567 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 574 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4576 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 582 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4582 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 584 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_CLAUSE, 1, nullptr);
    (yyval.node)->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
#line 4591 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 591 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4597 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 593 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4606 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 600 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4612 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 602 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4621 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 609 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4627 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 611 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4636 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 618 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4642 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 624 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4651 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 629 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4660 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 638 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
#line 4669 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 643 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
#line 4678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 648 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
#line 4687 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 653 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
#line 4696 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 658 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
#line 4705 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 663 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
#line 4714 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 668 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
#line 4723 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 673 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
#line 4732 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 678 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
#line 4741 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 683 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, 2, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
#line 4750 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 692 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 4759 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 700 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4768 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 708 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4776 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 712 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4784 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 716 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4792 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 722 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4798 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 724 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4807 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 732 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4816 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 741 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4825 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 749 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4834 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 756 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4840 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 762 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4849 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 771 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4858 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 778 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4864 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 780 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4872 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 784 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4880 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 792 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4889 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 800 "sqlparser.y" /* yacc.c:1646  */
    {
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias((yyvsp[0].node));
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, nd);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4900 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 807 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4912 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 815 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4924 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 823 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4934 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 833 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4943 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 847 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 4952 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 852 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4961 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 857 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 5, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 4970 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 862 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4979 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 867 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4988 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 872 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4997 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 877 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5006 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 882 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5015 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 887 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5024 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 892 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5033 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 897 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5042 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 902 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5051 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 907 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5060 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 912 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5069 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 917 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5078 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 922 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-5].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5089 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 929 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-2].node), (yyvsp[-4].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 936 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, 2, (yyvsp[-1].node), (yyvsp[-3].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 4, nd, nullptr, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5111 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 945 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5117 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 947 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_SYSTEM_TIME, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FOR_SYSTEM_TIME_SERIALIZE_FORMAT;
}
#line 5126 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 955 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "AS OF "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5135 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 960 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FROM "+(yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));
    delete((yyvsp[0].node));
}
#line 5145 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 966 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));
    delete((yyvsp[0].node));
}
#line 5155 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 972 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CONTAINED IN("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));
    delete((yyvsp[-1].node));
}
#line 5165 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 978 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "ALL"); }
#line 5171 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 983 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5180 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 991 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 5189 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 999 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1004 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, 1, (yyvsp[-3].node));
    nd->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS_LIST, 2, nd, (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5209 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1013 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5215 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1015 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
#line 5224 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1024 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 5233 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1029 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 5242 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1039 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 5255 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1048 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[-1]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
#line 5269 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1063 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 5278 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1070 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5284 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1077 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5293 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1082 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 5302 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1087 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5311 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1092 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5320 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1097 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5329 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1102 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5338 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1107 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5347 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1112 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, 4, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5356 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1120 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5365 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1125 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5374 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1130 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5384 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1136 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 5394 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1142 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 5404 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1148 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "OUTER");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 5414 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1154 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5423 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1159 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5432 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1164 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, 3, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5441 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1169 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5450 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1174 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5459 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1179 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, 3, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5468 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1187 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_CLAUSE, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5477 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1195 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_CLAUSE, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5486 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1203 "sqlparser.y" /* yacc.c:1646  */
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
#line 5501 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1214 "sqlparser.y" /* yacc.c:1646  */
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
#line 5516 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1225 "sqlparser.y" /* yacc.c:1646  */
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
#line 5531 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1236 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 5539 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1242 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5545 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1243 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 5551 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1244 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 5557 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1245 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 3; }
#line 5563 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1246 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 4; }
#line 5569 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1250 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5575 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1251 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5581 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1258 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5590 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1266 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5599 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1271 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5608 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1276 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nd, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 5618 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1282 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5627 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1287 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 3, nd, (yyvsp[-2].node), (yyvsp[-4].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 5637 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1293 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5646 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1298 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5656 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1304 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5665 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1309 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 4, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5675 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1315 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1320 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5694 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1326 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5703 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1331 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5713 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1337 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5722 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1342 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5732 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1348 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5741 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1353 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 5, nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5751 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1367 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5757 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1368 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 5763 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1369 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 5769 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1377 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5779 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1386 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 5788 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1396 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 5797 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1401 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 5806 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1406 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 5815 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1411 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 5824 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1416 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 5833 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1421 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 5842 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1426 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 5851 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1431 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 5860 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1436 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 5869 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1446 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_COLLATE_SERIALIZE_FORMAT;
}
#line 5878 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1451 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 5887 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1456 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 5896 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1461 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 5905 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1466 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 5914 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1471 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 5923 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1476 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 5932 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1481 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 5941 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1486 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 5950 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1491 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 5959 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1496 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 5968 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1501 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_ADD_SERIALIZE_FORMAT;
}
#line 5977 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1506 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_MINUS_SERIALIZE_FORMAT;
}
#line 5986 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1511 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_MUL_SERIALIZE_FORMAT;
}
#line 5995 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1516 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_DIV_SERIALIZE_FORMAT;
}
#line 6004 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1521 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_REM_SERIALIZE_FORMAT;
}
#line 6013 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1526 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_AND_SERIALIZE_FORMAT;
}
#line 6022 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1531 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_OR_SERIALIZE_FORMAT;
}
#line 6031 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1536 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_XOR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_XOR_SERIALIZE_FORMAT;
}
#line 6040 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1541 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 6049 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1546 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6058 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1551 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6067 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1556 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6076 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1561 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6085 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1566 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6094 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1571 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6103 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1576 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 6112 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1581 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 6121 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1586 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 6130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1591 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 6139 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1596 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 6148 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1605 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 6157 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1613 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 6166 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1620 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6172 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1627 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6181 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1635 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 6190 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1642 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6196 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1644 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 6205 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1657 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6216 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1664 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 5, fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 6226 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1670 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6238 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1678 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6252 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1688 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6263 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1695 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6273 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1701 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6283 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1707 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6293 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1713 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEADD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6307 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1723 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEDIFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6321 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1733 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATENAME");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6333 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1741 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEPART");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6345 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1749 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6355 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1755 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETUTCDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6365 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1761 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6379 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1771 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6389 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1777 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN_ACTIVE_ROWVERSION");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6399 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1783 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6411 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1791 "sqlparser.y" /* yacc.c:1646  */
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
#line 6427 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1803 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6437 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1809 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6447 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1815 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ISNULL");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6459 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1826 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6469 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1832 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6479 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1838 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6489 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1844 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6499 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1850 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6509 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1856 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6519 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1862 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6529 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1868 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6539 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1874 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6549 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1880 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1886 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6569 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1892 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6579 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1898 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6589 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1904 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6599 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1910 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6609 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1916 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6619 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1922 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6629 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1928 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6639 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1934 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6649 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1940 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6659 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1946 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6669 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1952 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6679 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1958 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6689 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1964 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6699 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1970 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6709 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1976 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6719 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1982 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6729 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1988 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6739 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1994 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6749 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2000 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6759 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2006 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6769 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2012 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6779 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2018 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6789 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2024 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6799 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2030 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6809 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2036 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6819 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2042 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6830 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2049 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6841 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2056 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6851 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2062 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6861 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2068 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6871 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2074 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6881 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2080 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6892 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2087 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, star, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6903 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2094 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6913 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2100 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 4, fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 6923 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2106 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6933 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2112 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING_ID");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6943 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2121 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "FIRST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6953 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2127 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6963 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2133 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6973 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2139 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6985 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2147 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6999 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2157 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7009 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2163 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7021 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2171 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, expr_list, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7035 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2183 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7045 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2189 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7055 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2195 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7065 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2201 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NTILE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, fun_name, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7075 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2210 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7086 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2217 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7097 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2224 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7108 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2231 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7119 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2238 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2245 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7139 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2250 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7149 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2256 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7159 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2262 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7169 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2268 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, fun_name);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7179 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2274 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7190 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2281 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7201 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2288 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7212 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2295 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7223 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2302 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, 4, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2309 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7243 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2314 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7253 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2320 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7263 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2326 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7273 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2332 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, fun_name, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7283 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2340 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7292 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2345 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7301 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2350 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7310 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2355 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7319 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2360 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7328 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2365 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7337 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2370 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2375 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, 3, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7355 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2383 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, 2, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 7365 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2389 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, 2, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 7375 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2398 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 7381 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2400 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 7387 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2402 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 7393 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2404 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 7399 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2406 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 7405 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2408 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 7411 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2410 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 7417 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2412 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 7423 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2414 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 7429 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2416 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7435 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2418 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 7441 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2420 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 7447 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2422 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7453 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2424 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 7459 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2426 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 7465 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2428 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 7471 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2430 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 7477 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2432 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 7483 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2434 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 7489 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2436 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 7495 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2438 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 7501 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2440 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 7507 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2442 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 7513 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2444 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 7519 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2446 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7525 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2448 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 7531 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2450 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 7537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2452 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 7543 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2456 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 7551 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2460 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 7559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2478 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIGINT"); }
#line 7565 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2480 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "INT"); }
#line 7571 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2482 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLINT"); }
#line 7577 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 2484 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TINYINT"); }
#line 7583 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 2486 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-3].node)); delete((yyvsp[-1].node)); }
#line 7589 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 2488 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7595 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 2490 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL"); }
#line 7601 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 467:
#line 2492 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-3].node)); delete((yyvsp[-1].node)); }
#line 7607 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 2494 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7613 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 2496 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC"); }
#line 7619 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2498 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIT"); }
#line 7625 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2500 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "MONEY"); }
#line 7631 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 2502 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLMONEY"); }
#line 7637 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 2504 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "REAL"); }
#line 7643 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 2506 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "FLOAT("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7649 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 2508 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATE"); }
#line 7655 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 2510 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7661 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 2512 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET"); }
#line 7667 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 2514 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7673 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 2516 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2"); }
#line 7679 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 2518 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLDATETIME"); }
#line 7685 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 2520 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME"); }
#line 7691 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 2522 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7697 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 2524 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME"); }
#line 7703 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 2526 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7709 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 2528 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR"); }
#line 7715 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 2530 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7721 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 2532 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR(MAX)"); }
#line 7727 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 2534 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR"); }
#line 7733 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 2536 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TEXT"); }
#line 7739 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 2538 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7745 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 2540 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR"); }
#line 7751 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 2542 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7757 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 2544 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR(MAX)"); }
#line 7763 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 2546 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR"); }
#line 7769 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 2548 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7775 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 2550 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY"); }
#line 7781 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 2552 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 7787 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 2554 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY(MAX)"); }
#line 7793 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 2556 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY"); }
#line 7799 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 7803 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2559 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
