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
#line 1 "./sqlparser.y" /* yacc.c:339  */

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
//#include <strings.h>

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
#line 41 "./sqlparser.y" /* yacc.c:355  */

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
    VALUES = 436,
    VARCHAR = 437,
    VARBINARY = 438,
    WHERE = 439,
    WHEN = 440,
    WORK = 441,
    PROCESSLIST = 442,
    QUERY = 443,
    CONNECTION = 444,
    WEAK = 445,
    LOOP = 446,
    HASH = 447,
    MERGE = 448,
    REMOTE = 449,
    CONCAT = 450,
    OPTIMIZE = 451,
    EXPAND = 452,
    VIEWS = 453,
    FAST = 454,
    DISABLE = 455,
    EXTERNALPUSHDOWN = 456,
    IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX = 457,
    KEEP = 458,
    PLAN = 459,
    KEEPFIXED = 460,
    MAX_GRANT_PERCENT = 461,
    MIN_GRANT_PERCENT = 462,
    MAXDOP = 463,
    MAXRECURSION = 464,
    NO_PERFORMANCE_SPOOL = 465,
    PARAMETERIZATION = 466,
    SIMPLE = 467,
    FORCED = 468,
    RECOMPILE = 469,
    ROBUST = 470,
    CHECKSUM = 471,
    BINARY_CHECKSUM = 472,
    RANK = 473,
    DENSE_RANK = 474,
    ROW_NUMBER = 475,
    NTILE = 476,
    PARTITION = 477,
    RANGE = 478,
    UNBOUNDED = 479,
    PRECEDING = 480,
    CURRENT = 481,
    FOLLOWING = 482,
    OVER = 483,
    VARP = 484,
    VAR = 485,
    SUM = 486,
    STDEVP = 487,
    STDEV = 488,
    MIN = 489,
    MAX = 490,
    LEAD = 491,
    LAST_VALUE = 492,
    LAG = 493,
    GROUPING_ID = 494,
    GROUPING = 495,
    FIRST_VALUE = 496,
    COUNT_BIG = 497,
    COUNT = 498,
    CHECKSUM_AGG = 499,
    AVG = 500,
    SYSTEM_USER = 501,
    STUFF = 502,
    SESSION_USER = 503,
    NULLIF = 504,
    MIN_ACTIVE_ROWVERSION = 505,
    ISNULL = 506,
    IDENTITY = 507,
    GETUTCDATE = 508,
    GETDATE = 509,
    DATEPART = 510,
    DATENAME = 511,
    DATEDIFF = 512,
    DATEADD = 513,
    CURRENT_TIMESTAMP = 514,
    CONVERT = 515,
    COALESCE = 516,
    CAST = 517,
    BIT = 518,
    CHAR = 519,
    DATETIME2 = 520,
    DATETIMEOFFSET = 521,
    INT = 522,
    MONEY = 523,
    NCHAR = 524,
    NVARCHAR = 525,
    SMALLDATETIME = 526,
    SMALLMONEY = 527,
    TEXT = 528,
    APPLY = 529,
    SYSTEM_TIME = 530,
    OF = 531,
    CONTAINED = 532,
    OUTPUT = 533,
    DELETED = 534,
    INSERTED = 535,
    DOLLAR_ACTION = 536,
    SOME = 537,
    USE = 538
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 86 "./sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 438 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 468 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6483

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  296
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  92
/* YYNRULES -- Number of rules.  */
#define YYNRULES  510
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  1157

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   538

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,   295,    56,     2,     2,
      61,    62,    54,    52,   294,    53,    63,    55,     2,     2,
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
     285,   286,   287,   288,   289,   290,   291,   292,   293
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   231,   231,   241,   242,   254,   255,   256,   257,   258,
     262,   263,   264,   268,   272,   280,   294,   308,   322,   336,
     350,   364,   378,   396,   412,   434,   450,   475,   476,   481,
     486,   491,   499,   500,   508,   522,   523,   528,   533,   541,
     542,   550,   555,   560,   569,   573,   578,   586,   593,   605,
     606,   614,   615,   624,   625,   626,   627,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     654,   655,   659,   685,   711,   737,   766,   767,   776,   777,
     782,   787,   792,   800,   801,   809,   810,   811,   820,   821,
     829,   830,   838,   839,   847,   848,   856,   857,   861,   866,
     875,   880,   885,   890,   895,   900,   905,   910,   915,   920,
     928,   929,   937,   946,   949,   953,   960,   961,   969,   977,
     978,   986,   994,   995,   999,  1007,  1008,  1016,  1017,  1021,
    1028,  1029,  1037,  1044,  1052,  1060,  1069,  1070,  1078,  1079,
    1084,  1089,  1094,  1099,  1104,  1109,  1114,  1119,  1124,  1129,
    1134,  1139,  1144,  1149,  1154,  1159,  1166,  1173,  1183,  1184,
    1192,  1197,  1203,  1209,  1215,  1220,  1228,  1236,  1241,  1251,
    1252,  1260,  1261,  1266,  1276,  1285,  1298,  1299,  1300,  1308,
    1309,  1314,  1319,  1324,  1329,  1334,  1339,  1344,  1349,  1357,
    1362,  1367,  1373,  1379,  1385,  1391,  1396,  1401,  1406,  1411,
    1416,  1424,  1432,  1440,  1451,  1462,  1473,  1480,  1481,  1482,
    1483,  1484,  1488,  1489,  1494,  1495,  1503,  1509,  1515,  1522,
    1528,  1535,  1541,  1548,  1554,  1561,  1567,  1574,  1580,  1587,
    1593,  1600,  1606,  1616,  1617,  1618,  1619,  1620,  1621,  1622,
    1623,  1624,  1628,  1629,  1630,  1631,  1637,  1638,  1639,  1640,
    1649,  1650,  1655,  1660,  1665,  1670,  1675,  1680,  1685,  1690,
    1698,  1699,  1700,  1705,  1710,  1735,  1740,  1765,  1770,  1795,
    1800,  1825,  1830,  1855,  1860,  1885,  1890,  1895,  1900,  1905,
    1910,  1915,  1920,  1925,  1930,  1935,  1940,  1945,  1950,  1955,
    1960,  1965,  1970,  1975,  1980,  1985,  1990,  1995,  2000,  2008,
    2009,  2017,  2025,  2026,  2030,  2031,  2039,  2047,  2048,  2057,
    2058,  2059,  2060,  2061,  2069,  2076,  2085,  2096,  2104,  2111,
    2118,  2125,  2136,  2147,  2156,  2165,  2172,  2179,  2190,  2197,
    2204,  2213,  2226,  2233,  2240,  2252,  2259,  2266,  2273,  2280,
    2287,  2294,  2301,  2308,  2315,  2322,  2329,  2336,  2343,  2350,
    2357,  2364,  2371,  2378,  2385,  2392,  2399,  2406,  2413,  2420,
    2427,  2434,  2441,  2448,  2455,  2462,  2469,  2476,  2483,  2490,
    2497,  2504,  2512,  2520,  2527,  2534,  2541,  2548,  2556,  2564,
    2571,  2578,  2585,  2595,  2602,  2609,  2616,  2625,  2636,  2643,
    2652,  2665,  2672,  2679,  2686,  2696,  2704,  2712,  2720,  2728,
    2736,  2742,  2749,  2756,  2763,  2770,  2778,  2786,  2794,  2802,
    2810,  2816,  2823,  2830,  2837,  2846,  2851,  2856,  2861,  2866,
    2871,  2876,  2881,  2889,  2895,  2904,  2906,  2908,  2910,  2912,
    2914,  2916,  2918,  2920,  2922,  2924,  2926,  2928,  2930,  2932,
    2934,  2936,  2938,  2940,  2942,  2944,  2946,  2948,  2950,  2952,
    2954,  2956,  2958,  2962,  2966,  2974,  2978,  2979,  2984,  2986,
    2988,  2990,  2992,  2994,  2996,  2998,  3000,  3002,  3004,  3006,
    3008,  3010,  3012,  3014,  3016,  3018,  3020,  3022,  3024,  3026,
    3028,  3030,  3032,  3034,  3036,  3038,  3040,  3042,  3044,  3046,
    3048,  3050,  3052,  3054,  3056,  3058,  3060,  3062,  3067,  3068,
    3069
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
  "VALUES", "VARCHAR", "VARBINARY", "WHERE", "WHEN", "WORK", "PROCESSLIST",
  "QUERY", "CONNECTION", "WEAK", "LOOP", "HASH", "MERGE", "REMOTE",
  "CONCAT", "OPTIMIZE", "EXPAND", "VIEWS", "FAST", "DISABLE",
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
  "OUTPUT", "DELETED", "INSERTED", "DOLLAR_ACTION", "SOME", "USE", "','",
  "'$'", "$accept", "sql_stmt", "stmt_list", "stmt", "dml_stmt",
  "another_stmt", "use_stmt", "delete_stmt", "update_stmt",
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
  "relation_name", "column_label", "data_type", "all_some_any", YY_NULLPTR
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
     535,   536,   537,   538,    44,    36
};
# endif

#define YYPACT_NINF -760

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-760)))

