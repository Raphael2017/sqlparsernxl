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

/* Substitute the type names.  */
#define YYSTYPE         SQL2003_STYPE
#define YYLTYPE         SQL2003_LTYPE
/* Substitute the variable and function names.  */
#define yyparse         sql2003_parse
#define yylex           sql2003_lex
#define yyerror         sql2003_error
#define yydebug         sql2003_debug
#define yynerrs         sql2003_nerrs


/* Copy the first part of user declarations.  */
#line 1 "./sqlparser_sql2003.y" /* yacc.c:339  */

/**
 * This Grammar is designed for sql2003.
 * https://github.com/Raphael2017/SQL/blob/master/sql-2003-2.bnf
 * sqlparser.y
 * defines sqlparser_sql2003_bison.h
 * outputs sqlparser_sql2003_bison.cpp
 *
 * Bison Grammar File Spec: http://dinosaur.compilertools.net/bison/bison_6.html
 *
 */
/*********************************
 ** Section 1: C Declarations
 *********************************/

#include "sqlparser_sql2003_bison.h"
#include "sqlparser_sql2003_flex.h"
#include "serialize_format.h"

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


#line 110 "sqlparser_sql2003_bison.cpp" /* yacc.c:339  */

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
   by #include "sqlparser_sql2003_bison.h".  */
#ifndef YY_SQL2003_SQLPARSER_SQL2003_BISON_H_INCLUDED
# define YY_SQL2003_SQLPARSER_SQL2003_BISON_H_INCLUDED
/* Debug traces.  */
#ifndef SQL2003_DEBUG
# if defined YYDEBUG
#if YYDEBUG
#   define SQL2003_DEBUG 1
#  else
#   define SQL2003_DEBUG 0
#  endif
# else /* ! defined YYDEBUG */
#  define SQL2003_DEBUG 0
# endif /* ! defined YYDEBUG */
#endif  /* ! defined SQL2003_DEBUG */
#if SQL2003_DEBUG
extern int sql2003_debug;
#endif
/* "%code requires" blocks.  */
#line 42 "./sqlparser_sql2003.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 154 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef SQL2003_TOKENTYPE
# define SQL2003_TOKENTYPE
  enum sql2003_tokentype
  {
    SQL2003_NAME = 258,
    SQL2003_STRING = 259,
    SQL2003_INTNUM = 260,
    SQL2003_BOOL = 261,
    SQL2003_APPROXNUM = 262,
    SQL2003_NULLX = 263,
    SQL2003_UNKNOWN = 264,
    SQL2003_QUESTIONMARK = 265,
    SQL2003_UMINUS = 266,
    SQL2003_ALL = 267,
    SQL2003_AND = 268,
    SQL2003_ANY = 269,
    SQL2003_ARRAY = 270,
    SQL2003_AS = 271,
    SQL2003_ASC = 272,
    SQL2003_AVG = 273,
    SQL2003_BETWEEN = 274,
    SQL2003_BIGINT = 275,
    SQL2003_BINARY = 276,
    SQL2003_BLOB = 277,
    SQL2003_BOOLEAN = 278,
    SQL2003_BY = 279,
    SQL2003_CASE = 280,
    SQL2003_CAST = 281,
    SQL2003_CHAR = 282,
    SQL2003_CHARACTER = 283,
    SQL2003_CHARACTERS = 284,
    SQL2003_CLOB = 285,
    SQL2003_CNNOP = 286,
    SQL2003_COALESCE = 287,
    SQL2003_CODE_UNITS = 288,
    SQL2003_COLLATE = 289,
    SQL2003_COMP_EQ = 290,
    SQL2003_COMP_GE = 291,
    SQL2003_COMP_GT = 292,
    SQL2003_COMP_LE = 293,
    SQL2003_COMP_LT = 294,
    SQL2003_COMP_NE = 295,
    SQL2003_CONVERT = 296,
    SQL2003_CORRESPONDING = 297,
    SQL2003_COUNT = 298,
    SQL2003_CROSS = 299,
    SQL2003_CUME_DIST = 300,
    SQL2003_CURRENT = 301,
    SQL2003_CURRENT_TIMESTAMP = 302,
    SQL2003_CURRENT_USER = 303,
    SQL2003_DATE = 304,
    SQL2003_DAY = 305,
    SQL2003_DEC = 306,
    SQL2003_DECIMAL = 307,
    SQL2003_DEFAULT = 308,
    SQL2003_DELETE = 309,
    SQL2003_DENSE_RANK = 310,
    SQL2003_DESC = 311,
    SQL2003_DISTINCT = 312,
    SQL2003_DOUBLE = 313,
    SQL2003_ELSE = 314,
    SQL2003_END = 315,
    SQL2003_END_P = 316,
    SQL2003_ESCAPE = 317,
    SQL2003_ERROR = 318,
    SQL2003_EXCEPT = 319,
    SQL2003_EXCLUDE = 320,
    SQL2003_EXISTS = 321,
    SQL2003_FLOAT = 322,
    SQL2003_FOLLOWING = 323,
    SQL2003_FOR = 324,
    SQL2003_FROM = 325,
    SQL2003_FULL = 326,
    SQL2003_G = 327,
    SQL2003_GROUP = 328,
    SQL2003_GROUPING = 329,
    SQL2003_HAVING = 330,
    SQL2003_HOUR = 331,
    SQL2003_IN = 332,
    SQL2003_INNER = 333,
    SQL2003_INSERT = 334,
    SQL2003_INT = 335,
    SQL2003_INTEGER = 336,
    SQL2003_INTERSECT = 337,
    SQL2003_INTERVAL = 338,
    SQL2003_INTO = 339,
    SQL2003_IS = 340,
    SQL2003_JOIN = 341,
    SQL2003_K = 342,
    SQL2003_LARGE = 343,
    SQL2003_LEFT = 344,
    SQL2003_LIKE = 345,
    SQL2003_M = 346,
    SQL2003_MAX = 347,
    SQL2003_MIN = 348,
    SQL2003_MINUTE = 349,
    SQL2003_MOD = 350,
    SQL2003_MONTH = 351,
    SQL2003_MULTISET = 352,
    SQL2003_NATIONAL = 353,
    SQL2003_NATURAL = 354,
    SQL2003_NCHAR = 355,
    SQL2003_NCLOB = 356,
    SQL2003_NO = 357,
    SQL2003_NOT = 358,
    SQL2003_NULLIF = 359,
    SQL2003_NUMERIC = 360,
    SQL2003_OBJECT = 361,
    SQL2003_OCTETS = 362,
    SQL2003_OF = 363,
    SQL2003_ON = 364,
    SQL2003_ONLY = 365,
    SQL2003_OR = 366,
    SQL2003_ORDER = 367,
    SQL2003_OTHERS = 368,
    SQL2003_OUTER = 369,
    SQL2003_OVER = 370,
    SQL2003_PARTITION = 371,
    SQL2003_PERCENT_RANK = 372,
    SQL2003_PRECEDING = 373,
    SQL2003_PRECISION = 374,
    SQL2003_RANGE = 375,
    SQL2003_RANK = 376,
    SQL2003_READ = 377,
    SQL2003_REAL = 378,
    SQL2003_RECURSIVE = 379,
    SQL2003_REF = 380,
    SQL2003_RIGHT = 381,
    SQL2003_ROW = 382,
    SQL2003_ROWS = 383,
    SQL2003_ROW_NUMBER = 384,
    SQL2003_SCOPE = 385,
    SQL2003_SECOND = 386,
    SQL2003_SELECT = 387,
    SQL2003_SESSION_USER = 388,
    SQL2003_SET = 389,
    SQL2003_SETS = 390,
    SQL2003_SMALLINT = 391,
    SQL2003_SOME = 392,
    SQL2003_STDDEV_POP = 393,
    SQL2003_STDDEV_SAMP = 394,
    SQL2003_SUM = 395,
    SQL2003_SYSTEM_USER = 396,
    SQL2003_THEN = 397,
    SQL2003_TIES = 398,
    SQL2003_TIME = 399,
    SQL2003_TIMESTAMP = 400,
    SQL2003_TO = 401,
    SQL2003_UNBOUNDED = 402,
    SQL2003_UNION = 403,
    SQL2003_UPDATE = 404,
    SQL2003_USING = 405,
    SQL2003_VALUES = 406,
    SQL2003_VARCHAR = 407,
    SQL2003_VARYING = 408,
    SQL2003_VAR_POP = 409,
    SQL2003_VAR_SAMP = 410,
    SQL2003_WHEN = 411,
    SQL2003_WHERE = 412,
    SQL2003_WITH = 413,
    SQL2003_WITHOUT = 414,
    SQL2003_YEAR = 415,
    SQL2003_ZONE = 416
  };
#endif

/* Value type.  */
#if ! defined SQL2003_STYPE && ! defined SQL2003_STYPE_IS_DECLARED

union SQL2003_STYPE
{
#line 85 "./sqlparser_sql2003.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;
    NodeType nodetype;

#line 334 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
};

typedef union SQL2003_STYPE SQL2003_STYPE;
# define SQL2003_STYPE_IS_TRIVIAL 1
# define SQL2003_STYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined SQL2003_LTYPE && ! defined SQL2003_LTYPE_IS_DECLARED
typedef struct SQL2003_LTYPE SQL2003_LTYPE;
struct SQL2003_LTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define SQL2003_LTYPE_IS_DECLARED 1
# define SQL2003_LTYPE_IS_TRIVIAL 1
#endif



int sql2003_parse (ParseResult* result, yyscan_t scanner);

#endif /* !YY_SQL2003_SQLPARSER_SQL2003_BISON_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 364 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
         || (defined SQL2003_LTYPE_IS_TRIVIAL && SQL2003_LTYPE_IS_TRIVIAL \
             && defined SQL2003_STYPE_IS_TRIVIAL && SQL2003_STYPE_IS_TRIVIAL)))

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
#define YYFINAL  100
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6080

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  441
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  757

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   416

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   171,     2,     2,     2,   174,     2,     2,
      12,    13,   167,   169,   166,   170,    14,   173,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   165,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   168,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   172,     2,     2,     2,     2,     2,
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
       5,     6,     7,     8,     9,    10,    11,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164
};

#if SQL2003_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   225,   225,   235,   236,   244,   245,   246,   250,   254,
     255,   256,   260,   268,   273,   278,   283,   288,   297,   306,
     323,   340,   341,   349,   358,   366,   371,   378,   379,   405,
     434,   435,   464,   465,   473,   481,   509,   510,   519,   527,
     528,   536,   537,   545,   546,   547,   557,   558,   562,   570,
     571,   579,   588,   591,   595,   602,   603,   613,   618,   626,
     627,   636,   644,   645,   649,   657,   658,   666,   667,   671,
     678,   679,   687,   701,   710,   711,   719,   720,   724,   725,
     737,   742,   750,   751,   756,   762,   768,   775,   781,   788,
     794,   801,   807,   814,   820,   827,   833,   840,   846,   853,
     859,   870,   875,   880,   885,   890,   895,   900,   905,   913,
     918,   924,   929,   935,   941,   950,   961,   972,   983,   990,
     991,   996,   997,  1005,  1006,  1014,  1015,  1023,  1024,  1029,
    1037,  1038,  1046,  1051,  1056,  1061,  1066,  1071,  1076,  1081,
    1086,  1091,  1096,  1101,  1106,  1115,  1116,  1121,  1129,  1130,
    1138,  1139,  1147,  1148,  1156,  1157,  1162,  1170,  1171,  1172,
    1177,  1178,  1179,  1183,  1184,  1192,  1193,  1200,  1200,  1204,
    1205,  1206,  1207,  1208,  1209,  1210,  1211,  1212,  1213,  1217,
    1218,  1223,  1230,  1231,  1235,  1236,  1237,  1238,  1242,  1243,
    1244,  1245,  1246,  1247,  1248,  1253,  1261,  1262,  1266,  1267,
    1275,  1280,  1288,  1289,  1298,  1299,  1300,  1301,  1306,  1312,
    1318,  1324,  1330,  1342,  1357,  1358,  1359,  1360,  1361,  1362,
    1363,  1364,  1365,  1366,  1370,  1379,  1380,  1381,  1382,  1383,
    1387,  1389,  1394,  1399,  1403,  1411,  1412,  1416,  1417,  1422,
    1423,  1432,  1433,  1437,  1438,  1442,  1443,  1444,  1448,  1452,
    1457,  1458,  1459,  1463,  1467,  1468,  1469,  1470,  1471,  1475,
    1481,  1493,  1499,  1506,  1513,  1520,  1529,  1536,  1543,  1550,
    1557,  1566,  1573,  1586,  1587,  1588,  1589,  1593,  1601,  1609,
    1615,  1620,  1628,  1633,  1638,  1643,  1644,  1649,  1650,  1651,
    1652,  1653,  1654,  1658,  1666,  1671,  1675,  1680,  1684,  1685,
    1690,  1697,  1702,  1703,  1708,  1713,  1720,  1724,  1728,  1732,
    1736,  1743,  1750,  1754,  1759,  1764,  1769,  1773,  1777,  1782,
    1787,  1792,  1796,  1803,  1804,  1808,  1813,  1818,  1823,  1828,
    1833,  1838,  1842,  1846,  1850,  1854,  1858,  1862,  1869,  1874,
    1878,  1882,  1889,  1894,  1899,  1904,  1909,  1914,  1919,  1923,
    1928,  1932,  1937,  1941,  1945,  1952,  1957,  1961,  1966,  1973,
    1978,  1982,  1987,  1991,  1996,  2001,  2006,  2011,  2016,  2020,
    2025,  2029,  2034,  2038,  2045,  2050,  2055,  2060,  2068,  2072,
    2076,  2083,  2087,  2091,  2098,  2102,  2109,  2110,  2111,  2115,
    2116,  2120,  2121,  2125,  2126,  2131,  2141,  2142,  2146,  2147,
    2148,  2149,  2150,  2151,  2152,  2153,  2154,  2155,  2156,  2157,
    2158,  2159,  2160,  2161,  2162,  2163,  2164,  2165,  2166,  2167,
    2168,  2169,  2170,  2171,  2172,  2173,  2174,  2175,  2176,  2177,
    2178,  2179,  2180,  2181,  2182,  2183,  2184,  2185,  2186,  2187,
    2188,  2189
};
#endif

