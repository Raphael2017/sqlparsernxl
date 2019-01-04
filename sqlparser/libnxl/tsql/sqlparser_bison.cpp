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
#include <strings.h>

int yyerror(YYLTYPE* llocp, ParseResult* result, yyscan_t scanner, const char *msg) {
    result->accept = false;
    result->errFirstLine = llocp->first_line;
    result->errFirstColumn = llocp->first_column;
    result->errDetail = msg;
	return 0;
}


#line 96 "sqlparser_bison.cpp" /* yacc.c:339  */

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
#line 36 "sqlparser.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 132 "sqlparser_bison.cpp" /* yacc.c:355  */

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
    ADD = 295,
    ANY = 296,
    ALL = 297,
    ALTER = 298,
    AS = 299,
    ASC = 300,
    BEGI = 301,
    BIGINT = 302,
    BINARY = 303,
    BOOLEAN = 304,
    BOTH = 305,
    BY = 306,
    CASCADE = 307,
    CASE = 308,
    CHARACTER = 309,
    CLUSTER = 310,
    COMMENT = 311,
    COMMIT = 312,
    CONSISTENT = 313,
    COLUMN = 314,
    COLUMNS = 315,
    CREATE = 316,
    CREATETIME = 317,
    CURRENT_USER = 318,
    CHANGE_OBI = 319,
    SWITCH_CLUSTER = 320,
    DATE = 321,
    DATETIME = 322,
    DEALLOCATE = 323,
    DECIMAL = 324,
    DEFAULT = 325,
    DELETE = 326,
    DESC = 327,
    DESCRIBE = 328,
    DISTINCT = 329,
    DOUBLE = 330,
    DROP = 331,
    DUAL = 332,
    ELSE = 333,
    END = 334,
    END_P = 335,
    ERROR = 336,
    EXECUTE = 337,
    EXISTS = 338,
    EXPLAIN = 339,
    FLOAT = 340,
    FOR = 341,
    FROM = 342,
    FROZEN = 343,
    FORCE = 344,
    GLOBAL = 345,
    GLOBAL_ALIAS = 346,
    GRANT = 347,
    GROUP = 348,
    HAVING = 349,
    HINT_BEGIN = 350,
    HINT_END = 351,
    HOTSPOT = 352,
    IDENTIFIED = 353,
    IF = 354,
    INTEGER = 355,
    INSERT = 356,
    INTO = 357,
    KEY = 358,
    LEADING = 359,
    LIMIT = 360,
    LOCAL = 361,
    LOCKED = 362,
    MEDIUMINT = 363,
    MEMORY = 364,
    MODIFYTIME = 365,
    MASTER = 366,
    NUMERIC = 367,
    OFFSET = 368,
    ORDER = 369,
    OPTION = 370,
    OUTER = 371,
    PARAMETERS = 372,
    PERCENT = 373,
    PASSWORD = 374,
    PRECISION = 375,
    PREPARE = 376,
    PRIMARY = 377,
    READ_STATIC = 378,
    REAL = 379,
    RENAME = 380,
    REPLACE = 381,
    RESTRICT = 382,
    PRIVILEGES = 383,
    REVOKE = 384,
    ROLLBACK = 385,
    KILL = 386,
    READ_CONSISTENCY = 387,
    SCHEMA = 388,
    SCOPE = 389,
    SELECT = 390,
    SESSION = 391,
    SESSION_ALIAS = 392,
    SET = 393,
    SHOW = 394,
    SMALLINT = 395,
    SNAPSHOT = 396,
    SPFILE = 397,
    START = 398,
    STATIC = 399,
    SYSTEM = 400,
    STRONG = 401,
    SET_MASTER_CLUSTER = 402,
    SET_SLAVE_CLUSTER = 403,
    SLAVE = 404,
    TABLE = 405,
    TABLES = 406,
    THEN = 407,
    TIES = 408,
    TIME = 409,
    TIMESTAMP = 410,
    TINYINT = 411,
    TRAILING = 412,
    TRANSACTION = 413,
    TO = 414,
    TOP = 415,
    UPDATE = 416,
    USER = 417,
    VALUES = 418,
    VARCHAR = 419,
    VARBINARY = 420,
    WHERE = 421,
    WHEN = 422,
    WITH = 423,
    WORK = 424,
    PROCESSLIST = 425,
    QUERY = 426,
    CONNECTION = 427,
    WEAK = 428,
    AVG = 429,
    BROWSE = 430,
    CHECKSUM_AGG = 431,
    COUNT = 432,
    COUNT_BIG = 433,
    GROUPING = 434,
    GROUPING_ID = 435,
    HASH = 436,
    MAX = 437,
    MIN = 438,
    NOLOCK = 439,
    NOWAIT = 440,
    SOME = 441,
    STDEV = 442,
    STDEVP = 443,
    SUM = 444,
    TABLESAMPLE = 445,
    VAR = 446,
    VARP = 447
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 342 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 372 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   756

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  207
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  97
/* YYNRULES -- Number of rules.  */
#define YYNRULES  219
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  338

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   447

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    42,   205,     2,
      46,    47,    40,    38,   203,    39,    48,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   202,
       2,   204,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   206,     2,     2,     2,     2,     2,
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
      35,    36,    37,    43,    45,    49,    50,    51,    52,    53,
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
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   188,   188,   197,   198,   206,   207,   211,   222,   231,
     232,   239,   243,   252,   261,   262,   263,   264,   271,   276,
     280,   293,   294,   303,   307,   312,   318,   324,   333,   334,
     338,   339,   345,   351,   361,   365,   366,   370,   371,   375,
     376,   380,   381,   385,   393,   394,   403,   411,   415,   419,
     426,   430,   434,   441,   445,   452,   457,   461,   465,   472,
     476,   480,   487,   488,   492,   499,   500,   507,   508,   515,
     516,   523,   524,   531,   535,   539,   540,   544,   545,   549,
     550,   551,   552,   553,   554,   555,   556,   557,   558,   559,
     560,   561,   568,   569,   570,   577,   584,   585,   589,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   608,   612,
     613,   614,   615,   616,   617,   621,   622,   626,   630,   631,
     638,   642,   646,   650,   654,   658,   662,   666,   670,   677,
     678,   682,   683,   684,   685,   689,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   711,   715,   723,   727,   731,
     735,   739,   743,   750,   751,   755,   759,   763,   764,   768,
     775,   776,   780,   781,   788,   792,   793,   800,   801,   805,
     806,   810,   814,   821,   822,   827,   828,   833,   834,   835,
     840,   841,   845,   853,   854,   858,   865,   866,   870,   874,
     878,   885,   889,   890,   894,   901,   902,   906,   910,   911,
     915,   922,   923,   927,   928,   929,   933,   937,   938,   942,
     949,   950,   954,   961,   965,   972,   976,   980,   987,   991
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
  "UMINUS", "'('", "')'", "'.'", "ADD", "ANY", "ALL", "ALTER", "AS", "ASC",
  "BEGI", "BIGINT", "BINARY", "BOOLEAN", "BOTH", "BY", "CASCADE", "CASE",
  "CHARACTER", "CLUSTER", "COMMENT", "COMMIT", "CONSISTENT", "COLUMN",
  "COLUMNS", "CREATE", "CREATETIME", "CURRENT_USER", "CHANGE_OBI",
  "SWITCH_CLUSTER", "DATE", "DATETIME", "DEALLOCATE", "DECIMAL", "DEFAULT",
  "DELETE", "DESC", "DESCRIBE", "DISTINCT", "DOUBLE", "DROP", "DUAL",
  "ELSE", "END", "END_P", "ERROR", "EXECUTE", "EXISTS", "EXPLAIN", "FLOAT",
  "FOR", "FROM", "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT",
  "GROUP", "HAVING", "HINT_BEGIN", "HINT_END", "HOTSPOT", "IDENTIFIED",
  "IF", "INTEGER", "INSERT", "INTO", "KEY", "LEADING", "LIMIT", "LOCAL",
  "LOCKED", "MEDIUMINT", "MEMORY", "MODIFYTIME", "MASTER", "NUMERIC",
  "OFFSET", "ORDER", "OPTION", "OUTER", "PARAMETERS", "PERCENT",
  "PASSWORD", "PRECISION", "PREPARE", "PRIMARY", "READ_STATIC", "REAL",
  "RENAME", "REPLACE", "RESTRICT", "PRIVILEGES", "REVOKE", "ROLLBACK",
  "KILL", "READ_CONSISTENCY", "SCHEMA", "SCOPE", "SELECT", "SESSION",
  "SESSION_ALIAS", "SET", "SHOW", "SMALLINT", "SNAPSHOT", "SPFILE",
  "START", "STATIC", "SYSTEM", "STRONG", "SET_MASTER_CLUSTER",
  "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES", "THEN", "TIES", "TIME",
  "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO", "TOP", "UPDATE",
  "USER", "VALUES", "VARCHAR", "VARBINARY", "WHERE", "WHEN", "WITH",
  "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK", "AVG", "BROWSE",
  "CHECKSUM_AGG", "COUNT", "COUNT_BIG", "GROUPING", "GROUPING_ID", "HASH",
  "MAX", "MIN", "NOLOCK", "NOWAIT", "SOME", "STDEV", "STDEVP", "SUM",
  "TABLESAMPLE", "VAR", "VARP", "';'", "','", "'='", "'&'", "'|'",
  "$accept", "sql_stmt", "stmt_list", "stmt", "select_statement",
  "query_expression", "opt_set_op_list", "set_op_list", "set_op",
  "set_op_operator", "query_specification_or_expression",
  "query_specification", "select_list", "select_item",
  "table_or_view_or_alias_name", "table_name", "view_name",
  "opt_column_alias", "column_alias", "opt_into_clause", "opt_from_clause",
  "from_clause", "table_source_list", "table_source", "table_or_view_name",
  "derived_table", "subquery_parens", "subquery", "scalar_subquery_parens",
  "scalar_subquery", "joined_table", "join_type", "new_table",
  "joined_table_parens", "opt_where_clause", "where_clause",
  "search_condition", "search_condition_without_match",
  "search_condition_without_match_item_list", "and_or",
  "search_condition_without_match_item", "string_expression", "predicate",
  "all_some_any", "expression_list_parens", "expression_list",
  "expression_parens", "expression", "column", "constant",
  "scalar_function", "scalar_function_name", "unary_operator",
  "binary_operator", "user_defined_function",
  "aggregate_windowed_function", "aggregate_windowed_function_name1",
  "aggregate_windowed_function_name2", "comp_op", "opt_table_alias",
  "table_alias", "opt_column_alias_list", "column_alias_list_parens",
  "column_alias_list", "opt_tablesample_clause", "sample_number",
  "opt_table_hint_list", "table_hint_list", "opt_top_clause", "top_clause",
  "opt_with_ties", "top_count", "top_percent", "opt_all_distinct",
  "opt_with_clause", "with_clause", "common_table_expression_list",
  "common_table_expression", "expression_name",
  "cte_query_definition_parens", "cte_query_definition",
  "opt_column_name_list_parens", "column_name_list_parens",
  "column_name_list", "column_name", "opt_order_by_clause",
  "order_by_clause", "order_by_expression_asc_list",
  "order_by_expression_asc", "order_by_expression", "opt_for_clause",
  "for_clause", "opt_option_clause", "option_clause", "query_hint_list",
  "query_hint", "table_hint", YY_NULLPTR
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
      42,    47,    37,   293,    94,   294,    40,    41,    46,   295,
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
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,    59,    44,    61,    38,   124
};
# endif