#define YYTABLE_NINF -98

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     122,   130,   -30,  -760,   -98,    77,   -98,   133,    51,   -58,
     122,   161,   167,  -760,  -760,  -760,  -760,  -760,  -760,    99,
    -760,   254,   222,  -760,  -145,   232,   241,   -36,   124,    96,
    -760,  -760,   -98,   121,  -760,  -760,  -760,  -760,  -760,  -760,
      77,    77,    77,   259,   266,  -760,   -98,   -98,    99,   350,
     289,  -760,   130,  -760,  -760,   233,  -760,  3301,   330,   260,
     351,   132,   326,   371,  2062,   371,   371,   -36,   -36,   -36,
    3301,   359,   303,   112,   362,   266,   196,   442,   454,  -760,
     320,  -760,  -760,  -760,  -760,  -760,  -760,  -760,   461,   466,
    3301,  3364,  3364,  1399,  3301,  -760,  -760,   454,   478,   489,
     504,   524,   527,   530,   531,   540,   544,   559,   563,   570,
     571,   588,   595,   601,   605,   620,   648,   651,   652,   656,
     664,   671,  -760,   674,  -760,   680,  -760,   685,   688,   689,
     690,   693,   694,   696,   697,  -760,   699,   700,   701,   449,
    -760,  -760,  -760,  -760,   589,  4952,  -760,  -760,  -760,  -760,
    -760,  -760,  -760,   315,   561,    25,   716,   446,   132,   371,
     702,   132,  -760,   637,   477,  4830,   599,   619,   759,   759,
    -760,   649,   494,  4740,  -760,   729,  -760,   132,   416,   371,
     371,   371,   303,   350,  -760,  -760,  2122,    83,  2185,  2455,
     773,   463,   463,   317,   730,  3781,  6432,   598,  -760,  1669,
    1729,   732,   734,   735,  3301,   190,  1792,  1792,  1792,  1792,
    1792,  1792,  1792,  3301,  3301,  3301,  3301,  3301,  3301,   989,
    1059,  1792,  1792,  3301,  3301,  3301,   560,   737,   738,   798,
     799,   800,   801,   560,  3301,  3301,  -760,  -760,  3364,  3364,
    3364,  3364,  3364,  3364,  3364,   803,  3301,  3301,  3301,  3301,
    3301,  3301,  3301,  3301,  3301,  3301,   413,  1329,  1329,  1329,
    1329,  1329,  1329,  3301,  3301,  3364,   746,   462,   663,  -760,
     628,   748,   109,   763,   764,   681,   535,  -760,  4084,   638,
     446,   132,  4131,   446,   828,   446,  2062,  -760,  -760,   469,
    -760,  3301,  3301,  3301,  -760,  3301,  -760,  -760,  -760,   916,
     446,   132,   371,   132,   678,   679,  -760,  -760,  -760,   782,
     435,  -760,   271,  -760,   787,  -760,   788,  -760,  3301,  3301,
     747,   598,   790,  -760,   794,   802,  -760,   811,   623,   623,
     623,  4992,  -760,    12,   785,    12,    17,   813,  -760,  -760,
    5032,  3301,  5072,  3301,  5112,  3301,  5152,  3301,  5192,  3301,
    5232,  3301,  5272,  3301,   879,  5312,  1146,   816,  5352,  5392,
     821,  5432,  3301,   822,  5472,  3301,  5512,  3301,  5552,  3301,
    3821,  3861,  3901,  -760,   824,  -760,  -760,   826,   827,   829,
    -760,  -760,   831,  -760,   832,   833,  -760,   834,   835,   836,
    -760,  -760,   837,   838,  -760,  -760,  -760,   -33,  -760,  -760,
     569,   606,   610,   639,   640,   840,  4871,   463,   463,   845,
     845,   845,   845,  -760,  -760,  1232,  1232,  1232,  1232,  1232,
    1232,  1232,  1232,   973,   773,  3301,  3364,   746,  -760,  -760,
    -760,   521,   454,   521,   454,   521,   454,   521,   454,   521,
     454,   521,   454,   458,   436,   499,  1399,  -760,  -760,  -760,
    -760,  -760,   441,  -760,   304,   868,   886,  2062,  2062,   418,
     716,   440,    38,  4037,   119,  -760,    58,  -760,   269,   867,
    -760,   100,  2515,   303,  -760,   638,   446,   332,  4182,   873,
    3436,  -760,  -760,   638,  -760,   742,  -760,  -760,   132,   643,
    6432,   132,  4530,  -760,  -106,   818,   922,    68,    28,   914,
     883,   741,   945,  -760,   775,   776,   908,   909,   986,   993,
    -760,   216,  -760,   789,   939,   710,   638,   446,   132,   446,
    3301,  3301,  -760,  2578,   251,   465,  1005,  -760,  -760,  -760,
    4490,  3301,   905,  -760,  -760,  -760,  -760,  -760,  -760,  -760,
    -760,   623,   791,    45,   792,   870,  -760,  3301,  -760,  -760,
     963,  -760,   623,  5592,   623,  5632,   623,  5672,   623,  5712,
     623,  5752,   623,  5792,   623,  5832,   623,  3301,   623,   623,
    3301,  -760,  -760,   623,   623,   623,  5872,   623,   623,  5912,
    -760,  5952,   623,  5992,  1025,  3301,  3301,  1026,  1028,  1029,
    1030,  1031,    11,    13,  1032,  1033,  1034,  1035,    22,  -760,
    1039,  3301,  3301,  3301,  3301,  3301,  -760,   560,   436,   525,
    -760,  -760,  -760,  -760,  -760,  -760,  -760,  3364,   983,  -760,
    -760,  -760,   984,  1043,  1045,  -760,  -760,  -760,   222,   222,
    -760,   307,  -760,  4229,  1046,  -760,   990,   497,   579,   991,
     992,  1046,  -760,  -760,   222,    -8,  1036,   407,  4084,  1036,
    1036,   768,   994,   995,  4084,  1044,  1046,  -760,   222,   786,
      32,  1046,  -760,   774,  6432,  -760,   303,   638,  3301,   324,
    -760,  -760,  4131,  -760,   303,  3301,   952,   446,  3301,   446,
     962,   964,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,
    -760,  -760,  3301,  -760,  -760,  -760,  -760,   472,   537,  -760,
    -760,  -760,  -760,  -760,  -760,   916,   303,   638,   446,   638,
     132,   132,  -760,  1012,   500,  -760,  1073,  2848,    44,  1017,
    3301,  6432,  -760,  -760,  -760,   349,   400,   923,  -760,  -760,
      85,  -760,  -760,   623,  -760,   623,  -760,   623,  -760,   623,
    -760,   623,  -760,   623,  -760,   623,  -760,  1479,  -760,  -760,
    3701,  -760,  -760,  -760,   623,  -760,  -760,   623,  -760,  -760,
     623,   793,  6032,  6072,  1020,   -23,  1021,   -16,  1022,  1024,
    1038,  1040,  1047,  1048,  1052,  1053,  1054,  1062,  1064,   796,
    6112,  6152,  3941,  3981,  3741,  1068,  3364,   589,  -760,  1085,
    -760,  -760,  -760,  -760,   512,   325,   587,   293,  -760,  3301,
    -760,  -760,  -760,   222,  -760,  4084,  4084,  -760,   407,  -760,
    -760,  -760,  -760,  -760,   677,   407,   407,  4084,   627,   103,
    3301,   172,  -760,  4084,   222,  -760,    46,  1046,  -760,   371,
    -760,    57,  -760,   303,  6432,   596,  1088,  -760,  -760,  1015,
     972,   638,  -760,   638,   -75,     1,  6432,  -760,  -760,  -760,
    -760,  -760,  -760,   303,   638,   303,   446,   446,  -760,  2908,
      87,   602,  -760,  1077,  1042,  -760,   127,  6432,  1055,  1056,
    1057,  1058,  1067,  -760,    59,  1080,  -760,  -760,  -760,  -760,
    -760,  -760,  -760,   623,  3301,   623,  3301,  -760,  -760,  -760,
    1096,  -760,  -760,  -760,  -760,  1102,  -760,  -760,  1103,  -760,
    -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,
    1138,  -760,  -760,  3301,  3301,  -760,  3301,  -760,   589,  -760,
     335,   608,  1046,  -760,   222,  1082,  -760,  -760,  -760,  -760,
    3301,  -760,  -760,  -760,  1081,  1046,  -760,  4912,  1046,  -760,
     758,  -760,  1141,  -760,   861,  1145,  1100,  -760,   371,  -760,
    -760,  -760,   422,  -760,   343,  1090,  3301,  3301,  -760,   303,
     303,  3301,  3301,  3301,  3301,  -760,   303,  -760,   638,   638,
    -760,  1091,   609,  -760,  2971,   338,  -760,   355,  -760,  -760,
      54,    65,    48,    66,    88,  -760,  1092,  -760,  -760,  6192,
    -760,  6232,   858,  1094,  1095,  1098,  6272,  6312,  6352,   613,
    1158,   222,  -760,   869,  6432,  1159,  -760,  1159,  -760,  3301,
    1125,  1161,   978,  1106,  -760,  -760,  -760,   614,  1166,  -760,
    6432,  -760,  -760,  4570,  4610,  4660,  4700,  -760,   303,   303,
    -760,  3241,   357,  -760,  1108,  -760,  -760,  -760,  -760,   447,
     451,  1013,   473,   481,  1014,   940,   937,   493,  1041,   496,
     502,  1049,   503,   507,  1051,  -760,   623,   623,  3301,  -760,
    -760,  -760,  -760,  -760,  -760,  1195,  1139,  -760,   990,  1140,
    1151,  1152,  6432,  1200,  -760,  1201,  1202,  1207,  1139,  1070,
    1071,  1072,  1083,  1084,  1150,  1153,  1154,  -760,  -760,  -760,
    1160,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,
    -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,
    -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,
    -760,  6392,  1162,  -760,   272,   222,   222,  -760,  -760,   920,
    1162,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,  -760,
    -760,  1163,   345,  1230,  1231,  1217,   301,  1233,  -760,  -760,
    1276,  1278,  1339,  -760,   358,  1280,  1281
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     5,    88,   137,    88,     0,     0,     0,
       3,     7,     9,    13,    12,    11,    10,    81,    44,   106,
      80,     0,   132,   128,   129,    81,     0,     0,     0,     0,
     138,   139,    88,     0,    14,     1,     2,     4,     6,     8,
     137,   137,   137,     0,    98,   107,    88,    88,   106,     0,
       0,   133,     0,    46,    45,    93,    95,     0,    89,     0,
     191,    35,     0,   179,     0,   179,   179,     0,     0,     0,
       0,     0,    49,     0,     0,    98,   135,     0,     0,   130,
     226,   243,   244,   246,   245,   247,   248,   253,     0,     0,
       0,     0,     0,     0,   312,   330,   249,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   343,     0,   342,     0,   339,     0,     0,     0,
       0,     0,     0,     0,     0,   329,     0,     0,     0,     0,
     258,   252,   254,   260,   270,     0,   256,   257,   321,   322,
     320,   319,   271,     0,    91,     0,     0,   102,    35,   179,
       0,    35,   145,    86,   140,   142,     0,     0,    83,    85,
      84,   108,   120,   123,    99,     0,    47,    35,     0,   179,
     179,   179,    49,     0,   134,   131,     0,     0,     0,     0,
     297,   261,   262,   258,     0,   224,   313,     0,   259,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   250,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,    90,
       0,   192,     0,     0,     0,    36,    39,    43,     0,   100,
     102,    35,     0,   102,     0,   102,     0,   466,   467,     0,
     143,     0,     0,     0,   109,     0,   124,   125,   122,     0,
     102,    35,   179,    35,     0,     0,    48,   136,   410,     0,
     227,   228,     0,   412,     0,   411,     0,   255,     0,     0,
     317,   314,     0,   414,     0,     0,   413,     0,     0,     0,
       0,     0,   432,     0,     0,     0,     0,     0,   463,   464,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   468,   504,   483,   489,   474,     0,   477,
     481,   470,   491,   471,   496,   507,   478,   493,   487,   485,
     469,   479,   499,   502,   488,   480,   497,     0,   336,   335,
       0,     0,     0,     0,     0,     0,     0,   263,   264,   265,
     266,   267,   269,   268,   272,   289,   290,   291,   292,   293,
     294,   295,   296,   288,   287,     0,     0,     0,   510,   508,
     509,   273,     0,   275,     0,   277,     0,   281,     0,   279,
       0,   283,     0,   308,   285,     0,     0,   309,   306,   300,
     298,   302,     0,    92,     0,   194,     0,     0,     0,     0,
       0,   191,   164,     0,   189,   103,   146,   148,   189,   168,
     149,   161,     0,    49,    27,   100,   102,   187,     0,     0,
     181,   184,   186,   100,    87,   100,   141,   144,    35,    32,
      34,    35,     0,   121,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    65,     0,     0,     0,     0,     0,     0,
      74,     0,    78,     0,     0,    51,   100,   102,    35,   102,
       0,     0,   420,     0,     0,     0,     0,   422,   421,   225,
       0,     0,     0,   315,   327,   424,   323,   423,   401,   402,
     403,     0,     0,     0,     0,     0,   433,     0,   434,   430,
       0,   431,   374,     0,   370,     0,   358,     0,   366,     0,
     362,     0,   354,     0,   350,     0,     0,     0,     0,     0,
       0,   392,   391,     0,   388,   384,     0,   382,   378,     0,
     389,     0,   346,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   338,
       0,     0,     0,     0,     0,     0,   328,     0,   286,     0,
     307,   274,   276,   278,   282,   280,   284,     0,     0,   301,
     299,   303,   193,     0,     0,   198,    41,    42,   132,   132,
      40,     0,   465,     0,     0,   163,     0,   189,     0,     0,
     149,     0,   190,   155,   189,     0,   222,   217,     0,   222,
     222,     0,     0,     0,     0,     0,     0,   158,   189,     0,
     179,     0,   160,     0,   101,    22,    49,   100,     0,     0,
     185,   180,     0,   183,    49,     0,   104,   102,     0,   102,
     110,   111,    63,    64,    54,    58,    60,    56,    53,    59,
      57,    55,     0,    61,    62,    66,    67,     0,     0,    72,
      73,    76,    77,    79,    50,     0,    49,   100,   102,   100,
      35,    35,   409,     0,   229,   230,     0,     0,     0,     0,
       0,   318,   311,   404,   436,     0,     0,     0,   435,   437,
       0,   426,   373,   376,   369,   372,   357,   360,   365,   368,
     361,   364,   353,   356,   349,   352,   398,     0,   394,   395,
       0,   393,   387,   383,   386,   381,   377,   380,   390,   345,
     348,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   304,   310,     0,
     197,   196,    38,    37,   192,     0,     0,   189,   162,     0,
     176,   175,   199,   189,   154,     0,     0,   223,   217,   218,
     219,   220,   221,   216,     0,   217,   217,     0,     0,   207,
       0,   210,   147,     0,   189,   157,     0,     0,   150,   179,
     159,     0,    18,    49,   188,     0,     0,   182,    21,     0,
     126,   100,    33,   100,     0,     0,    75,    69,    68,    71,
      70,    52,    20,    49,   100,    49,   102,   102,   419,     0,
       0,     0,   408,     0,   233,   234,     0,   316,     0,     0,
       0,     0,     0,   429,     0,     0,   375,   371,   359,   367,
     363,   355,   351,     0,     0,     0,     0,   385,   379,   347,
       0,   340,   344,   503,   473,     0,   482,   476,     0,   490,
     494,   495,   505,   506,   492,   486,   484,   498,   500,   501,
       0,   334,   333,     0,     0,   325,     0,   324,   305,   195,
       0,   194,     0,   167,   189,     0,   153,   202,   203,   213,
       0,   214,   215,   204,     0,     0,   206,     0,     0,   209,
       0,   156,     0,   174,     0,     0,     0,   169,   179,   152,
      30,    31,     0,    17,     0,     0,     0,     0,    82,    49,
      49,     0,     0,     0,     0,    16,    49,    19,   100,   100,
     407,     0,   231,   232,     0,     0,   418,     0,   241,   242,
       0,     0,     0,     0,     0,   428,     0,   427,   399,     0,
     396,     0,     0,     0,     0,     0,     0,     0,     0,   193,
       0,   189,   166,   177,   201,     0,   205,     0,   208,     0,
       0,     0,     0,     0,   151,    28,    29,     0,     0,   105,
     127,    26,    25,     0,     0,     0,     0,    15,    49,    49,
     417,     0,     0,   406,     0,   239,   240,   237,   238,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   425,     0,     0,     0,   472,
     475,   337,   332,   331,   326,     0,   197,   165,     0,   226,
       0,     0,   200,     0,   170,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    23,   405,
       0,   235,   236,   416,   444,   459,   439,   454,   449,   447,
     462,   442,   457,   452,   443,   458,   438,   453,   448,   446,
     461,   441,   456,   451,   445,   460,   440,   455,   450,   400,
     397,     0,   195,   178,     0,     0,     0,   172,   171,     0,
       0,   112,   114,   113,   115,   116,   118,   117,   119,   415,
     341,   227,     0,     0,     0,     0,     0,     0,   211,   212,
       0,   229,     0,   173,     0,     0,   231
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -760,  -760,  1335,  -760,  -760,  -760,  -760,  -760,  -760,  -254,
    -287,  -760,   -81,   888,  -760,  -760,    42,   356,  -175,   641,
    -760,   373,  -760,  -760,   411,  -760,  -760,  1275,   866,  -196,
    -760,  1304,  -194,  -760,  1060,  -760,  -760,  -760,   374,  1301,
    -760,  -162,   -22,  1173,   452,  1074,  -141,   703,  -420,  -760,
    -760,  -760,  -760,  -760,   290,   -62,  -448,  -760,   881,  -435,
      -7,   898,  -760,  -760,  -760,  -759,  -117,  -176,  -318,  -760,
    -760,   -27,   -56,   935,  -760,  -760,  1050,  -760,  -760,  -138,
     545,  -760,  -760,  -760,  -309,  -334,  1037,   406,  -284,  1075,
    -227,   445
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    12,    13,    14,    15,   473,
     488,   489,   157,   275,   276,    16,   140,    26,   176,   514,
     515,    19,    20,   285,    29,    58,    59,    72,   474,   279,
     840,    44,    45,   294,   171,   172,   298,   958,    27,    23,
      24,    50,   642,    77,    32,   163,   164,   465,   466,   467,
     660,   947,   468,   639,   800,   161,   479,   480,   481,   643,
     469,   470,   819,   821,   655,   813,   808,   194,   141,   142,
     143,   144,   195,   448,   146,   197,   320,   321,   532,   147,
     148,   149,   150,   151,   152,   337,   546,   341,   644,   290,
     397,   432
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,   145,   550,   166,   167,   491,   404,   306,   165,   805,
     309,   336,   314,   316,   173,   277,   769,   542,   771,   538,
     539,   540,    63,   324,   327,     2,    66,   777,   271,   599,
       1,     2,   673,   657,   190,   632,   682,   961,   196,   894,
     357,   632,    17,   638,    25,   689,   897,   864,    36,   929,
     725,    35,    17,  1045,   690,   159,   931,   932,   405,  1039,
     950,   543,   962,    17,   191,   192,   179,   181,   951,    17,
    1042,  1049,   645,   646,   647,   648,   649,   280,   650,   549,
     283,   651,   652,   653,   475,   686,   310,   483,   272,   485,
     972,    28,   160,  1052,   687,   942,   300,   281,   865,    60,
     165,   633,   827,   632,   516,   683,   632,    61,   634,    17,
      17,    17,   455,   963,   943,    60,   944,   303,   304,   305,
     185,   985,   632,   177,    60,    40,    41,    42,     5,    55,
     978,    56,    65,    22,     5,   193,    34,   311,   964,   198,
     471,   973,   529,  1046,   482,    30,   312,   873,   331,    52,
     340,   342,   344,   346,   348,   350,   352,   354,   355,   356,
     945,   358,   359,   361,   364,   366,   368,   370,   371,   372,
     661,   302,   456,   935,   952,   632,   333,    31,   635,   406,
      49,   979,     1,     2,   658,    57,     3,   662,   688,   641,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     476,   431,   433,   435,   437,   439,   441,   443,   444,   804,
      62,   407,   408,   409,   410,   411,   412,   413,   333,     4,
     517,   666,   519,   825,   837,    38,   178,    43,   814,   674,
     165,    39,   723,   710,   711,   490,   490,   492,   445,   173,
     518,    43,   938,   732,   333,   734,   544,   736,   545,   738,
     335,   740,   332,   742,   714,   744,   770,   746,   772,   748,
     749,   600,   706,   530,   751,   752,   753,   778,   755,   756,
     618,   895,   632,   759,   525,  1141,   806,   484,   898,   726,
     667,   727,  1047,    49,  1048,   553,     5,   555,  1040,   557,
    1041,   559,   335,   561,    53,   563,   632,   565,   665,  1043,
    1050,  1044,  1051,    54,  1151,   715,   576,   622,   447,   579,
     794,   581,     6,   583,   716,     2,   626,   627,   335,   277,
     464,   707,  1053,   709,  1054,   471,   311,   835,   921,    60,
      49,    71,    43,   946,   526,  1142,    70,   158,   999,   656,
     482,  1035,   482,   -81,   -81,   -81,  1017,   713,  1147,   333,
     798,    46,   654,    76,    49,   715,    18,   803,  1037,    78,
    1091,  1156,   923,   922,  1152,    60,    18,   623,   926,   608,
     795,   730,   824,   180,    21,   668,   829,   830,   -96,    53,
     785,   186,   -81,   187,    21,   927,   928,   836,   456,   941,
     153,   842,  1036,   186,    48,   669,   875,   933,  1000,   609,
      48,   165,   165,   940,   165,   154,  1018,   677,   526,  1038,
     679,  1092,   973,   833,   155,     7,   664,    33,     5,    60,
     156,    60,   334,   335,   876,  1015,   877,   301,   878,   628,
     879,   160,   880,  1016,   881,   174,   882,   708,   701,   702,
     168,   169,   170,    64,    47,   887,   175,   619,   888,   620,
     621,   889,   629,   853,   236,   855,   237,    73,    74,   -81,
     -81,   425,   426,   427,   490,   490,   792,   793,   449,   447,
     450,   451,   287,   288,   611,   721,   612,   847,   613,   848,
     614,   841,   615,   843,   616,   265,   266,   267,   193,  1002,
     183,   832,    67,    68,    69,   797,   523,   269,   524,   838,
     632,   186,   452,   631,   184,   637,   264,   265,   266,   267,
     471,   747,   854,   924,   750,     2,   471,   240,   241,   242,
     243,   244,   188,   -81,   -81,   -81,   717,   189,   718,   762,
     763,   852,   815,   816,   482,   936,   874,   939,   617,   199,
     986,   863,   849,   948,   850,   780,   781,   782,   783,   784,
     200,   238,   239,   240,   241,   242,   243,   244,    49,    53,
     278,   859,   -81,   860,   786,   201,  1067,   641,   263,   264,
     265,   266,   267,   523,   988,   920,   990,   238,   239,   240,
     241,   242,   243,   244,   868,   202,   869,   959,   203,   960,
     787,   204,   205,   645,   646,   647,   648,   649,   828,   650,
     966,   206,   651,   652,   653,   207,    51,    51,   809,   810,
     811,   812,   834,   343,   345,   347,   349,   351,   353,   664,
     208,   270,   490,   925,   209,   362,   365,   367,   369,   856,
     857,   210,   211,   373,   374,   870,   846,   871,  1001,   -81,
     -81,   238,   239,   240,   241,   242,   243,   244,   186,   212,
     669,  1006,   375,   376,  1008,   377,   213,   523,   953,   954,
     968,   969,   214,   974,   867,   975,   215,   471,   471,   717,
    1031,   624,  1032,   378,   859,   859,  1065,  1077,   965,   471,
     967,   216,  1094,   971,  1095,   471,  1096,  1070,  1097,  1071,
     464,   645,   646,   647,   648,   649,   464,   650,   930,   379,
     651,   652,   653,   434,   436,   438,   440,   442,  1099,   217,
    1100,   380,   218,   219,  1028,  1029,  1101,   220,  1102,    80,
      81,    82,    83,    84,    85,   221,    86,    87,  1106,   381,
    1107,  1109,   222,  1110,    88,   223,    89,  1111,  1114,  1112,
    1115,   224,  1116,   382,  1117,   383,   225,  1119,  1120,   226,
     227,   228,   384,   385,   229,   230,    90,   231,   232,   918,
     233,   234,   235,   282,   937,   284,   291,   949,    91,    92,
     162,   286,   645,   646,   647,   648,   649,    93,   650,  1009,
    1019,   651,   652,   653,  1021,  1022,   292,    42,   295,   293,
     299,  1027,   317,   319,   328,    94,   329,   330,  1034,   398,
     399,   400,   401,   402,   403,    95,   414,   446,   -97,   459,
     453,   454,    96,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,    97,   457,   458,   989,   460,
     991,    60,   472,   386,   387,   388,   389,   390,   391,   392,
     393,   394,   395,   396,   522,   520,   521,   464,   464,   527,
     528,   531,   534,  1087,  1088,  1090,   535,   996,   997,   464,
     998,   104,   547,   601,   536,   464,   105,   106,   107,   108,
     109,   110,   111,   537,  1004,   551,   115,   116,   571,   118,
     119,   120,   121,   574,   577,   587,  1014,   588,   589,   625,
     590,   245,   591,   592,   593,   594,   595,   596,   597,   598,
     602,  1020,   606,   244,   603,  1023,  1024,  1025,  1026,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   624,   659,   604,   605,   671,   675,   678,   684,   685,
     691,   566,    98,    99,   100,   101,   102,   103,   692,   693,
     694,   697,   698,  1072,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   695,
     696,   699,    80,    81,    82,    83,    84,    85,   700,    86,
      87,   704,  1121,   703,   705,   273,   274,    88,   719,    89,
     722,   139,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   731,   724,   728,   729,    90,
     761,   764,   494,   765,   766,   767,   768,   773,   774,   775,
     776,    91,    92,   360,   779,   788,   790,   789,   791,   632,
      93,   799,   817,   801,   802,   818,   820,   338,   495,   807,
     831,   823,    80,    81,    82,    83,    84,    85,    94,    86,
      87,   826,   839,   844,   858,   845,   861,    88,    95,    89,
     866,   872,   893,   896,   899,    96,   900,   890,   919,   339,
     910,   955,   956,   957,   980,   981,   982,   983,    97,    90,
     901,   992,   902,  1143,  1144,   977,   984,   993,   994,   903,
     904,    91,    92,   363,   905,   906,   907,   496,   497,   498,
      93,   499,   500,   501,   908,   502,   909,   338,   503,   504,
     917,   505,   506,   507,   508,   509,   510,   511,    94,   976,
     512,   513,   987,   995,  1003,  1010,  1005,  1011,    95,  1012,
    1013,   717,  1058,  1030,  1055,    96,  1059,  1060,   245,   339,
    1061,  1066,  1069,  1068,  1073,  1074,  1075,  1076,    97,  1078,
    1093,  1098,  1103,   567,  1105,  1104,   246,   247,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,  1122,  1108,
     974,  1125,  1126,  1124,  1127,  1128,  1129,  1113,   569,  1118,
    1130,  1131,  1132,  1133,  1145,    98,    99,   100,   101,   102,
     103,  1150,  1139,  1031,  1134,  1135,  1146,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   139,    98,    99,   100,   101,   102,
     103,  1136,  1148,  1149,  1137,  1138,   718,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    80,    81,    82,    83,    84,    85,  1153,    86,
      87,  1154,  1155,   975,  1032,    37,   851,    88,   630,    89,
     182,   676,    75,    79,   139,   493,   307,   822,  1123,   670,
     486,   640,   610,   934,   487,     0,     0,     0,     0,    90,
       0,   533,   548,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,     0,     0,     0,     0,     0,     0,     0,
      93,     0,     0,     0,     0,     0,   428,   429,     0,     0,
       0,     0,    80,    81,    82,    83,    84,    85,    94,    86,
      87,     0,     0,     0,     0,     0,     0,    88,    95,    89,
       0,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,    90,
     570,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,     0,     0,     0,     0,     0,     0,     1,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    94,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,   245,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    97,   246,
     247,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   263,   264,   265,   266,
     267,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   883,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,     0,     0,     5,     0,     0,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   430,     0,     0,   139,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    80,    81,    82,    83,    84,    85,     0,    86,
      87,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,     0,     0,   139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    90,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    91,    92,   322,     0,     0,     0,     0,     0,     0,
      93,   323,    80,    81,    82,    83,    84,    85,     0,    86,
      87,     0,     0,     0,     0,     0,     0,    88,    94,    89,
       0,     0,     0,     0,     0,     0,     0,     0,    95,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,    90,
       0,     0,     0,   884,     0,     0,     0,     0,    97,     0,
       0,    91,    92,   325,     0,     0,     0,     0,     0,     0,
      93,   326,     0,     0,     0,    80,    81,    82,    83,    84,
      85,     0,    86,    87,     0,     0,     0,     0,    94,     0,
      88,     0,    89,     0,     0,     0,     0,     0,    95,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,    90,     0,     0,     0,     0,     0,    97,     0,
       0,     0,     0,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
     338,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     0,     0,     0,     0,     0,    96,     0,
       0,     0,   339,     0,     0,    98,    99,   100,   101,   102,
     103,    97,     0,     0,     0,     0,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    98,    99,   100,   101,   102,
     103,     0,     0,     0,   139,     0,     0,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,   139,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    80,    81,    82,    83,    84,
      85,     0,    86,    87,     0,     0,     0,     0,     0,     0,
      88,     0,    89,     0,     0,     0,     0,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    91,    92,   162,     0,     0,     0,
       0,     0,     0,    93,     0,    80,    81,    82,    83,    84,
      85,     0,    86,    87,     0,     0,     0,     0,     0,     0,
      88,    94,    89,     0,     0,     0,     0,     0,     0,     0,
       0,    95,     0,     0,     0,     0,     0,     0,    96,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,    97,     0,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,    93,   308,     0,     0,     0,    80,    81,
      82,    83,    84,    85,     0,    86,    87,     0,     0,     0,
       0,    94,     0,    88,     0,    89,     0,     0,     0,     0,
       0,    95,     0,     0,     0,     0,     0,     0,    96,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,    97,     0,     0,     0,     0,     0,    91,    92,     0,
       0,     0,     0,     0,     0,     0,    93,   313,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    95,     0,     0,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,    97,     0,     0,     0,     0,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,     0,     0,     0,   139,     0,     0,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,   139,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    80,    81,
      82,    83,    84,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,    88,     0,    89,     0,     0,     0,     0,
     139,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    91,    92,     0,
       0,     0,     0,     0,     0,     0,    93,   315,    80,    81,
      82,    83,    84,    85,     0,    86,    87,     0,     0,     0,
       0,     0,     0,    88,    94,    89,     0,     0,     0,     0,
       0,     0,     0,     0,    95,     0,     0,     0,     0,     0,
       0,    96,     0,     0,     0,    90,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,     0,    91,    92,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,    80,    81,    82,    83,    84,    85,     0,    86,    87,
       0,     0,     0,     0,    94,     0,    88,     0,    89,     0,
       0,     0,     0,     0,    95,     0,     0,     0,     0,     0,
       0,    96,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,    97,     0,     0,     0,     0,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,    93,
     712,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,    97,     0,     0,
       0,     0,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    98,    99,   100,   101,   102,   103,     0,     0,     0,
     139,   663,     0,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
     139,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    80,    81,    82,    83,    84,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,    88,     0,    89,     0,
       0,     0,     0,   139,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,    93,
     862,    80,    81,    82,    83,    84,    85,     0,    86,    87,
       0,     0,     0,     0,     0,     0,    88,    94,    89,     0,
       0,     0,     0,     0,     0,     0,     0,    95,     0,     0,
       0,     0,     0,     0,    96,     0,     0,     0,    90,     0,
       0,     0,     0,     0,     0,     0,     0,    97,     0,     0,
      91,    92,     0,     0,     0,     0,     0,     0,     0,    93,
     970,     0,     0,     0,    80,    81,    82,    83,    84,    85,
       0,    86,    87,     0,     0,     0,     0,    94,     0,    88,
       0,    89,     0,     0,     0,     0,     0,    95,     0,     0,
       0,     0,     0,     0,    96,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,    97,     0,     0,
       0,     0,     0,    91,    92,     0,     0,     0,     0,     0,
       0,     0,    93,  1033,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      94,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
      97,     0,     0,     0,     0,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    98,    99,   100,   101,   102,   103,
       0,     0,     0,   139,     0,     0,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,   139,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    80,    81,    82,    83,    84,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,    88,
       0,    89,     0,     0,     0,     0,   139,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,    92,     0,     0,     0,     0,     0,
       0,     0,    93,  1089,    80,    81,    82,    83,    84,    85,
       0,    86,    87,     0,     0,     0,     0,     0,     0,    88,
      94,    89,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,    90,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,    91,    92,     0,     0,     0,     0,     0,
       0,     0,    93,     0,     0,     0,     0,    80,    81,    82,
      83,    84,    85,     0,    86,    87,     0,     0,     0,     0,
      94,     0,    88,     0,    89,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,     0,    96,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      97,     0,     0,     0,     0,     0,    91,    92,     0,     0,
       0,     0,     0,     0,     0,    93,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   477,
       0,     0,     0,    94,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,    88,     0,    89,     0,     0,     0,
      96,     0,     0,     0,     0,     0,     0,    98,    99,   100,
     101,   102,   103,    97,     0,     0,     0,     0,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    95,     0,    98,    99,   100,
     101,   102,   103,     0,     0,     0,   139,     0,     0,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   478,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,   100,   101,   102,   103,   139,     0,     0,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   139,
       0,     0,    98,    99,   100,   101,   102,   103,     0,     0,
       0,     0,     0,     0,     0,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,     0,
       0,     0,     0,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     672,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   885,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   915,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   245,     0,   886,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,     0,   916,     0,     0,     0,     0,
     461,     0,     0,     0,     0,     0,     0,     0,   462,     0,
       0,     0,     0,     0,     0,    88,     0,    89,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   318,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   461,     0,     0,
       0,     0,     0,     0,     0,   462,     0,     1,   463,     0,
       0,     0,    88,     0,    89,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   584,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,     0,     0,     0,
       0,     0,     0,     0,   477,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   463,     0,     0,     0,    88,
       0,    89,     0,     0,     0,   585,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   477,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   586,     0,     0,     0,     0,
      88,     5,    89,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      95,     0,     0,     0,     0,     0,     0,     0,   636,     0,
       0,     0,   796,     0,     0,   913,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,    89,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    98,    99,   100,   101,   102,   103,   478,
       0,    95,     0,     0,     0,   914,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      98,    99,   100,   101,   102,   103,     0,     0,    95,     0,
       0,     0,     0,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    98,    99,   100,
     101,   102,   103,     0,     0,     0,     0,     0,     0,     0,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,     0,     0,     0,     0,    98,    99,
     100,   101,   102,   103,     0,     0,     0,     0,     0,     0,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    98,    99,   100,   101,   102,
     103,     0,     0,     0,     0,     0,     0,     0,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   720,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   680,   681,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1079,  1080,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1081,  1082,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,     0,     0,     0,     0,     0,  1083,  1084,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   287,   288,     0,     0,     0,   297,     0,
       0,     0,   245,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1085,  1086,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,     0,   245,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     289,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,     0,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   607,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1007,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   268,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   541,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   552,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   554,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   556,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   558,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   560,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   562,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   564,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   568,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   572,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   573,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   575,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   578,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   580,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   582,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   733,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   735,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   737,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   739,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   741,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   743,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   745,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   754,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   757,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   758,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   760,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   891,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   892,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   911,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   912,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1056,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1057,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1062,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1063,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1064,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   245,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1140,     0,     0,     0,     0,     0,
       0,     0,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267
};