#if SQL2003_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "UMINUS", "'('", "')'",
  "'.'", "ALL", "AND", "ANY", "ARRAY", "AS", "ASC", "AVG", "BETWEEN",
  "BIGINT", "BINARY", "BLOB", "BOOLEAN", "BY", "CASE", "CAST", "CHAR",
  "CHARACTER", "CHARACTERS", "CLOB", "CNNOP", "COALESCE", "CODE_UNITS",
  "COLLATE", "COMP_EQ", "COMP_GE", "COMP_GT", "COMP_LE", "COMP_LT",
  "COMP_NE", "CONVERT", "CORRESPONDING", "COUNT", "CROSS", "CUME_DIST",
  "CURRENT", "CURRENT_TIMESTAMP", "CURRENT_USER", "DATE", "DAY", "DEC",
  "DECIMAL", "DEFAULT", "DELETE", "DENSE_RANK", "DESC", "DISTINCT",
  "DOUBLE", "ELSE", "END", "END_P", "ESCAPE", "ERROR", "EXCEPT", "EXCLUDE",
  "EXISTS", "FLOAT", "FOLLOWING", "FOR", "FROM", "FULL", "G", "GROUP",
  "GROUPING", "HAVING", "HOUR", "IN", "INNER", "INSERT", "INT", "INTEGER",
  "INTERSECT", "INTERVAL", "INTO", "IS", "JOIN", "K", "LARGE", "LEFT",
  "LIKE", "M", "MAX", "MIN", "MINUTE", "MOD", "MONTH", "MULTISET",
  "NATIONAL", "NATURAL", "NCHAR", "NCLOB", "NO", "NOT", "NULLIF",
  "NUMERIC", "OBJECT", "OCTETS", "OF", "ON", "ONLY", "OR", "ORDER",
  "OTHERS", "OUTER", "OVER", "PARTITION", "PERCENT_RANK", "PRECEDING",
  "PRECISION", "RANGE", "RANK", "READ", "REAL", "RECURSIVE", "REF",
  "RIGHT", "ROW", "ROWS", "ROW_NUMBER", "SCOPE", "SECOND", "SELECT",
  "SESSION_USER", "SET", "SETS", "SMALLINT", "SOME", "STDDEV_POP",
  "STDDEV_SAMP", "SUM", "SYSTEM_USER", "THEN", "TIES", "TIME", "TIMESTAMP",
  "TO", "UNBOUNDED", "UNION", "UPDATE", "USING", "VALUES", "VARCHAR",
  "VARYING", "VAR_POP", "VAR_SAMP", "WHEN", "WHERE", "WITH", "WITHOUT",
  "YEAR", "ZONE", "';'", "','", "'*'", "'^'", "'+'", "'-'", "'!'", "'|'",
  "'/'", "'%'", "$accept", "sql_stmt", "stmt_list", "stmt", "dql_stmt",
  "dml_stmt", "insert_stmt", "insert_columns_and_source",
  "from_constructor", "delete_stmt", "update_stmt", "update_elem_list",
  "update_elem", "select_stmt", "query_expression",
  "query_expression_body", "query_term", "query_primary",
  "select_with_parens", "simple_table", "opt_where", "opt_from_clause",
  "opt_groupby", "grouping_element_list", "grouping_element",
  "opt_order_by", "order_by", "sort_list", "sort_key", "opt_asc_desc",
  "opt_having", "with_clause", "with_list", "common_table_expr",
  "opt_derived_column_list", "simple_ident_list_with_parens",
  "simple_ident_list", "opt_distinct", "select_expr_list", "projection",
  "from_list", "table_reference", "table_primary",
  "table_primary_non_join", "opt_simple_ident_list_with_parens",
  "column_ref", "relation_factor", "joined_table", "join_type",
  "join_outer", "search_condition", "boolean_term", "boolean_factor",
  "boolean_test", "boolean_primary", "predicate", "row_expr", "factor0",
  "factor1", "factor2", "factor3", "factor4", "row_expr_list", "in_expr",
  "truth_value", "comp_op", "cnn_op", "comp_all_some_any_op",
  "plus_minus_op", "star_div_percent_mod_op", "expr_const", "case_expr",
  "case_arg", "when_clause_list", "when_clause", "case_default",
  "func_expr", "aggregate_windowed_function", "aggregate_function_name",
  "ranking_windowed_function", "ranking_function_name", "over_clause",
  "window_specification", "window_name", "window_specification_details",
  "opt_existing_window_name", "opt_window_partition_clause",
  "opt_window_frame_clause", "window_frame_units", "window_frame_extent",
  "window_frame_start", "window_frame_preceding", "window_frame_between",
  "window_frame_bound", "window_frame_following",
  "opt_window_frame_exclusion", "scalar_function", "function_call_keyword",
  "data_type", "user_defined_type_name", "reference_type",
  "collection_type", "predefined_type", "interval_type",
  "interval_qualifier", "start_field", "end_field",
  "single_datetime_field", "non_second_primary_datetime_field",
  "boolean_type", "datetime_type", "numeric_type", "exact_numeric_type",
  "approximate_numeric_type", "character_string_type",
  "binary_large_object_string_type", "national_character_string_type",
  "large_object_length", "char_length_units", "multiplier",
  "distinct_or_all", "all_some_any", "opt_as_label", "as_label", "label",
  "collate_clause", "name_r", "reserved", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,    40,    41,    46,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   390,   391,
     392,   393,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,    59,    44,    42,    94,    43,
      45,    33,   124,    47,    37
};
# endif

#define YYPACT_NINF -494

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-494)))

