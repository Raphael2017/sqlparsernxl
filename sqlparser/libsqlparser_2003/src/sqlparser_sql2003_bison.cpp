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
#line 1 "sqlparser_sql2003.y" /* yacc.c:339  */

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
#line 42 "sqlparser_sql2003.y" /* yacc.c:355  */

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
    SQL2003_CALL = 280,
    SQL2003_CASE = 281,
    SQL2003_CAST = 282,
    SQL2003_CHAR = 283,
    SQL2003_CHARACTER = 284,
    SQL2003_CHARACTERS = 285,
    SQL2003_CLOB = 286,
    SQL2003_CNNOP = 287,
    SQL2003_COALESCE = 288,
    SQL2003_CODE_UNITS = 289,
    SQL2003_COLLATE = 290,
    SQL2003_COMP_EQ = 291,
    SQL2003_COMP_GE = 292,
    SQL2003_COMP_GT = 293,
    SQL2003_COMP_LE = 294,
    SQL2003_COMP_LT = 295,
    SQL2003_COMP_NE = 296,
    SQL2003_CONVERT = 297,
    SQL2003_CORRESPONDING = 298,
    SQL2003_COUNT = 299,
    SQL2003_CROSS = 300,
    SQL2003_CUME_DIST = 301,
    SQL2003_CURRENT = 302,
    SQL2003_CURRENT_TIMESTAMP = 303,
    SQL2003_CURRENT_USER = 304,
    SQL2003_DATE = 305,
    SQL2003_DAY = 306,
    SQL2003_DEC = 307,
    SQL2003_DECIMAL = 308,
    SQL2003_DEFAULT = 309,
    SQL2003_DELETE = 310,
    SQL2003_DENSE_RANK = 311,
    SQL2003_DESC = 312,
    SQL2003_DISTINCT = 313,
    SQL2003_DOUBLE = 314,
    SQL2003_ELSE = 315,
    SQL2003_END = 316,
    SQL2003_END_P = 317,
    SQL2003_ESCAPE = 318,
    SQL2003_ERROR = 319,
    SQL2003_EXCEPT = 320,
    SQL2003_EXCLUDE = 321,
    SQL2003_EXISTS = 322,
    SQL2003_FLOAT = 323,
    SQL2003_FOLLOWING = 324,
    SQL2003_FOR = 325,
    SQL2003_FROM = 326,
    SQL2003_FULL = 327,
    SQL2003_G = 328,
    SQL2003_GROUP = 329,
    SQL2003_GROUPING = 330,
    SQL2003_HAVING = 331,
    SQL2003_HOUR = 332,
    SQL2003_IN = 333,
    SQL2003_INNER = 334,
    SQL2003_INSERT = 335,
    SQL2003_INT = 336,
    SQL2003_INTEGER = 337,
    SQL2003_INTERSECT = 338,
    SQL2003_INTERVAL = 339,
    SQL2003_INTO = 340,
    SQL2003_IS = 341,
    SQL2003_JOIN = 342,
    SQL2003_K = 343,
    SQL2003_LARGE = 344,
    SQL2003_LEFT = 345,
    SQL2003_LIKE = 346,
    SQL2003_M = 347,
    SQL2003_MAX = 348,
    SQL2003_MIN = 349,
    SQL2003_MINUTE = 350,
    SQL2003_MOD = 351,
    SQL2003_MONTH = 352,
    SQL2003_MULTISET = 353,
    SQL2003_NATIONAL = 354,
    SQL2003_NATURAL = 355,
    SQL2003_NCHAR = 356,
    SQL2003_NCLOB = 357,
    SQL2003_NO = 358,
    SQL2003_NOT = 359,
    SQL2003_NULLIF = 360,
    SQL2003_NUMERIC = 361,
    SQL2003_OBJECT = 362,
    SQL2003_OCTETS = 363,
    SQL2003_OF = 364,
    SQL2003_ON = 365,
    SQL2003_ONLY = 366,
    SQL2003_OR = 367,
    SQL2003_ORDER = 368,
    SQL2003_OTHERS = 369,
    SQL2003_OUTER = 370,
    SQL2003_OVER = 371,
    SQL2003_PARTITION = 372,
    SQL2003_PERCENT_RANK = 373,
    SQL2003_PRECEDING = 374,
    SQL2003_PRECISION = 375,
    SQL2003_RANGE = 376,
    SQL2003_RANK = 377,
    SQL2003_READ = 378,
    SQL2003_REAL = 379,
    SQL2003_RECURSIVE = 380,
    SQL2003_REF = 381,
    SQL2003_RIGHT = 382,
    SQL2003_ROW = 383,
    SQL2003_ROWS = 384,
    SQL2003_ROW_NUMBER = 385,
    SQL2003_SCOPE = 386,
    SQL2003_SECOND = 387,
    SQL2003_SELECT = 388,
    SQL2003_SESSION_USER = 389,
    SQL2003_SET = 390,
    SQL2003_SETS = 391,
    SQL2003_SMALLINT = 392,
    SQL2003_SOME = 393,
    SQL2003_STDDEV_POP = 394,
    SQL2003_STDDEV_SAMP = 395,
    SQL2003_SUM = 396,
    SQL2003_SYSTEM_USER = 397,
    SQL2003_THEN = 398,
    SQL2003_TIES = 399,
    SQL2003_TIME = 400,
    SQL2003_TIMESTAMP = 401,
    SQL2003_TO = 402,
    SQL2003_UNBOUNDED = 403,
    SQL2003_UNION = 404,
    SQL2003_UPDATE = 405,
    SQL2003_USING = 406,
    SQL2003_VALUES = 407,
    SQL2003_VARCHAR = 408,
    SQL2003_VARYING = 409,
    SQL2003_VAR_POP = 410,
    SQL2003_VAR_SAMP = 411,
    SQL2003_WHEN = 412,
    SQL2003_WHERE = 413,
    SQL2003_WITH = 414,
    SQL2003_WITHOUT = 415,
    SQL2003_YEAR = 416,
    SQL2003_ZONE = 417
  };
#endif

/* Value type.  */
#if ! defined SQL2003_STYPE && ! defined SQL2003_STYPE_IS_DECLARED

union SQL2003_STYPE
{
#line 85 "sqlparser_sql2003.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;
    NodeType nodetype;

#line 335 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
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

#line 365 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  106
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6661

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  178
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  146
/* YYNRULES -- Number of rules.  */
#define YYNRULES  466
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  796

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   417

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   174,     2,     2,     2,   177,     2,     2,
      12,    13,   170,   172,   169,   173,    14,   176,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   166,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   171,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   167,   175,   168,     2,     2,     2,     2,
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
     158,   159,   160,   161,   162,   163,   164,   165
};

#if SQL2003_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   230,   230,   240,   241,   249,   250,   251,   252,   256,
     261,   266,   271,   279,   280,   288,   293,   301,   302,   306,
     310,   314,   315,   316,   320,   328,   333,   338,   343,   348,
     357,   366,   383,   400,   401,   409,   418,   426,   431,   438,
     439,   465,   494,   495,   524,   525,   540,   547,   549,   551,
     554,   582,   583,   592,   600,   601,   609,   610,   618,   619,
     620,   630,   631,   635,   643,   644,   652,   661,   664,   668,
     675,   676,   686,   691,   699,   700,   709,   717,   718,   722,
     730,   731,   739,   740,   744,   751,   752,   760,   774,   783,
     784,   792,   793,   797,   798,   810,   815,   823,   824,   829,
     835,   841,   848,   854,   861,   867,   874,   880,   887,   893,
     900,   906,   913,   919,   926,   932,   943,   948,   953,   958,
     963,   968,   973,   978,   987,   988,   989,   993,   998,  1004,
    1009,  1018,  1027,  1036,  1047,  1058,  1069,  1076,  1077,  1082,
    1083,  1091,  1092,  1100,  1101,  1109,  1110,  1115,  1123,  1124,
    1142,  1143,  1144,  1145,  1146,  1147,  1148,  1152,  1160,  1168,
    1173,  1181,  1186,  1191,  1196,  1204,  1209,  1217,  1222,  1230,
    1239,  1240,  1245,  1253,  1254,  1262,  1263,  1271,  1272,  1280,
    1281,  1286,  1294,  1295,  1296,  1297,  1302,  1303,  1307,  1308,
    1316,  1317,  1324,  1324,  1328,  1329,  1330,  1331,  1332,  1333,
    1334,  1335,  1336,  1337,  1341,  1342,  1347,  1354,  1355,  1359,
    1360,  1361,  1362,  1366,  1367,  1368,  1369,  1370,  1371,  1372,
    1377,  1385,  1386,  1390,  1391,  1399,  1404,  1412,  1413,  1422,
    1423,  1424,  1425,  1430,  1436,  1442,  1448,  1454,  1466,  1481,
    1482,  1483,  1484,  1485,  1486,  1487,  1488,  1489,  1490,  1494,
    1503,  1504,  1505,  1506,  1507,  1511,  1513,  1518,  1523,  1527,
    1535,  1536,  1540,  1541,  1546,  1547,  1556,  1557,  1561,  1562,
    1566,  1567,  1568,  1572,  1576,  1581,  1582,  1583,  1587,  1591,
    1592,  1593,  1594,  1595,  1599,  1605,  1617,  1623,  1630,  1637,
    1644,  1653,  1660,  1667,  1674,  1681,  1690,  1697,  1710,  1711,
    1712,  1713,  1717,  1725,  1733,  1739,  1744,  1752,  1757,  1762,
    1767,  1768,  1773,  1774,  1775,  1776,  1777,  1778,  1782,  1790,
    1795,  1799,  1804,  1808,  1809,  1814,  1821,  1826,  1827,  1832,
    1837,  1844,  1848,  1852,  1856,  1860,  1867,  1874,  1878,  1883,
    1888,  1893,  1897,  1901,  1906,  1911,  1916,  1920,  1927,  1928,
    1932,  1937,  1942,  1947,  1952,  1957,  1962,  1966,  1970,  1974,
    1978,  1982,  1986,  1993,  1998,  2002,  2006,  2013,  2018,  2023,
    2028,  2033,  2038,  2043,  2047,  2052,  2056,  2061,  2065,  2069,
    2076,  2081,  2085,  2090,  2097,  2102,  2106,  2111,  2115,  2120,
    2125,  2130,  2135,  2140,  2144,  2149,  2153,  2158,  2162,  2169,
    2174,  2179,  2184,  2192,  2196,  2200,  2207,  2211,  2215,  2222,
    2226,  2233,  2234,  2235,  2239,  2240,  2244,  2245,  2249,  2250,
    2255,  2265,  2266,  2270,  2271,  2272,  2273,  2274,  2275,  2276,
    2277,  2278,  2279,  2280,  2281,  2282,  2283,  2284,  2285,  2286,
    2287,  2288,  2289,  2290,  2291,  2292,  2293,  2294,  2295,  2296,
    2297,  2298,  2299,  2300,  2301,  2302,  2303,  2304,  2305,  2306,
    2307,  2308,  2309,  2310,  2311,  2312,  2313
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
  "BIGINT", "BINARY", "BLOB", "BOOLEAN", "BY", "CALL", "CASE", "CAST",
  "CHAR", "CHARACTER", "CHARACTERS", "CLOB", "CNNOP", "COALESCE",
  "CODE_UNITS", "COLLATE", "COMP_EQ", "COMP_GE", "COMP_GT", "COMP_LE",
  "COMP_LT", "COMP_NE", "CONVERT", "CORRESPONDING", "COUNT", "CROSS",
  "CUME_DIST", "CURRENT", "CURRENT_TIMESTAMP", "CURRENT_USER", "DATE",
  "DAY", "DEC", "DECIMAL", "DEFAULT", "DELETE", "DENSE_RANK", "DESC",
  "DISTINCT", "DOUBLE", "ELSE", "END", "END_P", "ESCAPE", "ERROR",
  "EXCEPT", "EXCLUDE", "EXISTS", "FLOAT", "FOLLOWING", "FOR", "FROM",
  "FULL", "G", "GROUP", "GROUPING", "HAVING", "HOUR", "IN", "INNER",
  "INSERT", "INT", "INTEGER", "INTERSECT", "INTERVAL", "INTO", "IS",
  "JOIN", "K", "LARGE", "LEFT", "LIKE", "M", "MAX", "MIN", "MINUTE", "MOD",
  "MONTH", "MULTISET", "NATIONAL", "NATURAL", "NCHAR", "NCLOB", "NO",
  "NOT", "NULLIF", "NUMERIC", "OBJECT", "OCTETS", "OF", "ON", "ONLY", "OR",
  "ORDER", "OTHERS", "OUTER", "OVER", "PARTITION", "PERCENT_RANK",
  "PRECEDING", "PRECISION", "RANGE", "RANK", "READ", "REAL", "RECURSIVE",
  "REF", "RIGHT", "ROW", "ROWS", "ROW_NUMBER", "SCOPE", "SECOND", "SELECT",
  "SESSION_USER", "SET", "SETS", "SMALLINT", "SOME", "STDDEV_POP",
  "STDDEV_SAMP", "SUM", "SYSTEM_USER", "THEN", "TIES", "TIME", "TIMESTAMP",
  "TO", "UNBOUNDED", "UNION", "UPDATE", "USING", "VALUES", "VARCHAR",
  "VARYING", "VAR_POP", "VAR_SAMP", "WHEN", "WHERE", "WITH", "WITHOUT",
  "YEAR", "ZONE", "';'", "'{'", "'}'", "','", "'*'", "'^'", "'+'", "'-'",
  "'!'", "'|'", "'/'", "'%'", "$accept", "sql_stmt", "stmt_list", "stmt",
  "call_stmt", "sql_argument_list", "sql_argument", "value_expression",
  "sp_name", "dql_stmt", "dml_stmt", "insert_stmt",
  "insert_columns_and_source", "from_constructor", "delete_stmt",
  "update_stmt", "update_elem_list", "update_elem", "select_stmt",
  "query_expression", "query_expression_body", "query_term",
  "query_primary", "select_with_parens", "subquery", "table_subquery",
  "row_subquery", "simple_table", "opt_where", "opt_from_clause",
  "opt_groupby", "grouping_element_list", "grouping_element",
  "opt_order_by", "order_by", "sort_list", "sort_key", "opt_asc_desc",
  "opt_having", "with_clause", "with_list", "common_table_expr",
  "opt_derived_column_list", "simple_ident_list_with_parens",
  "simple_ident_list", "opt_distinct", "select_expr_list", "projection",
  "from_list", "table_reference", "table_primary",
  "table_primary_non_join", "opt_simple_ident_list_with_parens",
  "column_ref", "relation_factor", "joined_table", "qualified_join",
  "cross_join", "natural_join", "join_type", "join_outer",
  "search_condition", "boolean_term", "boolean_factor", "boolean_test",
  "boolean_primary", "predicate", "comparison_predicate",
  "quantified_comparison_predicate", "between_predicate", "like_predicate",
  "in_predicate", "null_predicate", "exists_predicate", "row_expr",
  "factor0", "factor1", "factor2", "factor3", "factor4", "row_expr_list",
  "in_expr", "truth_value", "comp_op", "cnn_op", "comp_all_some_any_op",
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
     412,   413,   414,   415,   416,   417,    59,   123,   125,    44,
      42,    94,    43,    45,    33,   124,    47,    37
};
# endif