static const yytype_int16 yycheck[] =
{
      22,    57,   336,    65,    66,   292,   233,   182,    64,    17,
     186,   205,   188,   189,    70,   156,     5,     5,     5,   328,
     329,   330,    29,   199,   200,    61,    33,     5,     3,    62,
      60,    61,   480,   468,    90,     3,   142,   112,    94,    62,
     216,     3,     0,   463,     2,    17,    62,     3,   106,   808,
       5,     0,    10,     5,    26,    62,   815,   816,   234,     5,
       3,    49,   137,    21,    91,    92,    73,    74,    11,    27,
       5,     5,    14,    15,    16,    17,    18,   158,    20,    62,
     161,    23,    24,    25,   280,    17,     3,   283,    63,   285,
       3,   189,    60,     5,    26,    49,   177,   159,    54,     3,
     156,    63,    70,     3,   300,   211,     3,    11,    70,    67,
      68,    69,     3,   112,    68,     3,    70,   179,   180,   181,
      78,    62,     3,    11,     3,    26,    27,    28,   164,     5,
       3,     7,    11,     3,   164,    93,     3,    54,   137,    97,
     278,    54,   318,    95,   282,    68,    63,    62,   204,   294,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     114,   217,   218,   219,   220,   221,   222,   223,   224,   225,
      70,   178,    63,    70,   117,     3,   159,   100,   462,   235,
      61,    54,    60,    61,   468,    61,    64,   471,   120,    70,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     281,   257,   258,   259,   260,   261,   262,   263,   264,   644,
     114,   238,   239,   240,   241,   242,   243,   244,   159,    97,
     301,   475,   303,   658,   672,    64,   114,   142,   648,   483,
     286,    64,   541,   520,   521,   291,   292,   293,   265,   295,
     302,   142,    70,   552,   159,   554,   234,   556,   236,   558,
     233,   560,    62,   562,     3,   564,   245,   566,   245,   568,
     569,   294,   516,   319,   573,   574,   575,   245,   577,   578,
     446,   294,     3,   582,     3,     3,   284,   284,   294,   234,
     476,   236,   234,    61,   236,   341,   164,   343,   234,   345,
     236,   347,   233,   349,    62,   351,     3,   353,   473,   234,
     234,   236,   236,    62,     3,    54,   362,     3,   266,   365,
       3,   367,   190,   369,    63,    61,   457,   458,   233,   460,
     278,   517,   234,   519,   236,   463,    54,     3,     3,     3,
      61,    65,   142,   287,    63,    63,    77,    11,     3,    70,
     478,     3,   480,    26,    27,    28,     3,   523,     3,   159,
     634,    97,   294,     3,    61,    54,     0,   641,     3,    70,
       3,     3,   797,    70,    63,     3,    10,    63,   803,   425,
      63,   547,   656,    11,     0,    43,   660,   661,   145,    62,
     607,    61,    65,    63,    10,   805,   806,    63,    63,   824,
      60,   678,    54,    61,    21,    63,   730,   817,    63,   426,
      27,   457,   458,   823,   460,   145,    63,   488,    63,    54,
     491,    54,    54,   667,    63,   293,   472,     6,   164,     3,
     288,     3,   232,   233,   733,     3,   735,    11,   737,    11,
     739,    60,   741,    11,   743,    76,   745,   518,   222,   223,
      67,    68,    69,    32,   190,   754,   143,     6,   757,     8,
       9,   760,   459,   707,     5,   709,     7,    46,    47,   142,
     143,    48,    49,    50,   520,   521,   628,   629,     6,   427,
       8,     9,     3,     4,   432,   531,   434,     5,   436,     7,
     438,   677,   440,   679,   442,    49,    50,    51,   446,   924,
     294,   666,    40,    41,    42,   633,    61,   182,    63,   674,
       3,    61,    40,    63,    62,   463,    48,    49,    50,    51,
     648,   567,   708,   797,   570,    61,   654,    54,    55,    56,
      57,    58,    61,    26,    27,    28,    61,    61,    63,   585,
     586,   706,   649,   650,   672,   819,   730,   821,    39,    61,
     874,   717,     5,   827,     7,   601,   602,   603,   604,   605,
      61,    52,    53,    54,    55,    56,    57,    58,    61,    62,
     114,    61,    65,    63,    39,    61,  1001,    70,    47,    48,
      49,    50,    51,    61,   883,    63,   885,    52,    53,    54,
      55,    56,    57,    58,   235,    61,   237,   841,    61,   843,
     617,    61,    61,    14,    15,    16,    17,    18,   660,    20,
     854,    61,    23,    24,    25,    61,   628,   629,   201,   202,
     203,   204,   668,   207,   208,   209,   210,   211,   212,   675,
      61,    60,   678,   799,    61,   219,   220,   221,   222,   710,
     711,    61,    61,    73,    74,   235,   692,   237,   922,   142,
     143,    52,    53,    54,    55,    56,    57,    58,    61,    61,
      63,   935,    92,    93,   938,    95,    61,    61,   833,    63,
     856,   857,    61,    61,   720,    63,    61,   805,   806,    61,
      61,    63,    63,   113,    61,    61,    63,    63,   853,   817,
     855,    61,   235,   859,   237,   823,   235,  1005,   237,  1007,
     648,    14,    15,    16,    17,    18,   654,    20,    21,   139,
      23,    24,    25,   258,   259,   260,   261,   262,   235,    61,
     237,   151,    61,    61,   968,   969,   235,    61,   237,     3,
       4,     5,     6,     7,     8,    61,    10,    11,   235,   169,
     237,   235,    61,   237,    18,    61,    20,   235,   235,   237,
     237,    61,   235,   183,   237,   185,    61,  1056,  1057,    61,
      61,    61,   192,   193,    61,    61,    40,    61,    61,   786,
      61,    61,    61,    61,   820,   128,   167,   829,    52,    53,
      54,   294,    14,    15,    16,    17,    18,    61,    20,    21,
     956,    23,    24,    25,   959,   960,   167,    28,   294,   140,
      61,   966,    62,   195,    62,    79,    62,    62,   974,    62,
      62,     3,     3,     3,     3,    89,     3,    61,   145,   128,
     182,    63,    96,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   109,    63,    63,   884,   294,
     886,     3,   194,   273,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   283,    62,   167,   167,   805,   806,    62,
      62,   104,    62,  1028,  1029,  1031,    62,   913,   914,   817,
     916,   238,    77,   294,    62,   823,   239,   240,   241,   242,
     243,   244,   245,    62,   930,    62,   249,   250,    62,   252,
     253,   254,   255,    62,    62,    61,   948,    61,    61,     3,
      61,    12,    61,    61,    61,    61,    61,    61,    61,    61,
     294,   957,    62,    58,   294,   961,   962,   963,   964,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    63,    65,   294,   294,    62,   194,   294,   120,    17,
      26,    62,   226,   227,   228,   229,   230,   231,    65,   208,
       5,    43,    43,  1009,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   214,
     214,     5,     3,     4,     5,     6,     7,     8,     5,    10,
      11,    62,  1058,   214,   294,   289,   290,    18,     3,    20,
     105,   295,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    62,   235,   235,   158,    40,
       5,     5,   116,     5,     5,     5,     5,     5,     5,     5,
       5,    52,    53,    54,     5,    62,     3,    63,     3,     3,
      61,    61,   284,    62,    62,    61,    61,    68,   142,    23,
     286,    17,     3,     4,     5,     6,     7,     8,    79,    10,
      11,   285,   120,   111,    62,   111,     3,    18,    89,    20,
      63,   158,    62,    62,    62,    96,    62,   294,     3,   100,
     294,     3,    77,   121,    39,    39,    39,    39,   109,    40,
      62,     5,    62,  1125,  1126,    63,    39,     5,     5,    62,
      62,    52,    53,    54,    62,    62,    62,   201,   202,   203,
      61,   205,   206,   207,    62,   209,    62,    68,   212,   213,
      62,   215,   216,   217,   218,   219,   220,   221,    79,    62,
     224,   225,    62,     5,    62,     4,    65,   286,    89,     4,
      50,    61,   294,    62,    62,    96,    62,    62,    12,   100,
      62,     3,     3,   294,    39,     4,   188,    61,   109,     3,
      62,   158,   158,   294,   237,   235,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     3,   158,
      61,    50,    50,    63,     4,     4,     4,   158,    62,   158,
       3,   141,   141,   141,   294,   226,   227,   228,   229,   230,
     231,     4,    62,    61,   141,   141,    63,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   295,   226,   227,   228,   229,   230,
     231,   141,    62,    62,   141,   141,    63,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     3,     4,     5,     6,     7,     8,    62,    10,
      11,    63,     3,    63,    63,    10,   705,    18,   460,    20,
      75,   485,    48,    52,   295,   295,   183,   654,  1068,   478,
     286,   463,   427,   818,   289,    -1,    -1,    -1,    -1,    40,
      -1,   321,   335,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    67,    68,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    79,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    89,    20,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    40,
     294,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    12,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,
     231,    -1,    -1,   164,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   292,    -1,    -1,   295,   226,   227,   228,   229,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,
      -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,     3,     4,     5,     6,     7,     8,    -1,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,
      -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    79,    -1,
      18,    -1,    20,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,   109,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,   100,    -1,    -1,   226,   227,   228,   229,   230,
     231,   109,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,
     231,    -1,    -1,    -1,   295,    -1,    -1,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
     228,   229,   230,   231,   295,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    -1,    20,    -1,    -1,    -1,    -1,   295,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    79,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    79,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
      -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,   109,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
     228,   229,   230,   231,   109,    -1,    -1,    -1,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,
     228,   229,   230,   231,    -1,    -1,    -1,   295,    -1,    -1,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,   230,   231,   295,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,
     295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    62,     3,     4,
       5,     6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    79,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    79,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,   109,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,   230,   231,   109,    -1,    -1,
      -1,    -1,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   226,   227,   228,   229,   230,   231,    -1,    -1,    -1,
     295,   236,    -1,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
     295,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,     3,     4,     5,     6,     7,     8,    -1,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    79,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    79,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,   109,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
     109,    -1,    -1,    -1,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   226,   227,   228,   229,   230,   231,
      -1,    -1,    -1,   295,    -1,    -1,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,   230,   231,   295,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    -1,    -1,   295,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,     3,     4,     5,     6,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      79,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      79,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     109,    -1,    -1,    -1,    -1,    -1,    52,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    18,    -1,    20,    -1,    -1,    -1,
      96,    -1,    -1,    -1,    -1,    -1,    -1,   226,   227,   228,
     229,   230,   231,   109,    -1,    -1,    -1,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    -1,   226,   227,   228,
     229,   230,   231,    -1,    -1,    -1,   295,    -1,    -1,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   138,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     226,   227,   228,   229,   230,   231,   295,    -1,    -1,    -1,
      -1,    -1,    -1,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   295,
      -1,    -1,   226,   227,   228,   229,   230,   231,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     294,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    12,    -1,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,   294,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    11,    -1,    60,    61,    -1,
      -1,    -1,    18,    -1,    20,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    18,
      -1,    20,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      18,   164,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,
      -1,    -1,     3,    -1,    -1,   294,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   226,   227,   228,   229,   230,   231,   138,
      -1,    89,    -1,    -1,    -1,   294,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     226,   227,   228,   229,   230,   231,    -1,    -1,    89,    -1,
      -1,    -1,    -1,   239,   240,   241,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
     266,   267,   268,   269,   270,   271,   272,   226,   227,   228,
     229,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,    -1,    -1,    -1,    -1,   226,   227,
     228,   229,   230,   231,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,   240,   241,   242,   243,   244,   245,   246,   247,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   226,   227,   228,   229,   230,
     231,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,   268,   269,   270,
     271,   272,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   181,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   158,   159,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    60,    61,    64,    97,   164,   190,   293,   297,   298,
     299,   300,   301,   302,   303,   304,   311,   312,   313,   317,
     318,   334,     3,   335,   336,   312,   313,   334,   189,   320,
      68,   100,   340,   320,     3,     0,   106,   298,    64,    64,
      26,    27,    28,   142,   327,   328,    97,   190,   317,    61,
     337,   338,   294,    62,    62,     5,     7,    61,   321,   322,
       3,    11,   114,   356,   320,    11,   356,   340,   340,   340,
      77,    65,   323,   320,   320,   327,     3,   339,    70,   335,
       3,     4,     5,     6,     7,     8,    10,    11,    18,    20,
      40,    52,    53,    61,    79,    89,    96,   109,   226,   227,
     228,   229,   230,   231,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   295,
     312,   364,   365,   366,   367,   368,   370,   375,   376,   377,
     378,   379,   380,    60,   145,    63,   288,   308,    11,   356,
      60,   351,    54,   341,   342,   368,   351,   351,   317,   317,
     317,   330,   331,   368,    76,   143,   314,    11,   114,   356,
      11,   356,   323,   294,    62,   312,    61,    63,    61,    61,
     368,   367,   367,   312,   363,   368,   368,   371,   312,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    61,    61,     5,     7,    52,    53,
      54,    55,    56,    57,    58,    12,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    62,   182,
      60,     3,    63,   289,   290,   309,   310,   342,   114,   325,
     308,   351,    61,   308,   128,   319,   294,     3,     4,    70,
     385,   167,   167,   140,   329,   294,    71,    98,   332,    61,
     308,    11,   356,   351,   351,   351,   314,   339,    62,   363,
       3,    54,    63,    62,   363,    62,   363,    62,   294,   195,
     372,   373,    54,    62,   363,    54,    62,   363,    62,    62,
      62,   368,    62,   159,   232,   233,   328,   381,    68,   100,
     368,   383,   368,   383,   368,   383,   368,   383,   368,   383,
     368,   383,   368,   383,   368,   368,   368,   363,   368,   368,
      54,   368,   383,    54,   368,   383,   368,   383,   368,   383,
     368,   368,   368,    73,    74,    92,    93,    95,   113,   139,
     151,   169,   183,   185,   192,   193,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   386,    62,    62,
       3,     3,     3,     3,   386,   363,   368,   367,   367,   367,
     367,   367,   367,   367,     3,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,    48,    49,    50,    67,    68,
     292,   368,   387,   368,   387,   368,   387,   368,   387,   368,
     387,   368,   387,   368,   368,   367,    61,   312,   369,     6,
       8,     9,    40,   182,    63,     3,    63,    63,    63,   128,
     294,     3,    11,    61,   312,   343,   344,   345,   348,   356,
     357,   375,   194,   305,   324,   325,   308,     3,   138,   352,
     353,   354,   375,   325,   356,   325,   341,   385,   306,   307,
     368,   306,   368,   330,   116,   142,   201,   202,   203,   205,
     206,   207,   209,   212,   213,   215,   216,   217,   218,   219,
     220,   221,   224,   225,   315,   316,   325,   308,   351,   308,
     167,   167,    62,    61,    63,     3,    63,    62,    62,   363,
     368,   104,   374,   372,    62,    62,    62,    62,   380,   380,
     380,    62,     5,    49,   234,   236,   382,    77,   382,    62,
     381,    62,    62,   368,    62,   368,    62,   368,    62,   368,
      62,   368,    62,   368,    62,   368,    62,   294,    62,    62,
     294,    62,    62,    62,    62,    62,   368,    62,    62,   368,
      62,   368,    62,   368,   294,   294,   294,    61,    61,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    62,
     294,   294,   294,   294,   294,   294,    62,    70,   368,   367,
     369,   312,   312,   312,   312,   312,   312,    39,   363,     6,
       8,     9,     3,    63,    63,     3,   342,   342,    11,   356,
     309,    63,     3,    63,    70,   384,   191,   312,   344,   349,
     357,    70,   338,   355,   384,    14,    15,    16,    17,    18,
      20,    23,    24,    25,   294,   360,    70,   355,   384,    65,
     346,    70,   384,   236,   368,   314,   305,   325,    43,    63,
     354,    62,   294,   352,   305,   194,   324,   308,   294,   308,
     158,   159,   142,   211,   120,    17,    17,    26,   120,    17,
      26,    26,    65,   208,     5,   214,   214,    43,    43,     5,
       5,   222,   223,   214,    62,   294,   305,   325,   308,   325,
     306,   306,    62,   363,     3,    54,    63,    61,    63,     3,
     181,   368,   105,   380,   235,     5,   234,   236,   235,   158,
     363,    62,   380,    62,   380,    62,   380,    62,   380,    62,
     380,    62,   380,    62,   380,    62,   380,   368,   380,   380,
     368,   380,   380,   380,    62,   380,   380,    62,    62,   380,
      62,     5,   368,   368,     5,     5,     5,     5,     5,     5,
     245,     5,   245,     5,     5,     5,     5,     5,   245,     5,
     368,   368,   368,   368,   368,   386,    39,   367,    62,    63,
       3,     3,   337,   337,     3,    63,     3,   375,   384,    61,
     350,    62,    62,   384,   355,    17,   284,    23,   362,   201,
     202,   203,   204,   361,   344,   362,   362,   284,    61,   358,
      61,   359,   343,    17,   384,   355,   285,    70,   351,   384,
     384,   286,   314,   305,   368,     3,    63,   352,   314,   120,
     326,   325,   306,   325,   111,   111,   368,     5,     7,     5,
       7,   315,   314,   305,   325,   305,   308,   308,    62,    61,
      63,     3,    62,   363,     3,    54,    63,   368,   235,   237,
     235,   237,   158,    62,   328,   381,   380,   380,   380,   380,
     380,   380,   380,    62,   294,    62,   294,   380,   380,   380,
     294,    62,    62,    62,    62,   294,    62,    62,   294,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
     294,    62,    62,   294,   294,    62,   294,    62,   367,     3,
      63,     3,    70,   355,   384,   363,   355,   344,   344,   361,
      21,   361,   361,   344,   376,    70,   384,   368,    70,   384,
     344,   355,    49,    68,    70,   114,   287,   347,   384,   351,
       3,    11,   117,   314,    63,     3,    77,   121,   333,   305,
     305,   112,   137,   112,   137,   314,   305,   314,   325,   325,
      62,   363,     3,    54,    61,    63,    62,    63,     3,    54,
      39,    39,    39,    39,    39,    62,   381,    62,   380,   368,
     380,   368,     5,     5,     5,     5,   368,   368,   368,     3,
      63,   384,   355,    62,   368,    65,   384,    65,   384,    21,
       4,   286,     4,    50,   351,     3,    11,     3,    63,   363,
     368,   314,   314,   368,   368,   368,   368,   314,   305,   305,
      62,    61,    63,    62,   363,     3,    54,     3,    54,     5,
     234,   236,     5,   234,   236,     5,    95,   234,   236,     5,
     234,   236,     5,   234,   236,    62,    62,    62,   294,    62,
      62,    62,    62,    62,    62,    63,     3,   355,   294,     3,
     364,   364,   368,    39,     4,   188,    61,    63,     3,   158,
     159,   158,   159,   158,   159,   158,   159,   314,   314,    62,
     363,     3,    54,    62,   235,   237,   235,   237,   158,   235,
     237,   235,   237,   158,   235,   237,   235,   237,   158,   235,
     237,   235,   237,   158,   235,   237,   235,   237,   158,   380,
     380,   368,     3,   350,    63,    50,    50,     4,     4,     4,
       3,   141,   141,   141,   141,   141,   141,   141,   141,    62,
      62,     3,    63,   338,   338,   294,    63,     3,    62,    62,
       4,     3,    63,    62,    63,     3,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   296,   297,   298,   298,   299,   299,   299,   299,   299,
     300,   300,   300,   301,   302,   303,   303,   303,   303,   303,
     303,   303,   303,   304,   304,   304,   304,   305,   305,   305,
     305,   305,   306,   306,   307,   308,   308,   308,   308,   309,
     309,   310,   310,   310,   311,   312,   312,   313,   313,   314,
     314,   315,   315,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     316,   316,   316,   316,   316,   316,   316,   316,   316,   316,
     317,   317,   318,   318,   318,   318,   319,   319,   320,   320,
     320,   320,   320,   321,   321,   322,   322,   322,   323,   323,
     324,   324,   325,   325,   326,   326,   327,   327,   328,   328,
     329,   329,   329,   329,   329,   329,   329,   329,   329,   329,
     330,   330,   331,   332,   332,   332,   333,   333,   334,   335,
     335,   336,   337,   337,   338,   339,   339,   340,   340,   340,
     341,   341,   342,   342,   342,   342,   343,   343,   344,   344,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   346,   346,
     347,   347,   347,   347,   347,   348,   349,   350,   350,   351,
     351,   352,   352,   352,   353,   353,   354,   354,   354,   355,
     355,   356,   356,   356,   356,   356,   356,   356,   356,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   358,   359,   360,   360,   360,   360,   361,   361,   361,
     361,   361,   362,   362,   363,   363,   364,   364,   364,   364,
     364,   364,   364,   364,   364,   364,   364,   364,   364,   364,
     364,   364,   364,   365,   365,   365,   365,   365,   365,   365,
     365,   365,   366,   366,   366,   366,   366,   366,   366,   366,
     367,   367,   367,   367,   367,   367,   367,   367,   367,   367,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   368,
     368,   368,   368,   368,   368,   368,   368,   368,   368,   369,
     369,   370,   371,   371,   372,   372,   373,   374,   374,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   376,   376,   376,   376,   376,   376,   376,
     376,   376,   376,   377,   377,   377,   377,   377,   377,   377,
     377,   378,   378,   378,   378,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   380,   380,   380,   380,   380,
     380,   380,   380,   381,   381,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   382,   382,   382,   382,   382,   382,   382,
     382,   382,   382,   383,   383,   384,   385,   385,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   386,   386,
     386,   386,   386,   386,   386,   386,   386,   386,   387,   387,
     387
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     2,     1,     2,     1,     2,     1,
       1,     1,     1,     1,     2,    10,     9,     9,     8,     9,
       8,     8,     7,    11,    11,    10,    10,     1,     5,     5,
       4,     4,     1,     3,     1,     0,     2,     5,     5,     1,
       3,     3,     3,     1,     1,     3,     3,     4,     5,     0,
       4,     1,     3,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     2,     2,     3,     3,
       3,     3,     2,     2,     1,     3,     2,     2,     1,     2,
       1,     1,     9,     4,     4,     4,     0,     2,     0,     2,
       4,     3,     5,     1,     3,     1,     1,     3,     0,     2,
       0,     2,     0,     2,     0,     3,     0,     1,     3,     4,
       3,     3,     8,     8,     8,     8,     8,     8,     8,     8,
       1,     3,     2,     0,     1,     1,     0,     2,     2,     1,
       3,     4,     0,     1,     3,     1,     3,     0,     1,     1,
       1,     3,     1,     2,     3,     1,     1,     3,     1,     1,
       3,     5,     4,     4,     3,     2,     4,     3,     2,     3,
       2,     1,     3,     2,     1,     6,     5,     4,     0,     3,
       3,     4,     4,     7,     1,     3,     2,     3,     5,     0,
       4,     1,     3,     2,     1,     2,     1,     1,     3,     0,
       1,     1,     3,     5,     4,     7,     6,     6,     5,     3,
       6,     5,     4,     4,     4,     5,     4,     3,     5,     4,
       3,     7,     7,     3,     3,     3,     2,     0,     1,     1,
       1,     1,     0,     1,     1,     3,     1,     3,     3,     5,
       5,     7,     7,     6,     6,     9,     9,     8,     8,     8,
       8,     7,     7,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     1,     1,     3,     1,     1,     1,     2,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     3,     3,     4,     3,     4,     3,     4,     3,
       4,     3,     4,     3,     4,     3,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     3,     4,
       3,     4,     3,     4,     5,     6,     3,     4,     3,     1,
       3,     5,     0,     1,     1,     2,     4,     0,     2,     1,
       1,     1,     1,     4,     6,     6,     8,     4,     4,     1,
       1,     8,     8,     6,     6,     3,     3,     8,     4,     1,
       6,    10,     1,     1,     6,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     6,     5,     5,     4,     6,     5,     5,
       4,     6,     5,     5,     4,     6,     5,     5,     4,     6,
       5,     5,     4,     5,     4,     6,     5,     5,     4,     4,
       5,     4,     4,     5,     5,     5,     7,     9,     5,     7,
       9,     4,     4,     4,     5,     9,     8,     7,     6,     5,
       3,     3,     3,     3,     3,    10,     9,     8,     7,     6,
       4,     4,     4,     4,     4,     8,     5,     7,     7,     6,
       4,     4,     3,     2,     2,     2,     2,     2,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     6,     4,     1,     6,     4,     1,     1,     1,
       1,     1,     4,     1,     4,     1,     4,     1,     1,     1,
       4,     1,     4,     1,     4,     4,     1,     1,     4,     1,
       4,     4,     1,     4,     1,     4,     4,     1,     1,     1,
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
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3295 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3301 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3307 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3313 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3319 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3325 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3331 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3337 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 11: /* TEMP_VARIABLE  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3343 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* sql_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3349 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* stmt_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3355 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3361 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* dml_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3367 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* another_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3373 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* use_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3379 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* delete_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3385 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* update_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3391 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* opt_update_where  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3397 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* update_elem_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3403 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* update_elem  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3409 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* opt_output_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3415 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 309: /* dml_select_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3421 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* dml_select_item  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3427 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* select_stmt  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3433 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 312: /* select_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3439 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 313: /* select_no_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3445 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* opt_option_query_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3451 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* query_hint_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3457 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 316: /* query_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3463 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 317: /* select_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3469 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 318: /* simple_select  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3475 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 319: /* opt_into_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3481 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 320: /* opt_top  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3487 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 321: /* top_count  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3493 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 322: /* top_percent  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3499 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 323: /* opt_for_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3505 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 324: /* opt_where  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3511 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 325: /* opt_from_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3517 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 326: /* opt_groupby  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3523 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 327: /* opt_order_by  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3529 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 328: /* order_by  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3535 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 329: /* offset_fetch  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3541 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 330: /* sort_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3547 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 331: /* sort_key  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3553 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 332: /* opt_asc_desc  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3559 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 333: /* opt_having  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3565 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 334: /* with_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3571 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 335: /* with_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3577 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 336: /* common_table_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3583 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 337: /* opt_derived_column_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3589 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 338: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3595 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 339: /* simple_ident_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3601 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 340: /* opt_distinct  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3607 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 341: /* select_expr_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3613 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 342: /* projection  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3619 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 343: /* from_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3625 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 344: /* table_factor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3631 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 345: /* table_factor_non_join  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3637 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 346: /* opt_for_system_time  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3643 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 347: /* system_time  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3649 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 348: /* table_value_constructor_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3655 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 349: /* table_value_constructor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3661 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 350: /* row_value_expression_list_parens_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3667 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 351: /* opt_with_table_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3673 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 352: /* table_hint_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3679 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 353: /* table_hint  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3685 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 354: /* table_hint_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3691 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 355: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3697 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 356: /* relation_factor  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3703 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 357: /* joined_table  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3709 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 358: /* pivot_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3715 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 359: /* unpivot_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3721 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 360: /* join_type  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3727 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 363: /* expr_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3733 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 364: /* column_ref  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3739 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 365: /* expr_const  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3745 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 366: /* simple_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3751 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 367: /* arith_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3757 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 368: /* expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3763 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 369: /* in_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3769 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 370: /* case_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3775 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 371: /* case_arg  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3781 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 372: /* when_clause_list  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3787 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 373: /* when_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3793 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 374: /* case_default  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3799 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 375: /* func_expr  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3805 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 376: /* aggregate_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3811 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 377: /* analytic_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3817 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 378: /* ranking_windowed_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3823 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 379: /* scalar_function  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3829 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 380: /* over_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3835 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 381: /* row_or_range_clause  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3841 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 382: /* window_frame_extent  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3847 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 383: /* distinct_or_all  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3853 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 384: /* relation_name  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3859 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 385: /* column_label  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3865 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 386: /* data_type  */
#line 95 "./sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3871 "sqlparser_bison.cpp" /* yacc.c:1257  */
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
#line 65 "./sqlparser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 3988 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 232 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 4182 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 243 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 4191 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 254 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4197 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 273 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_USE, E_USE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &E_USE_SERIALIZE_FORMAT;
}
#line 4206 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 282 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		(yyvsp[-9].node),	/* E_DELETE_OPT_WITH 0 */
    		(yyvsp[-7].node),	/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-5].node),	/* E_DELETE_DELETE_RELATION 2 */
    		(yyvsp[-4].node),	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-3].node),	/* E_DELETE_OPT_OUTPUT 4 */
    		(yyvsp[-2].node),	/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[-1].node),	/* E_DELETE_OPT_WHERE 6 */
    		(yyvsp[0].node) 	/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4223 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 296 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		(yyvsp[-8].node),		/* E_DELETE_OPT_WITH 0 */
    		(yyvsp[-6].node),		/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-4].node),		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-3].node),		/* E_DELETE_OPT_OUTPUT 4 */
    		(yyvsp[-2].node),		/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[-1].node),		/* E_DELETE_OPT_WHERE 6 */
    		(yyvsp[0].node) 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 310 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		(yyvsp[-7].node),		/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-5].node),		/* E_DELETE_DELETE_RELATION 2 */
    		(yyvsp[-4].node),		/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-3].node),		/* E_DELETE_OPT_OUTPUT 4 */
    		(yyvsp[-2].node),		/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[-1].node),		/* E_DELETE_OPT_WHERE 6 */
    		(yyvsp[0].node) 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4257 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 324 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		(yyvsp[-6].node),		/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-4].node),		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-3].node),		/* E_DELETE_OPT_OUTPUT 4 */
    		(yyvsp[-2].node),		/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[-1].node),		/* E_DELETE_OPT_WHERE 6 */
    		(yyvsp[0].node) 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4274 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 338 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		(yyvsp[-8].node),	/* E_DELETE_OPT_WITH 0 */
    		(yyvsp[-6].node),	/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-5].node),	/* E_DELETE_DELETE_RELATION 2 */
    		(yyvsp[-4].node),	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-3].node),	/* E_DELETE_OPT_OUTPUT 4 */
    		(yyvsp[-2].node),	/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[-1].node),	/* E_DELETE_OPT_WHERE 6 */
    		(yyvsp[0].node) 	/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4291 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 352 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		(yyvsp[-7].node),		/* E_DELETE_OPT_WITH 0 */
    		(yyvsp[-5].node),		/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-4].node),		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-3].node),		/* E_DELETE_OPT_OUTPUT 4 */
    		(yyvsp[-2].node),		/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[-1].node),		/* E_DELETE_OPT_WHERE 6 */
    		(yyvsp[0].node) 		/* E_DELETE_OPT_QUERY_HINT */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4308 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 366 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		(yyvsp[-6].node),		/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-5].node),		/* E_DELETE_DELETE_RELATION 2 */
    		(yyvsp[-4].node),		/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-3].node),		/* E_DELETE_OPT_OUTPUT 4 */
    		(yyvsp[-2].node),		/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[-1].node),		/* E_DELETE_OPT_WHERE 6 */
    		(yyvsp[0].node) 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4325 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 380 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		(yyvsp[-5].node),		/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-4].node),		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-3].node),		/* E_DELETE_OPT_OUTPUT 4 */
    		(yyvsp[-2].node),		/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[-1].node),		/* E_DELETE_OPT_WHERE 6 */
    		(yyvsp[0].node) 		/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 399 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		(yyvsp[-10].node),	/* E_UPDATE_OPT_WITH 0 */
    		(yyvsp[-8].node),	/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-7].node),	/* E_UPDATE_UPDATE_RELATION 2 */
    		(yyvsp[-6].node),	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-4].node),	/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		(yyvsp[-3].node),	/* E_UPDATE_OPT_OUTPUT 5 */
    		(yyvsp[-2].node),	/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[-1].node),	/* E_UPDATE_OPT_WHERE 7 */
    		(yyvsp[0].node)	/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