#define YYTABLE_NINF -298

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      66,    22,    25,     7,   229,  5768,  5916,    76,    77,   -35,
    -494,  -494,  -494,  -494,  -494,  -494,   110,   -25,   192,  -494,
    -494,    22,    17,  5768,  5768,  -494,  -494,  2284,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
       0,  -494,  -494,  -494,   260,  -494,  5768,  -494,   121,   271,
    -494,  -494,    66,   267,  -494,  -494,   229,   229,   229,   -25,
    -494,   140,   117,  -494,  -494,  -494,  -494,  -494,  -494,  1948,
    2620,   294,   304,   317,   319,  -494,  -494,   325,   331,   333,
    -494,  -494,  -494,  2620,  2620,  -494,   283,   159,  -494,   347,
    1062,   170,    96,   193,  -494,  -494,  -494,  -494,  -494,  -494,
     351,  -494,   354,  -494,  -494,   360,   150,  2620,  4723,  -494,
    5768,  5768,   358,  -494,  -494,  2620,    22,    22,    22,  2116,
    -494,  4424,   228,  2620,  -494,  -494,  -494,    67,  1948,   370,
      63,   371,    69,   227,  2620,  2620,  2620,   385,   375,  2620,
     386,  -494,  -494,  4871,   140,  2284,  2452,  -494,  5019,  -494,
    5768,   230,  2620,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    2620,  -494,  -494,  -494,  -494,  2620,  2620,  1444,   391,  2620,
    2941,   140,   234,    32,  5170,   382,  -494,   392,   240,   400,
    -494,   249,    40,   192,   192,  -494,  1276,   400,  2116,   302,
     401,  -494,  -494,   332,  -494,   693,  -494,  -494,  -494,  -494,
     -25,  -494,  2620,  -494,  2116,   357,   227,    31,   409,   -11,
     410,  -494,    71,  -494,  4276,  4572,  -494,   252,  -494,  -494,
    4572,  -494,   348,  -494,  -494,   412,  -494,  -494,  -494,   170,
      96,   193,  -494,  -494,  -494,   413,     2,  2620,   314,     3,
    5321,  -494,   261,  -494,  2620,  2620,  5768,   420,  5472,  -494,
    5768,    78,  -494,  2620,  -494,  -494,  -494,  1276,    46,   208,
    -494,  -494,  2116,  2116,   127,  2620,  -494,  -494,   397,  -494,
     242,  -494,   425,    79,  2620,    74,   402,  1612,   400,  -494,
     -31,   548,  2620,   379,  -494,  4128,  -494,  5768,  -494,  2620,
    4276,   472,   433,   271,   349,   330,  -494,  4871,   330,   198,
     330,  4871,   359,  -494,   422,   372,  -494,   314,   314,    11,
    5620,  -494,  -494,  5768,   438,  3092,  -494,    69,  -494,  5768,
    5768,   440,  -494,  -494,  -494,   401,  -494,  -494,  -494,   258,
    -494,     4,  -494,  -494,  -494,  1948,  -494,  -494,  -494,   448,
      84,  2620,   425,  2620,  -494,  -494,  -494,  -494,    69,  -494,
    -494,  2620,  2620,    69,  -494,  -494,   376,   449,  -494,    21,
      52,   450,  -494,   457,   458,   352,   461,  -494,  -494,   213,
     224,    60,   466,   467,  -494,   468,  -494,     9,    20,   470,
    -494,   126,  -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,    73,  -494,   446,   471,    15,  -494,  -494,  -494,
    4871,  -494,  -494,   383,  -494,   398,  -494,  -494,  4871,   229,
    2116,  -494,  -494,  -494,   314,  5768,  -494,  -494,  -494,   476,
    3240,  5768,  -494,   272,  -494,  -494,  5768,  -494,  2620,   478,
    -494,  2620,    19,  -494,    85,    69,    69,   384,   487,   489,
     389,   488,   494,   393,   492,   500,   501,   505,  -494,   506,
     503,  -494,   367,  -494,    10,    68,    61,   513,   414,   510,
     500,   519,  5768,   520,   380,   388,   524,   395,   396,   525,
    -494,   521,  -494,   403,  -494,  -494,  -494,  -494,  -494,  2116,
     271,  4871,   439,  2788,   302,  -494,  -494,   526,   428,  3388,
    -494,   295,   518,  3536,  -494,    69,  -494,    69,  2620,  2620,
     532,   535,   539,   543,   551,   544,   546,   562,   485,   558,
      14,    18,   559,   568,   334,   573,   578,   572,   589,   490,
     588,   591,   590,   601,   594,    41,   595,   596,   451,   454,
     597,   455,   456,   599,   612,  5768,   302,  -494,  -494,  2116,
     271,  1780,   483,  -494,   460,    69,  -494,   600,   110,  -494,
    -494,  3684,  3832,  -494,   299,    69,    69,   617,  -494,  -494,
     500,   618,  -494,   500,   619,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,    35,  -494,  -494,   625,  -494,   628,  -494,    45,
     622,  -494,  -494,   624,   629,   633,   630,   632,   640,  -494,
     500,   634,  -494,  -494,   643,   516,   189,  -494,  -494,   191,
    -494,  -494,  -494,   637,   446,   302,  -494,  -494,   644,  2788,
    2620,   -30,  -494,  -494,  -494,  -494,  3980,   639,   642,  -494,
     645,  -494,  -494,   646,   647,  -494,   652,   657,   514,  -494,
     651,  -494,   500,   653,   654,  -494,   655,  5768,   527,   529,
     531,   533,  -494,  -494,  2788,  -494,  -494,  -494,  -494,  -494,
     387,  -494,  -494,  -494,  -494,  -494,  -494,  -494,   658,   659,
    -494,   666,  -494,  -494,  -494,  -494,   517,   522,   523,   528,
     670,   313,   554,   564,   567,   623,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,   -14,    42,  -494,
     649,  -494,  -494,  -494,  -494,    26,  -494,  -494,  -494,   313,
     560,  -494,   580,  -494,  -494,  -494,  -494
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,    67,     0,     0,     0,     0,     3,
       6,     7,    11,    10,     9,     8,    46,    25,    27,    30,
      32,     0,     0,     0,     0,    68,    69,     0,   396,   404,
     438,   214,   405,   406,   407,   439,   408,   440,   409,   222,
     228,   308,   226,   433,   437,   410,   428,   403,   223,   309,
     411,   401,   412,   402,   215,   216,   310,   307,   413,   441,
     414,   415,   429,   416,   436,   227,   417,   418,   225,   430,
     419,   420,   421,   229,   422,   423,   435,   218,   219,   217,
     434,   432,   431,   424,   425,   220,   221,   426,   306,   427,
       0,   398,   399,   400,   101,   397,   419,    57,    59,    62,
       1,     2,     5,     0,    24,    47,    67,    67,    67,    26,
      33,    36,     0,   188,   191,   189,   192,   190,   193,     0,
     196,   406,   439,   440,   267,   269,   194,     0,   441,     0,
     271,   272,    73,     0,     0,   162,     0,    70,   157,     0,
     389,   145,   148,   150,   152,   154,   158,   160,   161,   207,
     398,   206,   399,   205,   204,   400,    84,     0,     0,    58,
       0,     0,     0,    63,     4,     0,     0,     0,     0,     0,
      19,     0,     0,     0,    12,    16,    13,     0,     0,     0,
     163,     0,   197,     0,     0,     0,     0,     0,     0,     0,
       0,   155,   156,     0,    36,     0,     0,   394,     0,   179,
       0,     0,     0,    72,   390,   392,   146,   393,   182,   183,
       0,   187,   184,   185,   186,     0,     0,     0,     0,     0,
       0,    36,    21,     0,     0,   102,    60,     0,    65,     0,
      48,    49,    52,    29,    28,    31,     0,     0,     0,    37,
     121,   123,   125,   127,   130,     0,    17,    18,    15,    14,
      25,    34,     0,   159,     0,   202,   198,     0,     0,     0,
       0,   263,     0,   262,     0,     0,    38,    74,    76,    78,
     389,    77,    39,    71,   259,     0,   391,   395,   180,   147,
     149,   151,   153,   384,   385,     0,     0,     0,     0,     0,
       0,    86,    85,    20,     0,     0,     0,   104,     0,    64,
       0,     0,    61,     0,    53,    54,    51,     0,     0,   163,
     144,   126,     0,     0,     0,     0,   173,   171,   172,   169,
     170,   174,     0,     0,     0,     0,     0,     0,     0,   164,
       0,     0,     0,     0,   199,     0,   266,     0,   268,     0,
       0,     0,    77,    82,     0,   119,   118,     0,   119,     0,
     119,     0,     0,    80,     0,    55,   260,   213,   209,     0,
       0,   224,   261,     0,   104,     0,    22,    23,   108,     0,
       0,   103,    66,    50,   131,   122,   124,   167,   168,     0,
     128,     0,   175,   176,   177,     0,   165,   140,   142,     0,
     136,     0,     0,     0,   178,   386,   388,   387,   132,   181,
     133,     0,     0,   203,   195,   335,   405,   358,   311,   353,
     354,   352,   312,   331,   337,     0,   340,   334,   333,   411,
       0,   373,   372,   336,   341,   420,   332,   432,   431,   425,
     277,     0,   274,   275,   276,   273,   292,   290,   291,   289,
     323,   324,   285,   288,   287,     0,     0,    79,    83,    81,
       0,   120,   115,     0,   116,     0,   117,    75,     0,    67,
       0,    35,   212,   208,   211,   235,   231,   230,   233,   108,
       0,     0,    88,    87,   106,   107,     0,   129,     0,     0,
     143,     0,     0,   141,   138,   200,   201,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   339,     0,
     305,   293,     0,   295,   302,   362,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     264,   280,   281,     0,   284,   286,   265,   270,   113,     0,
       0,     0,     0,     0,    56,   210,   236,     0,   237,     0,
      92,    91,   107,     0,   105,   134,   166,   137,     0,     0,
     356,     0,     0,   350,     0,     0,   348,     0,   377,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   370,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   112,   114,     0,
       0,     0,   223,    40,    41,    44,   232,     0,    46,   100,
      99,     0,     0,    90,    89,   135,   139,     0,   357,   343,
       0,     0,   342,     0,     0,   378,   379,   383,   381,   382,
     380,   376,   375,   351,   330,     0,   328,     0,   338,     0,
     300,   294,   298,     0,     0,     0,     0,   368,     0,   363,
       0,     0,   371,   326,     0,     0,   315,   316,   317,   320,
     321,   322,   346,     0,   283,   109,   111,    43,     0,     0,
       0,   239,    96,    95,    98,    97,     0,     0,     0,   345,
       0,   344,   374,     0,     0,   304,     0,     0,   301,   361,
       0,   359,     0,     0,     0,   366,     0,     0,     0,     0,
       0,     0,   279,   282,     0,    42,   238,   242,   241,   234,
       0,    94,    93,   355,   349,   347,   329,   327,     0,     0,
     365,     0,   364,   369,   325,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   254,   243,   247,   244,   303,
     299,   367,   313,   314,   318,   319,    45,     0,     0,   250,
       0,   252,   246,   245,   248,     0,   240,   251,   253,     0,
       0,   256,     0,   257,   249,   255,   258
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -494,  -494,   592,  -494,  -494,  -494,  -494,  -494,   530,  -494,
    -494,   404,  -494,   -66,    13,     8,   204,   534,  -182,  -494,
    -105,  -494,  -494,  -454,  -494,    99,  -494,   406,  -494,  -494,
    -494,  -494,   101,  -494,  -494,  -109,   399,  -102,   511,  -494,
     361,  -252,  -399,  -494,  -494,  -494,   104,  -140,   362,   -26,
    -162,   416,  -175,  -494,  -494,  -494,   721,   498,   504,   493,
      89,  -494,  -171,   318,   337,  -494,  -494,  -494,  -494,  -494,
    -468,  -494,  -494,   465,  -494,  -494,  -494,  -494,    38,  -494,
     405,  -272,  -494,   248,  -494,  -494,  -494,  -494,  -494,  -494,
      24,  -494,  -494,   -27,  -494,  -494,  -494,  -494,  -494,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -494,    -5,  -494,
    -494,  -494,  -494,  -494,  -494,  -494,  -494,  -493,   107,  -494,
    -494,  -494,   469,   473,   549,  -434,   453,  -494
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,   174,   175,    13,
      14,   221,   222,    15,   179,    17,    18,    19,   135,    20,
     170,   194,   355,   593,   594,   104,   105,   230,   231,   306,
     461,    21,    97,    98,   162,   163,   227,    27,   136,   137,
     266,   267,   268,   269,   449,   138,   139,   271,   352,   452,
     308,   240,   241,   242,   243,   244,   180,   141,   142,   143,
     144,   145,   181,   387,   380,   327,   202,   328,   210,   215,
     146,   147,   183,   255,   256,   333,   148,   149,   150,   151,
     152,   361,   466,   467,   537,   538,   598,   699,   700,   725,
     739,   727,   728,   740,   741,   746,   153,   154,   431,   432,
     433,   434,   435,   436,   501,   502,   631,   503,   155,   437,
     438,   439,   440,   441,   442,   443,   444,   559,   621,   622,
     287,   399,   203,   204,   205,   206,   156,    95
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      93,    93,   247,   177,   166,   167,   168,   239,   524,    22,
     525,   265,   341,    16,   258,   358,   362,   574,    93,    93,
     478,   513,   565,   199,   464,   275,   200,   624,   527,   109,
     110,   626,   516,   489,     1,   548,   199,   199,   199,   200,
     200,   200,   106,    91,    91,   199,   176,   302,   200,   199,
     335,   528,   200,   199,   643,   310,   200,   747,   675,   374,
     304,    91,    91,   311,   492,   199,   199,   615,   200,   200,
     295,   616,   507,   568,   199,   750,   100,   200,     1,     1,
     566,   329,   265,   312,   106,   462,   463,   388,   341,   272,
       1,    93,   330,   697,    24,   453,   391,   199,    23,   305,
     200,   698,   751,   199,   523,   199,   200,   743,   200,    90,
     200,   249,   490,   748,   401,    16,   293,   668,   199,   199,
     670,   200,   200,     2,   342,    16,   107,   111,   112,   171,
     102,   752,   588,   377,    91,    93,   378,   157,   376,   520,
     386,   101,   337,   493,   521,   620,   400,   684,     3,   481,
     549,   508,   569,    93,   392,    93,    93,     4,   265,  -297,
     312,   201,  -101,   744,   220,   265,    93,   393,   107,   265,
     514,   515,   753,   172,   201,   201,   201,   491,    91,    22,
     625,   517,   518,   201,   627,   389,   250,   201,    93,   711,
      16,   201,   535,    93,   211,    93,    91,   159,    91,    91,
     342,     4,     4,   201,   201,   695,   532,   644,   494,    91,
     386,   676,   201,     4,   479,    93,   509,   570,     5,    93,
     693,   173,   191,   192,   567,   103,   522,     6,     6,   252,
     315,    91,   724,   379,   448,   201,    91,   339,    91,     6,
     720,   201,   199,   201,    25,   200,   316,   317,   318,   319,
     320,   321,     4,   738,   505,   506,   201,   201,    91,    93,
      93,   226,    91,   212,   377,    93,    41,   378,   265,   213,
     214,   173,   345,  -102,   158,   365,   265,   108,     6,   346,
     383,   738,   384,   161,  -103,    93,   543,   160,   322,    26,
     348,    93,    49,    93,   165,    93,   323,   270,   534,   344,
     169,   324,    91,    91,   277,   282,   184,  -106,    91,   601,
      56,  -105,    57,   666,   325,   250,   185,   113,   114,   115,
     116,   117,   454,   118,   456,   195,   345,   350,    91,   186,
      93,   187,    93,   346,    91,    93,    91,   188,    91,   208,
     209,   347,    93,   189,   348,   190,    93,   500,   250,   265,
     688,   689,   690,   691,   349,    93,   193,   533,    93,   196,
      93,   216,   722,   217,    93,    93,   218,   586,   270,   126,
     233,   234,   219,    91,   252,    91,    88,   229,    91,   326,
     201,   350,   246,   251,   253,    91,   254,    41,   261,    91,
     260,   113,   114,   115,   116,   117,   298,   118,    91,   263,
     294,    91,   278,    91,   288,   299,   300,    91,    91,   721,
      92,    92,   301,    49,   504,   303,   312,   313,   351,   332,
     314,   587,   336,   338,   354,   356,   357,   655,    92,    92,
     344,    56,   360,    57,   369,   382,   722,   385,   450,   430,
     394,   445,   404,   126,   270,    93,   447,   451,   458,   459,
     460,   270,   470,    93,   476,   270,   480,   345,    94,    99,
      93,   488,   495,   737,   346,    93,    93,   487,   630,   496,
     497,    93,   347,   499,   498,   348,    94,    94,   510,   511,
     512,   656,   519,   200,   526,   349,   344,   531,    91,   696,
     539,   546,   551,   550,   552,   529,    91,    88,   553,   555,
     554,    92,   556,    91,   557,   558,   560,    93,    91,    91,
     561,   562,   350,   345,    91,   563,   564,   615,   571,   344,
     346,   616,   573,   572,   575,   577,    93,   578,   347,   580,
     583,   348,   602,   584,    93,   579,   530,   723,    93,   596,
     585,   349,   581,   582,   607,    92,   345,   597,   608,    99,
      91,   589,   609,   346,   270,   610,   611,   612,   613,   632,
     617,   347,   270,    92,   348,    92,    92,   614,   350,    91,
     315,   623,   628,   629,   349,   618,    92,    91,   633,   619,
      93,    91,   199,   634,   635,   200,   316,   317,   318,   319,
     320,   321,   590,   207,   636,   620,    93,    93,    92,   637,
     638,   350,   640,    92,   639,    92,   641,   642,   645,   646,
     649,   225,   652,    99,   228,   647,   576,   653,   648,   650,
     651,   658,   667,    91,   228,    92,   659,   660,   322,    92,
     673,   669,   671,   674,   677,   270,   323,   678,   680,    91,
      91,   324,   679,   681,   682,   683,    94,   685,   686,   687,
     692,   207,   703,    94,   325,   704,   694,   708,   705,   706,
     707,    93,   709,  -296,   710,   749,   712,   713,   714,    92,
      92,   729,   730,   292,   716,    92,   717,   297,   718,   731,
     719,   732,    93,   736,   742,   743,   733,   734,   744,   654,
     755,   745,   735,   402,   164,    92,   756,   661,   366,   372,
     279,    92,   235,    92,    91,    92,   273,   248,   281,   373,
     483,   455,   457,   536,   280,   315,   477,    94,   207,   326,
     201,   334,   754,   207,   726,    91,     0,   199,   375,   672,
     200,   316,   317,   318,   319,   320,   321,     0,   343,   353,
      92,     0,    92,   364,     0,    92,     0,   276,   140,   368,
       0,   371,    92,   228,     0,     0,    92,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,    92,     0,
      92,     0,     0,   322,    92,    92,     0,     0,     0,     0,
       0,   323,     0,     0,     0,     0,   324,     0,    94,     0,
      94,   715,     0,    94,     0,     0,     0,     0,     0,   325,
      94,     0,     0,     0,    94,     0,     0,     0,     0,     0,
       0,     0,     0,   468,     0,     0,   469,     0,   473,     0,
       0,     0,   474,   475,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   182,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    92,     0,     0,     0,     0,
       0,     0,     0,    92,   326,   201,     0,     0,     0,     0,
      92,     0,     0,     0,     0,    92,    92,     0,   223,     0,
       0,    92,     0,     0,     0,     0,   232,     0,     0,     0,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,     0,   257,     0,   259,     0,     0,
     262,    94,     0,     0,     0,     0,   140,    92,   468,     0,
       0,     0,     0,   541,   542,     0,     0,     0,     0,   544,
       0,     0,     0,     0,     0,     0,    92,     0,   286,     0,
     289,     0,     0,     0,    92,     0,     0,     0,    92,     0,
       0,     0,     0,     0,     0,     0,     0,   309,     0,   245,
       0,     0,     0,     0,     0,    94,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,     0,     0,     0,     0,
       0,     0,     0,     0,    94,     0,     0,     0,     0,     0,
      92,     0,   600,     0,     0,     0,   604,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    92,    92,   359,     0,
       0,     0,     0,     0,     0,   223,   367,     0,     0,     0,
       0,     0,     0,     0,   232,     0,     0,     0,   309,     0,
       0,     0,     0,   245,   245,     0,   381,     0,    94,     0,
       0,     0,     0,     0,     0,   390,     0,     0,   398,     0,
       0,     0,     0,   403,   663,   665,     0,     0,     0,     0,
     446,     0,     0,     0,     0,    28,   197,     0,     0,     0,
       0,    92,     0,     0,     0,     0,     0,     0,     0,     0,
      29,   198,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,    92,     0,    34,     0,   199,    35,    36,   200,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,   482,     0,   484,    41,     0,     0,     0,   702,
      42,    43,   485,   486,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
      94,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,   245,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,   545,
      76,     0,   547,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,     0,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,     0,     0,
       0,     0,     0,     0,   201,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     245,     0,     0,     0,   595,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   605,
     606,     0,     0,     0,     0,     0,     0,     0,     0,    28,
     113,   114,   115,   116,   117,     0,   118,     0,   307,     0,
       0,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,     0,     0,     0,   120,   121,     0,     0,    34,     0,
     245,   122,    36,     0,     0,     0,     0,     0,     0,     0,
     123,    38,    39,     0,    40,     0,   124,   125,     0,    41,
       0,     0,   126,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    44,   237,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,   127,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
     595,     0,   238,   128,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,   129,    72,     0,    73,    74,
      75,     4,   130,     0,    76,   595,     0,    77,    78,    79,
     131,     0,    80,    81,    82,     0,    83,     0,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     6,    87,    88,
      89,     0,     0,     0,     0,   133,   134,    28,   113,   114,
     115,   116,   117,     0,   118,     0,   119,     0,     0,   283,
       0,     0,    29,     0,    30,    31,     0,     0,    32,     0,
       0,     0,   120,   121,     0,     0,    34,     0,     0,   122,
      36,     0,     0,     0,     0,     0,     0,     0,   123,    38,
      39,     0,    40,     0,   124,   125,     0,    41,     0,     0,
     126,     0,    42,    43,   284,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,   127,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,   128,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,   129,    72,     0,    73,    74,    75,     0,
     130,     0,    76,     0,     0,    77,    78,    79,   131,     0,
      80,    81,    82,     0,    83,     0,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,     0,
       0,   285,     0,   133,   134,    28,   113,   114,   115,   116,
     117,     0,   118,     0,   119,     0,     0,   395,     0,   396,
      29,     0,    30,    31,     0,     0,    32,     0,     0,     0,
     120,   121,     0,     0,    34,     0,     0,   122,    36,     0,
       0,     0,     0,     0,     0,     0,   123,    38,    39,     0,
      40,     0,   124,   125,     0,    41,     0,     0,   126,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,   127,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,   128,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,   129,    72,     0,    73,    74,    75,     0,   130,     0,
      76,     0,   397,    77,    78,    79,   131,     0,    80,    81,
      82,     0,    83,     0,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,     0,     0,
       0,   133,   134,    28,   113,   114,   115,   116,   117,     0,
     118,     0,   178,   657,     0,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,     0,     0,     0,   120,   121,
       0,     0,    34,     0,     0,   122,    36,     0,     0,     0,
       0,     0,     0,     0,   123,    38,    39,     0,    40,     0,
     124,   125,     0,    41,     0,     0,   126,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,   127,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,   128,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,   129,
      72,     0,    73,    74,    75,     4,   130,     0,    76,     0,
       0,    77,    78,    79,   131,     0,    80,    81,    82,     0,
      83,     0,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     6,    87,    88,    89,     0,     0,     0,     0,   133,
     134,    28,   113,   114,   115,   116,   117,     0,   118,     0,
     178,     0,     0,     0,     0,     0,    29,     0,    30,    31,
       0,     0,    32,     0,     0,     0,   120,   121,     0,     0,
      34,     0,     0,   122,    36,     0,     0,     0,     0,     0,
       0,     0,   123,    38,    39,     0,    40,     0,   124,   125,
       0,    41,     0,     0,   126,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
     127,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,     0,   128,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    70,    71,   129,    72,     0,
      73,    74,    75,     4,   130,     0,    76,     0,     0,    77,
      78,    79,   131,     0,    80,    81,    82,     0,    83,     0,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     6,
      87,    88,    89,     0,     0,     0,     0,   133,   134,    28,
     113,   114,   115,   116,   117,     0,   118,     0,   236,     0,
       0,     0,     0,     0,    29,     0,    30,    31,     0,     0,
      32,     0,     0,     0,   120,   121,     0,     0,    34,     0,
       0,   122,    36,     0,     0,     0,     0,     0,     0,     0,
     123,    38,    39,     0,    40,     0,   124,   125,     0,    41,
       0,     0,   126,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    44,   237,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,   127,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,   238,   128,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,   129,    72,     0,    73,    74,
      75,     0,   130,     0,    76,     0,     0,    77,    78,    79,
     131,     0,    80,    81,    82,     0,    83,     0,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     0,    87,    88,
      89,     0,     0,     0,     0,   133,   134,    28,   113,   114,
     115,   116,   117,     0,   118,     0,   119,     0,     0,     0,
       0,     0,    29,     0,    30,    31,     0,     0,    32,     0,
       0,     0,   120,   121,     0,     0,    34,     0,     0,   122,
      36,     0,     0,     0,     0,     0,     0,     0,   123,    38,
      39,     0,    40,     0,   124,   125,     0,    41,     0,     0,
     126,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,   127,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,   128,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,   129,    72,     0,    73,    74,    75,     0,
     130,     0,    76,     0,     0,    77,    78,    79,   131,     0,
      80,    81,    82,     0,    83,     0,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,     0,
       0,   132,     0,   133,   134,    28,   113,   114,   115,   116,
     117,     0,   118,     0,   119,   274,     0,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,     0,     0,     0,
     120,   121,     0,     0,    34,     0,     0,   122,    36,     0,
       0,     0,     0,     0,     0,     0,   123,    38,    39,     0,
      40,     0,   124,   125,     0,    41,     0,     0,   126,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,   127,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,   128,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,   129,    72,     0,    73,    74,    75,     0,   130,     0,
      76,     0,     0,    77,    78,    79,   131,     0,    80,    81,
      82,     0,    83,     0,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,     0,     0,
       0,   133,   134,    28,   113,   114,   115,   116,   117,     0,
     118,     0,   119,     0,     0,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,     0,     0,     0,   120,   121,
       0,     0,    34,     0,     0,   122,    36,     0,     0,     0,
       0,     0,     0,     0,   123,    38,    39,     0,    40,     0,
     124,   125,     0,    41,     0,     0,   126,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,   127,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,   128,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,   129,
      72,     0,    73,    74,    75,     0,   130,     0,    76,     0,
       0,    77,    78,    79,   131,     0,    80,    81,    82,     0,
      83,     0,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     0,    87,    88,    89,     0,     0,     0,     0,   133,
     134,    28,   113,   114,   115,   116,   117,     0,   118,     0,
     591,     0,     0,     0,     0,     0,    29,     0,    30,    31,
       0,     0,    32,     0,     0,     0,   120,   121,     0,     0,
      34,     0,     0,   122,    36,     0,     0,     0,     0,     0,
       0,     0,   123,    38,    39,     0,    40,     0,   124,   125,
       0,    41,     0,     0,   126,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    45,
      46,     0,     0,    47,     0,   592,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
     127,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,     0,   128,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    70,    71,   129,    72,     0,
      73,    74,    75,     0,   130,     0,    76,     0,     0,    77,
      78,    79,   131,     0,    80,    81,    82,     0,    83,     0,
       0,     0,     0,    84,    28,    85,    86,     0,     0,     0,
      87,    88,    89,     0,     0,   290,     0,   133,   134,    29,
       0,    30,    31,     0,     0,    32,     0,     0,     0,     0,
      33,     0,     0,    34,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,     0,    40,
       0,     0,     0,     0,    41,     0,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,    45,    46,     0,     0,    47,     0,    48,     0,
      49,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,    52,     0,     0,    53,    54,    55,    56,     0,
      57,    58,     0,     0,     0,     0,     0,     0,    59,     0,
      60,    61,    62,     0,    63,     0,     0,    64,     0,     0,
       0,    65,    66,    67,     0,    68,    69,     0,    70,    71,
       0,    72,     0,    73,    74,    75,     0,     0,     0,    76,
       0,     0,    77,    78,    79,     0,     0,    80,    81,    82,
       0,    83,     0,     0,     0,    28,    84,     0,    85,    86,
       0,     0,     0,    87,    88,    89,   471,     0,   291,     0,
      29,     0,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,     0,
      76,     0,     0,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,    28,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,    29,   472,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
       0,     0,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,     0,    40,     0,
       0,     0,     0,    41,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,     0,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,    59,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,     0,
      72,     0,    73,    74,    75,     0,     0,     0,    76,     0,
       0,    77,    78,    79,     0,     0,    80,    81,    82,     0,
      83,    28,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     0,    87,    88,    89,     0,    29,   540,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,     0,     0,
      34,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,    40,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
       0,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,     0,    59,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    70,    71,     0,    72,     0,
      73,    74,    75,     0,     0,     0,    76,     0,     0,    77,
      78,    79,     0,     0,    80,    81,    82,     0,    83,    28,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     0,
      87,    88,    89,     0,    29,   599,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,    40,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,     0,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,    59,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,     0,    72,     0,    73,    74,
      75,     0,     0,     0,    76,     0,     0,    77,    78,    79,
       0,     0,    80,    81,    82,     0,    83,    28,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     0,    87,    88,
      89,     0,    29,   603,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,     0,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,    59,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,     0,    72,     0,    73,    74,    75,     0,
       0,     0,    76,     0,     0,    77,    78,    79,     0,     0,
      80,    81,    82,     0,    83,    28,     0,     0,     0,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,     0,
      29,   662,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,     0,
      76,     0,     0,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,    28,     0,     0,     0,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,     0,    29,   664,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
       0,     0,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,     0,    40,     0,
       0,     0,     0,    41,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,     0,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,    59,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,     0,
      72,     0,    73,    74,    75,     0,     0,     0,    76,     0,
       0,    77,    78,    79,     0,     0,    80,    81,    82,     0,
      83,    28,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     0,    87,    88,    89,     0,    29,   701,    30,    31,
       0,   405,   406,   407,   408,     0,     0,    33,   409,   410,
      34,   411,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,    40,     0,     0,     0,
     412,    41,   413,   414,     0,     0,    42,    43,     0,   415,
       0,     0,     0,     0,     0,     0,    44,     0,   416,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,   417,   418,     0,   419,     0,     0,     0,    51,    52,
       0,     0,    53,    54,    55,    56,     0,    57,    58,   420,
       0,   421,   422,     0,     0,    59,   423,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,   424,    70,   425,     0,    72,     0,
      73,    74,    75,     0,     0,     0,    76,   426,     0,    77,
      78,    79,     0,     0,    80,   427,   428,     0,    83,    28,
       0,     0,     0,   429,     0,    85,    86,     0,   340,     0,
      87,    88,    89,     0,    29,     0,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,    40,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,     0,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,    59,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    70,    71,     0,    72,     0,    73,    74,
      75,     4,     0,     0,    76,     0,     0,    77,    78,    79,
       0,     0,    80,    81,    82,     0,    83,    28,     0,     0,
       0,    84,     0,    85,    86,     0,     1,     6,    87,    88,
      89,     0,    29,     0,    30,    31,     0,     0,    32,     0,
       0,     0,     0,    33,     0,     0,    34,     0,     0,    35,
      36,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,     0,    40,     0,     0,     0,     0,    41,     0,     0,
       0,     0,    42,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,     0,     0,    45,    46,     0,     0,    47,
       0,    48,     0,    49,     0,     0,     0,     0,     0,     0,
      50,     0,     0,     0,    51,    52,     0,     0,    53,    54,
      55,    56,     0,    57,    58,     0,     0,     0,     0,     0,
       0,    59,     0,    60,    61,    62,     0,    63,     0,     0,
      64,     0,     0,     0,    65,    66,    67,     0,    68,    69,
       0,    70,    71,     0,    72,     0,    73,    74,    75,     4,
       0,     0,    76,     0,     0,    77,    78,    79,     0,     0,
      80,    81,    82,     0,    83,    28,   197,     0,     0,    84,
       0,    85,    86,     0,     0,     0,    87,    88,    89,     0,
      29,   198,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,     0,
      76,     0,     0,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,     0,     0,     0,    28,    84,     0,    85,
      86,     0,     0,     0,    87,    88,    89,   224,     0,     0,
       0,    29,     0,    30,    31,     0,     0,    32,     0,     0,
       0,     0,    33,     0,     0,    34,     0,     0,    35,    36,
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
       0,    40,     0,     0,     0,     0,    41,     0,     0,     0,
       0,    42,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    44,     0,     0,    45,    46,     0,     0,    47,     0,
      48,     0,    49,     0,     0,     0,     0,     0,     0,    50,
       0,     0,     0,    51,    52,     0,     0,    53,    54,    55,
      56,     0,    57,    58,     0,     0,     0,     0,     0,     0,
      59,     0,    60,    61,    62,     0,    63,     0,     0,    64,
       0,     0,     0,    65,    66,    67,     0,    68,    69,     0,
      70,    71,     0,    72,     0,    73,    74,    75,     0,     0,
       0,    76,     0,     0,    77,    78,    79,     0,     0,    80,
      81,    82,     0,    83,    28,     0,     0,     0,    84,     0,
      85,    86,     0,   264,     0,    87,    88,    89,     0,    29,
       0,    30,    31,     0,     0,    32,     0,     0,     0,     0,
      33,     0,     0,    34,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,     0,    40,
       0,     0,     0,     0,    41,     0,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,    45,    46,     0,     0,    47,     0,    48,     0,
      49,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,    52,     0,     0,    53,    54,    55,    56,     0,
      57,    58,     0,     0,     0,     0,     0,     0,    59,     0,
      60,    61,    62,     0,    63,     0,     0,    64,     0,     0,
       0,    65,    66,    67,     0,    68,    69,     0,    70,    71,
       0,    72,     0,    73,    74,    75,     0,     0,     0,    76,
       0,     0,    77,    78,    79,     0,     0,    80,    81,    82,
       0,    83,    28,   197,     0,     0,    84,     0,    85,    86,
       0,     0,     0,    87,    88,    89,     0,    29,     0,    30,
      31,     0,     0,    32,     0,     0,     0,     0,    33,     0,
       0,    34,     0,     0,    35,    36,     0,     0,     0,     0,
       0,     0,     0,    37,    38,    39,     0,    40,     0,     0,
       0,     0,    41,     0,     0,     0,     0,    42,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    44,     0,     0,
      45,    46,     0,     0,    47,     0,    48,     0,    49,     0,
       0,     0,     0,     0,     0,    50,     0,     0,     0,    51,
      52,     0,     0,    53,    54,    55,    56,     0,    57,    58,
       0,     0,     0,     0,     0,     0,    59,     0,    60,    61,
      62,     0,    63,     0,     0,    64,     0,     0,     0,    65,
      66,    67,     0,    68,    69,     0,    70,    71,     0,    72,
       0,    73,    74,    75,     0,     0,     0,    76,     0,     0,
      77,    78,    79,     0,     0,    80,    81,    82,     0,    83,
       0,     0,     0,    28,    84,     0,    85,    86,     0,     0,
       0,    87,    88,    89,   296,     0,     0,     0,    29,     0,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
       0,     0,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,     0,    40,     0,
       0,     0,     0,    41,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,     0,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,    59,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,     0,
      72,     0,    73,    74,    75,     0,     0,     0,    76,     0,
       0,    77,    78,    79,     0,     0,    80,    81,    82,     0,
      83,     0,     0,     0,    28,    84,     0,    85,    86,     0,
       0,     0,    87,    88,    89,   363,     0,     0,     0,    29,
       0,    30,    31,     0,     0,    32,     0,     0,     0,     0,
      33,     0,     0,    34,     0,     0,    35,    36,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,     0,    40,
       0,     0,     0,     0,    41,     0,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    44,
       0,     0,    45,    46,     0,     0,    47,     0,    48,     0,
      49,     0,     0,     0,     0,     0,     0,    50,     0,     0,
       0,    51,    52,     0,     0,    53,    54,    55,    56,     0,
      57,    58,     0,     0,     0,     0,     0,     0,    59,     0,
      60,    61,    62,     0,    63,     0,     0,    64,     0,     0,
       0,    65,    66,    67,     0,    68,    69,     0,    70,    71,
       0,    72,     0,    73,    74,    75,     0,     0,     0,    76,
       0,     0,    77,    78,    79,     0,     0,    80,    81,    82,
       0,    83,     0,     0,     0,    28,    84,     0,    85,    86,
       0,     0,     0,    87,    88,    89,   370,     0,     0,     0,
      29,     0,    30,    31,     0,     0,    32,     0,     0,     0,
       0,    33,     0,     0,    34,     0,     0,    35,    36,     0,
       0,     0,     0,     0,     0,     0,    37,    38,    39,     0,
      40,     0,     0,     0,     0,    41,     0,     0,     0,     0,
      42,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,     0,     0,    45,    46,     0,     0,    47,     0,    48,
       0,    49,     0,     0,     0,     0,     0,     0,    50,     0,
       0,     0,    51,    52,     0,     0,    53,    54,    55,    56,
       0,    57,    58,     0,     0,     0,     0,     0,     0,    59,
       0,    60,    61,    62,     0,    63,     0,     0,    64,     0,
       0,     0,    65,    66,    67,     0,    68,    69,     0,    70,
      71,     0,    72,     0,    73,    74,    75,     0,     0,     0,
      76,     0,     0,    77,    78,    79,     0,     0,    80,    81,
      82,     0,    83,    28,     0,     0,     0,    84,     0,    85,
      86,     0,   465,     0,    87,    88,    89,     0,    29,     0,
      30,    31,     0,     0,    32,     0,     0,     0,     0,    33,
       0,     0,    34,     0,     0,    35,    36,     0,     0,     0,
       0,     0,     0,     0,    37,    38,    39,     0,    40,     0,
       0,     0,     0,    41,     0,     0,     0,     0,    42,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,     0,
       0,    45,    46,     0,     0,    47,     0,    48,     0,    49,
       0,     0,     0,     0,     0,     0,    50,     0,     0,     0,
      51,    52,     0,     0,    53,    54,    55,    56,     0,    57,
      58,     0,     0,     0,     0,     0,     0,    59,     0,    60,
      61,    62,     0,    63,     0,     0,    64,     0,     0,     0,
      65,    66,    67,     0,    68,    69,     0,    70,    71,     0,
      72,     0,    73,    74,    75,     0,     0,     0,    76,     0,
       0,    77,    78,    79,     0,     0,    80,    81,    82,     0,
      83,    28,     0,     0,     0,    84,     0,    85,    86,     0,
       0,     0,    87,    88,    89,     0,    29,     0,    30,    31,
       0,     0,    32,     0,     0,     0,     0,    33,     0,     0,
      34,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,     0,    40,     0,     0,     0,
       0,    41,     0,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,    44,     0,     0,    45,
      46,     0,     0,    47,     0,    48,     0,    49,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,    51,    52,
       0,     0,    53,    54,    55,    56,     0,    57,    58,     0,
       0,     0,     0,     0,     0,    59,     0,    60,    61,    62,
       0,    63,     0,     0,    64,     0,     0,     0,    65,    66,
      67,     0,    68,    69,     0,    70,    71,     0,    72,     0,
      73,    74,    75,     0,     0,     0,    76,     0,     0,    77,
      78,    79,     0,     0,    80,    81,    82,     0,    83,    28,
       0,     0,     0,    84,     0,    85,    86,     0,     0,     0,
      87,    88,    89,     0,    29,     0,    30,    31,     0,     0,
      32,     0,     0,     0,     0,    33,     0,     0,    34,     0,
       0,    35,    36,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,     0,    40,     0,     0,     0,     0,    41,
       0,     0,     0,     0,    42,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    44,     0,     0,    45,    46,     0,
       0,    47,     0,    48,     0,    49,     0,     0,     0,     0,
       0,     0,    50,     0,     0,     0,    51,    52,     0,     0,
      53,    54,    55,    56,     0,    57,    58,     0,     0,     0,
       0,     0,     0,    59,     0,    60,    61,    62,     0,    63,
       0,     0,    64,     0,     0,     0,    65,    66,    67,     0,
      68,    69,     0,    96,    71,     0,    72,     0,    73,    74,
      75,     0,     0,     0,    76,     0,     0,    77,    78,    79,
       0,     0,    80,    81,    82,     0,    83,     0,     0,     0,
       0,    84,     0,    85,    86,     0,     0,     0,    87,    88,
      89
};