#define YYPACT_NINF -684

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-684)))

#define YYTABLE_NINF -323

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      70,    52,  6347,    27,    32,   142,  6347,  6496,   106,    91,
      75,    60,  -684,  -684,  -684,  -684,  -684,  -684,  -684,    89,
      88,   164,  -684,  -684,    57,   264,  -684,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,   275,  -684,
    -684,  -684,  -684,   251,  -684,  6347,  6347,  -684,  -684,  2815,
     160,  6347,  -684,   149,   299,  6347,  -684,  -684,    70,   287,
    -684,  -684,   142,   142,   142,    88,  -684,  1618,  5295,   187,
      58,  -684,  -684,  -684,  -684,  -684,  -684,  2473,  3157,   330,
     347,   351,   352,  -684,  -684,   353,   355,   356,  -684,  -684,
    -684,  3157,  3157,  -684,  -684,  -684,   298,   204,  -684,   366,
    1283,   132,   156,   211,  -684,  -684,  -684,  -684,  -684,  -684,
     374,  -684,   376,  -684,  -684,   378,   257,  3157,  -684,  6347,
    6347,   373,  -684,   381,  -684,  3157,    57,    57,    57,  1447,
    -684,   382,  2644,   384,   231,   385,   291,   393,  -684,  -684,
     321,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,   746,
    5447,   400,  2644,  -684,  4845,   271,  3157,  -684,  -684,  -684,
      63,  2473,   414,    95,   418,   107,   273,  3157,  3157,  3157,
     431,   424,  3157,   425,  -684,  -684,  5596,   187,  2815,  2986,
    -684,  5745,  -684,  6347,   267,  3157,  -684,  -684,  -684,  -684,
    -684,  -684,  -684,  3157,  -684,  -684,  -684,  -684,  3157,  3157,
    1789,   430,  3157,  3485,   187,   277,    41,  -684,   432,   278,
     382,  1960,  -684,   280,    25,   164,   164,  -684,  1447,    10,
     377,    52,  -684,  -684,  -684,   746,  -684,  2644,  4696,  2644,
    2644,   230,  3157,  -684,  -684,   411,  -684,   239,  -684,   441,
      59,  3157,   225,   415,  2131,   382,  6347,   445,  5897,   291,
    -684,  -684,  -684,  -684,   448,  -684,  3157,  -684,  2644,   399,
     273,     3,   450,   135,   452,  -684,   146,  -684,  4994,  5143,
    -684,   253,  -684,  -684,  5143,  -684,  -684,  -684,  -684,   391,
    -684,  -684,   457,  -684,  -684,  -684,   132,   156,   211,  -684,
    -684,  -684,   459,    -3,  3157,   358,     4,  6049,  -684,   276,
    -684,  3157,  3157,  -684,  6347,  -684,   310,   466,  3157,  -684,
    -684,  -684,  -684,  -684,  -684,   388,   469,  -684,    34,    62,
     470,  -684,   474,   475,   367,   479,  -684,  -684,   227,   292,
      71,   481,   482,  -684,   484,  -684,    12,    45,   485,  -684,
      96,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,  -684,
    -684,   216,  -684,   460,   393,  -684,  -684,  -684,    72,  -684,
      20,  -684,  -684,  -684,  2473,  -684,  -684,  -684,   492,   200,
    3157,   441,  3157,  -684,  -684,  -684,  -684,   107,  -684,  -684,
    -684,  6347,  6347,   489,   217,  -684,   -19,   633,  3157,   440,
    -684,  4696,  -684,  6347,  -684,  3157,  4994,   305,   501,   299,
     426,   387,  -684,  5596,   387,   170,   387,  5596,   427,  -684,
     488,   439,  -684,   358,   358,     5,  6198,  -684,  -684,  6347,
     506,  3639,  -684,   107,  -684,  -684,   357,  -684,   416,   516,
     522,   419,   518,   523,   423,   524,   529,   533,   535,  -684,
     536,   530,  -684,   394,  -684,    39,     8,    77,   542,   438,
     537,   529,   548,  6347,   549,   409,   413,   557,   422,   429,
     558,   552,  -684,   428,  -684,  -684,  -684,  3157,   554,  -684,
    3157,    21,  -684,   206,  -684,  -684,  6347,  3157,  3157,   107,
    -684,   100,   559,    15,  -684,  -684,  -684,  5596,  -684,  -684,
     483,  -684,   490,  -684,  -684,  5596,   142,  2644,  -684,  -684,
    -684,   358,  6347,  -684,  -684,  -684,   561,  3790,  6347,  -684,
     317,  -684,   566,   568,   569,   571,   580,   575,   577,   585,
     337,   578,    14,    16,   579,   596,   325,   600,   601,   595,
     603,   461,   597,   599,   602,   610,   604,    17,   606,   607,
     451,   456,   613,   458,   462,   615,   624,  6347,   107,  -684,
     107,  3157,  3157,  -684,   107,   107,  -684,  -684,  -684,  -684,
    2644,   299,  5596,   680,  3328,   291,  -684,  -684,   618,   512,
    3941,  -684,   322,   619,  4092,   629,  -684,  -684,   529,   622,
    -684,   529,   623,  -684,  -684,  -684,  -684,  -684,  -684,  -684,
      53,  -684,  -684,   635,  -684,   636,  -684,    18,   626,  -684,
    -684,   630,   631,   637,   632,   634,   642,  -684,   529,   638,
    -684,  -684,   643,   515,   188,  -684,  -684,   192,  -684,  -684,
    -684,   639,   460,   107,   107,   291,  -684,  -684,  2644,   299,
    2302,   511,  -684,   487,   107,  -684,   640,    89,  -684,  -684,
    4243,  4394,  -684,   327,   644,   645,  -684,   646,  -684,  -684,
     648,   651,  -684,   660,   664,   520,  -684,   666,  -684,   529,
     667,   668,  -684,   669,  6347,   543,   545,   546,   547,  -684,
    -684,   291,  -684,  -684,   671,  3328,  3157,   159,  -684,  -684,
    -684,  -684,  4545,  -684,  -684,  -684,  -684,  -684,   672,   677,
    -684,   684,  -684,  -684,  -684,  -684,   519,   534,   538,   539,
    3328,  -684,  -684,  -684,  -684,  -684,   102,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -684,   685,   252,   570,   583,
     584,   641,  -684,  -684,  -684,  -684,   -25,   145,  -684,   686,
    -684,  -684,  -684,  -684,   127,  -684,  -684,  -684,   252,   576,
    -684,   594,  -684,  -684,  -684,  -684
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,     0,    82,     0,     0,     0,     0,
       0,     3,     8,     6,     7,    23,    22,    21,    20,    61,
      37,    39,    42,    44,     0,     0,   421,   429,   463,   239,
     430,   431,   432,   464,   433,   465,   434,   247,   253,   333,
     251,   458,   462,   435,   453,   428,   248,   334,   436,   426,
     437,   427,   240,   241,   335,   332,   438,   466,   439,   440,
     454,   441,   461,   252,   442,   443,   250,   455,   444,   445,
     446,   254,   447,   448,   460,   243,   244,   242,   459,   457,
     456,   449,   450,   245,   246,   451,   331,   452,     0,    19,
     423,   424,   425,   116,   422,     0,     0,    83,    84,     0,
       0,   444,    72,    74,    77,     0,     1,     2,     5,     0,
      36,    62,    82,    82,    82,    38,    45,     0,     0,    51,
       0,   213,   216,   214,   217,   215,   218,     0,   221,   431,
     464,   465,   292,   294,   219,     0,   466,     0,   296,   297,
      88,     0,     0,    47,    49,   184,     0,    85,   182,     0,
     414,   170,   173,   175,   177,   179,   183,   186,   187,   232,
     423,   231,   424,   230,   229,   425,    99,     0,    73,     0,
       0,     0,    78,     0,     4,     0,     0,     0,     0,     0,
      10,     0,     0,     0,    13,    15,    17,   139,   141,   143,
     145,   148,   150,   155,   151,   153,   152,   154,   156,    18,
       0,   117,     0,    31,     0,     0,     0,    24,    28,    25,
       0,     0,     0,   188,     0,   222,     0,     0,     0,     0,
       0,     0,     0,     0,   180,   181,     0,    51,     0,     0,
     419,     0,   204,     0,     0,     0,    87,   415,   417,   171,
     418,   207,   208,     0,   212,   209,   210,   211,     0,     0,
       0,     0,     0,     0,    51,    33,     0,    75,     0,    80,
       0,     0,    63,    64,    67,    41,    40,    43,     0,     0,
     188,     0,    48,   169,   144,     0,     9,     0,     0,     0,
       0,     0,     0,   198,   196,   197,   194,   195,   199,     0,
       0,     0,     0,     0,     0,     0,     0,   119,     0,    52,
      29,    30,    27,    26,     0,    46,     0,   185,     0,   227,
     223,     0,     0,     0,     0,   288,     0,   287,     0,     0,
      53,    89,    91,    93,   414,    92,   124,   125,   126,    54,
      86,   284,     0,   416,   420,   205,   172,   174,   176,   178,
     409,   410,     0,     0,     0,     0,     0,     0,   101,   100,
      32,     0,     0,    79,     0,    76,     0,     0,     0,    68,
      69,    66,   149,    14,   360,   430,   383,   336,   378,   379,
     377,   337,   356,   362,     0,   365,   359,   358,   436,     0,
     398,   397,   361,   366,   445,   357,   457,   456,   450,   302,
      16,   299,   300,   301,   298,   317,   315,   316,   314,   348,
     349,   310,   313,   312,   140,   142,   192,   193,     0,   146,
       0,   200,   201,   202,     0,   190,   165,   167,     0,   161,
       0,     0,     0,   203,   411,   413,   412,   157,   206,   158,
     123,     0,     0,   118,    46,   189,     0,     0,     0,     0,
     224,     0,   291,     0,   293,     0,     0,     0,    92,    97,
       0,   137,   136,     0,   137,     0,   137,     0,     0,    95,
       0,    70,   285,   238,   234,     0,     0,   249,   286,     0,
     119,     0,    34,    35,    81,    12,     0,    65,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   364,
       0,   330,   318,     0,   320,   327,   387,   385,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   305,   306,     0,   309,   311,   147,     0,     0,   168,
       0,     0,   166,   163,   121,   122,     0,     0,     0,   228,
     220,     0,     0,     0,    94,    98,    96,     0,   138,   133,
       0,   134,     0,   135,    90,     0,    82,     0,    50,   237,
     233,   236,   260,   256,   255,   258,   123,     0,     0,   103,
     102,    11,   381,     0,     0,   375,     0,     0,   373,     0,
     402,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   159,   191,
     162,     0,     0,   120,   225,   226,   289,   290,   295,   131,
       0,     0,     0,     0,     0,    71,   235,   261,     0,   262,
       0,   107,   106,   122,     0,     0,   382,   368,     0,     0,
     367,     0,     0,   403,   404,   408,   406,   407,   405,   401,
     400,   376,   355,     0,   353,     0,   363,     0,   325,   319,
     323,     0,     0,     0,     0,   393,     0,   388,     0,     0,
     396,   351,     0,     0,   340,   341,   342,   345,   346,   347,
     371,     0,   308,   160,   164,   128,   130,   132,     0,     0,
       0,   248,    55,    56,    59,   257,     0,    61,   115,   114,
       0,     0,   105,   104,     0,     0,   370,     0,   369,   399,
       0,     0,   329,     0,     0,   326,   386,     0,   384,     0,
       0,     0,   391,     0,     0,     0,     0,     0,     0,   304,
     307,   127,   129,    58,     0,     0,     0,   264,   111,   110,
     113,   112,     0,   380,   374,   372,   354,   352,     0,     0,
     390,     0,   389,   394,   350,   303,     0,     0,     0,     0,
       0,    57,   263,   267,   266,   259,     0,   109,   108,   328,
     324,   392,   338,   339,   343,   344,     0,     0,     0,     0,
       0,   279,   268,   272,   269,    60,     0,     0,   275,     0,
     277,   271,   270,   273,     0,   265,   276,   278,     0,     0,
     281,     0,   282,   274,   280,   283
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -684,  -684,   592,  -684,  -684,  -166,  -684,  -684,   608,  -684,
    -684,  -684,  -684,   498,  -684,  -684,   364,  -684,   -55,    11,
     692,   181,   540,  -684,  -160,  -172,  -684,  -684,  -150,  -684,
    -684,  -663,  -684,    30,  -684,   361,  -684,  -684,  -684,  -684,
     -30,  -684,  -684,  -119,   369,  -106,   493,  -684,   263,  -302,
    -476,  -684,  -684,  -684,    66,  -264,  -684,  -684,  -684,   269,
    -107,  -176,   446,  -130,  -684,  -684,  -684,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,   737,   491,   486,   494,  -108,  -684,
    -204,   313,   323,  -684,  -684,  -684,  -684,  -684,  -683,  -684,
    -684,   433,  -684,  -684,  -684,  -684,    42,  -684,   306,  -342,
    -684,   183,  -684,  -684,  -684,  -684,  -684,  -684,   -20,  -684,
    -684,   -49,  -684,  -684,  -684,  -684,   303,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -684,    -2,  -684,  -684,  -684,
    -684,  -684,  -684,  -684,  -684,  -482,   105,  -684,  -684,  -684,
     434,   435,   517,  -388,   591,  -684
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,    10,    11,    12,   183,   184,   185,    88,    13,
      14,    15,   207,   208,    16,    17,   254,   255,    18,   212,
      20,    21,    22,   143,   144,   319,   145,    23,   203,   227,
     461,   682,   683,   110,   111,   262,   263,   361,   548,    24,
     102,   103,   171,   172,   258,    99,   146,   147,   320,   321,
     322,   323,   536,   148,   149,   325,   326,   327,   328,   458,
     539,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   213,   151,   152,   153,   154,   155,
     214,   416,   409,   294,   235,   295,   243,   248,   156,   157,
     216,   309,   310,   439,   158,   159,   160,   161,   162,   467,
     553,   554,   618,   619,   687,   755,   756,   771,   778,   773,
     774,   779,   780,   785,   163,   164,   390,   391,   392,   393,
     394,   395,   492,   493,   649,   494,   165,   396,   397,   398,
     399,   400,   401,   402,   403,   571,   639,   640,   344,   428,
     236,   237,   238,   239,   166,    94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      92,   210,   301,   269,    92,    92,   176,   177,   178,   273,
     464,    19,    25,   514,   312,   515,   447,   468,   551,   586,
     578,   272,   441,   362,   504,   332,   299,   642,   608,   644,
     661,   702,   232,   224,   225,   233,   517,   601,   232,   232,
     232,   233,   233,   233,    90,   359,   480,   786,    90,    90,
     232,   577,   274,   233,   448,   232,   232,   507,   233,   233,
     232,   609,   751,   233,     1,   209,   272,   417,    89,     1,
     204,   168,   100,   770,   483,     1,   232,   329,   406,   233,
     352,   407,     1,   498,   777,   360,   633,   766,   355,   580,
     634,   106,   269,    92,    92,   357,   279,   782,     2,    92,
     272,    95,   435,    92,   350,   777,   121,   122,   123,   124,
     125,   363,   126,   606,   511,   205,    92,   415,   511,    19,
      96,   549,   550,   429,   767,   279,   481,   527,     3,   272,
     232,    19,   436,   233,   105,   272,   677,    90,    90,   257,
     107,   339,   232,    90,   447,   233,   695,    90,    92,   697,
     405,   540,   768,     4,   484,   303,   112,    97,   272,   134,
      90,   119,   120,   499,   638,   579,   418,    92,    92,   581,
     232,    89,   234,   233,   505,   506,   711,   789,   234,   234,
     234,   232,   448,   643,   233,   645,   662,   703,     5,  -322,
     234,   482,    90,     5,     5,   234,   234,   512,    92,     5,
     234,   512,    92,    98,   790,   109,     5,   508,   509,   616,
     518,    90,    90,   206,     7,    25,   234,   787,   206,   485,
       7,    19,   304,     6,    92,     7,   108,   741,   500,    92,
     -45,    92,     7,   791,   582,   232,   406,     8,   233,   407,
     113,   232,    90,   613,   233,   451,    90,   420,   513,   415,
     114,    92,   452,   769,   233,   244,   121,   122,   123,   124,
     125,   272,   126,   454,   306,   118,   520,   783,    90,  -116,
     234,   253,   602,    90,   792,    90,    92,   116,   412,   304,
     413,    39,   234,   753,   720,   -45,   272,   117,  -117,   443,
     471,   754,   324,   272,    92,    90,    92,   272,   167,   334,
     456,   450,   768,   -45,   241,   242,   421,    47,    91,   134,
     234,   170,    91,    91,   175,   445,    92,    92,   169,   422,
      90,   234,    92,   496,   497,    54,   245,    55,   451,  -118,
     535,   624,   246,   247,  -121,   452,   690,   408,    90,  -120,
      90,   732,   217,   453,   389,    92,   454,   541,   202,   543,
     715,   716,    92,   450,   717,   718,   455,   265,   266,   218,
      90,    90,   491,   219,   220,   221,    90,   222,   223,   -45,
     633,   615,   226,   228,   634,   234,   495,   272,   229,    39,
     451,   234,   249,   456,   324,   272,   250,   452,   251,    90,
     252,    86,   260,   261,   271,   453,    90,   276,   454,   282,
     277,    91,    91,   776,   278,    47,   279,    91,   455,   280,
     281,    91,   232,   635,   298,   233,   283,   284,   285,   286,
     287,   288,   457,    54,    91,    55,   300,   305,   636,    92,
      92,   307,   637,   308,   675,   456,   314,   315,   317,    92,
     614,    92,   335,   345,    92,   353,   351,   354,   638,   358,
     411,    92,   272,   414,   423,    92,    91,   304,   289,   431,
     648,   434,   438,   442,    92,   444,   290,    92,   460,    92,
     462,   291,   463,    90,    90,    91,    91,   466,   475,   476,
     478,   479,   486,    90,   292,    90,   487,   488,    90,    86,
     489,   490,   676,   501,   502,    90,   503,   510,   233,    90,
     519,    92,   721,   526,   530,   538,    91,   389,    90,   532,
      91,    90,   324,    90,   534,   546,   537,   545,   547,   324,
     557,   563,   752,   324,    92,   561,   562,   564,   567,   565,
     566,   450,    91,   568,   570,    92,   569,    91,   572,    91,
     573,   574,   575,    92,   576,    90,   306,   583,   584,   585,
      92,   293,   234,   587,   589,    92,    92,   590,   451,    91,
     722,   591,   592,   595,   596,   452,   597,   599,    90,   588,
     593,   655,   607,   453,   650,   620,   454,   594,   625,    90,
     612,   626,   627,   628,    91,   629,   455,    90,   630,   631,
     632,   641,   646,    93,    90,    92,   610,    93,   104,    90,
      90,   647,    91,   324,    91,   651,   652,   653,   654,   656,
      92,   324,   657,   456,   658,   659,   665,   660,    92,   663,
     664,   666,    92,   668,    91,    91,   667,   669,   670,   671,
      91,   685,   686,   691,   694,   696,   698,   611,   704,    90,
     700,   701,   707,   705,   706,   708,   709,   710,   713,   714,
     724,   712,   719,    91,    90,   282,   725,   733,   734,   735,
      91,   736,    90,   672,   737,   738,    90,   726,   232,   739,
    -321,   233,   283,   284,   285,   286,   287,   288,   324,   740,
     742,   743,   744,   750,   762,   759,    93,    93,    92,    92,
     760,   746,   104,   747,   748,   749,    93,   761,   775,   763,
     174,   781,   788,   764,   765,   782,   783,   794,   302,   201,
     784,   795,    92,   173,   289,   472,   115,   727,   267,   477,
     544,   330,   290,   474,   542,   404,   336,   291,   450,   337,
      92,   516,    90,    90,   522,   617,   772,    91,    91,   793,
     292,   240,   338,   440,   531,   699,     0,    91,   333,    91,
       0,     0,    91,     0,   449,   451,    90,     0,   459,    91,
     104,   259,   452,    91,     0,     0,     0,     0,   282,     0,
     453,     0,    91,   454,    90,    91,     0,    91,     0,   528,
     745,   232,     0,   455,   233,   283,   284,   285,   286,   287,
     288,   297,     0,   678,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   293,   234,    91,
     456,     0,     0,     0,     0,     0,     0,    93,     0,     0,
       0,     0,   240,     0,    93,     0,     0,   289,     0,     0,
       0,     0,    91,     0,   679,   290,   150,     0,     0,     0,
     291,     0,     0,    91,   349,     0,     0,     0,     0,     0,
       0,    91,     0,   292,   199,     0,     0,     0,    91,     0,
       0,     0,     0,    91,    91,   215,     0,     0,     0,    93,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   430,     0,   433,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    91,   256,     0,     0,     0,     0,    93,
     240,     0,   264,     0,     0,   240,   270,     0,    91,   275,
     293,   234,     0,     0,     0,     0,    91,     0,     0,     0,
      91,     0,     0,     0,     0,     0,     0,     0,   470,   275,
       0,     0,     0,     0,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,   311,     0,   313,     0,     0,   316,
       0,     0,     0,     0,     0,   150,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   343,     0,   346,
       0,     0,     0,     0,     0,     0,    91,    91,   199,     0,
       0,     0,     0,     0,     0,   270,     0,     0,     0,     0,
       0,     0,     0,     0,   199,     0,   275,   275,     0,   410,
      91,     0,   524,   525,     0,     0,     0,     0,   419,     0,
       0,   427,    93,     0,    93,     0,     0,    93,    91,     0,
       0,     0,     0,     0,    93,   437,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,   555,     0,     0,
     556,     0,   560,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   465,     0,     0,     0,     0,     0,     0,   256,   473,
       0,     0,     0,     0,    93,   264,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   603,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,    93,     0,     0,     0,
       0,     0,     0,   555,     0,     0,     0,     0,   622,   623,
       0,     0,     0,     0,     0,     0,     0,   521,     0,   523,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   529,     0,     0,     0,     0,
       0,     0,   533,     0,     0,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,     0,     0,     0,     0,     0,     0,
       0,   689,     0,     0,     0,   693,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   598,     0,     0,   600,     0,     0,
       0,     0,     0,     0,   604,   605,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   729,   731,     0,   275,     0,    26,   230,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    27,   231,    28,    29,    93,     0,    30,     0,     0,
       0,     0,     0,    31,     0,     0,    32,     0,   232,    33,
      34,   233,     0,   758,     0,     0,     0,     0,    35,    36,
      37,     0,    38,     0,     0,     0,     0,    39,   673,   674,
       0,     0,    40,    41,     0,     0,     0,   275,     0,     0,
       0,   684,    42,     0,     0,    43,    44,     0,     0,    45,
       0,    46,     0,    47,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,    49,    50,     0,     0,    51,    52,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,     0,    61,     0,     0,
      62,     0,     0,     0,    63,    64,    65,     0,    66,    67,
       0,    68,    69,     0,    70,   275,    71,    72,    73,     0,
       0,     0,    74,     0,     0,    75,    76,    77,     0,     0,
      78,    79,    80,     0,    81,     0,     0,     0,     0,    82,
       0,    83,    84,     0,     0,     0,    85,    86,    87,     0,
      26,   121,   122,   123,   124,   125,     0,   126,   234,   268,
       0,     0,   684,     0,     0,    27,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,   128,   129,     0,     0,
      32,     0,     0,   130,    34,     0,     0,   684,     0,     0,
       0,     0,   131,    36,    37,     0,    38,     0,   132,   133,
       0,    39,     0,     0,   134,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,   181,     0,    43,
      44,     0,     0,    45,     0,    46,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,    49,    50,
     135,     0,    51,    52,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,   182,   136,     0,    58,    59,    60,
       0,    61,     0,     0,    62,     0,     0,     0,    63,    64,
      65,     0,    66,    67,     0,    68,    69,   137,    70,     0,
      71,    72,    73,     5,   138,     0,    74,     0,     0,    75,
      76,    77,   139,     0,    78,    79,    80,     0,    81,     0,
       0,     0,     0,    82,     0,    83,    84,     0,     0,     7,
      85,    86,    87,     0,     0,     0,     0,     0,     0,   141,
     142,    26,   121,   122,   123,   124,   125,     0,   126,     0,
     179,   180,     0,     0,     0,     0,    27,     0,    28,    29,
       0,     0,    30,     0,     0,     0,     0,   128,   129,     0,
       0,    32,     0,     0,   130,    34,     0,     0,     0,     0,
       0,     0,     0,   131,    36,    37,     0,    38,     0,   132,
     133,     0,    39,     0,     0,   134,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,   181,     0,
      43,    44,     0,     0,    45,     0,    46,     0,    47,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,    49,
      50,   135,     0,    51,    52,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,   182,   136,     0,    58,    59,
      60,     0,    61,     0,     0,    62,     0,     0,     0,    63,
      64,    65,     0,    66,    67,     0,    68,    69,   137,    70,
       0,    71,    72,    73,     0,   138,     0,    74,     0,     0,
      75,    76,    77,   139,     0,    78,    79,    80,     0,    81,
       0,     0,     0,     0,    82,     0,    83,    84,     0,     0,
       0,    85,    86,    87,     0,     0,     0,     0,     0,     0,
     141,   142,    26,   121,   122,   123,   124,   125,     0,   126,
       0,   127,     0,     0,   340,     0,     0,    27,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,   128,   129,
       0,     0,    32,     0,     0,   130,    34,     0,     0,     0,
       0,     0,     0,     0,   131,    36,    37,     0,    38,     0,
     132,   133,     0,    39,     0,     0,   134,     0,    40,    41,
     341,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,    44,     0,     0,    45,     0,    46,     0,    47,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
      49,    50,   135,     0,    51,    52,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,   136,     0,    58,
      59,    60,     0,    61,     0,     0,    62,     0,     0,     0,
      63,    64,    65,     0,    66,    67,     0,    68,    69,   137,
      70,     0,    71,    72,    73,     0,   138,     0,    74,     0,
       0,    75,    76,    77,   139,     0,    78,    79,    80,     0,
      81,     0,     0,     0,     0,    82,     0,    83,    84,     0,
       0,     0,    85,    86,    87,     0,     0,     0,     0,   342,
       0,   141,   142,    26,   121,   122,   123,   124,   125,     0,
     126,     0,   179,   356,     0,     0,     0,     0,    27,     0,
      28,    29,     0,     0,    30,     0,     0,     0,     0,   128,
     129,     0,     0,    32,     0,     0,   130,    34,     0,     0,
       0,     0,     0,     0,     0,   131,    36,    37,     0,    38,
       0,   132,   133,     0,    39,     0,     0,   134,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
     181,     0,    43,    44,     0,     0,    45,     0,    46,     0,
      47,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,    49,    50,   135,     0,    51,    52,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,   182,   136,     0,
      58,    59,    60,     0,    61,     0,     0,    62,     0,     0,
       0,    63,    64,    65,     0,    66,    67,     0,    68,    69,
     137,    70,     0,    71,    72,    73,     0,   138,     0,    74,
       0,     0,    75,    76,    77,   139,     0,    78,    79,    80,
       0,    81,     0,     0,     0,     0,    82,     0,    83,    84,
       0,     0,     0,    85,    86,    87,     0,     0,     0,     0,
       0,     0,   141,   142,    26,   121,   122,   123,   124,   125,
       0,   126,     0,   127,     0,     0,   424,     0,   425,    27,
       0,    28,    29,     0,     0,    30,     0,     0,     0,     0,
     128,   129,     0,     0,    32,     0,     0,   130,    34,     0,
       0,     0,     0,     0,     0,     0,   131,    36,    37,     0,
      38,     0,   132,   133,     0,    39,     0,     0,   134,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,    43,    44,     0,     0,    45,     0,    46,
       0,    47,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,    49,    50,   135,     0,    51,    52,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,   136,
       0,    58,    59,    60,     0,    61,     0,     0,    62,     0,
       0,     0,    63,    64,    65,     0,    66,    67,     0,    68,
      69,   137,    70,     0,    71,    72,    73,     0,   138,     0,
      74,     0,   426,    75,    76,    77,   139,     0,    78,    79,
      80,     0,    81,     0,     0,     0,     0,    82,     0,    83,
      84,     0,     0,     0,    85,    86,    87,     0,     0,     0,
       0,     0,     0,   141,   142,    26,   121,   122,   123,   124,
     125,     0,   126,     0,   211,   723,     0,     0,     0,     0,
      27,     0,    28,    29,     0,     0,    30,     0,     0,     0,
       0,   128,   129,     0,     0,    32,     0,     0,   130,    34,
       0,     0,     0,     0,     0,     0,     0,   131,    36,    37,
       0,    38,     0,   132,   133,     0,    39,     0,     0,   134,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,     0,    43,    44,     0,     0,    45,     0,
      46,     0,    47,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,    49,    50,   135,     0,    51,    52,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
     136,     0,    58,    59,    60,     0,    61,     0,     0,    62,
       0,     0,     0,    63,    64,    65,     0,    66,    67,     0,
      68,    69,   137,    70,     0,    71,    72,    73,     5,   138,
       0,    74,     0,     0,    75,    76,    77,   139,     0,    78,
      79,    80,     0,    81,     0,     0,     0,     0,    82,     0,
      83,    84,     0,     0,     7,    85,    86,    87,     0,     0,
       0,     0,     0,     0,   141,   142,    26,   121,   122,   123,
     124,   125,     0,   126,     0,   211,     0,     0,     0,     0,
       0,    27,     0,    28,    29,     0,     0,    30,     0,     0,
       0,     0,   128,   129,     0,     0,    32,     0,     0,   130,
      34,     0,     0,     0,     0,     0,     0,     0,   131,    36,
      37,     0,    38,     0,   132,   133,     0,    39,     0,     0,
     134,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    43,    44,     0,     0,    45,
       0,    46,     0,    47,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,    49,    50,   135,     0,    51,    52,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,   136,     0,    58,    59,    60,     0,    61,     0,     0,
      62,     0,     0,     0,    63,    64,    65,     0,    66,    67,
       0,    68,    69,   137,    70,     0,    71,    72,    73,     5,
     138,     0,    74,     0,     0,    75,    76,    77,   139,     0,
      78,    79,    80,     0,    81,     0,     0,     0,     0,    82,
       0,    83,    84,     0,     0,     7,    85,    86,    87,     0,
       0,     0,     0,     0,     0,   141,   142,    26,   121,   122,
     123,   124,   125,     0,   126,     0,   179,     0,     0,     0,
       0,     0,    27,     0,    28,    29,     0,     0,    30,     0,
       0,     0,     0,   128,   129,     0,     0,    32,     0,     0,
     130,    34,     0,     0,     0,     0,     0,     0,     0,   131,
      36,    37,     0,    38,     0,   132,   133,     0,    39,     0,
       0,   134,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,   181,     0,    43,    44,     0,     0,
      45,     0,    46,     0,    47,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,    49,    50,   135,     0,    51,
      52,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,   182,   136,     0,    58,    59,    60,     0,    61,     0,
       0,    62,     0,     0,     0,    63,    64,    65,     0,    66,
      67,     0,    68,    69,   137,    70,     0,    71,    72,    73,
       0,   138,     0,    74,     0,     0,    75,    76,    77,   139,
       0,    78,    79,    80,     0,    81,     0,     0,     0,     0,
      82,     0,    83,    84,     0,     0,     0,    85,    86,    87,
       0,     0,     0,     0,     0,     0,   141,   142,    26,   121,
     122,   123,   124,   125,     0,   126,     0,   127,     0,     0,
       0,     0,     0,    27,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,   128,   129,     0,     0,    32,     0,
       0,   130,    34,     0,     0,     0,     0,     0,     0,     0,
     131,    36,    37,     0,    38,     0,   132,   133,     0,    39,
       0,     0,   134,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,    44,     0,
       0,    45,     0,    46,     0,    47,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,    49,    50,   135,     0,
      51,    52,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,   136,     0,    58,    59,    60,     0,    61,
       0,     0,    62,     0,     0,     0,    63,    64,    65,     0,
      66,    67,     0,    68,    69,   137,    70,     0,    71,    72,
      73,     0,   138,     0,    74,     0,     0,    75,    76,    77,
     139,     0,    78,    79,    80,     0,    81,     0,     0,     0,
       0,    82,     0,    83,    84,     0,     0,     0,    85,    86,
      87,     0,     0,     0,     0,   140,     0,   141,   142,    26,
     121,   122,   123,   124,   125,     0,   126,     0,   127,   331,
       0,     0,     0,     0,    27,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,   128,   129,     0,     0,    32,
       0,     0,   130,    34,     0,     0,     0,     0,     0,     0,
       0,   131,    36,    37,     0,    38,     0,   132,   133,     0,
      39,     0,     0,   134,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,    43,    44,
       0,     0,    45,     0,    46,     0,    47,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,    49,    50,   135,
       0,    51,    52,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,   136,     0,    58,    59,    60,     0,
      61,     0,     0,    62,     0,     0,     0,    63,    64,    65,
       0,    66,    67,     0,    68,    69,   137,    70,     0,    71,
      72,    73,     0,   138,     0,    74,     0,     0,    75,    76,
      77,   139,     0,    78,    79,    80,     0,    81,     0,     0,
       0,     0,    82,     0,    83,    84,     0,     0,     0,    85,
      86,    87,     0,     0,     0,     0,     0,     0,   141,   142,
      26,   121,   122,   123,   124,   125,     0,   126,     0,   127,
       0,     0,     0,     0,     0,    27,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,   128,   129,     0,     0,
      32,     0,     0,   130,    34,     0,     0,     0,     0,     0,
       0,     0,   131,    36,    37,     0,    38,     0,   132,   133,
       0,    39,     0,     0,   134,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
      44,     0,     0,    45,     0,    46,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,    49,    50,
     135,     0,    51,    52,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,   136,     0,    58,    59,    60,
       0,    61,     0,     0,    62,     0,     0,     0,    63,    64,
      65,     0,    66,    67,     0,    68,    69,   137,    70,     0,
      71,    72,    73,     0,   138,     0,    74,     0,     0,    75,
      76,    77,   139,     0,    78,    79,    80,     0,    81,     0,
       0,     0,     0,    82,     0,    83,    84,     0,     0,     0,
      85,    86,    87,     0,     0,     0,     0,     0,     0,   141,
     142,    26,   121,   122,   123,   124,   125,     0,   126,     0,
     680,     0,     0,     0,     0,     0,    27,     0,    28,    29,
       0,     0,    30,     0,     0,     0,     0,   128,   129,     0,
       0,    32,     0,     0,   130,    34,     0,     0,     0,     0,
       0,     0,     0,   131,    36,    37,     0,    38,     0,   132,
     133,     0,    39,     0,     0,   134,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
      43,    44,     0,     0,    45,     0,   681,     0,    47,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,    49,
      50,   135,     0,    51,    52,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,   136,     0,    58,    59,
      60,     0,    61,     0,     0,    62,     0,     0,     0,    63,
      64,    65,     0,    66,    67,     0,    68,    69,   137,    70,
       0,    71,    72,    73,     0,   138,     0,    74,     0,     0,
      75,    76,    77,   139,     0,    78,    79,    80,     0,    81,
       0,     0,     0,     0,    82,     0,    83,    84,    26,     0,
       0,    85,    86,    87,     0,     0,     0,     0,     0,   347,
     141,   142,     0,    27,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,     0,    31,     0,     0,    32,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,     0,    38,     0,     0,     0,     0,    39,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,    44,     0,
       0,    45,     0,    46,     0,    47,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,    49,    50,     0,     0,
      51,    52,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,    61,
       0,     0,    62,     0,     0,     0,    63,    64,    65,     0,
      66,    67,     0,    68,    69,     0,    70,     0,    71,    72,
      73,     0,     0,     0,    74,     0,     0,    75,    76,    77,
       0,     0,    78,    79,    80,     0,    81,     0,     0,     0,
       0,    82,    26,    83,    84,     0,     0,     0,    85,    86,
      87,     0,     0,   558,     0,   348,     0,    27,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,     0,    31,
       0,     0,    32,     0,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,    35,    36,    37,     0,    38,     0,
       0,     0,     0,    39,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,    44,     0,     0,    45,     0,    46,     0,    47,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
      49,    50,     0,     0,    51,    52,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,     0,    61,     0,     0,    62,     0,     0,     0,
      63,    64,    65,     0,    66,    67,     0,    68,    69,     0,
      70,     0,    71,    72,    73,     0,     0,     0,    74,     0,
       0,    75,    76,    77,     0,     0,    78,    79,    80,     0,
      81,     0,     0,    26,     0,    82,     0,    83,    84,     0,
       0,     0,    85,    86,    87,     0,     0,     0,    27,   559,
      28,    29,     0,     0,    30,     0,     0,     0,     0,     0,
      31,     0,     0,    32,     0,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,    35,    36,    37,     0,    38,
       0,     0,     0,     0,    39,     0,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,    42,
       0,     0,    43,    44,     0,     0,    45,     0,    46,     0,
      47,     0,     0,     0,     0,     0,     0,    48,     0,     0,
       0,    49,    50,     0,     0,    51,    52,    53,    54,     0,
      55,    56,     0,     0,     0,     0,     0,     0,    57,     0,
      58,    59,    60,     0,    61,     0,     0,    62,     0,     0,
       0,    63,    64,    65,     0,    66,    67,     0,    68,    69,
       0,    70,     0,    71,    72,    73,     0,     0,     0,    74,
       0,     0,    75,    76,    77,     0,     0,    78,    79,    80,
       0,    81,     0,     0,    26,     0,    82,     0,    83,    84,
       0,     0,     0,    85,    86,    87,     0,     0,     0,    27,
     621,    28,    29,     0,     0,    30,     0,     0,     0,     0,
       0,    31,     0,     0,    32,     0,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,    35,    36,    37,     0,
      38,     0,     0,     0,     0,    39,     0,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,     0,
      42,     0,     0,    43,    44,     0,     0,    45,     0,    46,
       0,    47,     0,     0,     0,     0,     0,     0,    48,     0,
       0,     0,    49,    50,     0,     0,    51,    52,    53,    54,
       0,    55,    56,     0,     0,     0,     0,     0,     0,    57,
       0,    58,    59,    60,     0,    61,     0,     0,    62,     0,
       0,     0,    63,    64,    65,     0,    66,    67,     0,    68,
      69,     0,    70,     0,    71,    72,    73,     0,     0,     0,
      74,     0,     0,    75,    76,    77,     0,     0,    78,    79,
      80,     0,    81,     0,     0,    26,     0,    82,     0,    83,
      84,     0,     0,     0,    85,    86,    87,     0,     0,     0,
      27,   688,    28,    29,     0,     0,    30,     0,     0,     0,
       0,     0,    31,     0,     0,    32,     0,     0,    33,    34,
       0,     0,     0,     0,     0,     0,     0,    35,    36,    37,
       0,    38,     0,     0,     0,     0,    39,     0,     0,     0,
       0,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,    42,     0,     0,    43,    44,     0,     0,    45,     0,
      46,     0,    47,     0,     0,     0,     0,     0,     0,    48,
       0,     0,     0,    49,    50,     0,     0,    51,    52,    53,
      54,     0,    55,    56,     0,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    60,     0,    61,     0,     0,    62,
       0,     0,     0,    63,    64,    65,     0,    66,    67,     0,
      68,    69,     0,    70,     0,    71,    72,    73,     0,     0,
       0,    74,     0,     0,    75,    76,    77,     0,     0,    78,
      79,    80,     0,    81,     0,     0,    26,     0,    82,     0,
      83,    84,     0,     0,     0,    85,    86,    87,     0,     0,
       0,    27,   692,    28,    29,     0,     0,    30,     0,     0,
       0,     0,     0,    31,     0,     0,    32,     0,     0,    33,
      34,     0,     0,     0,     0,     0,     0,     0,    35,    36,
      37,     0,    38,     0,     0,     0,     0,    39,     0,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    43,    44,     0,     0,    45,
       0,    46,     0,    47,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,    49,    50,     0,     0,    51,    52,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,     0,    61,     0,     0,
      62,     0,     0,     0,    63,    64,    65,     0,    66,    67,
       0,    68,    69,     0,    70,     0,    71,    72,    73,     0,
       0,     0,    74,     0,     0,    75,    76,    77,     0,     0,
      78,    79,    80,     0,    81,     0,     0,    26,     0,    82,
       0,    83,    84,     0,     0,     0,    85,    86,    87,     0,
       0,     0,    27,   728,    28,    29,     0,     0,    30,     0,
       0,     0,     0,     0,    31,     0,     0,    32,     0,     0,
      33,    34,     0,     0,     0,     0,     0,     0,     0,    35,
      36,    37,     0,    38,     0,     0,     0,     0,    39,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,    43,    44,     0,     0,
      45,     0,    46,     0,    47,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,    49,    50,     0,     0,    51,
      52,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,     0,    61,     0,
       0,    62,     0,     0,     0,    63,    64,    65,     0,    66,
      67,     0,    68,    69,     0,    70,     0,    71,    72,    73,
       0,     0,     0,    74,     0,     0,    75,    76,    77,     0,
       0,    78,    79,    80,     0,    81,     0,     0,    26,     0,
      82,     0,    83,    84,     0,     0,     0,    85,    86,    87,
       0,     0,     0,    27,   730,    28,    29,     0,     0,    30,
       0,     0,     0,     0,     0,    31,     0,     0,    32,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,     0,    38,     0,     0,     0,     0,    39,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,    44,     0,
       0,    45,     0,    46,     0,    47,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,    49,    50,     0,     0,
      51,    52,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,    61,
       0,     0,    62,     0,     0,     0,    63,    64,    65,     0,
      66,    67,     0,    68,    69,     0,    70,     0,    71,    72,
      73,     0,     0,     0,    74,     0,     0,    75,    76,    77,
       0,     0,    78,    79,    80,     0,    81,     0,     0,    26,
       0,    82,     0,    83,    84,     0,     0,     0,    85,    86,
      87,     0,     0,     0,    27,   757,    28,    29,     0,   364,
     365,   366,   367,     0,     0,     0,    31,   368,   369,    32,
     370,     0,    33,    34,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,     0,    38,     0,     0,     0,   371,
      39,   372,   373,     0,     0,    40,    41,     0,   374,     0,
       0,     0,     0,     0,     0,    42,     0,   375,    43,    44,
       0,     0,    45,     0,    46,     0,    47,     0,     0,     0,
     376,   377,     0,   378,     0,     0,     0,    49,    50,     0,
       0,    51,    52,    53,    54,     0,    55,    56,   379,     0,
     380,   381,     0,     0,    57,   382,    58,    59,    60,     0,
      61,     0,     0,    62,     0,     0,     0,    63,    64,    65,
       0,    66,    67,   383,    68,   384,     0,    70,     0,    71,
      72,    73,     0,     0,     0,    74,   385,     0,    75,    76,
      77,     0,     0,    78,   386,   387,     0,    81,    26,     0,
       0,     0,   388,     0,    83,    84,     0,     1,     0,    85,
      86,    87,     0,    27,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,     0,    31,     0,     0,    32,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,     0,    38,     0,     0,     0,     0,    39,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,    44,     0,
       0,    45,     0,    46,     0,    47,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,    49,    50,     0,     0,
      51,    52,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,    61,
       0,     0,    62,     0,     0,     0,    63,    64,    65,     0,
      66,    67,     0,    68,    69,     0,    70,     0,    71,    72,
      73,     5,     0,     0,    74,     0,     0,    75,    76,    77,
       0,     0,    78,    79,    80,     0,    81,    26,     0,     0,
       0,    82,     0,    83,    84,     0,   446,     7,    85,    86,
      87,     0,    27,     0,    28,    29,     0,     0,    30,     0,
       0,     0,     0,     0,    31,     0,     0,    32,     0,     0,
      33,    34,     0,     0,     0,     0,     0,     0,     0,    35,
      36,    37,     0,    38,     0,     0,     0,     0,    39,     0,
       0,     0,     0,    40,    41,     0,     0,     0,     0,     0,
       0,     0,     0,    42,     0,     0,    43,    44,     0,     0,
      45,     0,    46,     0,    47,     0,     0,     0,     0,     0,
       0,    48,     0,     0,     0,    49,    50,     0,     0,    51,
      52,    53,    54,     0,    55,    56,     0,     0,     0,     0,
       0,     0,    57,     0,    58,    59,    60,     0,    61,     0,
       0,    62,     0,     0,     0,    63,    64,    65,     0,    66,
      67,     0,    68,    69,     0,    70,     0,    71,    72,    73,
       5,     0,     0,    74,     0,     0,    75,    76,    77,     0,
       0,    78,    79,    80,     0,    81,    26,   230,     0,     0,
      82,     0,    83,    84,     0,     0,     7,    85,    86,    87,
       0,    27,   231,    28,    29,     0,     0,    30,     0,     0,
       0,     0,     0,    31,     0,     0,    32,     0,     0,    33,
      34,     0,     0,     0,     0,     0,     0,     0,    35,    36,
      37,     0,    38,     0,     0,     0,     0,    39,     0,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,     0,    42,     0,     0,    43,    44,     0,     0,    45,
       0,    46,     0,    47,     0,     0,     0,     0,     0,     0,
      48,     0,     0,     0,    49,    50,     0,     0,    51,    52,
      53,    54,     0,    55,    56,     0,     0,     0,     0,     0,
       0,    57,     0,    58,    59,    60,     0,    61,     0,     0,
      62,     0,     0,     0,    63,    64,    65,     0,    66,    67,
       0,    68,    69,     0,    70,     0,    71,    72,    73,     0,
       0,     0,    74,     0,     0,    75,    76,    77,     0,     0,
      78,    79,    80,     0,    81,     0,     0,     0,    26,    82,
       0,    83,    84,     0,     0,     0,    85,    86,    87,   200,
       0,     0,     0,    27,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,     0,    31,     0,     0,    32,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,     0,    38,     0,     0,     0,     0,    39,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,    44,     0,
       0,    45,     0,    46,     0,    47,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,    49,    50,     0,     0,
      51,    52,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,    61,
       0,     0,    62,     0,     0,     0,    63,    64,    65,     0,
      66,    67,     0,    68,    69,     0,    70,     0,    71,    72,
      73,     0,     0,     0,    74,     0,     0,    75,    76,    77,
       0,     0,    78,    79,    80,     0,    81,     0,     0,     0,
      26,    82,     0,    83,    84,     0,     0,     0,    85,    86,
      87,   296,     0,     0,     0,    27,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,     0,    38,     0,     0,     0,
       0,    39,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
      44,     0,     0,    45,     0,    46,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,    49,    50,
       0,     0,    51,    52,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,    61,     0,     0,    62,     0,     0,     0,    63,    64,
      65,     0,    66,    67,     0,    68,    69,     0,    70,     0,
      71,    72,    73,     0,     0,     0,    74,     0,     0,    75,
      76,    77,     0,     0,    78,    79,    80,     0,    81,    26,
       0,     0,     0,    82,     0,    83,    84,     0,   318,     0,
      85,    86,    87,     0,    27,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,     0,    33,    34,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,     0,    38,     0,     0,     0,     0,
      39,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,    43,    44,
       0,     0,    45,     0,    46,     0,    47,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,    49,    50,     0,
       0,    51,    52,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,     0,
      61,     0,     0,    62,     0,     0,     0,    63,    64,    65,
       0,    66,    67,     0,    68,    69,     0,    70,     0,    71,
      72,    73,     0,     0,     0,    74,     0,     0,    75,    76,
      77,     0,     0,    78,    79,    80,     0,    81,    26,   230,
       0,     0,    82,     0,    83,    84,     0,     0,     0,    85,
      86,    87,     0,    27,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,     0,    31,     0,     0,    32,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
      35,    36,    37,     0,    38,     0,     0,     0,     0,    39,
       0,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,    42,     0,     0,    43,    44,     0,
       0,    45,     0,    46,     0,    47,     0,     0,     0,     0,
       0,     0,    48,     0,     0,     0,    49,    50,     0,     0,
      51,    52,    53,    54,     0,    55,    56,     0,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    60,     0,    61,
       0,     0,    62,     0,     0,     0,    63,    64,    65,     0,
      66,    67,     0,    68,    69,     0,    70,     0,    71,    72,
      73,     0,     0,     0,    74,     0,     0,    75,    76,    77,
       0,     0,    78,    79,    80,     0,    81,     0,     0,     0,
      26,    82,     0,    83,    84,     0,     0,     0,    85,    86,
      87,   432,     0,     0,     0,    27,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,     0,    38,     0,     0,     0,
       0,    39,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
      44,     0,     0,    45,     0,    46,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,    49,    50,
       0,     0,    51,    52,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,    61,     0,     0,    62,     0,     0,     0,    63,    64,
      65,     0,    66,    67,     0,    68,    69,     0,    70,     0,
      71,    72,    73,     0,     0,     0,    74,     0,     0,    75,
      76,    77,     0,     0,    78,    79,    80,     0,    81,     0,
       0,     0,    26,    82,     0,    83,    84,     0,     0,     0,
      85,    86,    87,   469,     0,     0,     0,    27,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,     0,    31,
       0,     0,    32,     0,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,    35,    36,    37,     0,    38,     0,
       0,     0,     0,    39,     0,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,     0,    42,     0,
       0,    43,    44,     0,     0,    45,     0,    46,     0,    47,
       0,     0,     0,     0,     0,     0,    48,     0,     0,     0,
      49,    50,     0,     0,    51,    52,    53,    54,     0,    55,
      56,     0,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    60,     0,    61,     0,     0,    62,     0,     0,     0,
      63,    64,    65,     0,    66,    67,     0,    68,    69,     0,
      70,     0,    71,    72,    73,     0,     0,     0,    74,     0,
       0,    75,    76,    77,     0,     0,    78,    79,    80,     0,
      81,    26,     0,     0,     0,    82,     0,    83,    84,     0,
     552,     0,    85,    86,    87,     0,    27,     0,    28,    29,
       0,     0,    30,     0,     0,     0,     0,     0,    31,     0,
       0,    32,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,    35,    36,    37,     0,    38,     0,     0,
       0,     0,    39,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,    42,     0,     0,
      43,    44,     0,     0,    45,     0,    46,     0,    47,     0,
       0,     0,     0,     0,     0,    48,     0,     0,     0,    49,
      50,     0,     0,    51,    52,    53,    54,     0,    55,    56,
       0,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      60,     0,    61,     0,     0,    62,     0,     0,     0,    63,
      64,    65,     0,    66,    67,     0,    68,    69,     0,    70,
       0,    71,    72,    73,     0,     0,     0,    74,     0,     0,
      75,    76,    77,     0,     0,    78,    79,    80,     0,    81,
      26,     0,     0,     0,    82,     0,    83,    84,     0,     0,
       0,    85,    86,    87,     0,    27,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,     0,    31,     0,     0,
      32,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,    35,    36,    37,     0,    38,     0,     0,     0,
       0,    39,     0,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,     0,     0,    43,
      44,     0,     0,    45,     0,    46,     0,    47,     0,     0,
       0,     0,     0,     0,    48,     0,     0,     0,    49,    50,
       0,     0,    51,    52,    53,    54,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    57,     0,    58,    59,    60,
       0,    61,     0,     0,    62,     0,     0,     0,    63,    64,
      65,     0,    66,    67,     0,    68,    69,     0,    70,     0,
      71,    72,    73,     0,     0,     0,    74,     0,     0,    75,
      76,    77,     0,     0,    78,    79,    80,     0,    81,    26,
       0,     0,     0,    82,     0,    83,    84,     0,     0,     0,
      85,    86,    87,     0,    27,     0,    28,    29,     0,     0,
      30,     0,     0,     0,     0,     0,    31,     0,     0,    32,
       0,     0,    33,    34,     0,     0,     0,     0,     0,     0,
       0,    35,    36,    37,     0,    38,     0,     0,     0,     0,
      39,     0,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,    43,    44,
       0,     0,    45,     0,    46,     0,    47,     0,     0,     0,
       0,     0,     0,    48,     0,     0,     0,    49,    50,     0,
       0,    51,    52,    53,    54,     0,    55,    56,     0,     0,
       0,     0,     0,     0,    57,     0,    58,    59,    60,     0,
      61,     0,     0,    62,     0,     0,     0,    63,    64,    65,
       0,    66,    67,     0,   101,    69,     0,    70,     0,    71,
      72,    73,     0,     0,     0,    74,     0,     0,    75,    76,
      77,     0,     0,    78,    79,    80,     0,    81,     0,     0,
       0,     0,    82,     0,    83,    84,     0,     0,     0,    85,
      86,    87
};