#line 4360 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 415 "./sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-6].node))
    {
        std::string err = "TABLE_VARIABLE " + (yyvsp[-7].node)->text() + " could not have table hint";
        yyerror(&(yylsp[-10]), result, scanner, err.c_str());
	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		(yyvsp[-10].node),	/* E_UPDATE_OPT_WITH 0 */
    		(yyvsp[-8].node),	/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-7].node),	/* E_UPDATE_UPDATE_RELATION 2 */
    		(yyvsp[-6].node),	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-4].node),	/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		(yyvsp[-3].node),	/* E_UPDATE_OPT_OUTPUT 5 */
    		(yyvsp[-2].node),	/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[-1].node),	/* E_UPDATE_OPT_WHERE 7 */
    		(yyvsp[0].node)	/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
#line 4384 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 437 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		(yyvsp[-8].node),		/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-7].node),		/* E_UPDATE_UPDATE_RELATION 2 */
    		(yyvsp[-6].node),		/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-4].node),		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		(yyvsp[-3].node),		/* E_UPDATE_OPT_OUTPUT 5 */
    		(yyvsp[-2].node),		/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[-1].node),		/* E_UPDATE_OPT_WHERE 7 */
    		(yyvsp[0].node)		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
#line 4402 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 453 "./sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-6].node))
    {
        std::string err = "TABLE_VARIABLE " + (yyvsp[-7].node)->text() + " could not have table hint";
        yyerror(&(yylsp[-9]), result, scanner, err.c_str());
	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		(yyvsp[-8].node),		/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-7].node),		/* E_UPDATE_UPDATE_RELATION 2 */
    		(yyvsp[-6].node),		/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-4].node),		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		(yyvsp[-3].node),		/* E_UPDATE_OPT_OUTPUT 5 */
    		(yyvsp[-2].node),		/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[-1].node),		/* E_UPDATE_OPT_WHERE 7 */
    		(yyvsp[0].node)		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