#define YYPACT_NINF -236

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-236)))

#define YYTABLE_NINF -184

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -32,    28,    47,     0,  -101,  -236,   -23,  -236,  -236,  -236,
     -74,    88,  -236,  -236,   -32,     2,    24,   145,  -236,    28,
     158,   100,  -236,  -236,  -236,  -236,     6,   103,    74,  -236,
     126,  -236,  -236,  -236,  -236,   145,   -23,  -236,  -236,   135,
     -14,   163,    45,   209,  -236,   463,    11,    72,  -236,  -236,
    -236,  -236,   145,  -236,   158,    27,  -236,    91,  -236,   463,
      43,    94,   -39,    18,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,   255,  -236,  -236,  -236,  -236,   178,   179,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,   119,    29,   183,
     185,  -236,    31,  -236,  -236,     1,  -236,  -236,  -236,   190,
     463,  -236,   194,   195,   197,  -236,   185,   550,  -236,    39,
      -5,  -236,   -87,  -236,  -236,  -236,  -236,   196,    33,    84,
    -236,    43,    10,  -236,   204,    78,   463,   463,   249,   168,
     209,    14,   251,   463,  -236,  -236,  -236,  -236,  -236,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,   463,   365,   550,
       2,   -13,   463,  -236,  -236,   143,   155,   165,  -236,    65,
    -236,   142,  -236,  -236,   222,   268,  -236,  -236,   161,   235,
     258,  -236,  -236,     9,   117,  -236,  -236,  -236,   128,  -236,
    -236,   550,   550,  -236,   248,   463,   257,   463,  -236,  -236,
    -236,  -236,   -87,   302,  -236,  -236,  -236,   463,   260,     5,
    -236,    -6,    16,    16,  -236,  -236,  -236,    16,   152,  -236,
    -236,  -236,  -236,   270,  -236,   318,  -236,  -236,  -236,   419,
    -236,   134,   266,   276,   292,   300,     9,     9,  -236,   323,
     137,  -236,   281,  -236,   540,   152,   286,   317,   321,   149,
      -1,  -236,   503,  -236,  -236,   299,   307,  -236,  -236,     9,
    -236,  -236,   114,  -236,   193,   184,   128,  -236,  -236,  -236,
    -236,   -23,  -236,   152,  -236,  -236,  -236,   152,   329,   482,
     150,  -236,  -236,  -236,  -236,  -236,  -236,   463,   309,    98,
     133,  -236,  -236,  -236,   152,   328,    17,  -236,   173,   330,
    -236,  -236,   149,   482,  -236,   550,   463,   309,   -18,   255,
    -236,  -236,  -236,   356,  -236,  -236,  -236,   286,   550,   317,
     373,  -236,  -236,  -236,   176,   128,  -236,    89,  -236,    23,
    -236,  -236,   463,   333,  -236,  -236,  -236,   254,    17,  -236,
    -236,   463,   550,  -236,   335,  -236,   550,  -236
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,     0,     0,     3,     5,     0,   184,   189,   185,
     186,   192,     1,     2,     6,   180,    19,     9,    18,     0,
       0,     0,   193,     4,   181,   182,   169,     0,   207,   199,
      14,    16,    17,     8,    10,    11,     0,   187,   197,     0,
     195,     0,     0,     0,   170,     0,     0,   210,   208,    15,
      12,    19,     9,   194,     0,   183,   188,   175,   177,     0,
     173,     0,   108,   109,   110,   112,   111,   113,   114,   117,
     118,   119,    23,     0,   136,   144,   145,   146,     0,     0,
     137,   138,   140,   141,   139,   142,   143,    39,    21,     0,
       0,    29,     0,   104,   103,    35,   101,    99,   100,     0,
       0,   107,     0,     0,   108,   109,     0,   206,   200,   201,
     203,   209,     0,     7,   211,   196,   191,     0,     0,     0,
     171,   173,     0,    19,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    37,    38,   128,   123,   124,   120,
     121,   122,   126,   125,   127,    26,    36,     0,     0,   105,
     180,   180,     0,   204,   205,     0,     0,     0,   212,   213,
     190,   176,   174,   172,     0,     0,    54,    98,     0,     0,
      96,    60,    40,     0,    62,    42,    22,    24,    35,   108,
     102,    27,   106,   115,     0,     0,     0,     0,   202,   217,
     216,   215,     0,     0,    32,   134,   135,     0,    50,     0,
      43,    44,   153,   153,    51,    49,    58,   153,     0,    20,
      63,    25,   116,     0,   132,     0,   214,    33,    97,     0,
      19,     0,     0,    49,     0,     0,     0,     0,   156,     0,
     162,   155,   157,    47,    77,     0,     0,    64,    65,    67,
       0,    75,    78,   131,   133,     0,     0,    52,    61,     0,
      59,    45,     0,   154,     0,   165,     0,    48,   158,    74,
      73,     0,    91,     0,    72,    71,    68,     0,     0,     0,
       0,   151,   152,   147,   149,   150,   148,     0,     0,     0,
       0,   129,   130,    57,     0,     0,     0,    46,   160,     0,
      66,    76,    67,     0,    81,    78,     0,     0,     0,     0,
      87,    89,    85,     0,    94,    92,    93,     0,    79,    56,
       0,   218,   219,   166,   167,     0,   159,     0,    80,     0,
      86,    88,     0,     0,    84,    90,   164,     0,     0,   161,
      70,     0,    83,    95,     0,   168,    82,   163
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -236,  -236,   370,  -236,   331,     8,  -236,   350,  -236,  -236,
     351,  -236,   259,  -236,  -236,   -42,  -236,   210,   -92,  -236,
    -236,  -236,   164,  -181,  -236,  -236,  -199,  -236,  -236,  -236,
     192,  -236,  -236,  -236,  -236,  -236,  -161,  -207,    76,   110,
    -235,  -234,   180,  -236,   111,  -119,  -236,   -43,   282,  -236,
    -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,  -236,   -55,
     187,  -236,  -236,   102,  -236,  -236,  -236,    85,  -236,  -236,
     297,  -236,  -236,    42,  -236,  -236,   400,  -236,  -236,  -236,
    -236,  -236,  -236,   366,   290,  -236,  -236,   278,  -236,  -236,
    -236,  -236,  -236,  -236,   236,  -236,  -236
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,     5,   220,    33,    34,    35,    36,
      17,    18,    87,    88,    89,   106,    91,   145,    92,   129,
     174,   175,   200,   201,   202,   203,   204,   222,    93,   124,
     205,   227,   172,   206,   209,   210,   237,   238,   266,   267,
     239,   240,   241,   307,   301,   169,    94,   242,    96,    97,
      98,    99,   100,   147,   207,   101,   102,   103,   280,   230,
     231,   257,   258,   289,   255,   327,   287,   313,    43,    44,
     120,    60,    61,    26,     6,     7,     9,    10,    11,    56,
     117,    21,    22,    39,    40,    28,    29,   108,   109,   110,
      47,    48,   113,   114,   158,   159,   314
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,    90,   107,   146,   134,   135,   224,   322,   198,   122,
     225,   155,   198,   164,    16,   136,   118,    38,   221,   228,
     137,   138,   139,   140,   141,   268,   142,   186,   259,   184,
     125,     8,   292,   269,   136,   294,   156,   262,    24,   137,
     138,   139,   140,   141,    51,   142,   252,    12,   331,   153,
      57,   199,    58,    24,   177,   199,   136,   149,   165,   318,
     291,   137,   138,   139,   140,   141,   136,   142,   283,   229,
      25,   137,   138,   139,   140,   141,   154,   142,   218,   300,
     161,   123,   292,   168,   170,    25,   146,    95,    90,    13,
     181,    59,   104,   234,    64,    65,    66,    67,   320,    68,
     246,    14,   290,   157,   182,   170,   302,    69,   325,   107,
     291,   136,  -183,   264,   265,   235,   137,   138,   139,   140,
     141,    15,   142,   309,   303,   167,   224,    70,    71,    19,
     225,   134,   135,   284,    20,    73,   104,   105,    64,    65,
      66,    67,   213,    68,   215,     1,   224,    27,   232,    15,
     225,    69,   233,    41,   170,   104,   234,    64,    65,    66,
      67,    38,    68,    45,   288,   -37,    30,    31,    32,    46,
      69,    70,    71,   264,   265,    42,   170,    49,   235,    73,
     323,   236,    53,   304,   305,   296,   297,   143,   144,    54,
      70,    71,   185,   187,   136,   111,   112,   226,    73,   137,
     138,   139,   140,   141,     1,   142,   143,   144,   195,    55,
     311,   312,    62,    63,    64,    65,    66,    67,  -178,    68,
     119,   121,   -38,   288,   126,   127,   295,    69,   143,   144,
     128,   131,   130,   132,   298,   133,   148,   308,   143,   144,
     150,   151,   152,   160,   236,   122,   162,    70,    71,    72,
     295,   166,   171,   319,   179,    73,   170,   190,   104,   105,
      64,    65,    66,    67,   173,    68,   189,   191,   192,  -179,
     193,   194,    74,    69,    75,    76,    77,    78,    79,   332,
      80,    81,   196,   143,   144,    82,    83,    84,   336,    85,
      86,   136,   208,    70,    71,   212,   137,   138,   139,   140,
     141,    73,   142,   136,   214,   217,   219,   249,   137,   138,
     139,   140,   141,   247,   142,   250,    74,   243,    75,    76,
      77,    78,    79,   248,    80,    81,   228,   256,   306,    82,
      83,    84,   261,    85,    86,    74,   254,    75,    76,    77,
      78,    79,   263,    80,    81,   -76,   281,   285,    82,    83,
      84,   136,    85,    86,   282,   299,   137,   138,   139,   140,
     141,   286,   142,   293,   324,   244,   143,   144,   104,   105,
      64,    65,    66,    67,   310,    68,   315,   316,   326,   328,
     333,   334,   337,    69,    23,    50,   116,    52,   211,   176,
     251,   223,    74,   330,    75,    76,    77,    78,    79,    15,
      80,    81,   317,    70,    71,    82,    83,    84,   321,    85,
      86,    73,   183,   335,   180,   260,   253,   329,   163,    37,
     115,   178,   104,   105,    64,    65,    66,    67,   216,    68,
     188,     0,     0,     0,     0,     0,     0,    69,    74,     0,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,    82,    83,    84,     0,    85,    86,    70,    71,   245,
       0,   197,     0,   143,   144,    73,   104,   105,    64,    65,
      66,    67,     0,    68,     0,   143,   144,     0,     0,     0,
       0,    69,     0,     0,     0,   104,   234,    64,    65,    66,
      67,     0,    68,     0,     0,     0,     0,     0,     0,     0,
      69,    70,    71,     0,     0,     0,     0,     0,     0,    73,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,     0,   143,   144,     0,     0,     0,    73,   270,
     271,   272,   273,   274,   275,   276,   136,     0,   277,   278,
     279,   137,   138,   139,   140,   141,     0,   142,    74,     0,
      75,    76,    77,    78,    79,     0,    80,    81,     0,     0,
       0,    82,    83,    84,     0,    85,    86,  -109,  -109,  -109,
    -109,  -109,  -109,  -109,     0,  -109,  -109,  -109,  -109,  -109,
    -109,  -109,  -109,   136,  -109,     0,     0,     0,   137,   138,
     139,   140,   141,     0,   142,     0,     0,     0,     0,     0,
       0,     0,    74,     0,    75,    76,    77,    78,    79,     0,
      80,    81,     0,     0,     0,    82,    83,    84,     0,    85,
      86,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,    75,    76,
      77,    78,    79,     0,    80,    81,     0,     0,     0,    82,
      83,    84,     0,    85,    86,    74,     0,    75,    76,    77,
      78,    79,     0,    80,    81,     0,     0,     0,    82,    83,
      84,     0,    85,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   143,   144,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -109,  -109,     0,     0,     0,
       0,     0,     0,     0,     0,   143,   144
};