static const yytype_int16 yycheck[] =
{
       5,     6,   173,   112,   106,   107,   108,   169,   442,     1,
     444,   193,   264,     0,   185,    13,    13,   510,    23,    24,
      16,    12,    12,    34,    13,   196,    37,    13,    13,    21,
      13,    13,    12,    12,    12,    16,    34,    34,    34,    37,
      37,    37,    67,     5,     6,    34,   112,   229,    37,    34,
      19,   450,    37,    34,    13,   237,    37,    71,    13,    13,
      20,    23,    24,   238,    12,    34,    34,    32,    37,    37,
      38,    36,    12,    12,    34,    49,     0,    37,    12,    12,
      12,   252,   264,   114,    67,   357,   358,     8,   340,   194,
      12,    96,   254,   123,    87,   347,    22,    34,    73,    59,
      37,   131,    76,    34,    31,    34,    37,   121,    37,     5,
      37,   177,    91,    71,   145,   102,   221,   610,    34,    34,
     613,    37,    37,    57,   264,   112,   151,    23,    24,    12,
     165,   105,   531,     6,    96,   140,     9,   137,   313,    13,
     322,    64,   153,    91,    18,   110,   328,   640,    82,    65,
      65,    91,    91,   158,    80,   160,   161,   135,   340,   149,
     114,   172,    12,   121,    14,   347,   171,    93,   151,   351,
     161,   162,   146,    56,   172,   172,   172,   156,   140,   171,
     166,   161,   162,   172,   166,   106,   178,   172,   193,   682,
     177,   172,   464,   198,    98,   200,   158,    96,   160,   161,
     340,   135,   135,   172,   172,   659,   458,   166,   156,   171,
     392,   166,   172,   135,   385,   220,   156,   156,   152,   224,
     654,   154,   133,   134,   156,   115,   100,   161,   161,   166,
      22,   193,   700,   106,   343,   172,   198,   166,   200,   161,
     694,   172,    34,   172,    15,    37,    38,    39,    40,    41,
      42,    43,   135,   721,    30,    31,   172,   172,   220,   264,
     265,   160,   224,   167,     6,   270,    53,     9,   450,   173,
     174,   154,    74,    12,    14,    14,   458,    85,   161,    81,
      38,   749,    40,    12,    12,   290,    14,   166,    80,    60,
      92,   296,    79,   298,    27,   300,    88,   193,   460,    47,
     160,    93,   264,   265,   200,   216,    12,    12,   270,    14,
      97,    12,    99,    14,   106,   307,    12,     4,     5,     6,
       7,     8,   348,    10,   350,   166,    74,   129,   290,    12,
     335,    12,   337,    81,   296,   340,   298,    12,   300,   169,
     170,    89,   347,    12,    92,    12,   351,   134,   340,   531,
     161,   162,   161,   162,   102,   360,    73,   459,   363,    12,
     365,   168,    49,    12,   369,   370,    12,   529,   264,    56,
     166,   167,    12,   335,   166,   337,   163,    19,   340,   171,
     172,   129,   154,    13,    13,   347,   159,    53,    13,   351,
       5,     4,     5,     6,     7,     8,    14,    10,   360,    13,
     166,   363,   172,   365,    13,    13,   166,   369,   370,    22,
       5,     6,    12,    79,   419,   166,   114,    16,   166,    62,
      88,   530,    13,    13,    76,    13,    13,   589,    23,    24,
      47,    97,   118,    99,    14,    38,    49,    12,    89,   335,
      38,   337,    63,    56,   340,   450,    13,   117,    89,    27,
      78,   347,    14,   458,    14,   351,     8,    74,     5,     6,
     465,    12,    12,   150,    81,   470,   471,    91,   134,    12,
      12,   476,    89,    12,   122,    92,    23,    24,    12,    12,
      12,   590,    12,    37,    13,   102,    47,    89,   450,   660,
      14,    13,     5,   109,     5,   112,   458,   163,   109,     5,
      12,    96,   109,   465,    12,     5,     5,   512,   470,   471,
       5,     5,   129,    74,   476,    12,   149,    32,     5,    47,
      81,    36,    12,   109,     5,     5,   531,   147,    89,     5,
       5,    92,    14,    12,   539,   147,   153,   150,   543,    13,
     137,   102,   147,   147,    12,   140,    74,   119,    13,    96,
     512,   112,    13,    81,   450,    12,     5,    13,    12,   564,
      75,    89,   458,   158,    92,   160,   161,     5,   129,   531,
      22,    13,    13,     5,   102,    90,   171,   539,     5,    94,
     585,   543,    34,     5,    12,    37,    38,    39,    40,    41,
      42,    43,   153,   140,     5,   110,   601,   602,   193,   109,
      12,   129,    12,   198,    13,   200,     5,    13,    13,    13,
      13,   158,    13,   160,   161,   164,   512,     5,   164,   164,
     164,   138,     5,   585,   171,   220,   166,    27,    80,   224,
       5,    13,    13,     5,    12,   531,    88,    13,     5,   601,
     602,    93,    13,    13,    12,     5,   193,    13,     5,   133,
      13,   198,    13,   200,   106,    13,    12,     5,    13,    13,
      13,   666,     5,   149,    13,    16,    13,    13,    13,   264,
     265,    13,    13,   220,   147,   270,   147,   224,   147,    13,
     147,   164,   687,    13,   130,   121,   164,   164,   121,   585,
     130,    68,   164,   145,   102,   290,   116,   598,   294,   300,
     202,   296,   168,   298,   666,   300,   195,   177,   215,   303,
     392,   349,   351,   465,   210,    22,   379,   264,   265,   171,
     172,   256,   749,   270,   700,   687,    -1,    34,   312,   622,
      37,    38,    39,    40,    41,    42,    43,    -1,   265,   270,
     335,    -1,   337,   290,    -1,   340,    -1,   198,    27,   296,
      -1,   298,   347,   300,    -1,    -1,   351,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   360,    -1,    -1,   363,    -1,
     365,    -1,    -1,    80,   369,   370,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    -1,    -1,    93,    -1,   335,    -1,
     337,   687,    -1,   340,    -1,    -1,    -1,    -1,    -1,   106,
     347,    -1,    -1,    -1,   351,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   360,    -1,    -1,   363,    -1,   365,    -1,
      -1,    -1,   369,   370,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   450,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   458,   171,   172,    -1,    -1,    -1,    -1,
     465,    -1,    -1,    -1,    -1,   470,   471,    -1,   157,    -1,
      -1,   476,    -1,    -1,    -1,    -1,   165,    -1,    -1,    -1,
     169,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   450,    -1,   184,    -1,   186,    -1,    -1,
     189,   458,    -1,    -1,    -1,    -1,   195,   512,   465,    -1,
      -1,    -1,    -1,   470,   471,    -1,    -1,    -1,    -1,   476,
      -1,    -1,    -1,    -1,    -1,    -1,   531,    -1,   217,    -1,
     219,    -1,    -1,    -1,   539,    -1,    -1,    -1,   543,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   236,    -1,   238,
      -1,    -1,    -1,    -1,    -1,   512,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   254,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   531,    -1,    -1,    -1,    -1,    -1,
     585,    -1,   539,    -1,    -1,    -1,   543,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   601,   602,   287,    -1,
      -1,    -1,    -1,    -1,    -1,   294,   295,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,   307,    -1,
      -1,    -1,    -1,   312,   313,    -1,   315,    -1,   585,    -1,
      -1,    -1,    -1,    -1,    -1,   324,    -1,    -1,   327,    -1,
      -1,    -1,    -1,   332,   601,   602,    -1,    -1,    -1,    -1,
     339,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
      -1,   666,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,   687,    -1,    32,    -1,    34,    35,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,   391,    -1,   393,    53,    -1,    -1,    -1,   666,
      58,    59,   401,   402,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
     687,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,   460,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,   478,
     138,    -1,   481,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,    -1,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     529,    -1,    -1,    -1,   533,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   548,
     549,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
     589,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    50,    51,    -1,    53,
      -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
     659,    -1,   106,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,   135,   136,    -1,   138,   694,    -1,   141,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,    -1,    -1,    -1,
      -1,   155,    -1,   157,   158,    -1,    -1,   161,   162,   163,
     164,    -1,    -1,    -1,    -1,   169,   170,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    15,
      -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    50,    51,    -1,    53,    -1,    -1,
      56,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,   129,   130,    -1,   132,   133,   134,    -1,
     136,    -1,   138,    -1,    -1,   141,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,    -1,    -1,    -1,    -1,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,
      -1,   167,    -1,   169,   170,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    -1,    -1,    15,    -1,    17,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    50,    51,    -1,    53,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,   129,   130,    -1,   132,   133,   134,    -1,   136,    -1,
     138,    -1,   140,   141,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,    -1,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
      -1,   169,   170,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      50,    51,    -1,    53,    -1,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,   129,
     130,    -1,   132,   133,   134,   135,   136,    -1,   138,    -1,
      -1,   141,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,    -1,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      -1,   161,   162,   163,   164,    -1,    -1,    -1,    -1,   169,
     170,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    50,    51,
      -1,    53,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      92,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,   129,   130,    -1,
     132,   133,   134,   135,   136,    -1,   138,    -1,    -1,   141,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,    -1,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,   161,
     162,   163,   164,    -1,    -1,    -1,    -1,   169,   170,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    50,    51,    -1,    53,
      -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    69,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,   106,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,   129,   130,    -1,   132,   133,
     134,    -1,   136,    -1,   138,    -1,    -1,   141,   142,   143,
     144,    -1,   146,   147,   148,    -1,   150,    -1,    -1,    -1,
      -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,
     164,    -1,    -1,    -1,    -1,   169,   170,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    50,    51,    -1,    53,    -1,    -1,
      56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    92,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,   129,   130,    -1,   132,   133,   134,    -1,
     136,    -1,   138,    -1,    -1,   141,   142,   143,   144,    -1,
     146,   147,   148,    -1,   150,    -1,    -1,    -1,    -1,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,
      -1,   167,    -1,   169,   170,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    50,    51,    -1,    53,    -1,    -1,    56,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    92,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,   129,   130,    -1,   132,   133,   134,    -1,   136,    -1,
     138,    -1,    -1,   141,   142,   143,   144,    -1,   146,   147,
     148,    -1,   150,    -1,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,
      -1,   169,   170,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      50,    51,    -1,    53,    -1,    -1,    56,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    92,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,   129,
     130,    -1,   132,   133,   134,    -1,   136,    -1,   138,    -1,
      -1,   141,   142,   143,   144,    -1,   146,   147,   148,    -1,
     150,    -1,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      -1,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,   169,
     170,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    50,    51,
      -1,    53,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      92,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,   129,   130,    -1,
     132,   133,   134,    -1,   136,    -1,   138,    -1,    -1,   141,
     142,   143,   144,    -1,   146,   147,   148,    -1,   150,    -1,
      -1,    -1,    -1,   155,     3,   157,   158,    -1,    -1,    -1,
     162,   163,   164,    -1,    -1,    14,    -1,   169,   170,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    -1,    -1,    94,    95,    96,    97,    -1,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,   120,   121,   122,    -1,   124,   125,    -1,   127,   128,
      -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,
      -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,   148,
      -1,   150,    -1,    -1,    -1,     3,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    14,    -1,   167,    -1,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,     3,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    18,   167,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    -1,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,    -1,
     130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,   142,   143,    -1,    -1,   146,   147,   148,    -1,
     150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      -1,    -1,   162,   163,   164,    -1,    18,   167,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      -1,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,
     132,   133,   134,    -1,    -1,    -1,   138,    -1,    -1,   141,
     142,   143,    -1,    -1,   146,   147,   148,    -1,   150,     3,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,
     162,   163,   164,    -1,    18,   167,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,    -1,   130,    -1,   132,   133,
     134,    -1,    -1,    -1,   138,    -1,    -1,   141,   142,   143,
      -1,    -1,   146,   147,   148,    -1,   150,     3,    -1,    -1,
      -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,
     164,    -1,    18,   167,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,    -1,   130,    -1,   132,   133,   134,    -1,
      -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,
     146,   147,   148,    -1,   150,     3,    -1,    -1,    -1,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,
      18,   167,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,     3,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    -1,    18,   167,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    -1,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,    -1,
     130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,   142,   143,    -1,    -1,   146,   147,   148,    -1,
     150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      -1,    -1,   162,   163,   164,    -1,    18,   167,    20,    21,
      -1,    23,    24,    25,    26,    -1,    -1,    29,    30,    31,
      32,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      52,    53,    54,    55,    -1,    -1,    58,    59,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    83,    84,    -1,    86,    -1,    -1,    -1,    90,    91,
      -1,    -1,    94,    95,    96,    97,    -1,    99,   100,   101,
      -1,   103,   104,    -1,    -1,   107,   108,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,   126,   127,   128,    -1,   130,    -1,
     132,   133,   134,    -1,    -1,    -1,   138,   139,    -1,   141,
     142,   143,    -1,    -1,   146,   147,   148,    -1,   150,     3,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    12,    -1,
     162,   163,   164,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,    -1,   130,    -1,   132,   133,
     134,   135,    -1,    -1,   138,    -1,    -1,   141,   142,   143,
      -1,    -1,   146,   147,   148,    -1,   150,     3,    -1,    -1,
      -1,   155,    -1,   157,   158,    -1,    12,   161,   162,   163,
     164,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,
      -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,
      96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,
      -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,
     116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,
      -1,   127,   128,    -1,   130,    -1,   132,   133,   134,   135,
      -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,
     146,   147,   148,    -1,   150,     3,     4,    -1,    -1,   155,
      -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,
      18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,    -1,    -1,    -1,     3,   155,    -1,   157,
     158,    -1,    -1,    -1,   162,   163,   164,    14,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,
      97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,
     127,   128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,
      -1,   138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,
     147,   148,    -1,   150,     3,    -1,    -1,    -1,   155,    -1,
     157,   158,    -1,    12,    -1,   162,   163,   164,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    -1,    -1,    94,    95,    96,    97,    -1,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,   120,   121,   122,    -1,   124,   125,    -1,   127,   128,
      -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,
      -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,   148,
      -1,   150,     3,     4,    -1,    -1,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,
      91,    -1,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,
     121,   122,    -1,   124,   125,    -1,   127,   128,    -1,   130,
      -1,   132,   133,   134,    -1,    -1,    -1,   138,    -1,    -1,
     141,   142,   143,    -1,    -1,   146,   147,   148,    -1,   150,
      -1,    -1,    -1,     3,   155,    -1,   157,   158,    -1,    -1,
      -1,   162,   163,   164,    14,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    -1,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,    -1,
     130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,   142,   143,    -1,    -1,   146,   147,   148,    -1,
     150,    -1,    -1,    -1,     3,   155,    -1,   157,   158,    -1,
      -1,    -1,   162,   163,   164,    14,    -1,    -1,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    -1,    -1,    94,    95,    96,    97,    -1,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,   120,   121,   122,    -1,   124,   125,    -1,   127,   128,
      -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,
      -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,   148,
      -1,   150,    -1,    -1,    -1,     3,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    14,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    90,    91,    -1,    -1,    94,    95,    96,    97,
      -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,
      -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,
      -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,   127,
     128,    -1,   130,    -1,   132,   133,   134,    -1,    -1,    -1,
     138,    -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,
     148,    -1,   150,     3,    -1,    -1,    -1,   155,    -1,   157,
     158,    -1,    12,    -1,   162,   163,   164,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    -1,    58,    59,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,
      -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,
      90,    91,    -1,    -1,    94,    95,    96,    97,    -1,    99,
     100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,
     110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,
     120,   121,   122,    -1,   124,   125,    -1,   127,   128,    -1,
     130,    -1,   132,   133,   134,    -1,    -1,    -1,   138,    -1,
      -1,   141,   142,   143,    -1,    -1,   146,   147,   148,    -1,
     150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      -1,    -1,   162,   163,   164,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,
      72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,
      -1,    -1,    94,    95,    96,    97,    -1,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,
      -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,
     122,    -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,
     132,   133,   134,    -1,    -1,    -1,   138,    -1,    -1,   141,
     142,   143,    -1,    -1,   146,   147,   148,    -1,   150,     3,
      -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,
     162,   163,   164,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,
      -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,
      94,    95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,
      -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,
      -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,
     124,   125,    -1,   127,   128,    -1,   130,    -1,   132,   133,
     134,    -1,    -1,    -1,   138,    -1,    -1,   141,   142,   143,
      -1,    -1,   146,   147,   148,    -1,   150,    -1,    -1,    -1,
      -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,
     164
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    12,    57,    82,   135,   152,   161,   176,   177,   178,
     179,   180,   181,   184,   185,   188,   189,   190,   191,   192,
     194,   206,   190,    73,    87,    15,    60,   212,     3,    18,
      20,    21,    24,    29,    32,    35,    36,    44,    45,    46,
      48,    53,    58,    59,    68,    71,    72,    75,    77,    79,
      86,    90,    91,    94,    95,    96,    97,    99,   100,   107,
     109,   110,   111,   113,   116,   120,   121,   122,   124,   125,
     127,   128,   130,   132,   133,   134,   138,   141,   142,   143,
     146,   147,   148,   150,   155,   157,   158,   162,   163,   164,
     221,   253,   255,   283,   301,   302,   127,   207,   208,   301,
       0,    64,   165,   115,   200,   201,    67,   151,    85,   190,
      13,   221,   221,     4,     5,     6,     7,     8,    10,    12,
      28,    29,    35,    44,    50,    51,    56,    92,   107,   129,
     136,   144,   167,   169,   170,   193,   213,   214,   220,   221,
     231,   232,   233,   234,   235,   236,   245,   246,   251,   252,
     253,   254,   255,   271,   272,   283,   301,   137,    14,   207,
     166,    12,   209,   210,   177,    27,   212,   212,   212,   160,
     195,    12,    56,   154,   182,   183,   188,   210,    12,   189,
     231,   237,   231,   247,    12,    12,    12,    12,    12,    12,
      12,   235,   235,    73,   196,   166,    12,     4,    19,    34,
      37,   172,   241,   297,   298,   299,   300,   301,   169,   170,
     243,    98,   167,   173,   174,   244,   168,    12,    12,    12,
      14,   186,   187,   231,    14,   301,   207,   211,   301,    19,
     202,   203,   231,   191,   191,   192,    12,    69,   106,   225,
     226,   227,   228,   229,   230,   231,   154,   237,   183,   188,
     190,    13,   166,    13,   159,   248,   249,   231,   237,   231,
       5,    13,   231,    13,    12,   193,   215,   216,   217,   218,
     221,   222,   195,   213,    13,   237,   299,   221,   172,   232,
     233,   234,   235,    15,    60,   167,   231,   295,    13,   231,
      14,   167,   301,   195,   166,    38,    14,   301,    14,    13,
     166,    12,   193,   166,    20,    59,   204,    12,   225,   231,
     193,   227,   114,    16,    88,    22,    38,    39,    40,    41,
      42,    43,    80,    88,    93,   106,   171,   240,   242,   237,
     225,   231,    62,   250,   248,    19,    13,   153,    13,   166,
      12,   216,   222,   298,    47,    74,    81,    89,    92,   102,
     129,   166,   223,   297,    76,   197,    13,    13,    13,   231,
     118,   256,    13,    14,   301,    14,   186,   231,   301,    14,
      14,   301,   211,   202,    13,   226,   227,     6,     9,   106,
     239,   231,    38,    38,    40,    12,   193,   238,     8,   106,
     231,    22,    80,    93,    38,    15,    17,   140,   231,   296,
     193,   145,   145,   231,    63,    23,    24,    25,    26,    30,
      31,    33,    52,    54,    55,    61,    70,    83,    84,    86,
     101,   103,   104,   108,   126,   128,   139,   147,   148,   155,
     221,   273,   274,   275,   276,   277,   278,   284,   285,   286,
     287,   288,   289,   290,   291,   221,   231,    13,   210,   219,
      89,   117,   224,   216,   224,   223,   224,   215,    89,    27,
      78,   205,   256,   256,    13,    12,   257,   258,   301,   301,
      14,    14,   167,   301,   301,   301,    14,   239,    16,   237,
       8,    65,   231,   238,   231,   231,   231,    91,    12,    12,
      91,   156,    12,    91,   156,    12,    12,    12,   122,    12,
     134,   279,   280,   282,   283,    30,    31,    12,    91,   156,
      12,    12,    12,    12,   161,   162,    12,   161,   162,    12,
      13,    18,   100,    31,   300,   300,    13,    13,   217,   112,
     153,    89,   216,   212,   225,   256,   258,   259,   260,    14,
     167,   301,   301,    14,   301,   231,    13,   231,    16,    65,
     109,     5,     5,   109,    12,     5,   109,    12,     5,   292,
       5,     5,     5,    12,   149,    12,    12,   156,    12,    91,
     156,     5,   109,    12,   292,     5,   221,     5,   147,   147,
       5,   147,   147,     5,    12,   137,   225,   210,   217,   112,
     153,    12,    77,   198,   199,   231,    13,   119,   261,   167,
     301,    14,    14,   167,   301,   231,   231,    12,    13,    13,
      12,     5,    13,    12,     5,    32,    36,    75,    90,    94,
     110,   293,   294,    13,    13,   166,    13,   166,    13,     5,
     134,   281,   283,     5,     5,    12,     5,   109,    12,    13,
      12,     5,    13,    13,   166,    13,    13,   164,   164,    13,
     164,   164,    13,     5,   221,   225,   210,    13,   138,   166,
      27,   200,   167,   301,   167,   301,    14,     5,   292,    13,
     292,    13,   293,     5,     5,    13,   166,    12,    13,    13,
       5,    13,    12,     5,   292,    13,     5,   133,   161,   162,
     161,   162,    13,   300,    12,   198,   237,   123,   131,   262,
     263,   167,   301,    13,    13,    13,    13,    13,     5,     5,
      13,   292,    13,    13,    13,   221,   147,   147,   147,   147,
     198,    22,    49,   150,   245,   264,   265,   266,   267,    13,
      13,    13,   164,   164,   164,   164,    13,   150,   245,   265,
     268,   269,   130,   121,   121,    68,   270,    71,    71,    16,
      49,    76,   105,   146,   268,   130,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   175,   176,   177,   177,   178,   178,   178,   179,   180,
     180,   180,   181,   182,   182,   182,   182,   182,   183,   184,
     185,   186,   186,   187,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   192,   193,   194,   195,   195,   196,   197,
     197,   198,   198,   199,   199,   199,   200,   200,   201,   202,
     202,   203,   204,   204,   204,   205,   205,   206,   206,   207,
     207,   208,   209,   209,   210,   211,   211,   212,   212,   212,
     213,   213,   214,   214,   215,   215,   216,   216,   217,   217,
     218,   218,   219,   219,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   221,   221,   221,   221,   221,   221,   221,   221,   222,
     222,   222,   222,   222,   222,   223,   223,   223,   223,   224,
     224,   225,   225,   226,   226,   227,   227,   228,   228,   228,
     229,   229,   230,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   231,   231,   231,   232,   232,
     233,   233,   234,   234,   235,   235,   235,   236,   236,   236,
     236,   236,   236,   237,   237,   238,   238,   239,   239,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   241,
     241,   242,   243,   243,   244,   244,   244,   244,   245,   245,
     245,   245,   245,   245,   245,   246,   247,   247,   248,   248,
     249,   249,   250,   250,   251,   251,   251,   251,   252,   252,
     252,   252,   252,   252,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   254,   255,   255,   255,   255,   255,
     256,   256,   257,   258,   259,   260,   260,   261,   261,   262,
     262,   263,   263,   264,   264,   265,   265,   265,   266,   267,
     268,   268,   268,   269,   270,   270,   270,   270,   270,   271,
     271,   272,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   273,   273,   273,   273,   274,   275,   276,
     276,   276,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   278,   279,   279,   280,   280,   281,   281,
     281,   282,   282,   282,   282,   282,   283,   283,   283,   283,
     283,   284,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   286,   286,   287,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   288,   288,
     288,   288,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   290,   290,   290,   290,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   292,   292,   292,   292,   293,   293,
     293,   294,   294,   294,   295,   295,   296,   296,   296,   297,
     297,   298,   298,   299,   299,   300,   301,   301,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     2,     2,     4,
       5,     1,     3,     3,     2,     1,     2,     1,     4,     4,
       1,     4,     1,     3,     3,     7,     0,     2,     2,     0,
       4,     1,     3,     2,     1,     5,     0,     1,     3,     1,
       3,     2,     0,     1,     1,     0,     2,     2,     3,     1,
       3,     4,     0,     1,     3,     1,     3,     0,     1,     1,
       1,     3,     2,     1,     1,     3,     1,     1,     1,     3,
       2,     3,     0,     1,     1,     3,     3,     5,     5,     7,
       7,     6,     6,     9,     9,     8,     8,     8,     8,     7,
       7,     1,     3,     5,     4,     7,     6,     6,     5,     6,
       5,     6,     5,     4,     5,     2,     2,     2,     1,     0,
       1,     1,     3,     1,     3,     1,     2,     1,     3,     4,
       1,     3,     3,     3,     5,     6,     3,     5,     4,     6,
       3,     4,     3,     4,     2,     1,     2,     3,     1,     3,
       1,     3,     1,     3,     1,     2,     2,     1,     1,     3,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     1,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     5,     0,     1,     1,     2,
       4,     4,     0,     2,     1,     1,     1,     1,     5,     4,
       6,     5,     5,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     1,     1,     1,     1,
       2,     2,     3,     1,     4,     0,     1,     0,     3,     0,
       3,     1,     1,     1,     1,     2,     2,     1,     2,     4,
       1,     2,     1,     2,     0,     3,     2,     2,     3,     3,
       4,     4,     3,     3,     6,     6,     4,     1,     4,     1,
       6,     1,     1,     1,     1,     1,     1,     1,     6,     5,
       2,     2,     5,     4,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     2,     3,     1,     4,     1,     1,     4,
       1,     4,     1,     6,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     7,     7,     4,     4,     4,     7,     7,
       4,     4,     4,     1,     1,     6,     4,     6,     4,     6,
       4,     1,     1,     1,     1,     1,     1,     1,     4,     2,
       1,     1,     4,     4,     5,     5,     4,     6,     3,     6,
       3,     4,     1,     1,     1,     6,     3,     4,     1,     5,
       2,     5,     2,     4,     6,     6,     5,     7,     4,     6,
       3,     4,     1,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
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
#if SQL2003_DEBUG

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
# if defined SQL2003_LTYPE_IS_TRIVIAL && SQL2003_LTYPE_IS_TRIVIAL

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
#else /* !SQL2003_DEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !SQL2003_DEBUG */


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
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2941 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2947 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2953 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2959 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2965 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2971 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2977 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2983 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* sql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2989 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* stmt_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2995 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3001 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* dql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3007 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* dml_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3013 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* insert_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3019 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* insert_columns_and_source  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3025 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* from_constructor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3031 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* delete_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3037 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* update_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3043 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* update_elem_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3049 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* update_elem  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3055 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3061 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* query_expression  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3067 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* query_expression_body  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3073 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* query_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3079 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* query_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3085 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* select_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3091 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* simple_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3097 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* opt_where  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3103 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_from_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3109 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_groupby  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3115 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* grouping_element_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3121 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* grouping_element  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3127 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3133 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3139 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* sort_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3145 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* sort_key  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3151 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_asc_desc  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3157 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* opt_having  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3163 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* with_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3169 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* with_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3175 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* common_table_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3181 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_derived_column_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3187 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3193 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* simple_ident_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3199 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_distinct  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3205 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* select_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3211 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* projection  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3217 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* from_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3223 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* table_reference  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3229 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* table_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3235 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* table_primary_non_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3241 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3247 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* column_ref  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3253 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* relation_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3259 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* joined_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3265 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* join_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3271 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* search_condition  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3277 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* boolean_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3283 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* boolean_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3289 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* boolean_test  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3295 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* boolean_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3301 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3307 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* row_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3313 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* factor0  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3319 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* factor1  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3325 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* factor2  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3331 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* factor3  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3337 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* factor4  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3343 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* row_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3349 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* in_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3355 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* truth_value  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3361 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* expr_const  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3367 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* case_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3373 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* case_arg  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3379 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* when_clause_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3385 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* when_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3391 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* case_default  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3397 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* func_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3403 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* aggregate_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3409 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* aggregate_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3415 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* ranking_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3421 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* ranking_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3427 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* over_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3433 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* window_specification  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3439 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* window_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3445 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* window_specification_details  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3451 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_existing_window_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3457 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* opt_window_partition_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3463 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* opt_window_frame_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3469 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* window_frame_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3475 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* window_frame_extent  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3481 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 265: /* window_frame_start  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3487 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* window_frame_preceding  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3493 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* window_frame_between  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3499 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* window_frame_bound  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3505 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* window_frame_following  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3511 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* opt_window_frame_exclusion  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3517 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 271: /* scalar_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3523 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* function_call_keyword  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3529 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* data_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3535 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* user_defined_type_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3541 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* reference_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* collection_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3553 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* predefined_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3559 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 278: /* interval_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3565 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 279: /* interval_qualifier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3571 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 280: /* start_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3577 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 281: /* end_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3583 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 282: /* single_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3589 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* non_second_primary_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3595 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 284: /* boolean_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3601 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 285: /* datetime_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3607 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 286: /* numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3613 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 287: /* exact_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3619 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 288: /* approximate_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3625 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 289: /* character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3631 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 290: /* binary_large_object_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3637 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 291: /* national_character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3643 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 292: /* large_object_length  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3649 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 293: /* char_length_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3655 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 294: /* multiplier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3661 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* distinct_or_all  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3667 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* opt_as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3673 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3685 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* collate_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3691 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* name_r  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3697 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* reserved  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3703 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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
# if defined SQL2003_LTYPE_IS_TRIVIAL && SQL2003_LTYPE_IS_TRIVIAL
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
#line 64 "./sqlparser_sql2003.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 3820 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 226 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 4014 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 237 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 4023 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 244 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 261 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 4038 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 269 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4047 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 274 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4056 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 279 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4065 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 284 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4074 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 289 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4084 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 298 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 4093 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 307 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DELETE, E_DELETE_PROPERTY_CNT,
    		nullptr,	/* E_DELETE_OPT_WITH 0 */
    		nullptr,	/* E_DELETE_OPT_TOP 1 */
    		(yyvsp[-1].node),		/* E_DELETE_DELETE_RELATION 2 */
    		nullptr,	/* E_DELETE_DELETE_RELATION_OPT_TABLE_HINT 3 */
    		nullptr,        /* E_DELETE_OPT_OUTPUT 4 */
    		nullptr,	/* E_DELETE_FROM_LIST 5 */
    		(yyvsp[0].node),		/* E_DELETE_OPT_WHERE 6 */
    		nullptr 	/* E_DELETE_OPT_QUERY_HINT 7 */);
    (yyval.node)->serialize_format = &DELETE_SERIALIZE_FORMAT;
}
#line 4110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 324 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE, E_UPDATE_PROPERTY_CNT,
    		nullptr,	/* E_UPDATE_OPT_WITH 0 */
    		nullptr,	/* E_UPDATE_OPT_TOP 1 */
    		(yyvsp[-3].node),		/* E_UPDATE_UPDATE_RELATION 2 */
    		nullptr,	/* E_UPDATE_UPDATE_RELATION_OPT_TABLE_HINT 3 */
    		(yyvsp[-1].node),		/* E_UPDATE_UPDATE_ELEM_LIST 4 */
    		nullptr,	/* E_UPDATE_OPT_OUTPUT 5 */
    		nullptr,	/* E_UPDATE_FROM_LIST 6 */
    		(yyvsp[0].node),		/* E_UPDATE_OPT_WHERE 7 */
    		nullptr		/* E_UPDATE_OPT_QUERY_HINT 8 */);
    (yyval.node)->serialize_format = &UPDATE_SERIALIZE_FORMAT;
}
#line 4128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 342 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4137 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 350 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 359 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_DIRECT_SELECT_ORDER, (yyvsp[0].node));
}
#line 4155 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 367 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 4164 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 372 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 4173 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 380 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4203 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 406 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 436 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
                        nullptr,             /* E_SELECT_OPT_OPTION 17 */
                        nullptr              /* E_SELECT_OPT_INTO 18 */
                        );
    (yyval.node)->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