#line 4426 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 477 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_GLO_SERIALIZE_FORMAT;
}
#line 4435 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 482 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_GLO_SERIALIZE_FORMAT;
}
#line 4444 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 487 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_SERIALIZE_FORMAT;
}
#line 4453 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 492 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_CUR_SERIALIZE_FORMAT;
}
#line 4462 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 501 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4471 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 509 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* t = nullptr;
    if (!Node::check_update_item((yyvsp[0].node), t))
    {
        yyerror(&(yylsp[0]), result, scanner, "update element format error");
    	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM, E_UPDATE_ELEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4486 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 522 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4492 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 524 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4501 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 529 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4510 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 534 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OUTPUT_CLAUSE, E_OUTPUT_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OUTPUT_CLAUSE_SERIALIZE_FORMAT;
}
#line 4519 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 543 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4528 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 551 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DELETED_DML_SELECT_ITEM_SERIALIZE_FORMAT;
}
#line 4537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 556 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERTED_DML_SELECT_ITEM_SERIALIZE_FORMAT;
}
#line 4546 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 561 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DML_SELECT_ITEM, E_DML_SELECT_ITEM_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4555 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 574 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4564 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 579 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4573 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 587 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 4584 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 594 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
    (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node));
}
#line 4596 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 605 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4602 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 607 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPTION_CLAUSE, E_OPTION_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OPTION_CLAUSE_SERIALIZE_FORMAT;
}
#line 4611 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 616 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_QUERY_HINT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4620 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 624 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH GROUP"); }
#line 4626 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 625 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ORDER GROUP"); }
#line 4632 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 626 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("CONCAT UNION"); }
#line 4638 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 627 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH UNION"); }
#line 4644 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 628 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE UNION"); }
#line 4650 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 629 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("LOOP JOIN"); }
#line 4656 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 630 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MERGE JOIN"); }
#line 4662 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 631 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("HASH JOIN"); }
#line 4668 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 632 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("EXPAND VIEWS"); }
#line 4674 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 633 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FAST", (yyvsp[0].node)); }
#line 4680 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 634 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE ORDER"); }
#line 4686 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 635 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("FORCE EXTERNALPUSHDOWN"); }
#line 4692 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 636 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("IGNORE_NONCLUSTERED_COLUMNSTORE_INDEX"); }
#line 4698 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 637 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 4704 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 638 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("KEEP PLAN"); }
#line 4710 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 639 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4716 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 640 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAX_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4722 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 641 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4728 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 642 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MIN_GRANT_PERCENT =", (yyvsp[0].node)); }
#line 4734 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 643 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXDOP", (yyvsp[0].node)); }
#line 4740 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 644 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("MAXRECURSION", (yyvsp[0].node)); }
#line 4746 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 645 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("NO_PERFORMANCE_SPOOL"); }
#line 4752 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 646 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("OPTIMIZE FOR", (yyvsp[0].node)); }
#line 4758 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 647 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION SIMPLE"); }
#line 4764 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 648 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("PARAMETERIZATION FORCED"); }
#line 4770 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 649 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("RECOMPILE"); }
#line 4776 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 650 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::make_query_hint("ROBUST PLAN"); }
#line 4782 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 661 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4811 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 686 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4841 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 712 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4871 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 738 "./sqlparser.y" /* yacc.c:1646  */
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
#line 4901 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 766 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4907 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 768 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INTO_CLAUSE, E_INTO_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &INTO_CLAUSE_SERIALIZE_FORMAT;
}
#line 4916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 776 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4922 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 778 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, E_TOP_CNT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 4931 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 783 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, E_TOP_CNT_TIES_PROPERTY_CNT, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 4940 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 788 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, E_TOP_PCT_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 4949 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 793 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, E_TOP_PCT_TIES_PROPERTY_CNT, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 4958 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 802 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4967 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 812 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4976 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 820 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4982 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 822 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_CLAUSE, E_FOR_CLAUSE_PROPERTY_CNT, nullptr);
    (yyval.node)->serialize_format = &FOR_CLAUSE_1_SERIALIZE_FORMAT;
}
#line 4991 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 829 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4997 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 831 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 5006 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 838 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5012 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 840 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 5021 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 847 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5027 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 849 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 5036 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 856 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5042 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 862 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 5051 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 867 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 5060 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 876 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_1;
}
#line 5069 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 881 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_2;
}
#line 5078 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 886 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_3;
}
#line 5087 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 891 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_4;
}
#line 5096 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 896 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_5;
}
#line 5105 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 901 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_6;
}
#line 5114 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 906 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_7;
}
#line 5123 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 911 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_8;
}
#line 5132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 916 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_9;
}
#line 5141 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 921 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OFFSET_FETCH, E_OFFSET_FETCH_PROPERTY_CNT, (yyvsp[-6].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &OFFSET_FETCH_SERIALIZE_FORMAT_10;
}
#line 5150 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 930 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5159 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 938 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 5168 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 946 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 5176 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 950 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 5184 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 954 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 5192 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 960 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5198 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 962 "./sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 5207 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 970 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 5216 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 979 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5225 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 987 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 5234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 994 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1000 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5249 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1009 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5258 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1016 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5264 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1018 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 5272 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1022 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 5280 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1030 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5289 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1038 "./sqlparser.y" /* yacc.c:1646  */
    {
    // check sqlserver dialect
    Node* nd = Node::check_expr_is_column_alias((yyvsp[0].node));
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, nd);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1045 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5312 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1053 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1061 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5334 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1071 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5343 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1085 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 5352 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1090 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5361 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1095 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 5370 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1100 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5379 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1105 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5388 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1110 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5397 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1115 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5406 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1120 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5415 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1125 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5424 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1130 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5433 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1135 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5442 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1140 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5451 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1145 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5460 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1150 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5469 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1155 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5478 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1160 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 5489 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1167 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5500 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1174 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_TEMP_VAR_FUN_CALL, E_TEMP_VAR_FUN_CALL_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[-3].node));
    nd->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, nd, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 5511 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1183 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5517 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1185 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FOR_SYSTEM_TIME, E_FOR_SYSTEM_TIME_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FOR_SYSTEM_TIME_SERIALIZE_FORMAT;
}
#line 5526 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1193 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "AS OF "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5535 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1198 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FROM "+(yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));
    delete((yyvsp[0].node));
}
#line 5545 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1204 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));
    delete((yyvsp[0].node));
}
#line 5555 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1210 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CONTAINED IN("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));
    delete((yyvsp[-1].node));
}
#line 5565 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1216 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "ALL"); }
#line 5571 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1221 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5580 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1229 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_VALUE_CTOR, E_TABLE_VALUE_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 5589 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1237 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5598 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1242 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-3].node));
    nd->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_PARENS_LIST, E_LIST_PROPERTY_CNT, nd, (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5609 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1251 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5615 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1253 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_TABLE_HINT, E_WITH_TABLE_HINT_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &WITH_TABLE_HINT_SERIALIZE_FORMAT;
}
#line 5624 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1262 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5633 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1267 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5642 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1277 "./sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[0]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = (yyvsp[0].node);
}
#line 5655 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1286 "./sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::check_expr_table_hint((yyvsp[0].node)))
    {
        yyerror(&(yylsp[-1]), result, scanner, "table hint format error");
        YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_HINT_NOEXPAND, E_TABLE_HINT_NOEXPAND_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_HINT_NOEXPAND_SERIALIZE_FORMAT;
}
#line 5669 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1301 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 5678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1308 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1315 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5693 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1320 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 5702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1325 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5711 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1330 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5720 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1335 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5729 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1340 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5738 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1345 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5747 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1350 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5756 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1358 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5765 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1363 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5774 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1368 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5784 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1374 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 5794 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1380 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 5804 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1386 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "OUTER");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &APPLY_TB_SERIALIZE_FORMAT;
}
#line 5814 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1392 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5823 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1397 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1402 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_TABLE, E_PIVOT_TABLE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &PIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5841 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1407 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5850 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1412 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5859 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1417 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_TABLE, E_UNPIVOT_TABLE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &UNPIVOT_TABLE_SERIALIZE_FORMAT;
}
#line 5868 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1425 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PIVOT_CLAUSE, E_PIVOT_CLAUSE_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5877 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1433 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UNPIVOT_CLAUSE, E_UNPIVOT_CLAUSE_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PIVOT_CLAUSE_SERIALIZE_FORMAT;
}
#line 5886 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1441 "./sqlparser.y" /* yacc.c:1646  */
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
#line 5901 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1452 "./sqlparser.y" /* yacc.c:1646  */
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
#line 5916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1463 "./sqlparser.y" /* yacc.c:1646  */
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
#line 5931 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1474 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 5939 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1480 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5945 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1481 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 5951 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1482 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 5957 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1483 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 3; }
#line 5963 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1484 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 4; }
#line 5969 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1488 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5975 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1489 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5981 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1496 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5990 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1504 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6000 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1510 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 6010 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1516 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 6021 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1523 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 6031 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1529 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 6042 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1536 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 6052 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1542 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 6063 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1549 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 6073 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1555 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 6084 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1562 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6094 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1568 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6105 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1575 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6115 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1581 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6126 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1588 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6136 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1594 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6147 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1601 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6157 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1607 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 6168 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1622 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 6174 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1623 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 6180 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1624 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "$"+(yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 6186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1632 "./sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 6196 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1641 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 6205 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1651 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 6214 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1656 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 6223 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1661 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 6232 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1666 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 6241 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1671 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 6250 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1676 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 6259 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1681 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 6268 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1686 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 6277 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1691 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 6286 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1701 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_COLLATE_SERIALIZE_FORMAT;
}
#line 6295 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1706 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 6304 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1711 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_LE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_LE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_LE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6333 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1736 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 6342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1741 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_LT_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_LT_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_LT_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6371 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1766 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 6380 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1771 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_EQ_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_EQ_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_EQ_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6409 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1796 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 6418 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1801 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_GE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_GE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_GE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6447 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1826 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 6456 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1831 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_GT_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_GT_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_GT_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6485 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1856 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 6494 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1861 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    switch ((yyvsp[-1].ival))
    {
        case 0:
        {
            (yyval.node)->serialize_format = &OP_NE_ALL_SERIALIZE_FORMAT;
        }
            break;
        case 1:
        {
            (yyval.node)->serialize_format = &OP_NE_SOME_SERIALIZE_FORMAT;
        }
            break;
        case 2:
        {
            (yyval.node)->serialize_format = &OP_NE_ANY_SERIALIZE_FORMAT;
        }
            break;
        default:
            /* unreachable */
            break;
    }
}
#line 6523 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1886 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 6532 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1891 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 6541 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1896 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 6550 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1901 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 6559 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1906 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_ADD_SERIALIZE_FORMAT;
}
#line 6568 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1911 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_MINUS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_MINUS_SERIALIZE_FORMAT;
}
#line 6577 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1916 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_MUL_SERIALIZE_FORMAT;
}
#line 6586 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1921 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_DIV, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_DIV_SERIALIZE_FORMAT;
}
#line 6595 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1926 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_REM, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_REM_SERIALIZE_FORMAT;
}
#line 6604 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1931 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_AND_SERIALIZE_FORMAT;
}
#line 6613 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1936 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_OR_SERIALIZE_FORMAT;
}
#line 6622 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1941 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ASS_BIT_XOR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ASS_BIT_XOR_SERIALIZE_FORMAT;
}
#line 6631 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1946 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 6640 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1951 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6649 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1956 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6658 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1961 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6667 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1966 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6676 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1971 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 6685 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1976 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 6694 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1981 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 6703 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1986 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 6712 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1991 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 6721 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1996 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 6730 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 2001 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 6739 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 2010 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 6748 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 2018 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 6757 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 2025 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6763 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 2032 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 6772 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 2040 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 6781 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 2047 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6787 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 2049 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 6796 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 2062 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6808 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 2070 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 6819 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 2077 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 2086 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6847 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 2097 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6859 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 2105 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6870 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 2112 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6881 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 2119 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6892 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 2126 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEADD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6907 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 2137 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEDIFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6922 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 2148 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATENAME");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6935 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 2157 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DATEPART");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6948 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 2166 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6959 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 2173 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GETUTCDATE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6970 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 2180 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6985 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 2191 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "IDENTITY");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6996 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 2198 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN_ACTIVE_ROWVERSION");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 7007 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2205 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7020 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2214 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list2 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list2->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-5].node), expr_list2);
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-7].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STUFF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7037 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2227 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 7048 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2234 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 7059 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2241 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ISNULL");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7072 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2253 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7083 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2260 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7094 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2267 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7105 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2274 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "AVG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7116 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2281 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7127 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2288 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7138 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2295 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7149 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2302 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MAX");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7160 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2309 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7171 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2316 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7182 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2323 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7193 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2330 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "MIN");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7204 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2337 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7215 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2344 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7226 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2351 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7237 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2358 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7248 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2365 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7259 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2372 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2379 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7281 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2386 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEV");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7292 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2393 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7303 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2400 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7314 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2407 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7325 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2414 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "STDEVP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7336 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2421 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7347 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2428 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7358 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2435 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7369 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2442 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VAR");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7380 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2449 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7391 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2456 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7402 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2463 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7413 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2470 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "VARP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7424 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2477 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7435 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2484 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7446 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2491 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7457 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2498 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7468 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2505 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7480 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2513 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7492 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2521 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7503 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2528 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7514 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2535 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7525 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2542 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7536 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2549 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7548 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2557 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COUNT_BIG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7560 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2565 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7571 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2572 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM_AGG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 7582 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2579 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7593 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2586 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING_ID");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7604 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2596 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "FIRST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7615 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2603 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAST_VALUE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7626 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2610 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7637 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2617 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7650 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2626 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LAG");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7665 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2637 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7676 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2644 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7689 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2653 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* expr_list1 = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    expr_list1->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-6].node), expr_list1);
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEAD");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7704 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2666 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7715 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2673 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2680 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7737 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2687 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NTILE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7748 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2697 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7760 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2705 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7772 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2713 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7784 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2721 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7796 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2729 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7808 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2737 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7818 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2743 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7829 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2750 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7840 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2757 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7851 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2764 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7862 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2771 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), (yyvsp[-9].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7874 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2779 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), (yyvsp[-8].node));
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7886 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2787 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), (yyvsp[-7].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7898 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2795 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), nullptr, (yyvsp[-6].node), nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7910 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2803 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeNonTerminalNode(E_PROC_IDENT, E_PROC_IDENT_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-5].node), nullptr, nullptr);
    fun_name->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7922 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2811 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7932 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2817 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7943 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2824 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7954 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2831 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "BINARY_CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7965 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2838 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CHECKSUM");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 7976 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2847 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7985 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2852 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 7994 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2857 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 8003 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2862 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 8012 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2867 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 8021 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2872 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 8030 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2877 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 8039 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2882 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 8048 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2890 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 8058 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2896 "./sqlparser.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 8068 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2905 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 8074 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2907 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 8080 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2909 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 8086 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2911 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 8092 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2913 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 8098 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2915 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 8104 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2917 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 8110 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2919 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 8116 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2921 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 8122 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2923 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 8128 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2925 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 8134 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2927 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 8140 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2929 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 8146 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2931 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 8152 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2933 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 8158 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2935 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 8164 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2937 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 8170 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2939 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 8176 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2941 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 8182 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2943 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 8188 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2945 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 8194 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2947 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 8200 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 2949 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 8206 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 2951 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 8212 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2953 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 8218 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2955 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 8224 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2957 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 8230 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2959 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 8236 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 2963 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 8244 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 2967 "./sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 8252 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 468:
#line 2985 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIGINT"); }
#line 8258 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 469:
#line 2987 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "INT"); }
#line 8264 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 470:
#line 2989 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLINT"); }
#line 8270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 471:
#line 2991 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TINYINT"); }
#line 8276 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 472:
#line 2993 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-3].node)); delete((yyvsp[-1].node)); }
#line 8282 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 473:
#line 2995 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8288 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 474:
#line 2997 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DECIMAL"); }
#line 8294 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 475:
#line 2999 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-3].node)); delete((yyvsp[-1].node)); }
#line 8300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 476:
#line 3001 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8306 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 477:
#line 3003 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NUMERIC"); }
#line 8312 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 478:
#line 3005 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BIT"); }
#line 8318 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 479:
#line 3007 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "MONEY"); }
#line 8324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 480:
#line 3009 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLMONEY"); }
#line 8330 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 481:
#line 3011 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "REAL"); }
#line 8336 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 482:
#line 3013 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "FLOAT("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 483:
#line 3015 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATE"); }
#line 8348 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 484:
#line 3017 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8354 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 485:
#line 3019 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIMEOFFSET"); }
#line 8360 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 486:
#line 3021 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8366 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 487:
#line 3023 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME2"); }
#line 8372 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 488:
#line 3025 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "SMALLDATETIME"); }
#line 8378 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 489:
#line 3027 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "DATETIME"); }
#line 8384 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 490:
#line 3029 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8390 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 491:
#line 3031 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TIME"); }
#line 8396 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 492:
#line 3033 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8402 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 493:
#line 3035 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "CHAR"); }
#line 8408 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 494:
#line 3037 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8414 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 495:
#line 3039 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR(MAX)"); }
#line 8420 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 496:
#line 3041 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARCHAR"); }
#line 8426 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 497:
#line 3043 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "TEXT"); }
#line 8432 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 498:
#line 3045 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8438 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 499:
#line 3047 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NCHAR"); }
#line 8444 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 500:
#line 3049 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8450 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 501:
#line 3051 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR(MAX)"); }
#line 8456 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 502:
#line 3053 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "NVARCHAR"); }
#line 8462 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 503:
#line 3055 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8468 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 504:
#line 3057 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "BINARY"); }
#line 8474 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 505:
#line 3059 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY("+(yyvsp[-1].node)->text()+")"); delete((yyvsp[-1].node)); }
#line 8480 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 506:
#line 3061 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY(MAX)"); }
#line 8486 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 507:
#line 3063 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_DATA_TYPE, "VARBINARY"); }
#line 8492 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 508:
#line 3067 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 8498 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 509:
#line 3068 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 8504 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 510:
#line 3069 "./sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 8510 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 8514 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 3071 "./sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