static const yytype_int16 yycheck[] =
{
      43,    43,    45,    95,     3,     4,    12,    25,     3,    48,
      16,    98,     3,     3,     6,    33,    59,     3,   199,     3,
      38,    39,    40,    41,    42,    26,    44,    40,   235,   148,
      73,     3,   267,    34,    33,   269,   123,   236,    51,    38,
      39,    40,    41,    42,    36,    44,   227,     0,    25,    54,
       5,    46,     7,    51,    40,    46,    33,   100,    48,   293,
     267,    38,    39,    40,    41,    42,    33,    44,   249,    53,
      83,    38,    39,    40,    41,    42,    81,    44,   197,   278,
      47,    73,   317,   126,   127,    83,   178,   130,   130,    89,
     133,    46,     3,     4,     5,     6,     7,     8,   297,    10,
     219,   202,   263,   190,   147,   148,     8,    18,   307,   152,
     317,    33,   144,    24,    25,    26,    38,    39,    40,    41,
      42,   144,    44,   284,    26,    47,    12,    38,    39,   203,
      16,     3,     4,    19,    46,    46,     3,     4,     5,     6,
       7,     8,   185,    10,   187,   177,    12,   123,   203,   144,
      16,    18,   207,    53,   197,     3,     4,     5,     6,     7,
       8,     3,    10,    60,   256,   204,    21,    22,    23,    95,
      18,    38,    39,    24,    25,   169,   219,    51,    26,    46,
     299,    92,    47,    50,    51,    35,    36,   205,   206,   203,
      38,    39,   150,   151,    33,   184,   124,   203,    46,    38,
      39,    40,    41,    42,   177,    44,   205,   206,    47,    46,
     193,   194,     3,     4,     5,     6,     7,     8,   127,    10,
     177,   127,   204,   315,    46,    46,   269,    18,   205,   206,
     111,    48,   203,    48,   277,   204,    46,   280,   205,   206,
      46,    46,   203,    47,    92,    48,   162,    38,    39,    40,
     293,    47,     3,   296,     3,    46,   299,   102,     3,     4,
       5,     6,     7,     8,    96,    10,   123,   102,   203,   127,
      48,     3,   183,    18,   185,   186,   187,   188,   189,   322,
     191,   192,    47,   205,   206,   196,   197,   198,   331,   200,
     201,    33,   175,    38,    39,    47,    38,    39,    40,    41,
      42,    46,    44,    33,    47,     3,    46,    15,    38,    39,
      40,    41,    42,    47,    44,    15,   183,    47,   185,   186,
     187,   188,   189,    47,   191,   192,     3,    46,   195,   196,
     197,   198,    46,   200,   201,   183,   199,   185,   186,   187,
     188,   189,    25,   191,   192,    24,    47,   154,   196,   197,
     198,    33,   200,   201,    47,    46,    38,    39,    40,    41,
      42,   177,    44,    34,     8,    47,   205,   206,     3,     4,
       5,     6,     7,     8,    46,    10,   203,    47,     5,   203,
      47,   127,    47,    18,    14,    35,    55,    36,   178,   130,
     226,   199,   183,   317,   185,   186,   187,   188,   189,   144,
     191,   192,   292,    38,    39,   196,   197,   198,   297,   200,
     201,    46,    47,   328,   132,   235,   229,   315,   121,    19,
      54,   131,     3,     4,     5,     6,     7,     8,   192,    10,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    18,   183,    -1,
     185,   186,   187,   188,   189,    -1,   191,   192,    -1,    -1,
      -1,   196,   197,   198,    -1,   200,   201,    38,    39,    40,
      -1,   203,    -1,   205,   206,    46,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,   205,   206,    -1,    -1,    -1,
      -1,    18,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,   205,   206,    -1,    -1,    -1,    46,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,   183,    -1,
     185,   186,   187,   188,   189,    -1,   191,   192,    -1,    -1,
      -1,   196,   197,   198,    -1,   200,   201,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    33,    44,    -1,    -1,    -1,    38,    39,
      40,    41,    42,    -1,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   183,    -1,   185,   186,   187,   188,   189,    -1,
     191,   192,    -1,    -1,    -1,   196,   197,   198,    -1,   200,
     201,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   183,    -1,   185,   186,
     187,   188,   189,    -1,   191,   192,    -1,    -1,    -1,   196,
     197,   198,    -1,   200,   201,   183,    -1,   185,   186,   187,
     188,   189,    -1,   191,   192,    -1,    -1,    -1,   196,   197,
     198,    -1,   200,   201,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   205,   206,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   206,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   205,   206
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   177,   208,   209,   210,   211,   281,   282,     3,   283,
     284,   285,     0,    89,   202,   144,   212,   217,   218,   203,
      46,   288,   289,   209,    51,    83,   280,   123,   292,   293,
      21,    22,    23,   213,   214,   215,   216,   283,     3,   290,
     291,    53,   169,   275,   276,    60,    95,   297,   298,    51,
     214,   212,   217,    47,   203,    46,   286,     5,     7,    46,
     278,   279,     3,     4,     5,     6,     7,     8,    10,    18,
      38,    39,    40,    46,   183,   185,   186,   187,   188,   189,
     191,   192,   196,   197,   198,   200,   201,   219,   220,   221,
     222,   223,   225,   235,   253,   254,   255,   256,   257,   258,
     259,   262,   263,   264,     3,     4,   222,   254,   294,   295,
     296,   184,   124,   299,   300,   290,   211,   287,   254,   177,
     277,   127,    48,   212,   236,   254,    46,    46,   111,   226,
     203,    48,    48,   204,     3,     4,    33,    38,    39,    40,
      41,    42,    44,   205,   206,   224,   225,   260,    46,   254,
      46,    46,   203,    54,    81,    98,   123,   190,   301,   302,
      47,    47,   162,   277,     3,    48,    47,    47,   254,   252,
     254,     3,   239,    96,   227,   228,   219,    40,   291,     3,
     255,   254,   254,    47,   252,   280,    40,   280,   294,   123,
     102,   102,   203,    48,     3,    47,    47,   203,     3,    46,
     229,   230,   231,   232,   233,   237,   240,   261,   175,   241,
     242,   224,    47,   254,    47,   254,   301,     3,   252,    46,
     212,   230,   234,   237,    12,    16,   203,   238,     3,    53,
     266,   267,   266,   266,     4,    26,    92,   243,   244,   247,
     248,   249,   254,    47,    47,    40,   252,    47,    47,    15,
      15,   229,   230,   267,   199,   271,    46,   268,   269,   244,
     249,    46,   233,    25,    24,    25,   245,   246,    26,    34,
      26,    27,    28,    29,    30,    31,    32,    35,    36,    37,
     265,    47,    47,   230,    19,   154,   177,   273,   225,   270,
     243,   244,   247,    34,   248,   254,    35,    36,   254,    46,
     233,   251,     8,    26,    50,    51,   195,   250,   254,   243,
      46,   193,   194,   274,   303,   203,    47,   246,   248,   254,
     233,   251,    25,   252,     8,   233,     5,   272,   203,   270,
     245,    25,   254,    47,   127,   274,   254,    47
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   207,   208,   209,   209,   210,   210,   211,   212,   213,
     213,   214,   214,   215,   216,   216,   216,   216,   217,   217,
     218,   219,   219,   220,   220,   220,   220,   220,   221,   221,
     222,   222,   222,   222,   223,   224,   224,   225,   225,   226,
     226,   227,   227,   228,   229,   229,   230,   230,   230,   230,
     231,   232,   233,   234,   235,   236,   237,   237,   237,   238,
     239,   240,   241,   241,   242,   243,   243,   244,   244,   245,
     245,   246,   246,   247,   247,   247,   247,   248,   248,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   250,   250,   250,   251,   252,   252,   253,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   255,   256,
     256,   256,   256,   256,   256,   257,   257,   258,   259,   259,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   261,
     261,   262,   262,   262,   262,   262,   263,   263,   263,   263,
     263,   263,   263,   263,   263,   264,   264,   265,   265,   265,
     265,   265,   265,   266,   266,   266,   267,   268,   268,   269,
     270,   270,   271,   271,   272,   273,   273,   274,   274,   275,
     275,   276,   276,   277,   277,   278,   278,   279,   279,   279,
     280,   280,   280,   281,   281,   282,   283,   283,   284,   285,
     286,   287,   288,   288,   289,   290,   290,   291,   292,   292,
     293,   294,   294,   295,   295,   295,   296,   297,   297,   298,
     299,   299,   300,   301,   301,   302,   302,   302,   303,   303
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     5,     2,     0,
       1,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       7,     1,     3,     1,     3,     4,     2,     3,     1,     1,
       1,     3,     4,     5,     1,     0,     1,     1,     1,     0,
       2,     0,     1,     2,     1,     3,     4,     2,     3,     1,
       1,     1,     3,     1,     3,     1,     5,     4,     1,     2,
       1,     3,     0,     1,     2,     1,     3,     1,     2,     2,
       4,     1,     1,     2,     2,     1,     1,     1,     1,     3,
       4,     3,     6,     5,     4,     3,     4,     3,     4,     3,
       4,     2,     1,     1,     1,     3,     1,     3,     3,     1,
       1,     1,     3,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       4,     5,     4,     5,     4,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     0,     1,     3,
       1,     3,     0,     6,     1,     0,     2,     1,     3,     0,
       1,     3,     4,     0,     2,     1,     3,     1,     1,     3,
       0,     1,     1,     0,     1,     2,     1,     3,     4,     1,
       3,     1,     0,     1,     3,     1,     3,     1,     0,     1,
       3,     1,     3,     1,     2,     2,     1,     0,     1,     2,
       0,     1,     2,     1,     3,     2,     2,     2,     1,     1
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
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1688 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1694 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1700 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1706 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1712 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1718 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1724 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1730 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* sql_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1736 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* stmt_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1742 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1748 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* select_statement  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1754 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* query_expression  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1760 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* opt_set_op_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1766 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* set_op_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1772 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* set_op  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1778 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* set_op_operator  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1784 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* query_specification_or_expression  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1790 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* query_specification  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1796 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* select_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1802 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* select_item  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1808 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* table_or_view_or_alias_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1814 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* table_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1820 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* view_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1826 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* opt_column_alias  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1832 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* column_alias  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1838 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* opt_into_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1844 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* opt_from_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1850 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* from_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1856 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* table_source_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1862 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* table_source  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1868 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* table_or_view_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1874 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* derived_table  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1880 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* subquery_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1886 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* subquery  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1892 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* scalar_subquery_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1898 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* scalar_subquery  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1904 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* joined_table  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1910 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* join_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1916 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* new_table  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1922 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* joined_table_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1928 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* opt_where_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1934 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* where_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1940 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* search_condition  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1946 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* search_condition_without_match  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1952 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* search_condition_without_match_item_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1958 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* and_or  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1964 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* search_condition_without_match_item  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1970 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* string_expression  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1976 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* predicate  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1982 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* all_some_any  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1988 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* expression_list_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1994 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* expression_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2000 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* expression_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2006 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* expression  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2012 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* column  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2018 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* constant  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2024 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* scalar_function  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2030 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* scalar_function_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2036 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* unary_operator  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2042 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* binary_operator  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2048 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* aggregate_windowed_function  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2054 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* aggregate_windowed_function_name1  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2060 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* aggregate_windowed_function_name2  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2066 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 265: /* comp_op  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2072 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* opt_table_alias  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2078 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* table_alias  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2084 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* opt_column_alias_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2090 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* column_alias_list_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2096 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* column_alias_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2102 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 271: /* opt_tablesample_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2108 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* sample_number  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2114 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* opt_table_hint_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2120 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* opt_top_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2126 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* top_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2132 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* opt_with_ties  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2138 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 278: /* top_count  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2144 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 279: /* top_percent  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2150 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 280: /* opt_all_distinct  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2156 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 281: /* opt_with_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2162 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 282: /* with_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2168 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* common_table_expression_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2174 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 284: /* common_table_expression  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2180 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 285: /* expression_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2186 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 286: /* cte_query_definition_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2192 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 287: /* cte_query_definition  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2198 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 288: /* opt_column_name_list_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2204 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 289: /* column_name_list_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2210 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 290: /* column_name_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2216 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 291: /* column_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2222 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 292: /* opt_order_by_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2228 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 293: /* order_by_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2234 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 294: /* order_by_expression_asc_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2240 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* order_by_expression_asc  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2246 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 296: /* order_by_expression  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2252 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* opt_for_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2258 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* for_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2264 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* opt_option_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2270 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* option_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2276 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* query_hint_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2282 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* query_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2288 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* table_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2294 "sqlparser_bison.cpp" /* yacc.c:1257  */
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
#line 59 "sqlparser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 2411 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 189 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 2605 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 199 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &STMT_LIST_SERIALIZE_FORMAT;
}
#line 2614 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 207 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2620 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 212 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[-3].node);
  (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-4].node));
  (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
  (yyval.node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[-1].node));
  (yyval.node)->setChild(E_SELECT_OPT_OPTION, (yyvsp[0].node))
}
#line 2632 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 223 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-1].node);
  (yyvsp[0].node);
}
#line 2642 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 231 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2648 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 233 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = (yyvsp[0].node);
}
#line 2656 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 240 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2664 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 244 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-1].node);
  (yyvsp[0].node);
}
#line 2674 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 253 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-1].node);
  (yyvsp[0].node);
}
#line 2684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 265 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 2692 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 272 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[0].node);
}
#line 2701 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 281 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-5].node);
  (yyvsp[-4].node);
  (yyvsp[-3].node);
  (yyvsp[-2].node);
  (yyvsp[-1].node);
  (yyvsp[0].node);
}
#line 2715 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 295 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-2].node);
  (yyvsp[0].node);
}
#line 2725 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 304 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2733 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 308 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-2].node);
}
#line 2742 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 313 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-3].node);
  (yyvsp[-1].node);
}
#line 2752 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 319 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-1].node);
  (yyvsp[0].node);
}
#line 2762 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 325 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-2].node);
  (yyvsp[0].node);
}
#line 2772 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 340 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-2].node);
  (yyvsp[0].node);
}
#line 2782 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 346 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-3].node);
  (yyvsp[0].node);
}
#line 2792 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 352 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-4].node);
  (yyvsp[-2].node);
  (yyvsp[0].node);
}
#line 2803 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 365 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2809 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 375 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2815 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 380 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2821 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 386 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[0].node);
}
#line 2830 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 395 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-2].node);
  (yyvsp[0].node);
}
#line 2840 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 404 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
  (yyvsp[-3].node);
  (yyvsp[-2].node);
  (yyvsp[-1].node);
  (yyvsp[0].node);
}
#line 2852 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 412 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2860 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 416 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2868 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 420 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2876 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 435 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2884 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 446 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2892 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 458 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2900 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 462 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2908 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 466 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2916 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 481 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2924 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 487 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2930 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 493 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2938 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 501 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2946 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 509 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2954 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 517 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2962 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 525 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 2970 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 532 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2978 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 536 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2986 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 562 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 2994 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 571 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3002 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 578 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3010 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 590 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3018 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 632 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3026 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 639 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3034 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 643 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3042 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 647 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3050 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 651 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3058 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 655 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3066 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 659 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3074 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 663 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3082 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 667 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3090 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 671 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3098 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 686 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3106 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 690 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3114 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 705 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3122 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 712 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 716 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3138 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 724 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3146 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 728 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3154 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 732 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3162 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 736 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3170 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 740 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3178 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 744 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 750 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3192 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 752 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3200 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 763 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3206 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 769 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3214 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 780 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3220 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 782 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3228 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 792 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3234 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 794 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3242 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 805 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3248 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 811 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3256 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 815 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3264 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 821 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = 0; }
#line 3270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 823 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = 0; }
#line 3276 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 829 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3282 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 836 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3288 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 840 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = 0; }
#line 3294 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 842 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3302 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 846 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3310 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 853 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = 0; }
#line 3316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 859 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 879 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3332 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 889 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3338 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 895 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3346 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 910 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3352 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 916 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3360 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 937 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3366 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 943 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3374 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 949 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3380 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 955 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3388 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 962 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3396 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 966 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = nullptr;
}
#line 3404 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 973 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3412 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 977 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3420 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 981 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3428 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 988 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3436 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 992 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = 0;
}
#line 3444 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 3448 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 999 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