#line 4263 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 466 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 474 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4281 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 482 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
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
                    nullptr,        /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    nullptr,        /* E_SELECT_OPT_TOP 15 */
                    nullptr,        /* E_SELECT_OPT_WITH 16 */
                    nullptr,        /* E_SELECT_OPT_OPTION 17 */
	            nullptr         /* E_SELECT_OPT_INTO 18 */
                    );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 4310 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 509 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4316 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 511 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4325 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 520 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4334 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 527 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4340 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 529 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4349 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 538 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4358 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 545 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"()"); }
#line 4364 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 548 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING SETS");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4375 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 557 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4381 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 563 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4390 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 572 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4399 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 580 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4408 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 588 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4416 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 592 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4424 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 596 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4432 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 602 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4438 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 604 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4447 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 614 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4456 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 619 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 4465 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 628 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4474 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 637 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4483 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 644 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4489 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 650 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4498 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 659 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4507 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 666 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 668 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4521 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 672 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4529 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 680 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4538 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 688 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if (!(yyvsp[0].node)) {
    	(yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, (yyvsp[-1].node));
    	(yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
    }
    else {
	Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
        alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

        (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
        (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
    }
}
#line 4556 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 702 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4566 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 712 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 726 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4584 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 738 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 743 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4602 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 750 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4608 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 757 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4618 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 763 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4628 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 769 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4639 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 776 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4649 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 782 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4660 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 789 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4670 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 795 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4681 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 802 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4691 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 808 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4702 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 815 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4712 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 821 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4723 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 828 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4733 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 834 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4744 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 841 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4754 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 847 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 854 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4775 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 860 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4786 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 871 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 876 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4804 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 881 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 886 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4822 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 891 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 896 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4840 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 901 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4849 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 906 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4858 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 914 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4867 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 919 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 925 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4886 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 930 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4896 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 936 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4906 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 942 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4916 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 951 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL");
    }
}
#line 4931 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 962 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT");
    }
}
#line 4946 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 973 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].ival))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT");
    }
}
#line 4961 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 984 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 4969 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 990 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4975 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 991 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 4981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 998 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_OR);
}
#line 4990 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1007 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_AND);
}
#line 4999 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1016 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT);
}
#line 5008 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1025 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 5017 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1030 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 5026 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1039 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5035 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1047 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5044 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1052 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5053 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1057 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_BTW);
}
#line 5062 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1062 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_BTW);
}
#line 5071 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1067 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 5080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1072 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 5089 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1077 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 5098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1082 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 5107 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1087 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IN);
}
#line 5116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1092 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_IN);
}
#line 5125 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1097 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 5134 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1102 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 5143 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1107 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_EXISTS);
}
#line 5152 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1117 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 5161 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1122 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1131 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1140 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5188 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1149 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POW);
}
#line 5197 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1158 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POS);
}
#line 5206 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1163 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NEG);
}
#line 5215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1173 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1185 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1194 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5242 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1204 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 5248 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1205 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LT; }
#line 5254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1206 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5260 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1207 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GT; }
#line 5266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1208 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_EQ; }
#line 5272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1209 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5278 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1210 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1211 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 5290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1212 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5296 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1213 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1217 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_CNN; }
#line 5308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1218 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_CNN; }
#line 5314 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1224 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.nodetype) = Node::comp_all_some_any_op_form((yyvsp[-1].nodetype), (yyvsp[0].ival));
}
#line 5322 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1230 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_ADD; }
#line 5328 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1231 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MINUS; }
#line 5334 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1235 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MUL; }
#line 5340 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1236 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_DIV; }
#line 5346 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1237 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_REM; }
#line 5352 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1238 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MOD; }
#line 5358 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1248 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5364 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1254 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_CASE);
}
#line 5373 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1261 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5379 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1268 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5388 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1276 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5397 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1281 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5406 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1288 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5412 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1290 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5421 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1307 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5431 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1313 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5441 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1319 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5451 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1325 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5461 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1331 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if (!Node::CHECK_FUNCTION_CALL_WITH_STAR((yyvsp[-4].node)))
    {
        yyerror(&(yylsp[-4]), result, scanner, "error use *");
        YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), star, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5477 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1343 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if (!Node::CHECK_FUNCTION_CALL_WITH_STAR((yyvsp[-3].node)))
    {
        yyerror(&(yylsp[-3]), result, scanner, "error use *");
        YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), star, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5493 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1357 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5499 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1358 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5505 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1359 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5511 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1360 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5517 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1361 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5523 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1362 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5529 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1363 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5535 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1364 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5541 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1365 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1366 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5553 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1371 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1379 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5569 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1380 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1381 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PERCENT_RANK"); }