static const yytype_int16 yycheck[] =
{
       2,   120,   206,   179,     6,     7,   112,   113,   114,   181,
      13,     0,     1,   401,   218,   403,   318,    13,    13,   501,
      12,   181,    19,    13,    12,   229,   202,    13,    13,    13,
      13,    13,    35,   141,   142,    38,    16,    16,    35,    35,
      35,    38,    38,    38,     2,    20,    12,    72,     6,     7,
      35,    12,   182,    38,   318,    35,    35,    12,    38,    38,
      35,   537,   725,    38,    12,   120,   226,     8,     2,    12,
      12,   101,     6,   756,    12,    12,    35,   227,     6,    38,
      39,     9,    12,    12,   767,    60,    33,   750,   260,    12,
      37,     0,   268,    95,    96,   261,   115,   122,    28,   101,
     260,    74,   306,   105,   254,   788,     4,     5,     6,     7,
       8,   277,    10,    13,    18,    57,   118,   289,    18,   108,
      88,   463,   464,   295,    22,   115,    92,   146,    58,   289,
      35,   120,   308,    38,    28,   295,   612,    95,    96,   169,
      65,   249,    35,   101,   446,    38,   628,   105,   150,   631,
     280,   453,    50,    83,    92,   210,    68,    15,   318,    57,
     118,    95,    96,    92,   111,   157,   107,   169,   170,    92,
      35,   105,   175,    38,   162,   163,   658,    50,   175,   175,
     175,    35,   446,   169,    38,   169,   169,   169,   136,   150,
     175,   157,   150,   136,   136,   175,   175,   101,   200,   136,
     175,   101,   204,    61,    77,   116,   136,   162,   163,   551,
     414,   169,   170,   155,   162,   204,   175,    72,   155,   157,
     162,   210,   211,   153,   226,   162,   166,   709,   157,   231,
      13,   233,   162,   106,   157,    35,     6,   167,    38,     9,
     152,    35,   200,   545,    38,    75,   204,    22,    32,   421,
      86,   253,    82,   151,    38,    99,     4,     5,     6,     7,
       8,   421,    10,    93,   169,    14,    66,   122,   226,    12,
     175,    14,    66,   231,   147,   233,   278,    13,    39,   268,
      41,    54,   175,   124,   672,    68,   446,    12,    12,   154,
      14,   132,   226,   453,   296,   253,   298,   457,   138,   233,
     130,    48,    50,    86,   172,   173,    81,    80,     2,    57,
     175,    12,     6,     7,    27,   169,   318,   319,   169,    94,
     278,   175,   324,    31,    32,    98,   170,   100,    75,    12,
     449,    14,   176,   177,    12,    82,    14,   107,   296,    12,
     298,    14,    12,    90,   278,   347,    93,   454,   161,   456,
     162,   163,   354,    48,   162,   163,   103,   176,   177,    12,
     318,   319,   135,    12,    12,    12,   324,    12,    12,   152,
      33,   547,    74,   169,    37,   175,   378,   537,    12,    54,
      75,   175,   171,   130,   318,   545,    12,    82,    12,   347,
      12,   164,    19,    12,    12,    90,   354,    13,    93,    22,
     169,    95,    96,   151,    19,    80,   115,   101,   103,    16,
      89,   105,    35,    76,    14,    38,    39,    40,    41,    42,
      43,    44,   169,    98,   118,   100,   155,    13,    91,   431,
     432,    13,    95,   160,   610,   130,     5,    13,    13,   441,
     546,   443,   175,    13,   446,    13,   169,   169,   111,   169,
      39,   453,   612,    12,    39,   457,   150,   446,    81,    14,
     135,    13,    63,    13,   466,    13,    89,   469,    77,   471,
      13,    94,    13,   431,   432,   169,   170,   119,   168,    13,
      92,    12,    12,   441,   107,   443,    12,    12,   446,   164,
     123,    12,   611,    12,    12,   453,    12,    12,    38,   457,
       8,   503,   678,    14,    64,   118,   200,   441,   466,   443,
     204,   469,   446,   471,    13,    27,    90,    90,    79,   453,
      14,     5,   726,   457,   526,   168,   110,     5,     5,   110,
      12,    48,   226,   110,     5,   537,    12,   231,     5,   233,
       5,     5,    12,   545,   150,   503,   169,     5,   110,    12,
     552,   174,   175,     5,     5,   557,   558,   148,    75,   253,
     679,   148,     5,     5,    12,    82,   138,    13,   526,   503,
     148,   110,    13,    90,   576,    14,    93,   148,    12,   537,
      90,    13,    13,    12,   278,     5,   103,   545,    13,    12,
       5,    13,    13,     2,   552,   597,   113,     6,     7,   557,
     558,     5,   296,   537,   298,     5,     5,    12,     5,    12,
     612,   545,    13,   130,    12,     5,   165,    13,   620,    13,
      13,   165,   624,   165,   318,   319,    13,   165,    13,     5,
     324,    13,   120,    14,     5,    13,    13,   154,    12,   597,
       5,     5,     5,    13,    13,    13,    12,     5,     5,   134,
     139,    13,    13,   347,   612,    22,   169,    13,    13,    13,
     354,    13,   620,   597,    13,     5,   624,    27,    35,     5,
     150,    38,    39,    40,    41,    42,    43,    44,   612,    13,
      13,    13,    13,    12,   165,    13,    95,    96,   690,   691,
      13,   148,   101,   148,   148,   148,   105,    13,    13,   165,
     108,   131,    16,   165,   165,   122,   122,   131,   210,   118,
      69,   117,   714,   105,    81,   351,    24,   687,   178,   358,
     457,   228,    89,   354,   455,   279,   235,    94,    48,   243,
     732,   408,   690,   691,   421,   552,   756,   431,   432,   788,
     107,   150,   248,   310,   441,   640,    -1,   441,   231,   443,
      -1,    -1,   446,    -1,   319,    75,   714,    -1,   324,   453,
     169,   170,    82,   457,    -1,    -1,    -1,    -1,    22,    -1,
      90,    -1,   466,    93,   732,   469,    -1,   471,    -1,   146,
     714,    35,    -1,   103,    38,    39,    40,    41,    42,    43,
      44,   200,    -1,   113,    -1,   204,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   174,   175,   503,
     130,    -1,    -1,    -1,    -1,    -1,    -1,   226,    -1,    -1,
      -1,    -1,   231,    -1,   233,    -1,    -1,    81,    -1,    -1,
      -1,    -1,   526,    -1,   154,    89,    99,    -1,    -1,    -1,
      94,    -1,    -1,   537,   253,    -1,    -1,    -1,    -1,    -1,
      -1,   545,    -1,   107,   117,    -1,    -1,    -1,   552,    -1,
      -1,    -1,    -1,   557,   558,   128,    -1,    -1,    -1,   278,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   296,    -1,   298,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   597,   167,    -1,    -1,    -1,    -1,   318,
     319,    -1,   175,    -1,    -1,   324,   179,    -1,   612,   182,
     174,   175,    -1,    -1,    -1,    -1,   620,    -1,    -1,    -1,
     624,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,   202,
      -1,    -1,    -1,    -1,    -1,   354,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   217,    -1,   219,    -1,    -1,   222,
      -1,    -1,    -1,    -1,    -1,   228,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,   252,
      -1,    -1,    -1,    -1,    -1,    -1,   690,   691,   261,    -1,
      -1,    -1,    -1,    -1,    -1,   268,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   277,    -1,   279,   280,    -1,   282,
     714,    -1,   431,   432,    -1,    -1,    -1,    -1,   291,    -1,
      -1,   294,   441,    -1,   443,    -1,    -1,   446,   732,    -1,
      -1,    -1,    -1,    -1,   453,   308,    -1,    -1,   457,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   466,    -1,    -1,
     469,    -1,   471,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   344,    -1,    -1,    -1,    -1,    -1,    -1,   351,   352,
      -1,    -1,    -1,    -1,   503,   358,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   526,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   537,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   545,    -1,    -1,    -1,
      -1,    -1,    -1,   552,    -1,    -1,    -1,    -1,   557,   558,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   420,    -1,   422,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   438,    -1,    -1,    -1,    -1,
      -1,    -1,   445,    -1,    -1,    -1,    -1,    -1,   597,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   612,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   620,    -1,    -1,    -1,   624,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   517,    -1,    -1,   520,    -1,    -1,
      -1,    -1,    -1,    -1,   527,   528,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   690,   691,    -1,   547,    -1,     3,     4,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,   714,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    35,    36,
      37,    38,    -1,   732,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    54,   601,   602,
      -1,    -1,    59,    60,    -1,    -1,    -1,   610,    -1,    -1,
      -1,   614,    69,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    91,    92,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,   111,   112,    -1,   114,    -1,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,   125,   126,
      -1,   128,   129,    -1,   131,   678,   133,   134,   135,    -1,
      -1,    -1,   139,    -1,    -1,   142,   143,   144,    -1,    -1,
     147,   148,   149,    -1,   151,    -1,    -1,    -1,    -1,   156,
      -1,   158,   159,    -1,    -1,    -1,   163,   164,   165,    -1,
       3,     4,     5,     6,     7,     8,    -1,    10,   175,    12,
      -1,    -1,   725,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      33,    -1,    -1,    36,    37,    -1,    -1,   750,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,    -1,    51,    52,
      -1,    54,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,    72,
      73,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    92,
      93,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,   107,   108,    -1,   110,   111,   112,
      -1,   114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,   125,   126,    -1,   128,   129,   130,   131,    -1,
     133,   134,   135,   136,   137,    -1,   139,    -1,    -1,   142,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,    -1,
      -1,    -1,    -1,   156,    -1,   158,   159,    -1,    -1,   162,
     163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     173,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    13,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    -1,    51,
      52,    -1,    54,    -1,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    -1,
      72,    73,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,   107,   108,    -1,   110,   111,
     112,    -1,   114,    -1,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,   125,   126,    -1,   128,   129,   130,   131,
      -1,   133,   134,   135,    -1,   137,    -1,   139,    -1,    -1,
     142,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
      -1,    -1,    -1,    -1,   156,    -1,   158,   159,    -1,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,
     172,   173,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    15,    -1,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,    -1,
      51,    52,    -1,    54,    -1,    -1,    57,    -1,    59,    60,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      91,    92,    93,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,
     111,   112,    -1,   114,    -1,    -1,   117,    -1,    -1,    -1,
     121,   122,   123,    -1,   125,   126,    -1,   128,   129,   130,
     131,    -1,   133,   134,   135,    -1,   137,    -1,   139,    -1,
      -1,   142,   143,   144,   145,    -1,   147,   148,   149,    -1,
     151,    -1,    -1,    -1,    -1,   156,    -1,   158,   159,    -1,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,   170,
      -1,   172,   173,     3,     4,     5,     6,     7,     8,    -1,
      10,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,    -1,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      30,    -1,    -1,    33,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      -1,    51,    52,    -1,    54,    -1,    -1,    57,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      70,    -1,    72,    73,    -1,    -1,    76,    -1,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    92,    93,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,   107,   108,    -1,
     110,   111,   112,    -1,   114,    -1,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,   125,   126,    -1,   128,   129,
     130,   131,    -1,   133,   134,   135,    -1,   137,    -1,   139,
      -1,    -1,   142,   143,   144,   145,    -1,   147,   148,   149,
      -1,   151,    -1,    -1,    -1,    -1,   156,    -1,   158,   159,
      -1,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,    -1,
      -1,    -1,   172,   173,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    33,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      49,    -1,    51,    52,    -1,    54,    -1,    -1,    57,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    91,    92,    93,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   110,   111,   112,    -1,   114,    -1,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,    -1,   125,   126,    -1,   128,
     129,   130,   131,    -1,   133,   134,   135,    -1,   137,    -1,
     139,    -1,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,    -1,   151,    -1,    -1,    -1,    -1,   156,    -1,   158,
     159,    -1,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
      -1,    -1,    -1,   172,   173,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,
      18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    30,    -1,    -1,    33,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    -1,    51,    52,    -1,    54,    -1,    -1,    57,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    92,    93,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,   110,   111,   112,    -1,   114,    -1,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,   125,   126,    -1,
     128,   129,   130,   131,    -1,   133,   134,   135,   136,   137,
      -1,   139,    -1,    -1,   142,   143,   144,   145,    -1,   147,
     148,   149,    -1,   151,    -1,    -1,    -1,    -1,   156,    -1,
     158,   159,    -1,    -1,   162,   163,   164,   165,    -1,    -1,
      -1,    -1,    -1,    -1,   172,   173,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    49,    -1,    51,    52,    -1,    54,    -1,    -1,
      57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    91,    92,    93,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,   111,   112,    -1,   114,    -1,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,   125,   126,
      -1,   128,   129,   130,   131,    -1,   133,   134,   135,   136,
     137,    -1,   139,    -1,    -1,   142,   143,   144,   145,    -1,
     147,   148,   149,    -1,   151,    -1,    -1,    -1,    -1,   156,
      -1,   158,   159,    -1,    -1,   162,   163,   164,   165,    -1,
      -1,    -1,    -1,    -1,    -1,   172,   173,     3,     4,     5,
       6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    -1,    51,    52,    -1,    54,    -1,
      -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    70,    -1,    72,    73,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    92,    93,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,   107,   108,    -1,   110,   111,   112,    -1,   114,    -1,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,   125,
     126,    -1,   128,   129,   130,   131,    -1,   133,   134,   135,
      -1,   137,    -1,   139,    -1,    -1,   142,   143,   144,   145,
      -1,   147,   148,   149,    -1,   151,    -1,    -1,    -1,    -1,
     156,    -1,   158,   159,    -1,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,    -1,    -1,    -1,   172,   173,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    33,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    49,    -1,    51,    52,    -1,    54,
      -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    92,    93,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,   114,
      -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,   129,   130,   131,    -1,   133,   134,
     135,    -1,   137,    -1,   139,    -1,    -1,   142,   143,   144,
     145,    -1,   147,   148,   149,    -1,   151,    -1,    -1,    -1,
      -1,   156,    -1,   158,   159,    -1,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,    -1,   170,    -1,   172,   173,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    33,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    -1,    51,    52,    -1,
      54,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    92,    93,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,
     114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,   125,   126,    -1,   128,   129,   130,   131,    -1,   133,
     134,   135,    -1,   137,    -1,   139,    -1,    -1,   142,   143,
     144,   145,    -1,   147,   148,   149,    -1,   151,    -1,    -1,
      -1,    -1,   156,    -1,   158,   159,    -1,    -1,    -1,   163,
     164,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,   173,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,    -1,    51,    52,
      -1,    54,    -1,    -1,    57,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    92,
      93,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,   110,   111,   112,
      -1,   114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,   125,   126,    -1,   128,   129,   130,   131,    -1,
     133,   134,   135,    -1,   137,    -1,   139,    -1,    -1,   142,
     143,   144,   145,    -1,   147,   148,   149,    -1,   151,    -1,
      -1,    -1,    -1,   156,    -1,   158,   159,    -1,    -1,    -1,
     163,   164,   165,    -1,    -1,    -1,    -1,    -1,    -1,   172,
     173,     3,     4,     5,     6,     7,     8,    -1,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    29,    30,    -1,
      -1,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    -1,    51,
      52,    -1,    54,    -1,    -1,    57,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,
      92,    93,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,   111,
     112,    -1,   114,    -1,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,   125,   126,    -1,   128,   129,   130,   131,
      -1,   133,   134,   135,    -1,   137,    -1,   139,    -1,    -1,
     142,   143,   144,   145,    -1,   147,   148,   149,    -1,   151,
      -1,    -1,    -1,    -1,   156,    -1,   158,   159,     3,    -1,
      -1,   163,   164,   165,    -1,    -1,    -1,    -1,    -1,    14,
     172,   173,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    92,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,   114,
      -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,   129,    -1,   131,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,    -1,    -1,   142,   143,   144,
      -1,    -1,   147,   148,   149,    -1,   151,    -1,    -1,    -1,
      -1,   156,     3,   158,   159,    -1,    -1,    -1,   163,   164,
     165,    -1,    -1,    14,    -1,   170,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      91,    92,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,
     111,   112,    -1,   114,    -1,    -1,   117,    -1,    -1,    -1,
     121,   122,   123,    -1,   125,   126,    -1,   128,   129,    -1,
     131,    -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,
      -1,   142,   143,   144,    -1,    -1,   147,   148,   149,    -1,
     151,    -1,    -1,     3,    -1,   156,    -1,   158,   159,    -1,
      -1,    -1,   163,   164,   165,    -1,    -1,    -1,    18,   170,
      20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,    33,    -1,    -1,    36,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,
      -1,    -1,    72,    73,    -1,    -1,    76,    -1,    78,    -1,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,
      -1,    91,    92,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,
     110,   111,   112,    -1,   114,    -1,    -1,   117,    -1,    -1,
      -1,   121,   122,   123,    -1,   125,   126,    -1,   128,   129,
      -1,   131,    -1,   133,   134,   135,    -1,    -1,    -1,   139,
      -1,    -1,   142,   143,   144,    -1,    -1,   147,   148,   149,
      -1,   151,    -1,    -1,     3,    -1,   156,    -1,   158,   159,
      -1,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,    18,
     170,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      -1,    30,    -1,    -1,    33,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    78,
      -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,
      -1,    -1,    91,    92,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,   108,
      -1,   110,   111,   112,    -1,   114,    -1,    -1,   117,    -1,
      -1,    -1,   121,   122,   123,    -1,   125,   126,    -1,   128,
     129,    -1,   131,    -1,   133,   134,   135,    -1,    -1,    -1,
     139,    -1,    -1,   142,   143,   144,    -1,    -1,   147,   148,
     149,    -1,   151,    -1,    -1,     3,    -1,   156,    -1,   158,
     159,    -1,    -1,    -1,   163,   164,   165,    -1,    -1,    -1,
      18,   170,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,    37,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,    -1,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    69,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,
      78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      -1,    -1,    -1,    91,    92,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
     108,    -1,   110,   111,   112,    -1,   114,    -1,    -1,   117,
      -1,    -1,    -1,   121,   122,   123,    -1,   125,   126,    -1,
     128,   129,    -1,   131,    -1,   133,   134,   135,    -1,    -1,
      -1,   139,    -1,    -1,   142,   143,   144,    -1,    -1,   147,
     148,   149,    -1,   151,    -1,    -1,     3,    -1,   156,    -1,
     158,   159,    -1,    -1,    -1,   163,   164,   165,    -1,    -1,
      -1,    18,   170,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    91,    92,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,   111,   112,    -1,   114,    -1,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,   125,   126,
      -1,   128,   129,    -1,   131,    -1,   133,   134,   135,    -1,
      -1,    -1,   139,    -1,    -1,   142,   143,   144,    -1,    -1,
     147,   148,   149,    -1,   151,    -1,    -1,     3,    -1,   156,
      -1,   158,   159,    -1,    -1,    -1,   163,   164,   165,    -1,
      -1,    -1,    18,   170,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    92,    -1,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,   110,   111,   112,    -1,   114,    -1,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,   125,
     126,    -1,   128,   129,    -1,   131,    -1,   133,   134,   135,
      -1,    -1,    -1,   139,    -1,    -1,   142,   143,   144,    -1,
      -1,   147,   148,   149,    -1,   151,    -1,    -1,     3,    -1,
     156,    -1,   158,   159,    -1,    -1,    -1,   163,   164,   165,
      -1,    -1,    -1,    18,   170,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    92,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,   114,
      -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,   129,    -1,   131,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,    -1,    -1,   142,   143,   144,
      -1,    -1,   147,   148,   149,    -1,   151,    -1,    -1,     3,
      -1,   156,    -1,   158,   159,    -1,    -1,    -1,   163,   164,
     165,    -1,    -1,    -1,    18,   170,    20,    21,    -1,    23,
      24,    25,    26,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    53,
      54,    55,    56,    -1,    -1,    59,    60,    -1,    62,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    71,    72,    73,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      84,    85,    -1,    87,    -1,    -1,    -1,    91,    92,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,   102,    -1,
     104,   105,    -1,    -1,   108,   109,   110,   111,   112,    -1,
     114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,   125,   126,   127,   128,   129,    -1,   131,    -1,   133,
     134,   135,    -1,    -1,    -1,   139,   140,    -1,   142,   143,
     144,    -1,    -1,   147,   148,   149,    -1,   151,     3,    -1,
      -1,    -1,   156,    -1,   158,   159,    -1,    12,    -1,   163,
     164,   165,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    92,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,   114,
      -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,   129,    -1,   131,    -1,   133,   134,
     135,   136,    -1,    -1,   139,    -1,    -1,   142,   143,   144,
      -1,    -1,   147,   148,   149,    -1,   151,     3,    -1,    -1,
      -1,   156,    -1,   158,   159,    -1,    12,   162,   163,   164,
     165,    -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,
      -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,
      76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    -1,    -1,    -1,    91,    92,    -1,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,   108,    -1,   110,   111,   112,    -1,   114,    -1,
      -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,   125,
     126,    -1,   128,   129,    -1,   131,    -1,   133,   134,   135,
     136,    -1,    -1,   139,    -1,    -1,   142,   143,   144,    -1,
      -1,   147,   148,   149,    -1,   151,     3,     4,    -1,    -1,
     156,    -1,   158,   159,    -1,    -1,   162,   163,   164,   165,
      -1,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    33,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      -1,    -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    78,    -1,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      87,    -1,    -1,    -1,    91,    92,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,
      -1,   108,    -1,   110,   111,   112,    -1,   114,    -1,    -1,
     117,    -1,    -1,    -1,   121,   122,   123,    -1,   125,   126,
      -1,   128,   129,    -1,   131,    -1,   133,   134,   135,    -1,
      -1,    -1,   139,    -1,    -1,   142,   143,   144,    -1,    -1,
     147,   148,   149,    -1,   151,    -1,    -1,    -1,     3,   156,
      -1,   158,   159,    -1,    -1,    -1,   163,   164,   165,    14,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    92,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,   114,
      -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,   129,    -1,   131,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,    -1,    -1,   142,   143,   144,
      -1,    -1,   147,   148,   149,    -1,   151,    -1,    -1,    -1,
       3,   156,    -1,   158,   159,    -1,    -1,    -1,   163,   164,
     165,    14,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    92,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,   110,   111,   112,
      -1,   114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,   125,   126,    -1,   128,   129,    -1,   131,    -1,
     133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,   142,
     143,   144,    -1,    -1,   147,   148,   149,    -1,   151,     3,
      -1,    -1,    -1,   156,    -1,   158,   159,    -1,    12,    -1,
     163,   164,   165,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    92,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,
     114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,   125,   126,    -1,   128,   129,    -1,   131,    -1,   133,
     134,   135,    -1,    -1,    -1,   139,    -1,    -1,   142,   143,
     144,    -1,    -1,   147,   148,   149,    -1,   151,     3,     4,
      -1,    -1,   156,    -1,   158,   159,    -1,    -1,    -1,   163,
     164,   165,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    54,
      -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    -1,    -1,    -1,    91,    92,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,    -1,    -1,
      -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,   114,
      -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,    -1,
     125,   126,    -1,   128,   129,    -1,   131,    -1,   133,   134,
     135,    -1,    -1,    -1,   139,    -1,    -1,   142,   143,   144,
      -1,    -1,   147,   148,   149,    -1,   151,    -1,    -1,    -1,
       3,   156,    -1,   158,   159,    -1,    -1,    -1,   163,   164,
     165,    14,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    92,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,   110,   111,   112,
      -1,   114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,   125,   126,    -1,   128,   129,    -1,   131,    -1,
     133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,   142,
     143,   144,    -1,    -1,   147,   148,   149,    -1,   151,    -1,
      -1,    -1,     3,   156,    -1,   158,   159,    -1,    -1,    -1,
     163,   164,   165,    14,    -1,    -1,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    -1,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    78,    -1,    80,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,
      91,    92,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,
     111,   112,    -1,   114,    -1,    -1,   117,    -1,    -1,    -1,
     121,   122,   123,    -1,   125,   126,    -1,   128,   129,    -1,
     131,    -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,
      -1,   142,   143,   144,    -1,    -1,   147,   148,   149,    -1,
     151,     3,    -1,    -1,    -1,   156,    -1,   158,   159,    -1,
      12,    -1,   163,   164,   165,    -1,    18,    -1,    20,    21,
      -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,
      -1,    33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      72,    73,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,
      92,    -1,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,    -1,    -1,    -1,    -1,    -1,   108,    -1,   110,   111,
     112,    -1,   114,    -1,    -1,   117,    -1,    -1,    -1,   121,
     122,   123,    -1,   125,   126,    -1,   128,   129,    -1,   131,
      -1,   133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,
     142,   143,   144,    -1,    -1,   147,   148,   149,    -1,   151,
       3,    -1,    -1,    -1,   156,    -1,   158,   159,    -1,    -1,
      -1,   163,   164,   165,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      33,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    92,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
      -1,    -1,    -1,    -1,    -1,   108,    -1,   110,   111,   112,
      -1,   114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,
     123,    -1,   125,   126,    -1,   128,   129,    -1,   131,    -1,
     133,   134,   135,    -1,    -1,    -1,   139,    -1,    -1,   142,
     143,   144,    -1,    -1,   147,   148,   149,    -1,   151,     3,
      -1,    -1,    -1,   156,    -1,   158,   159,    -1,    -1,    -1,
     163,   164,   165,    -1,    18,    -1,    20,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    30,    -1,    -1,    33,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      54,    -1,    -1,    -1,    -1,    59,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,    72,    73,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    91,    92,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,   108,    -1,   110,   111,   112,    -1,
     114,    -1,    -1,   117,    -1,    -1,    -1,   121,   122,   123,
      -1,   125,   126,    -1,   128,   129,    -1,   131,    -1,   133,
     134,   135,    -1,    -1,    -1,   139,    -1,    -1,   142,   143,
     144,    -1,    -1,   147,   148,   149,    -1,   151,    -1,    -1,
      -1,    -1,   156,    -1,   158,   159,    -1,    -1,    -1,   163,
     164,   165
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    12,    28,    58,    83,   136,   153,   162,   167,   179,
     180,   181,   182,   187,   188,   189,   192,   193,   196,   197,
     198,   199,   200,   205,   217,   197,     3,    18,    20,    21,
      24,    30,    33,    36,    37,    45,    46,    47,    49,    54,
      59,    60,    69,    72,    73,    76,    78,    80,    87,    91,
      92,    95,    96,    97,    98,   100,   101,   108,   110,   111,
     112,   114,   117,   121,   122,   123,   125,   126,   128,   129,
     131,   133,   134,   135,   139,   142,   143,   144,   147,   148,
     149,   151,   156,   158,   159,   163,   164,   165,   186,   232,
     274,   276,   304,   322,   323,    74,    88,    15,    61,   223,
     232,   128,   218,   219,   322,    28,     0,    65,   166,   116,
     211,   212,    68,   152,    86,   198,    13,    12,    14,   232,
     232,     4,     5,     6,     7,     8,    10,    12,    29,    30,
      36,    45,    51,    52,    57,    93,   108,   130,   137,   145,
     170,   172,   173,   201,   202,   204,   224,   225,   231,   232,
     252,   253,   254,   255,   256,   257,   266,   267,   272,   273,
     274,   275,   276,   292,   293,   304,   322,   138,   218,   169,
      12,   220,   221,   186,   180,    27,   223,   223,   223,    12,
      13,    70,   107,   183,   184,   185,   239,   240,   241,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
      14,   322,   161,   206,    12,    57,   155,   190,   191,   196,
     221,    12,   197,   252,   258,   252,   268,    12,    12,    12,
      12,    12,    12,    12,   256,   256,    74,   207,   169,    12,
       4,    19,    35,    38,   175,   262,   318,   319,   320,   321,
     322,   172,   173,   264,    99,   170,   176,   177,   265,   171,
      12,    12,    12,    14,   194,   195,   252,   218,   222,   322,
      19,    12,   213,   214,   252,   199,   199,   200,    12,   239,
     252,    12,   202,   203,   241,   252,    13,   169,    19,   115,
      16,    89,    22,    39,    40,    41,    42,    43,    44,    81,
      89,    94,   107,   174,   261,   263,    14,   322,    14,   239,
     155,   258,   191,   196,   197,    13,   169,    13,   160,   269,
     270,   252,   258,   252,     5,    13,   252,    13,    12,   203,
     226,   227,   228,   229,   232,   233,   234,   235,   236,   206,
     224,    13,   258,   320,   232,   175,   253,   254,   255,   256,
      15,    61,   170,   252,   316,    13,   252,    14,   170,   322,
     206,   169,    39,    13,   169,   203,    13,   183,   169,    20,
      60,   215,    13,   183,    23,    24,    25,    26,    31,    32,
      34,    53,    55,    56,    62,    71,    84,    85,    87,   102,
     104,   105,   109,   127,   129,   140,   148,   149,   156,   232,
     294,   295,   296,   297,   298,   299,   305,   306,   307,   308,
     309,   310,   311,   312,   240,   241,     6,     9,   107,   260,
     252,    39,    39,    41,    12,   203,   259,     8,   107,   252,
      22,    81,    94,    39,    15,    17,   141,   252,   317,   203,
     322,    14,    14,   322,    13,   258,   239,   252,    63,   271,
     269,    19,    13,   154,    13,   169,    12,   227,   233,   319,
      48,    75,    82,    90,    93,   103,   130,   169,   237,   318,
      77,   208,    13,    13,    13,   252,   119,   277,    13,    14,
     322,    14,   194,   252,   222,   168,    13,   213,    92,    12,
      12,    92,   157,    12,    92,   157,    12,    12,    12,   123,
      12,   135,   300,   301,   303,   304,    31,    32,    12,    92,
     157,    12,    12,    12,    12,   162,   163,    12,   162,   163,
      12,    18,   101,    32,   321,   321,   260,    16,   258,     8,
      66,   252,   259,   252,   322,   322,    14,   146,   146,   252,
      64,   294,   232,   252,    13,   221,   230,    90,   118,   238,
     227,   238,   237,   238,   226,    90,    27,    79,   216,   277,
     277,    13,    12,   278,   279,   322,   322,    14,    14,   170,
     322,   168,   110,     5,     5,   110,    12,     5,   110,    12,
       5,   313,     5,     5,     5,    12,   150,    12,    12,   157,
      12,    92,   157,     5,   110,    12,   313,     5,   232,     5,
     148,   148,     5,   148,   148,     5,    12,   138,   252,    13,
     252,    16,    66,   322,   252,   252,    13,    13,    13,   228,
     113,   154,    90,   227,   223,   239,   277,   279,   280,   281,
      14,   170,   322,   322,    14,    12,    13,    13,    12,     5,
      13,    12,     5,    33,    37,    76,    91,    95,   111,   314,
     315,    13,    13,   169,    13,   169,    13,     5,   135,   302,
     304,     5,     5,    12,     5,   110,    12,    13,    12,     5,
      13,    13,   169,    13,    13,   165,   165,    13,   165,   165,
      13,     5,   232,   252,   252,   239,   221,   228,   113,   154,
      12,    78,   209,   210,   252,    13,   120,   282,   170,   322,
      14,    14,   170,   322,     5,   313,    13,   313,    13,   314,
       5,     5,    13,   169,    12,    13,    13,     5,    13,    12,
       5,   313,    13,     5,   134,   162,   163,   162,   163,    13,
     321,   239,   221,    13,   139,   169,    27,   211,   170,   322,
     170,   322,    14,    13,    13,    13,    13,    13,     5,     5,
      13,   313,    13,    13,    13,   232,   148,   148,   148,   148,
      12,   209,   258,   124,   132,   283,   284,   170,   322,    13,
      13,    13,   165,   165,   165,   165,   209,    22,    50,   151,
     266,   285,   286,   287,   288,    13,   151,   266,   286,   289,
     290,   131,   122,   122,    69,   291,    72,    72,    16,    50,
      77,   106,   147,   289,   131,   117
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   178,   179,   180,   180,   181,   181,   181,   181,   182,
     182,   182,   182,   183,   183,   184,   184,   185,   185,   186,
     187,   188,   188,   188,   189,   190,   190,   190,   190,   190,
     191,   192,   193,   194,   194,   195,   196,   197,   197,   198,
     198,   198,   199,   199,   200,   200,   201,   202,   203,   204,
     205,   206,   206,   207,   208,   208,   209,   209,   210,   210,
     210,   211,   211,   212,   213,   213,   214,   215,   215,   215,
     216,   216,   217,   217,   218,   218,   219,   220,   220,   221,
     222,   222,   223,   223,   223,   224,   224,   225,   225,   226,
     226,   227,   227,   228,   228,   229,   229,   230,   230,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   232,   232,   232,   232,
     232,   232,   232,   232,   233,   233,   233,   234,   234,   234,
     234,   235,   236,   237,   237,   237,   237,   238,   238,   239,
     239,   240,   240,   241,   241,   242,   242,   242,   243,   243,
     244,   244,   244,   244,   244,   244,   244,   245,   246,   247,
     247,   248,   248,   248,   248,   249,   249,   250,   250,   251,
     252,   252,   252,   253,   253,   254,   254,   255,   255,   256,
     256,   256,   257,   257,   257,   257,   257,   257,   258,   258,
     259,   259,   260,   260,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   262,   262,   263,   264,   264,   265,
     265,   265,   265,   266,   266,   266,   266,   266,   266,   266,
     267,   268,   268,   269,   269,   270,   270,   271,   271,   272,
     272,   272,   272,   273,   273,   273,   273,   273,   273,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   275,
     276,   276,   276,   276,   276,   277,   277,   278,   279,   280,
     281,   281,   282,   282,   283,   283,   284,   284,   285,   285,
     286,   286,   286,   287,   288,   289,   289,   289,   290,   291,
     291,   291,   291,   291,   292,   292,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   293,   293,   293,   294,   294,
     294,   294,   295,   296,   297,   297,   297,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   299,   300,
     300,   301,   301,   302,   302,   302,   303,   303,   303,   303,
     303,   304,   304,   304,   304,   304,   305,   306,   306,   306,
     306,   306,   306,   306,   306,   306,   306,   306,   307,   307,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   308,
     308,   308,   308,   309,   309,   309,   309,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     311,   311,   311,   311,   312,   312,   312,   312,   312,   312,
     312,   312,   312,   312,   312,   312,   312,   312,   312,   313,
     313,   313,   313,   314,   314,   314,   315,   315,   315,   316,
     316,   317,   317,   317,   318,   318,   319,   319,   320,   320,
     321,   322,   322,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     5,
       4,     7,     6,     1,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     2,     2,     1,     2,
       2,     4,     5,     1,     3,     3,     2,     1,     2,     1,
       4,     4,     1,     4,     1,     3,     3,     1,     1,     1,
       7,     0,     2,     2,     0,     4,     1,     3,     2,     1,
       5,     0,     1,     3,     1,     3,     2,     0,     1,     1,
       0,     2,     2,     3,     1,     3,     4,     0,     1,     3,
       1,     3,     0,     1,     1,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     3,     2,     3,     0,     1,     1,
       3,     3,     5,     5,     7,     7,     6,     6,     9,     9,
       8,     8,     8,     8,     7,     7,     1,     3,     5,     4,
       7,     6,     6,     5,     1,     1,     1,     6,     5,     6,
       5,     4,     5,     2,     2,     2,     1,     0,     1,     1,
       3,     1,     3,     1,     2,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     5,
       6,     3,     5,     4,     6,     3,     4,     3,     4,     2,
       1,     2,     3,     1,     3,     1,     3,     1,     3,     1,
       2,     2,     1,     1,     1,     3,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     1,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     0,     1,     1,     2,     4,     4,     0,     2,     1,
       1,     1,     1,     5,     4,     6,     5,     5,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     1,     1,     1,     1,     2,     2,     3,     1,     4,
       0,     1,     0,     3,     0,     3,     1,     1,     1,     1,
       2,     2,     1,     2,     4,     1,     2,     1,     2,     0,
       3,     2,     2,     3,     3,     4,     4,     3,     3,     6,
       6,     4,     1,     4,     1,     6,     1,     1,     1,     1,
       1,     1,     1,     6,     5,     2,     2,     5,     4,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     3,
       1,     4,     1,     1,     4,     1,     4,     1,     6,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     7,     7,
       4,     4,     4,     7,     7,     4,     4,     4,     1,     1,
       6,     4,     6,     4,     6,     4,     1,     1,     1,     1,
       1,     1,     1,     4,     2,     1,     1,     4,     4,     5,
       5,     4,     6,     3,     6,     3,     4,     1,     1,     1,
       6,     3,     4,     1,     5,     2,     5,     2,     4,     6,
       6,     5,     7,     4,     6,     3,     4,     1,     1,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
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
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3085 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3091 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3097 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3103 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3109 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3115 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3121 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3127 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* sql_stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3133 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* stmt_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3139 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3145 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* call_stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3151 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* sql_argument_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3157 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* sql_argument  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3163 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* value_expression  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3169 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* sp_name  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3175 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* dql_stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3181 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* dml_stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3187 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* insert_stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3193 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* insert_columns_and_source  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3199 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* from_constructor  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3205 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* delete_stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3211 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* update_stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3217 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* update_elem_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3223 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* update_elem  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3229 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* select_stmt  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3235 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* query_expression  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3241 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* query_expression_body  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3247 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* query_term  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3253 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* query_primary  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3259 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_with_parens  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3265 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* subquery  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3271 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* table_subquery  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3277 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* row_subquery  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3283 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* simple_table  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3289 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_where  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3295 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_from_clause  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3301 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_groupby  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3307 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* grouping_element_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3313 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* grouping_element  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3319 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* opt_order_by  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3325 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* order_by  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3331 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* sort_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3337 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* sort_key  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3343 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_asc_desc  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3349 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* opt_having  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3355 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* with_clause  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3361 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* with_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3367 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* common_table_expr  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3373 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* opt_derived_column_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3379 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* simple_ident_list_with_parens  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3385 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* simple_ident_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3391 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* opt_distinct  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3397 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* select_expr_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3403 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* projection  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3409 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* from_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3415 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* table_reference  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3421 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* table_primary  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3427 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* table_primary_non_join  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3433 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* opt_simple_ident_list_with_parens  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3439 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* column_ref  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3445 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* relation_factor  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3451 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* joined_table  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3457 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* qualified_join  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3463 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* cross_join  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3469 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* natural_join  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3475 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* join_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3481 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* search_condition  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3487 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* boolean_term  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3493 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* boolean_factor  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3499 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* boolean_test  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3505 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* boolean_primary  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3511 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* predicate  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3517 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* comparison_predicate  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3523 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* quantified_comparison_predicate  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3529 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* between_predicate  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3535 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* like_predicate  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3541 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* in_predicate  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* null_predicate  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3553 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* exists_predicate  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3559 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* row_expr  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3565 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* factor0  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3571 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* factor1  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3577 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* factor2  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3583 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* factor3  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3589 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* factor4  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3595 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* row_expr_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3601 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* in_expr  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3607 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* truth_value  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3613 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* expr_const  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3619 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* case_expr  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3625 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* case_arg  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3631 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* when_clause_list  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3637 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* when_clause  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3643 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 271: /* case_default  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3649 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* func_expr  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3655 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* aggregate_windowed_function  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3661 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* aggregate_function_name  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3667 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* ranking_windowed_function  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3673 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* ranking_function_name  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* over_clause  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3685 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 278: /* window_specification  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3691 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 279: /* window_name  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3697 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 280: /* window_specification_details  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3703 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 281: /* opt_existing_window_name  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3709 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 282: /* opt_window_partition_clause  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3715 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* opt_window_frame_clause  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3721 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 284: /* window_frame_units  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3727 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 285: /* window_frame_extent  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3733 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 286: /* window_frame_start  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3739 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 287: /* window_frame_preceding  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3745 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 288: /* window_frame_between  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3751 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 289: /* window_frame_bound  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3757 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 290: /* window_frame_following  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3763 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 291: /* opt_window_frame_exclusion  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3769 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 292: /* scalar_function  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3775 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 293: /* function_call_keyword  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3781 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 294: /* data_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3787 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* user_defined_type_name  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3793 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 296: /* reference_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3799 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* collection_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3805 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* predefined_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3811 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* interval_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3817 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* interval_qualifier  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3823 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* start_field  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3829 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* end_field  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3835 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 303: /* single_datetime_field  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3841 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 304: /* non_second_primary_datetime_field  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3847 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 305: /* boolean_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3853 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 306: /* datetime_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3859 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 307: /* numeric_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3865 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 308: /* exact_numeric_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3871 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 309: /* approximate_numeric_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 310: /* character_string_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3883 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 311: /* binary_large_object_string_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3889 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 312: /* national_character_string_type  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3895 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 313: /* large_object_length  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3901 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 314: /* char_length_units  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3907 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 315: /* multiplier  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3913 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 316: /* distinct_or_all  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3919 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 318: /* opt_as_label  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3925 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 319: /* as_label  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3931 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 320: /* label  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3937 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 321: /* collate_clause  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3943 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 322: /* name_r  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3949 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 323: /* reserved  */
#line 95 "sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3955 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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
#line 64 "sqlparser_sql2003.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 4072 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 231 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 4266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 242 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 4275 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 249 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4281 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 257 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CALL, E_CALL_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CALL_SERIALIZE_FORMAT;
}
#line 4290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 262 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CALL, E_CALL_PROPERTY_CNT, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &CALL_SERIALIZE_FORMAT;
}
#line 4299 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 267 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CALL, E_CALL_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &CALL_SQL_SERVER_SERIALIZE_FORMAT;
}
#line 4308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 272 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CALL, E_CALL_PROPERTY_CNT, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &CALL_SQL_SERVER_SERIALIZE_FORMAT;
}
#line 4317 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 281 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 289 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SQL_ARGUMENT, E_SQL_ARGUMENT_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &SQL_ARGUMENT_SERIALIZE_FORMAT;
}
#line 4335 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 294 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SQL_ARGUMENT, E_SQL_ARGUMENT_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SQL_ARGUMENT_SERIALIZE_FORMAT;
}
#line 4344 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 321 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 4353 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 329 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4362 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 334 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4371 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 339 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 344 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4389 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 349 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4399 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 358 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 4408 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 367 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4425 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 384 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4443 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 402 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4452 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 410 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4461 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 419 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_DIRECT_SELECT_ORDER, (yyvsp[0].node));
}
#line 4470 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 427 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 4479 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 432 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 4488 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 440 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4518 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 466 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4548 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 496 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4578 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 526 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    if ((yyvsp[-1].node)->getChild(E_DIRECT_SELECT_WITH)) {
	yyerror(&(yylsp[-2]), result, scanner, "error use common table expression");
	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node)->getChild(E_DIRECT_SELECT_SELECT_CLAUSE));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
    (yyvsp[-1].node)->setChild(E_DIRECT_SELECT_SELECT_CLAUSE, nullptr);
    delete((yyvsp[-1].node));
}
#line 4593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 541 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4602 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 555 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4631 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 582 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4637 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 584 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4646 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 593 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4655 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 600 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4661 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 602 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4670 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 611 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 618 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"()"); }
#line 4685 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 621 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING SETS");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4696 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 630 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4702 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 636 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4711 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 645 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4720 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 653 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 661 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4737 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 665 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4745 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 669 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 675 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4759 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 677 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4768 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 687 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 692 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 4786 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 701 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 710 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4804 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 717 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4810 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 723 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 732 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4828 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 739 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 741 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4842 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 745 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4850 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 753 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4859 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 761 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 775 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4887 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 785 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4896 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 799 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4905 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 811 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4914 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 816 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4923 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 823 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4929 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 830 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4939 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 836 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4949 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 842 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4960 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 849 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4970 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 855 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 862 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4991 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 868 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5002 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 875 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5012 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 881 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 5023 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 888 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5033 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 894 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5044 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 901 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5054 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 907 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5065 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 914 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5075 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 920 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 927 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5096 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 933 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 5107 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 944 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 949 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 5125 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 954 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5134 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 959 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 5143 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 964 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5152 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 969 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5161 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 974 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 979 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 5179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 994 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5188 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 999 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 5198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1005 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 5207 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1010 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 5217 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1019 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 5227 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1028 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 5237 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1037 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5252 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1048 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5267 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1059 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5282 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1070 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 5290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1076 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5296 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1077 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1084 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_OR);
}
#line 5311 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1093 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_AND);
}
#line 5320 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1102 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT);
}
#line 5329 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1111 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 5338 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1116 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 5347 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1125 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1153 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5365 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1161 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5374 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1169 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_BTW);
}
#line 5383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1174 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_BTW);
}
#line 5392 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1182 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 5401 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1187 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 5410 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1192 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 5419 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1197 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 5428 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1205 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IN);
}
#line 5437 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1210 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_IN);
}
#line 5446 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1218 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 5455 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1223 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 5464 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1231 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_EXISTS);
}
#line 5473 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1241 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 5482 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1246 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5491 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1255 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5500 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1264 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5509 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1273 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POW);
}
#line 5518 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1282 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POS);
}
#line 5527 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1287 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NEG);
}
#line 5536 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1298 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5545 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1309 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5554 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1318 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1328 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 5569 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1329 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LT; }
#line 5575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1330 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1331 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GT; }
#line 5587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1332 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_EQ; }
#line 5593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1333 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1334 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1335 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 5611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1336 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5617 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1337 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5623 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1341 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_CNN; }
#line 5629 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1342 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_CNN; }
#line 5635 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1348 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.nodetype) = Node::comp_all_some_any_op_form((yyvsp[-1].nodetype), (yyvsp[0].ival));
}
#line 5643 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1354 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_ADD; }
#line 5649 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1355 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MINUS; }
#line 5655 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1359 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MUL; }
#line 5661 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1360 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_DIV; }
#line 5667 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1361 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_REM; }
#line 5673 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1362 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MOD; }
#line 5679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1372 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5685 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1378 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_CASE);
}
#line 5694 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1385 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5700 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1392 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5709 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1400 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5718 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1405 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5727 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1412 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5733 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1414 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1431 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5752 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1437 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5762 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1443 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5772 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1449 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5782 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1455 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5798 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1467 "sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5814 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1481 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5820 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1482 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5826 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1483 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5832 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1484 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5838 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1485 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5844 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1486 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5850 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1487 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5856 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1488 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5862 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1489 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5868 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1490 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5874 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1495 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5884 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1503 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5890 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1504 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5896 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1505 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PERCENT_RANK"); }
#line 5902 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1506 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CUME_DIST"); }
#line 5908 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1507 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5914 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1512 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OVER "+ (yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 5920 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1514 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5926 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1519 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5932 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1528 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5941 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1535 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5947 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1540 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5953 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1542 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5959 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1546 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5965 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1548 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    std::string s3 = (yyvsp[0].node) ? (yyvsp[0].node)->text() : "";
    (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+s3);
    delete((yyvsp[-2].node)); delete((yyvsp[-1].node)); delete((yyvsp[0].node));
}
#line 5975 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1556 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"ROWS"); }
#line 5981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1557 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"RANGE"); }
#line 5987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1566 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"UNBOUNDED PRECEDING"); }
#line 5993 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1567 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"CURRENT ROW"); }
#line 5999 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1572 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 6005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1577 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text()); delete((yyvsp[-2].node)); delete((yyvsp[0].node)); }
#line 6011 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1582 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"UNBOUNDED FOLLOWING"); }
#line 6017 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1587 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 6023 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1591 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1592 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE CURRENT ROW"); }
#line 6035 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1593 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE GROUP"); }
#line 6041 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1594 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE TIES"); }
#line 6047 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1595 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE NO OTHERS"); }
#line 6053 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1600 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6063 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1606 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6073 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 286:
#line 1618 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6083 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1624 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6094 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1631 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6105 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 289:
#line 1638 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 6116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1645 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 6129 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1654 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6140 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1661 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6151 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1668 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6162 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1675 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6173 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1682 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 6186 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 296:
#line 1691 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6197 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1698 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 6208 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1718 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6217 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1726 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 6226 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1734 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 6236 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1740 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 6245 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1745 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 6254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1753 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6263 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1758 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 6272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1763 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6281 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1769 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1783 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6299 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1791 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 6308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1800 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6317 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1810 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1815 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 6334 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1822 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6343 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1828 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6352 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1833 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6361 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1838 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 6369 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1845 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 6377 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1849 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 6385 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1853 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 6393 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1857 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 6401 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1861 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 6409 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1868 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 6417 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1875 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 6425 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1879 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6434 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1884 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6443 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1889 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6452 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1894 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 6460 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1898 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 6468 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1902 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6477 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1907 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6486 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1912 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1917 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 6503 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1921 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 6511 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1933 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6520 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1938 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6529 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1943 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6538 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1948 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1953 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6556 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1958 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6565 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1963 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6573 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1967 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1971 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6589 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1975 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6597 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1979 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1983 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 6613 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1987 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6621 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1994 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6630 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1999 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6638 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2003 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6646 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2007 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6654 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2014 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6663 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2019 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6672 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2024 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6681 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2029 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6690 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2034 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6699 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2039 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6708 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2044 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6716 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2048 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6725 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2053 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6733 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2057 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2062 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6750 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2066 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6758 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2070 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6766 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2077 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6775 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2082 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2086 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6792 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2091 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6800 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2098 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6809 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2103 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6817 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2107 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6826 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2112 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2116 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6843 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2121 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6852 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2126 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6861 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2131 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6870 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2136 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6879 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 393:
#line 2141 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6887 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 394:
#line 2145 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6896 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 395:
#line 2150 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6904 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2154 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6913 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2159 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6921 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2163 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6929 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2170 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6938 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2175 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6947 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2180 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6956 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2185 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6965 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2193 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6973 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2197 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2201 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6989 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2208 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6997 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2212 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 7005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2216 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 7013 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2223 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 7021 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2227 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 7029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2233 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 7035 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2234 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 7041 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2235 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 7047 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2239 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 7053 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2244 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 7059 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2256 "sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 7068 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2273 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 7074 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2274 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 7080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2275 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 7086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2276 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 7092 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2277 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 7098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2278 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 7104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2279 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 7110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2280 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 7116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2281 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 7122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2282 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 7128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2283 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 7134 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2284 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 7140 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2285 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 7146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2286 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 7152 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2287 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 7158 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2288 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 7164 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2289 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 7170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 443:
#line 2290 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 7176 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 444:
#line 2291 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 7182 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 445:
#line 2292 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 7188 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 446:
#line 2293 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 7194 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 447:
#line 2294 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 7200 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 448:
#line 2295 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 7206 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 449:
#line 2296 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 7212 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 450:
#line 2297 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 7218 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 451:
#line 2298 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 7224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 452:
#line 2299 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 7230 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 453:
#line 2300 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
#line 7236 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 454:
#line 2301 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
#line 7242 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 455:
#line 2302 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
#line 7248 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 456:
#line 2303 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIMESTAMP"); }
#line 7254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 457:
#line 2304 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIME");  }
#line 7260 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 458:
#line 2305 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DESC"); }
#line 7266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 459:
#line 2306 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIES"); }
#line 7272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 460:
#line 2307 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SETS"); }
#line 7278 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 461:
#line 2308 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OTHERS"); }
#line 7284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 462:
#line 2309 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "EXCLUDE"); }
#line 7290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 463:
#line 2310 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ASC"); }
#line 7296 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 464:
#line 2311 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE"); }
#line 7302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 465:
#line 2312 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT"); }
#line 7308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 466:
#line 2313 "sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF"); }
#line 7314 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 7318 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2316 "sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