#line 5581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1382 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CUME_DIST"); }
#line 5587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1383 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1388 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OVER "+ (yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 5599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1390 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1395 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1404 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5620 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1411 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5626 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1416 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5632 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1418 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5638 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1422 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5644 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1424 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    std::string s3 = (yyvsp[0].node) ? (yyvsp[0].node)->text() : "";
    (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+s3);
    delete((yyvsp[-2].node)); delete((yyvsp[-1].node)); delete((yyvsp[0].node));
}
#line 5654 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1432 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"ROWS"); }
#line 5660 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1433 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"RANGE"); }
#line 5666 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1442 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"UNBOUNDED PRECEDING"); }
#line 5672 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1443 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"CURRENT ROW"); }
#line 5678 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1448 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5684 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1453 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text()); delete((yyvsp[-2].node)); delete((yyvsp[0].node)); }
#line 5690 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1458 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"UNBOUNDED FOLLOWING"); }
#line 5696 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1463 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5702 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1467 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5708 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1468 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE CURRENT ROW"); }
#line 5714 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1469 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE GROUP"); }
#line 5720 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1470 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE TIES"); }
#line 5726 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1471 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE NO OTHERS"); }
#line 5732 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1476 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1482 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5752 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1494 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5762 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1500 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5773 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1507 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5784 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1514 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1521 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 5808 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1530 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1537 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5830 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1544 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5841 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1551 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5852 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1558 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5865 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1567 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5876 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1574 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5887 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1594 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5896 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1602 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5905 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1610 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5915 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1616 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5924 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1621 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5933 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1629 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5942 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1634 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5951 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1639 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5960 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1645 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5969 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1659 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5978 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1667 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 5987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1676 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1686 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1691 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 6013 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1698 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6022 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1704 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6031 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1709 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6040 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1714 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 6048 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1721 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 6056 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1725 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 6064 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1729 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 6072 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1733 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 6080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1737 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 6088 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1744 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 6096 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1751 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 6104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1755 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1765 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6131 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1770 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 6139 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1774 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 6147 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1778 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6156 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1783 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6165 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1788 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6174 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1793 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 6182 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1797 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 6190 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1809 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6199 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1814 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6208 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1819 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6217 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1824 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6226 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1829 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6235 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1834 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6244 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1839 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6252 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1843 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6260 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1847 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6268 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1851 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6276 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1855 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1859 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 6292 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1863 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6300 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1870 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6309 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1875 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6317 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1879 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6325 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1883 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6333 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1890 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6342 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1895 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6351 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1900 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6360 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1905 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6369 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1910 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6378 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1915 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6387 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1920 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6395 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1924 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6404 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1929 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6412 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1933 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6421 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1938 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6429 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1942 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6437 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1946 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6445 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1953 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6454 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1958 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6462 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1962 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6471 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1967 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6479 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1974 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6488 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1979 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6496 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1983 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6505 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1988 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6513 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1992 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6522 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1997 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6531 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2002 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6540 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2007 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6549 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2012 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6558 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2017 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6566 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2021 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2026 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6583 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2030 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6592 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2035 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6600 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2039 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6608 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2046 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6617 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2051 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6626 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2056 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6635 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2061 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6644 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2069 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6652 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2073 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6660 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2077 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6668 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2084 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6676 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2088 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6684 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2092 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6692 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2099 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6700 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2103 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6708 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2109 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6714 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2110 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6720 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2111 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6726 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2115 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6732 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2120 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 6738 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2132 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6747 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2149 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 6753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2150 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 6759 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2151 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 6765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2152 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 6771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 6777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2154 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 6783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2155 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 6789 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2156 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 6795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2157 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 6801 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2158 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 6807 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2159 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 6813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2160 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 6819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2161 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 6825 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 6831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2163 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 6837 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 6843 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2165 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 6849 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2166 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 6855 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2167 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 6861 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2168 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 6867 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2169 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 6873 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2170 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 6879 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2171 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 6885 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2172 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 6891 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2173 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 6897 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2174 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 6903 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2175 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 6909 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2176 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
#line 6915 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2177 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
#line 6921 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2178 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
#line 6927 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2179 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIMESTAMP"); }
#line 6933 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2180 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIME");  }
#line 6939 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2181 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DESC"); }
#line 6945 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2182 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIES"); }
#line 6951 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2183 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SETS"); }
#line 6957 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2184 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OTHERS"); }
#line 6963 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2185 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "EXCLUDE"); }
#line 6969 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2186 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ASC"); }
#line 6975 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2187 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE"); }
#line 6981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2188 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT"); }
#line 6987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2189 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF"); }
#line 6993 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 6997 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2192 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
