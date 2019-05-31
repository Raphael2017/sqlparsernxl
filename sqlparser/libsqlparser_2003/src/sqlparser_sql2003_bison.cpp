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
#define YYFINAL  102
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6377

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  175
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  442
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  755

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
     434,   435,   464,   465,   469,   474,   482,   510,   511,   520,
     528,   529,   537,   538,   546,   547,   548,   558,   559,   563,
     571,   572,   580,   589,   592,   596,   603,   604,   614,   619,
     627,   628,   637,   645,   646,   650,   658,   659,   667,   668,
     672,   679,   680,   688,   702,   711,   712,   720,   721,   725,
     726,   738,   743,   751,   752,   757,   763,   769,   776,   782,
     789,   795,   802,   808,   815,   821,   828,   834,   841,   847,
     854,   860,   871,   876,   881,   886,   891,   896,   901,   906,
     914,   919,   925,   930,   936,   942,   951,   962,   973,   984,
     991,   992,   997,   998,  1006,  1007,  1015,  1016,  1024,  1025,
    1030,  1038,  1039,  1047,  1052,  1057,  1062,  1067,  1072,  1077,
    1082,  1087,  1092,  1097,  1102,  1107,  1116,  1117,  1122,  1130,
    1131,  1139,  1140,  1148,  1149,  1157,  1158,  1163,  1171,  1172,
    1173,  1178,  1179,  1180,  1185,  1186,  1194,  1195,  1202,  1202,
    1206,  1207,  1208,  1209,  1210,  1211,  1212,  1213,  1214,  1215,
    1219,  1220,  1225,  1232,  1233,  1237,  1238,  1239,  1240,  1244,
    1245,  1246,  1247,  1248,  1249,  1250,  1255,  1263,  1264,  1268,
    1269,  1277,  1282,  1290,  1291,  1300,  1301,  1302,  1303,  1308,
    1314,  1320,  1326,  1332,  1344,  1359,  1360,  1361,  1362,  1363,
    1364,  1365,  1366,  1367,  1368,  1372,  1381,  1382,  1383,  1384,
    1385,  1389,  1391,  1396,  1401,  1405,  1413,  1414,  1418,  1419,
    1424,  1425,  1434,  1435,  1439,  1440,  1444,  1445,  1446,  1450,
    1454,  1459,  1460,  1461,  1465,  1469,  1470,  1471,  1472,  1473,
    1477,  1483,  1495,  1501,  1508,  1515,  1522,  1531,  1538,  1545,
    1552,  1559,  1568,  1575,  1588,  1589,  1590,  1591,  1595,  1603,
    1611,  1617,  1622,  1630,  1635,  1640,  1645,  1646,  1651,  1652,
    1653,  1654,  1655,  1656,  1660,  1668,  1673,  1677,  1682,  1686,
    1687,  1692,  1699,  1704,  1705,  1710,  1715,  1722,  1726,  1730,
    1734,  1738,  1745,  1752,  1756,  1761,  1766,  1771,  1775,  1779,
    1784,  1789,  1794,  1798,  1805,  1806,  1810,  1815,  1820,  1825,
    1830,  1835,  1840,  1844,  1848,  1852,  1856,  1860,  1864,  1871,
    1876,  1880,  1884,  1891,  1896,  1901,  1906,  1911,  1916,  1921,
    1925,  1930,  1934,  1939,  1943,  1947,  1954,  1959,  1963,  1968,
    1975,  1980,  1984,  1989,  1993,  1998,  2003,  2008,  2013,  2018,
    2022,  2027,  2031,  2036,  2040,  2047,  2052,  2057,  2062,  2070,
    2074,  2078,  2085,  2089,  2093,  2100,  2104,  2111,  2112,  2113,
    2117,  2118,  2122,  2123,  2127,  2128,  2133,  2143,  2144,  2148,
    2149,  2150,  2151,  2152,  2153,  2154,  2155,  2156,  2157,  2158,
    2159,  2160,  2161,  2162,  2163,  2164,  2165,  2166,  2167,  2168,
    2169,  2170,  2171,  2172,  2173,  2174,  2175,  2176,  2177,  2178,
    2179,  2180,  2181,  2182,  2183,  2184,  2185,  2186,  2187,  2188,
    2189,  2190,  2191
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

#define YYPACT_NINF -626

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-626)))

#define YYTABLE_NINF -299

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,    75,    72,    93,    68,  6065,  6213,   129,    85,   -26,
    -626,  -626,  -626,  -626,  -626,  -626,    38,   -35,   106,  -626,
    -626,  -626,    75,    63,   147,  6065,  6065,  -626,  -626,  2265,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,    79,  -626,  -626,  -626,   218,  -626,  6065,  -626,
      80,   224,  -626,  -626,    15,   229,  -626,  -626,    68,    68,
      68,   -35,  -626,  -626,   102,    33,  -626,  -626,  -626,  -626,
    -626,  -626,  2433,  2769,   262,   277,   292,   298,  -626,  -626,
     299,   303,   307,  -626,  -626,  -626,  2769,  2769,  -626,   256,
     161,  -626,   322,  1255,   109,   140,   170,  -626,  -626,  -626,
    -626,  -626,  -626,   327,  -626,   331,  -626,  -626,   334,   107,
    2769,  5020,  -626,  6065,  6065,   330,  -626,  -626,  2769,    75,
      75,    75,  1929,  -626,  4573,   196,  2769,  -626,  -626,  -626,
      70,     3,    61,   338,    73,   202,  2769,  2769,  2769,   350,
     351,  2769,   354,  -626,  -626,  5168,   102,  2265,  2601,  -626,
    5316,  -626,  6065,   199,  2769,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  2769,  -626,  -626,  -626,  -626,  2769,  2769,  1425,
     356,  2769,  3090,   102,   207,    20,  5467,   362,  -626,   372,
     220,   375,  -626,   225,    32,   106,   106,  -626,  1593,   375,
    1929,   280,   374,  -626,  -626,   309,  -626,   794,  -626,  -626,
    -626,  -626,  2769,  -626,  1929,   333,   202,    14,   386,    62,
     388,  -626,    69,  -626,  4721,  4869,  -626,   216,  -626,  -626,
    4869,  -626,   329,  -626,  -626,   390,  -626,  -626,  -626,   109,
     140,   170,  -626,  -626,  -626,   393,     0,  2769,   289,     1,
    5618,  -626,   123,  -626,  2769,  2769,  6065,   396,  5769,  -626,
    6065,  -626,  2769,  -626,  -626,  -626,    11,   460,  -626,  -626,
    1929,  1929,    65,  2769,  -626,  -626,   379,  -626,   204,  -626,
     401,   112,  2769,   174,   380,  1761,   375,  -626,    10,   673,
    2769,   357,  -626,  4277,  -626,  6065,  -626,  2769,  4425,   300,
     406,   224,   335,   308,  -626,  5168,   308,   267,   308,  5168,
     339,  -626,   403,   360,  -626,   289,   289,     5,  5917,  -626,
    -626,  6065,   420,  3241,  -626,    73,  -626,  6065,  6065,   421,
    -626,  -626,  -626,   374,  -626,  -626,  -626,   255,  -626,     7,
    -626,  -626,  -626,  2433,  -626,  -626,  -626,   431,    71,  2769,
     401,  2769,  -626,  -626,  -626,  -626,    73,  -626,  -626,  2769,
    2769,    73,  -626,  -626,   353,   430,  -626,    51,    52,   433,
    -626,   434,   435,   328,   437,  -626,  -626,   172,   257,    53,
     442,   443,  -626,   444,  -626,    37,    41,   447,  -626,   113,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
      44,  -626,   423,   449,     9,  -626,  -626,  -626,  5168,  -626,
    -626,   319,  -626,   376,  -626,  -626,  5168,    68,  1929,  -626,
    -626,  -626,   289,  6065,  -626,  -626,  -626,   453,  3389,  6065,
    -626,   243,  -626,  -626,  6065,  -626,  2769,   457,  -626,  2769,
      13,  -626,    81,    73,    73,   364,   466,   469,   367,   465,
     475,   378,   473,   476,   483,   485,  -626,   487,   477,  -626,
     344,  -626,    16,    50,    56,   490,   387,   494,   476,   502,
    6065,   503,   366,   368,   504,   369,   370,   506,  -626,   507,
    -626,   381,  -626,  -626,  -626,  -626,  -626,  1929,   224,  5168,
     484,  2937,   280,  -626,  -626,   508,   404,  3537,  -626,   254,
     513,  3685,  -626,    73,  -626,    73,  2769,  2769,   510,   515,
     516,   518,   528,   522,   525,   533,   347,   526,     4,    12,
     529,   536,   197,   538,   539,   534,   545,   411,   542,   543,
     548,   546,   549,    18,   554,   555,   391,   397,   556,   407,
     410,   566,   575,  6065,   280,  -626,  -626,  1929,   224,  2097,
     445,  -626,   418,    73,  -626,   558,    38,  -626,  -626,  3833,
    3981,  -626,   258,    73,    73,   582,  -626,  -626,   476,   576,
    -626,   476,   579,  -626,  -626,  -626,  -626,  -626,  -626,  -626,
     116,  -626,  -626,   588,  -626,   592,  -626,    23,   586,  -626,
    -626,   587,   589,   594,   590,   593,   599,  -626,   476,   595,
    -626,  -626,   601,   478,   139,  -626,  -626,   141,  -626,  -626,
    -626,   596,   423,   280,  -626,  -626,   598,  2937,  2769,   -14,
    -626,  -626,  -626,  -626,  4129,   602,   603,  -626,   604,  -626,
    -626,   606,   607,  -626,   609,   616,   463,  -626,   610,  -626,
     476,   611,   612,  -626,   615,  6065,   486,   488,   489,   491,
    -626,  -626,  2937,  -626,  -626,  -626,  -626,  -626,   276,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,   617,   621,  -626,   626,
    -626,  -626,  -626,  -626,   479,   480,   481,   482,   627,   316,
     511,   521,   527,   597,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,    30,    42,  -626,   631,  -626,
    -626,  -626,  -626,    28,  -626,  -626,  -626,   316,   520,  -626,
     540,  -626,  -626,  -626,  -626
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,    68,     0,     0,     0,     0,     3,
       6,     7,    11,    10,     9,     8,    47,    25,    27,    30,
      33,    32,     0,     0,    33,     0,     0,    69,    70,     0,
     397,   405,   439,   215,   406,   407,   408,   440,   409,   441,
     410,   223,   229,   309,   227,   434,   438,   411,   429,   404,
     224,   310,   412,   402,   413,   403,   216,   217,   311,   308,
     414,   442,   415,   416,   430,   417,   437,   228,   418,   419,
     226,   431,   420,   421,   422,   230,   423,   424,   436,   219,
     220,   218,   435,   433,   432,   425,   426,   221,   222,   427,
     307,   428,     0,   399,   400,   401,   102,   398,   420,    58,
      60,    63,     1,     2,     5,     0,    24,    48,    68,    68,
      68,    26,    34,    35,    37,     0,   189,   192,   190,   193,
     191,   194,     0,   197,   407,   440,   441,   268,   270,   195,
       0,   442,     0,   272,   273,    74,     0,     0,   163,     0,
      71,   158,     0,   390,   146,   149,   151,   153,   155,   159,
     161,   162,   208,   399,   207,   400,   206,   205,   401,    85,
       0,     0,    59,     0,     0,     0,    64,     4,     0,     0,
       0,     0,     0,    19,     0,     0,     0,    12,    16,    13,
       0,   163,   164,     0,   198,     0,     0,     0,     0,     0,
       0,     0,     0,   156,   157,     0,    37,     0,     0,   395,
       0,   180,     0,     0,     0,    73,   391,   393,   147,   394,
     183,   184,     0,   188,   185,   186,   187,     0,     0,     0,
       0,     0,     0,    37,    21,     0,     0,   103,    61,     0,
      66,     0,    49,    50,    53,    29,    28,    31,     0,     0,
       0,    38,   122,   124,   126,   128,   131,     0,    17,    18,
      15,    14,     0,   160,     0,   203,   199,     0,     0,     0,
       0,   264,     0,   263,     0,     0,    39,    75,    77,    79,
     390,    78,    40,    72,   260,     0,   392,   396,   181,   148,
     150,   152,   154,   385,   386,     0,     0,     0,     0,     0,
       0,    87,    86,    20,     0,     0,     0,   105,     0,    65,
       0,    62,     0,    54,    55,    52,     0,   164,   145,   127,
       0,     0,     0,     0,   174,   172,   173,   170,   171,   175,
       0,     0,     0,     0,     0,     0,     0,   165,     0,     0,
       0,     0,   200,     0,   267,     0,   269,     0,    33,     0,
      78,    83,     0,   120,   119,     0,   120,     0,   120,     0,
       0,    81,     0,    56,   261,   214,   210,     0,     0,   225,
     262,     0,   105,     0,    22,    23,   109,     0,     0,   104,
      67,    51,   132,   123,   125,   168,   169,     0,   129,     0,
     176,   177,   178,     0,   166,   141,   143,     0,   137,     0,
       0,     0,   179,   387,   389,   388,   133,   182,   134,     0,
       0,   204,   196,   336,   406,   359,   312,   354,   355,   353,
     313,   332,   338,     0,   341,   335,   334,   412,     0,   374,
     373,   337,   342,   421,   333,   433,   432,   426,   278,     0,
     275,   276,   277,   274,   293,   291,   292,   290,   324,   325,
     286,   289,   288,     0,     0,    80,    84,    82,     0,   121,
     116,     0,   117,     0,   118,    76,     0,    68,     0,    36,
     213,   209,   212,   236,   232,   231,   234,   109,     0,     0,
      89,    88,   107,   108,     0,   130,     0,     0,   144,     0,
       0,   142,   139,   201,   202,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   340,     0,   306,   294,
       0,   296,   303,   363,   361,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   265,   281,
     282,     0,   285,   287,   266,   271,   114,     0,     0,     0,
       0,     0,    57,   211,   237,     0,   238,     0,    93,    92,
     108,     0,   106,   135,   167,   138,     0,     0,   357,     0,
       0,   351,     0,     0,   349,     0,   378,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     371,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,   113,   115,     0,     0,     0,
     224,    41,    42,    45,   233,     0,    47,   101,   100,     0,
       0,    91,    90,   136,   140,     0,   358,   344,     0,     0,
     343,     0,     0,   379,   380,   384,   382,   383,   381,   377,
     376,   352,   331,     0,   329,     0,   339,     0,   301,   295,
     299,     0,     0,     0,     0,   369,     0,   364,     0,     0,
     372,   327,     0,     0,   316,   317,   318,   321,   322,   323,
     347,     0,   284,   110,   112,    44,     0,     0,     0,   240,
      97,    96,    99,    98,     0,     0,     0,   346,     0,   345,
     375,     0,     0,   305,     0,     0,   302,   362,     0,   360,
       0,     0,     0,   367,     0,     0,     0,     0,     0,     0,
     280,   283,     0,    43,   239,   243,   242,   235,     0,    95,
      94,   356,   350,   348,   330,   328,     0,     0,   366,     0,
     365,   370,   326,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   255,   244,   248,   245,   304,   300,   368,
     314,   315,   319,   320,    46,     0,     0,   251,     0,   253,
     247,   246,   249,     0,   241,   252,   254,     0,     0,   257,
       0,   258,   250,   256,   259
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -626,  -626,   550,  -626,  -626,  -626,  -626,  -626,   493,  -626,
    -626,   361,  -626,   -48,  -626,     8,   167,   492,    78,  -626,
     -62,  -626,  -626,  -565,  -626,    64,  -626,   355,  -626,  -626,
    -626,  -626,    66,  -626,  -626,  -113,   358,  -103,   464,  -626,
     315,  -255,  -389,  -626,  -626,  -626,    35,   402,   321,   -71,
    -235,   359,  -154,  -626,  -626,  -626,   734,   470,   467,   458,
     -52,  -626,  -172,   286,   301,  -626,  -626,  -626,  -626,  -626,
    -625,  -626,  -626,   425,  -626,  -626,  -626,  -626,   214,  -626,
     427,  -300,  -626,   221,  -626,  -626,  -626,  -626,  -626,  -626,
     -13,  -626,  -626,   -61,  -626,  -626,  -626,  -626,  -626,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -626,    -5,  -626,
    -626,  -626,  -626,  -626,  -626,  -626,  -626,  -497,    67,  -626,
    -626,  -626,   419,  -163,   496,  -430,   646,  -626
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,   177,   178,    13,
      14,   223,   224,    15,    16,    23,    18,    19,   138,    21,
     173,   196,   353,   591,   592,   106,   107,   232,   233,   305,
     459,    22,    99,   100,   165,   166,   229,    29,   139,   140,
     266,   267,   268,   269,   447,   141,   142,   271,   350,   450,
     241,   242,   243,   244,   245,   246,   182,   144,   145,   146,
     147,   148,   183,   385,   378,   325,   204,   326,   212,   217,
     149,   150,   185,   255,   256,   331,   151,   152,   153,   154,
     155,   359,   464,   465,   535,   536,   596,   697,   698,   723,
     737,   725,   726,   738,   739,   744,   156,   157,   429,   430,
     431,   432,   433,   434,   499,   500,   629,   501,   158,   435,
     436,   437,   438,   439,   440,   441,   442,   557,   619,   620,
     287,   397,   205,   206,   207,   208,   159,    97
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      95,    95,   180,   306,   249,   169,   170,   171,    17,   339,
     522,   572,   523,   356,   360,   258,   113,   622,   462,   328,
      95,    95,   525,   476,   372,   624,   275,     1,   563,   546,
     111,   641,   108,   333,   201,   201,   673,   202,   202,   201,
      92,   201,   202,   201,   202,   174,   202,   201,   201,   511,
     202,   202,   303,   514,   201,   460,   461,   202,   295,   526,
     114,   115,   564,   487,   490,   505,   201,   179,   566,   202,
     -33,   375,     2,   722,   376,   521,   112,   748,    20,    24,
     327,   202,     1,    27,   193,   194,   309,     1,   -33,   175,
     451,   304,   693,    95,   736,   201,   201,     3,   202,   202,
      20,   745,   341,   201,   749,   201,   202,   201,   202,   695,
     202,   666,    17,   746,   668,   201,   109,   696,   202,  -102,
     386,   222,   736,    17,   310,   310,   518,   718,    28,   102,
     108,   519,   251,   750,   272,  -103,   479,   363,    95,   104,
     586,   682,   488,   491,   506,    25,   547,   567,   613,   103,
       4,   741,   614,   105,   -33,   399,    95,   374,    95,    95,
     113,   293,   533,   742,   162,  -298,   282,     5,     4,    95,
     623,   377,   203,   203,   751,   341,     6,   203,   625,   203,
      26,   203,    20,   709,   642,   203,   203,   176,    17,   674,
      95,   110,   203,    20,     6,    95,   389,    95,   512,   513,
     181,   530,   515,   516,   203,     4,   565,   489,   492,   507,
       4,   477,   568,   520,   109,   335,   160,    95,   387,    93,
      93,    95,   691,   532,   176,    43,   618,   252,   446,   228,
     270,     6,   161,   203,   203,   337,   164,   277,   213,    93,
      93,   203,   381,   203,   382,   203,   163,    20,    20,    20,
      43,    51,    24,   203,   390,  -104,   168,   541,    20,    95,
      95,   375,   172,   342,   376,    95,  -107,   391,   599,    58,
    -106,    59,   664,   265,   186,   452,    51,   454,   210,   211,
     116,   117,   118,   119,   120,    95,   121,   503,   504,   187,
     343,    95,   584,    95,    58,    95,    59,   344,   719,   270,
     686,   687,   688,   689,   188,   345,   498,   214,   346,   301,
     189,   190,    93,   215,   216,   191,   181,   308,   347,   192,
     116,   117,   118,   119,   120,   720,   121,   197,    95,   195,
      95,   628,   129,    95,   198,    90,   235,   236,   218,   219,
      95,   343,   338,   220,    95,   348,   221,   342,   344,   231,
     248,   253,   653,    95,   531,   260,    95,    93,    95,   346,
      90,   254,    95,    95,   261,   720,   342,   263,   428,   288,
     443,   278,   129,   294,   343,    93,   298,    93,    93,   613,
     270,   344,   349,   614,   270,   299,   300,     1,    93,   345,
     311,   302,   346,   343,   310,   330,   348,   312,   384,   334,
     344,   336,   347,   354,   398,   352,   355,   358,   345,    93,
     367,   346,   502,   383,    93,   585,    93,   380,   392,   445,
     402,   347,   615,   265,   448,   449,   721,   265,   456,   348,
     457,   527,    94,    94,   468,   474,    93,   616,   458,   478,
      93,   617,   486,    95,   485,   493,   494,   495,   348,   497,
     496,    95,    94,    94,   508,   509,   510,   618,    95,   517,
     202,   181,   524,    95,    95,   529,   735,   537,   384,    95,
     544,   549,   528,   548,   550,   654,   551,   552,    93,    93,
     553,   556,   313,   270,    93,   555,   694,   554,   558,   561,
     559,   270,   560,   562,   201,   569,   570,   202,   314,   315,
     316,   317,   318,   319,    93,    95,   571,   573,   575,   578,
      93,   581,    93,   576,    93,   577,   579,   580,   583,   582,
     635,   594,   605,   595,    95,    94,   265,   600,   606,   607,
     608,   342,    95,   609,   265,   610,    95,   611,   612,   621,
     320,   627,   626,   631,   632,   574,   633,    93,   321,    93,
     634,   639,    93,   322,   636,   645,   637,   630,   343,    93,
     638,   646,   640,    93,   270,   344,   323,   643,   644,   647,
      94,   648,    93,   345,   649,    93,   346,    93,    95,   650,
     651,    93,    93,   656,   657,   658,   347,   665,    94,   667,
      94,    94,   669,   671,    95,    95,   587,   672,   675,   678,
     676,    94,   677,   679,   681,   680,   684,   265,   683,   690,
     692,   685,  -297,   348,   706,   701,   702,   703,   652,   704,
     705,   707,    94,   708,   710,   711,   252,    94,   712,    94,
     727,   324,   203,   714,   728,   715,   716,   588,   717,   729,
     734,   740,   741,   730,   731,   732,   733,   747,   742,    94,
     753,    96,   101,    94,   167,   364,   754,   371,   370,    95,
     659,   273,    93,   237,   455,   743,   340,   181,   453,   373,
      93,    96,    96,   250,   279,   281,   481,    93,   475,   280,
      95,   332,    93,    93,   534,   724,   752,   670,    93,   351,
       0,    94,    94,     0,     0,   313,   276,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   201,     0,     0,
     202,   314,   315,   316,   317,   318,   319,    94,     0,     0,
     713,     0,     0,    94,    93,    94,     0,    94,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    93,   101,     0,     0,     0,     0,     0,
       0,    93,     0,   320,     0,    93,     0,     0,     0,     0,
      94,   321,    94,   143,     0,    94,   322,     0,     0,     0,
       0,     0,    94,     0,     0,     0,    94,     0,     0,   323,
       0,     0,     0,     0,     0,    94,     0,     0,    94,   209,
      94,     0,     0,     0,    94,    94,     0,    93,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   227,     0,   101,
     230,     0,     0,    93,    93,     0,   313,     0,   400,     0,
     230,     0,     0,     0,     0,     0,     0,     0,   201,     0,
       0,   202,   314,   315,   316,   317,   318,   319,     0,     0,
       0,    96,     0,     0,   324,   203,   209,     0,    96,     0,
       0,     0,     0,     0,     0,     0,     0,   184,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   292,     0,
       0,     0,   297,     0,   320,    94,     0,     0,    93,     0,
       0,     0,   321,    94,     0,     0,     0,   322,     0,     0,
      94,     0,     0,     0,   225,    94,    94,     0,     0,    93,
     323,    94,   234,     0,     0,     0,   247,     0,     0,     0,
      96,   209,     0,     0,     0,     0,   209,     0,     0,     0,
     257,     0,   259,     0,     0,   262,     0,     0,     0,     0,
       0,   143,     0,     0,     0,     0,   362,    94,     0,     0,
       0,     0,   366,     0,   369,     0,   230,     0,     0,     0,
       0,     0,     0,   286,     0,   289,    94,     0,     0,     0,
       0,     0,     0,     0,    94,   324,   203,     0,    94,     0,
       0,     0,   307,     0,   247,     0,     0,     0,     0,    96,
       0,    96,     0,     0,   209,     0,     0,     0,   329,     0,
       0,    96,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,     0,   466,     0,     0,   467,     0,   471,
      94,     0,     0,   472,   473,     0,     0,     0,     0,     0,
       0,   357,     0,     0,     0,     0,    94,    94,   225,   365,
       0,     0,     0,     0,     0,     0,   234,     0,     0,     0,
       0,     0,     0,     0,   247,   247,     0,   379,     0,     0,
       0,     0,     0,     0,     0,     0,   388,     0,     0,   396,
       0,     0,     0,     0,   401,     0,     0,     0,     0,     0,
       0,   444,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    94,     0,     0,    96,     0,     0,     0,     0,     0,
       0,     0,    96,     0,     0,     0,     0,     0,     0,   466,
       0,     0,    94,     0,   539,   540,     0,     0,     0,     0,
     542,     0,     0,   480,     0,   482,     0,     0,     0,     0,
       0,     0,     0,   483,   484,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    96,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    96,     0,     0,     0,     0,
       0,     0,     0,   598,     0,     0,     0,   602,     0,     0,
       0,     0,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     543,     0,     0,   545,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    96,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   661,   663,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,   199,
       0,   247,     0,     0,     0,   593,     0,     0,     0,     0,
       0,     0,     0,    31,   200,    32,    33,     0,     0,    34,
     603,   604,     0,     0,    35,     0,     0,    36,     0,   201,
      37,    38,   202,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,    42,     0,     0,     0,     0,    43,     0,
     700,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,   247,     0,    46,     0,     0,    47,    48,     0,     0,
      49,    96,    50,     0,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,    54,     0,     0,    55,
      56,    57,    58,     0,    59,    60,     0,     0,     0,     0,
       0,     0,    61,     0,    62,    63,    64,     0,    65,     0,
       0,    66,     0,     0,     0,    67,    68,    69,     0,    70,
      71,     0,    72,    73,     0,    74,     0,    75,    76,    77,
       0,   593,     0,    78,     0,     0,    79,    80,    81,     0,
       0,    82,    83,    84,     0,    85,     0,     0,     0,     0,
      86,     0,    87,    88,     0,     0,     0,    89,    90,    91,
       0,     0,     0,     0,     0,     0,   593,   203,    30,   116,
     117,   118,   119,   120,     0,   121,     0,   122,     0,     0,
     283,     0,     0,    31,     0,    32,    33,     0,     0,    34,
       0,     0,     0,   123,   124,     0,     0,    36,     0,     0,
     125,    38,     0,     0,     0,     0,     0,     0,     0,   126,
      40,    41,     0,    42,     0,   127,   128,     0,    43,     0,
       0,   129,     0,    44,    45,   284,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    47,    48,     0,     0,
      49,     0,    50,     0,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,    54,   130,     0,    55,
      56,    57,    58,     0,    59,    60,     0,     0,     0,     0,
       0,     0,   131,     0,    62,    63,    64,     0,    65,     0,
       0,    66,     0,     0,     0,    67,    68,    69,     0,    70,
      71,     0,    72,    73,   132,    74,     0,    75,    76,    77,
       0,   133,     0,    78,     0,     0,    79,    80,    81,   134,
       0,    82,    83,    84,     0,    85,     0,     0,     0,     0,
      86,     0,    87,    88,     0,     0,     0,    89,    90,    91,
       0,     0,   285,     0,   136,   137,    30,   116,   117,   118,
     119,   120,     0,   121,     0,   238,     0,     0,     0,     0,
       0,    31,     0,    32,    33,     0,     0,    34,     0,     0,
       0,   123,   124,     0,     0,    36,     0,     0,   125,    38,
       0,     0,     0,     0,     0,     0,     0,   126,    40,    41,
       0,    42,     0,   127,   128,     0,    43,     0,     0,   129,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    46,   239,     0,    47,    48,     0,     0,    49,     0,
      50,     0,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,    54,   130,     0,    55,    56,    57,
      58,     0,    59,    60,     0,     0,     0,     0,     0,   240,
     131,     0,    62,    63,    64,     0,    65,     0,     0,    66,
       0,     0,     0,    67,    68,    69,     0,    70,    71,     0,
      72,    73,   132,    74,     0,    75,    76,    77,     4,   133,
       0,    78,     0,     0,    79,    80,    81,   134,     0,    82,
      83,    84,     0,    85,     0,     0,     0,     0,    86,     0,
      87,    88,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,   136,   137,    30,   116,   117,   118,   119,   120,
       0,   121,     0,   122,     0,     0,   393,     0,   394,    31,
       0,    32,    33,     0,     0,    34,     0,     0,     0,   123,
     124,     0,     0,    36,     0,     0,   125,    38,     0,     0,
       0,     0,     0,     0,     0,   126,    40,    41,     0,    42,
       0,   127,   128,     0,    43,     0,     0,   129,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    47,    48,     0,     0,    49,     0,    50,     0,
      51,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,    54,   130,     0,    55,    56,    57,    58,     0,
      59,    60,     0,     0,     0,     0,     0,     0,   131,     0,
      62,    63,    64,     0,    65,     0,     0,    66,     0,     0,
       0,    67,    68,    69,     0,    70,    71,     0,    72,    73,
     132,    74,     0,    75,    76,    77,     0,   133,     0,    78,
       0,   395,    79,    80,    81,   134,     0,    82,    83,    84,
       0,    85,     0,     0,     0,     0,    86,     0,    87,    88,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
     136,   137,    30,   116,   117,   118,   119,   120,     0,   121,
       0,   238,     0,     0,     0,     0,     0,    31,     0,    32,
      33,     0,     0,    34,     0,     0,     0,   123,   124,     0,
       0,    36,     0,     0,   125,    38,     0,     0,     0,     0,
       0,     0,     0,   126,    40,    41,     0,    42,     0,   127,
     128,     0,    43,     0,     0,   129,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    46,   239,     0,
      47,    48,     0,     0,    49,     0,    50,     0,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
      54,   130,     0,    55,    56,    57,    58,     0,    59,    60,
       0,     0,     0,     0,     0,   240,   131,     0,    62,    63,
      64,     0,    65,     0,     0,    66,     0,     0,     0,    67,
      68,    69,     0,    70,    71,     0,    72,    73,   132,    74,
       0,    75,    76,    77,     0,   133,     0,    78,     0,     0,
      79,    80,    81,   134,     0,    82,    83,    84,     0,    85,
       0,     0,     0,     0,    86,     0,    87,    88,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,   136,   137,
      30,   116,   117,   118,   119,   120,     0,   121,     0,   122,
     655,     0,     0,     0,     0,    31,     0,    32,    33,     0,
       0,    34,     0,     0,     0,   123,   124,     0,     0,    36,
       0,     0,   125,    38,     0,     0,     0,     0,     0,     0,
       0,   126,    40,    41,     0,    42,     0,   127,   128,     0,
      43,     0,     0,   129,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,    47,    48,
       0,     0,    49,     0,    50,     0,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,    54,   130,
       0,    55,    56,    57,    58,     0,    59,    60,     0,     0,
       0,     0,     0,     0,   131,     0,    62,    63,    64,     0,
      65,     0,     0,    66,     0,     0,     0,    67,    68,    69,
       0,    70,    71,     0,    72,    73,   132,    74,     0,    75,
      76,    77,     4,   133,     0,    78,     0,     0,    79,    80,
      81,   134,     0,    82,    83,    84,     0,    85,     0,     0,
       0,     0,    86,     0,    87,    88,     0,     0,     0,    89,
      90,    91,     0,     0,     0,     0,   136,   137,    30,   116,
     117,   118,   119,   120,     0,   121,     0,   122,     0,     0,
       0,     0,     0,    31,     0,    32,    33,     0,     0,    34,
       0,     0,     0,   123,   124,     0,     0,    36,     0,     0,
     125,    38,     0,     0,     0,     0,     0,     0,     0,   126,
      40,    41,     0,    42,     0,   127,   128,     0,    43,     0,
       0,   129,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    47,    48,     0,     0,
      49,     0,    50,     0,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,    54,   130,     0,    55,
      56,    57,    58,     0,    59,    60,     0,     0,     0,     0,
       0,     0,   131,     0,    62,    63,    64,     0,    65,     0,
       0,    66,     0,     0,     0,    67,    68,    69,     0,    70,
      71,     0,    72,    73,   132,    74,     0,    75,    76,    77,
       0,   133,     0,    78,     0,     0,    79,    80,    81,   134,
       0,    82,    83,    84,     0,    85,     0,     0,     0,     0,
      86,     0,    87,    88,     0,     0,     0,    89,    90,    91,
       0,     0,   135,     0,   136,   137,    30,   116,   117,   118,
     119,   120,     0,   121,     0,   122,     0,     0,     0,     0,
       0,    31,     0,    32,    33,     0,     0,    34,     0,     0,
       0,   123,   124,     0,     0,    36,     0,     0,   125,    38,
       0,     0,     0,     0,     0,     0,     0,   126,    40,    41,
       0,    42,     0,   127,   128,     0,    43,     0,     0,   129,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,    47,    48,     0,     0,    49,     0,
      50,     0,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,    54,   130,     0,    55,    56,    57,
      58,     0,    59,    60,     0,     0,     0,     0,     0,     0,
     131,     0,    62,    63,    64,     0,    65,     0,     0,    66,
       0,     0,     0,    67,    68,    69,     0,    70,    71,     0,
      72,    73,   132,    74,     0,    75,    76,    77,     4,   133,
       0,    78,     0,     0,    79,    80,    81,   134,     0,    82,
      83,    84,     0,    85,     0,     0,     0,     0,    86,     0,
      87,    88,     0,     0,     0,    89,    90,    91,     0,     0,
       0,     0,   136,   137,    30,   116,   117,   118,   119,   120,
       0,   121,     0,   122,   274,     0,     0,     0,     0,    31,
       0,    32,    33,     0,     0,    34,     0,     0,     0,   123,
     124,     0,     0,    36,     0,     0,   125,    38,     0,     0,
       0,     0,     0,     0,     0,   126,    40,    41,     0,    42,
       0,   127,   128,     0,    43,     0,     0,   129,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    47,    48,     0,     0,    49,     0,    50,     0,
      51,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,    54,   130,     0,    55,    56,    57,    58,     0,
      59,    60,     0,     0,     0,     0,     0,     0,   131,     0,
      62,    63,    64,     0,    65,     0,     0,    66,     0,     0,
       0,    67,    68,    69,     0,    70,    71,     0,    72,    73,
     132,    74,     0,    75,    76,    77,     0,   133,     0,    78,
       0,     0,    79,    80,    81,   134,     0,    82,    83,    84,
       0,    85,     0,     0,     0,     0,    86,     0,    87,    88,
       0,     0,     0,    89,    90,    91,     0,     0,     0,     0,
     136,   137,    30,   116,   117,   118,   119,   120,     0,   121,
       0,   122,     0,     0,     0,     0,     0,    31,     0,    32,
      33,     0,     0,    34,     0,     0,     0,   123,   124,     0,
       0,    36,     0,     0,   125,    38,     0,     0,     0,     0,
       0,     0,     0,   126,    40,    41,     0,    42,     0,   127,
     128,     0,    43,     0,     0,   129,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
      47,    48,     0,     0,    49,     0,    50,     0,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
      54,   130,     0,    55,    56,    57,    58,     0,    59,    60,
       0,     0,     0,     0,     0,     0,   131,     0,    62,    63,
      64,     0,    65,     0,     0,    66,     0,     0,     0,    67,
      68,    69,     0,    70,    71,     0,    72,    73,   132,    74,
       0,    75,    76,    77,     0,   133,     0,    78,     0,     0,
      79,    80,    81,   134,     0,    82,    83,    84,     0,    85,
       0,     0,     0,     0,    86,     0,    87,    88,     0,     0,
       0,    89,    90,    91,     0,     0,     0,     0,   136,   137,
      30,   116,   117,   118,   119,   120,     0,   121,     0,   589,
       0,     0,     0,     0,     0,    31,     0,    32,    33,     0,
       0,    34,     0,     0,     0,   123,   124,     0,     0,    36,
       0,     0,   125,    38,     0,     0,     0,     0,     0,     0,
       0,   126,    40,    41,     0,    42,     0,   127,   128,     0,
      43,     0,     0,   129,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,    47,    48,
       0,     0,    49,     0,   590,     0,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,    54,   130,
       0,    55,    56,    57,    58,     0,    59,    60,     0,     0,
       0,     0,     0,     0,   131,     0,    62,    63,    64,     0,
      65,     0,     0,    66,     0,     0,     0,    67,    68,    69,
       0,    70,    71,     0,    72,    73,   132,    74,     0,    75,
      76,    77,     0,   133,     0,    78,     0,     0,    79,    80,
      81,   134,     0,    82,    83,    84,     0,    85,     0,     0,
       0,     0,    86,    30,    87,    88,     0,     0,     0,    89,
      90,    91,     0,     0,   290,     0,   136,   137,    31,     0,
      32,    33,     0,     0,    34,     0,     0,     0,     0,    35,
       0,     0,    36,     0,     0,    37,    38,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,     0,    42,     0,
       0,     0,     0,    43,     0,     0,     0,     0,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
       0,    47,    48,     0,     0,    49,     0,    50,     0,    51,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,    54,     0,     0,    55,    56,    57,    58,     0,    59,
      60,     0,     0,     0,     0,     0,     0,    61,     0,    62,
      63,    64,     0,    65,     0,     0,    66,     0,     0,     0,
      67,    68,    69,     0,    70,    71,     0,    72,    73,     0,
      74,     0,    75,    76,    77,     0,     0,     0,    78,     0,
       0,    79,    80,    81,     0,     0,    82,    83,    84,     0,
      85,     0,     0,     0,    30,    86,     0,    87,    88,     0,
       0,     0,    89,    90,    91,   469,     0,   291,     0,    31,
       0,    32,    33,     0,     0,    34,     0,     0,     0,     0,
      35,     0,     0,    36,     0,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,    42,
       0,     0,     0,     0,    43,     0,     0,     0,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    47,    48,     0,     0,    49,     0,    50,     0,
      51,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,    54,     0,     0,    55,    56,    57,    58,     0,
      59,    60,     0,     0,     0,     0,     0,     0,    61,     0,
      62,    63,    64,     0,    65,     0,     0,    66,     0,     0,
       0,    67,    68,    69,     0,    70,    71,     0,    72,    73,
       0,    74,     0,    75,    76,    77,     0,     0,     0,    78,
       0,     0,    79,    80,    81,     0,     0,    82,    83,    84,
       0,    85,    30,     0,     0,     0,    86,     0,    87,    88,
       0,     0,     0,    89,    90,    91,     0,    31,   470,    32,
      33,     0,     0,    34,     0,     0,     0,     0,    35,     0,
       0,    36,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,    42,     0,     0,
       0,     0,    43,     0,     0,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
      47,    48,     0,     0,    49,     0,    50,     0,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
      54,     0,     0,    55,    56,    57,    58,     0,    59,    60,
       0,     0,     0,     0,     0,     0,    61,     0,    62,    63,
      64,     0,    65,     0,     0,    66,     0,     0,     0,    67,
      68,    69,     0,    70,    71,     0,    72,    73,     0,    74,
       0,    75,    76,    77,     0,     0,     0,    78,     0,     0,
      79,    80,    81,     0,     0,    82,    83,    84,     0,    85,
      30,     0,     0,     0,    86,     0,    87,    88,     0,     0,
       0,    89,    90,    91,     0,    31,   538,    32,    33,     0,
       0,    34,     0,     0,     0,     0,    35,     0,     0,    36,
       0,     0,    37,    38,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,     0,    42,     0,     0,     0,     0,
      43,     0,     0,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,    47,    48,
       0,     0,    49,     0,    50,     0,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,    54,     0,
       0,    55,    56,    57,    58,     0,    59,    60,     0,     0,
       0,     0,     0,     0,    61,     0,    62,    63,    64,     0,
      65,     0,     0,    66,     0,     0,     0,    67,    68,    69,
       0,    70,    71,     0,    72,    73,     0,    74,     0,    75,
      76,    77,     0,     0,     0,    78,     0,     0,    79,    80,
      81,     0,     0,    82,    83,    84,     0,    85,    30,     0,
       0,     0,    86,     0,    87,    88,     0,     0,     0,    89,
      90,    91,     0,    31,   597,    32,    33,     0,     0,    34,
       0,     0,     0,     0,    35,     0,     0,    36,     0,     0,
      37,    38,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,    42,     0,     0,     0,     0,    43,     0,
       0,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    47,    48,     0,     0,
      49,     0,    50,     0,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,    54,     0,     0,    55,
      56,    57,    58,     0,    59,    60,     0,     0,     0,     0,
       0,     0,    61,     0,    62,    63,    64,     0,    65,     0,
       0,    66,     0,     0,     0,    67,    68,    69,     0,    70,
      71,     0,    72,    73,     0,    74,     0,    75,    76,    77,
       0,     0,     0,    78,     0,     0,    79,    80,    81,     0,
       0,    82,    83,    84,     0,    85,    30,     0,     0,     0,
      86,     0,    87,    88,     0,     0,     0,    89,    90,    91,
       0,    31,   601,    32,    33,     0,     0,    34,     0,     0,
       0,     0,    35,     0,     0,    36,     0,     0,    37,    38,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
       0,    42,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,    47,    48,     0,     0,    49,     0,
      50,     0,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,    54,     0,     0,    55,    56,    57,
      58,     0,    59,    60,     0,     0,     0,     0,     0,     0,
      61,     0,    62,    63,    64,     0,    65,     0,     0,    66,
       0,     0,     0,    67,    68,    69,     0,    70,    71,     0,
      72,    73,     0,    74,     0,    75,    76,    77,     0,     0,
       0,    78,     0,     0,    79,    80,    81,     0,     0,    82,
      83,    84,     0,    85,    30,     0,     0,     0,    86,     0,
      87,    88,     0,     0,     0,    89,    90,    91,     0,    31,
     660,    32,    33,     0,     0,    34,     0,     0,     0,     0,
      35,     0,     0,    36,     0,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,    42,
       0,     0,     0,     0,    43,     0,     0,     0,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    47,    48,     0,     0,    49,     0,    50,     0,
      51,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,    54,     0,     0,    55,    56,    57,    58,     0,
      59,    60,     0,     0,     0,     0,     0,     0,    61,     0,
      62,    63,    64,     0,    65,     0,     0,    66,     0,     0,
       0,    67,    68,    69,     0,    70,    71,     0,    72,    73,
       0,    74,     0,    75,    76,    77,     0,     0,     0,    78,
       0,     0,    79,    80,    81,     0,     0,    82,    83,    84,
       0,    85,    30,     0,     0,     0,    86,     0,    87,    88,
       0,     0,     0,    89,    90,    91,     0,    31,   662,    32,
      33,     0,     0,    34,     0,     0,     0,     0,    35,     0,
       0,    36,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,    42,     0,     0,
       0,     0,    43,     0,     0,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
      47,    48,     0,     0,    49,     0,    50,     0,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
      54,     0,     0,    55,    56,    57,    58,     0,    59,    60,
       0,     0,     0,     0,     0,     0,    61,     0,    62,    63,
      64,     0,    65,     0,     0,    66,     0,     0,     0,    67,
      68,    69,     0,    70,    71,     0,    72,    73,     0,    74,
       0,    75,    76,    77,     0,     0,     0,    78,     0,     0,
      79,    80,    81,     0,     0,    82,    83,    84,     0,    85,
      30,     0,     0,     0,    86,     0,    87,    88,     0,     0,
       0,    89,    90,    91,     0,    31,   699,    32,    33,     0,
     403,   404,   405,   406,     0,     0,    35,   407,   408,    36,
     409,     0,    37,    38,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,     0,    42,     0,     0,     0,   410,
      43,   411,   412,     0,     0,    44,    45,     0,   413,     0,
       0,     0,     0,     0,     0,    46,     0,   414,    47,    48,
       0,     0,    49,     0,    50,     0,    51,     0,     0,     0,
     415,   416,     0,   417,     0,     0,     0,    53,    54,     0,
       0,    55,    56,    57,    58,     0,    59,    60,   418,     0,
     419,   420,     0,     0,    61,   421,    62,    63,    64,     0,
      65,     0,     0,    66,     0,     0,     0,    67,    68,    69,
       0,    70,    71,   422,    72,   423,     0,    74,     0,    75,
      76,    77,     0,     0,     0,    78,   424,     0,    79,    80,
      81,     0,     0,    82,   425,   426,     0,    85,    30,   199,
       0,     0,   427,     0,    87,    88,     0,     0,   113,    89,
      90,    91,     0,    31,   200,    32,    33,     0,     0,    34,
       0,     0,     0,     0,    35,     0,     0,    36,     0,     0,
      37,    38,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,    42,     0,     0,     0,     0,    43,     0,
       0,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    47,    48,     0,     0,
      49,     0,    50,     0,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,    54,     0,     0,    55,
      56,    57,    58,     0,    59,    60,     0,     0,     0,     0,
       0,     0,    61,     0,    62,    63,    64,     0,    65,     0,
       0,    66,     0,     0,     0,    67,    68,    69,     0,    70,
      71,     0,    72,    73,     0,    74,     0,    75,    76,    77,
       0,     0,     0,    78,     0,     0,    79,    80,    81,     0,
       0,    82,    83,    84,     0,    85,    30,     0,     0,     0,
      86,     0,    87,    88,     0,     1,     0,    89,    90,    91,
       0,    31,     0,    32,    33,     0,     0,    34,     0,     0,
       0,     0,    35,     0,     0,    36,     0,     0,    37,    38,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
       0,    42,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,    47,    48,     0,     0,    49,     0,
      50,     0,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,    54,     0,     0,    55,    56,    57,
      58,     0,    59,    60,     0,     0,     0,     0,     0,     0,
      61,     0,    62,    63,    64,     0,    65,     0,     0,    66,
       0,     0,     0,    67,    68,    69,     0,    70,    71,     0,
      72,    73,     0,    74,     0,    75,    76,    77,     4,     0,
       0,    78,     0,     0,    79,    80,    81,     0,     0,    82,
      83,    84,     0,    85,    30,     0,     0,     0,    86,     0,
      87,    88,     0,   264,     0,    89,    90,    91,     0,    31,
       0,    32,    33,     0,     0,    34,     0,     0,     0,     0,
      35,     0,     0,    36,     0,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,     0,    42,
       0,     0,     0,     0,    43,     0,     0,     0,     0,    44,
      45,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,    47,    48,     0,     0,    49,     0,    50,     0,
      51,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,    53,    54,     0,     0,    55,    56,    57,    58,     0,
      59,    60,     0,     0,     0,     0,     0,     0,    61,     0,
      62,    63,    64,     0,    65,     0,     0,    66,     0,     0,
       0,    67,    68,    69,     0,    70,    71,     0,    72,    73,
       0,    74,     0,    75,    76,    77,     4,     0,     0,    78,
       0,     0,    79,    80,    81,     0,     0,    82,    83,    84,
       0,    85,    30,   199,     0,     0,    86,     0,    87,    88,
       0,     0,     0,    89,    90,    91,     0,    31,   200,    32,
      33,     0,     0,    34,     0,     0,     0,     0,    35,     0,
       0,    36,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,    42,     0,     0,
       0,     0,    43,     0,     0,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
      47,    48,     0,     0,    49,     0,    50,     0,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
      54,     0,     0,    55,    56,    57,    58,     0,    59,    60,
       0,     0,     0,     0,     0,     0,    61,     0,    62,    63,
      64,     0,    65,     0,     0,    66,     0,     0,     0,    67,
      68,    69,     0,    70,    71,     0,    72,    73,     0,    74,
       0,    75,    76,    77,     0,     0,     0,    78,     0,     0,
      79,    80,    81,     0,     0,    82,    83,    84,     0,    85,
       0,     0,     0,    30,    86,     0,    87,    88,     0,     0,
       0,    89,    90,    91,   226,     0,     0,     0,    31,     0,
      32,    33,     0,     0,    34,     0,     0,     0,     0,    35,
       0,     0,    36,     0,     0,    37,    38,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,     0,    42,     0,
       0,     0,     0,    43,     0,     0,     0,     0,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
       0,    47,    48,     0,     0,    49,     0,    50,     0,    51,
       0,     0,     0,     0,     0,     0,    52,     0,     0,     0,
      53,    54,     0,     0,    55,    56,    57,    58,     0,    59,
      60,     0,     0,     0,     0,     0,     0,    61,     0,    62,
      63,    64,     0,    65,     0,     0,    66,     0,     0,     0,
      67,    68,    69,     0,    70,    71,     0,    72,    73,     0,
      74,     0,    75,    76,    77,     0,     0,     0,    78,     0,
       0,    79,    80,    81,     0,     0,    82,    83,    84,     0,
      85,    30,     0,     0,     0,    86,     0,    87,    88,     0,
     264,     0,    89,    90,    91,     0,    31,     0,    32,    33,
       0,     0,    34,     0,     0,     0,     0,    35,     0,     0,
      36,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,     0,    39,    40,    41,     0,    42,     0,     0,     0,
       0,    43,     0,     0,     0,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,    47,
      48,     0,     0,    49,     0,    50,     0,    51,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,    54,
       0,     0,    55,    56,    57,    58,     0,    59,    60,     0,
       0,     0,     0,     0,     0,    61,     0,    62,    63,    64,
       0,    65,     0,     0,    66,     0,     0,     0,    67,    68,
      69,     0,    70,    71,     0,    72,    73,     0,    74,     0,
      75,    76,    77,     0,     0,     0,    78,     0,     0,    79,
      80,    81,     0,     0,    82,    83,    84,     0,    85,    30,
     199,     0,     0,    86,     0,    87,    88,     0,     0,     0,
      89,    90,    91,     0,    31,     0,    32,    33,     0,     0,
      34,     0,     0,     0,     0,    35,     0,     0,    36,     0,
       0,    37,    38,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,     0,    42,     0,     0,     0,     0,    43,
       0,     0,     0,     0,    44,    45,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,    47,    48,     0,
       0,    49,     0,    50,     0,    51,     0,     0,     0,     0,
       0,     0,    52,     0,     0,     0,    53,    54,     0,     0,
      55,    56,    57,    58,     0,    59,    60,     0,     0,     0,
       0,     0,     0,    61,     0,    62,    63,    64,     0,    65,
       0,     0,    66,     0,     0,     0,    67,    68,    69,     0,
      70,    71,     0,    72,    73,     0,    74,     0,    75,    76,
      77,     0,     0,     0,    78,     0,     0,    79,    80,    81,
       0,     0,    82,    83,    84,     0,    85,     0,     0,     0,
      30,    86,     0,    87,    88,     0,     0,     0,    89,    90,
      91,   296,     0,     0,     0,    31,     0,    32,    33,     0,
       0,    34,     0,     0,     0,     0,    35,     0,     0,    36,
       0,     0,    37,    38,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,     0,    42,     0,     0,     0,     0,
      43,     0,     0,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,    47,    48,
       0,     0,    49,     0,    50,     0,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,    54,     0,
       0,    55,    56,    57,    58,     0,    59,    60,     0,     0,
       0,     0,     0,     0,    61,     0,    62,    63,    64,     0,
      65,     0,     0,    66,     0,     0,     0,    67,    68,    69,
       0,    70,    71,     0,    72,    73,     0,    74,     0,    75,
      76,    77,     0,     0,     0,    78,     0,     0,    79,    80,
      81,     0,     0,    82,    83,    84,     0,    85,     0,     0,
       0,    30,    86,     0,    87,    88,     0,     0,     0,    89,
      90,    91,   361,     0,     0,     0,    31,     0,    32,    33,
       0,     0,    34,     0,     0,     0,     0,    35,     0,     0,
      36,     0,     0,    37,    38,     0,     0,     0,     0,     0,
       0,     0,    39,    40,    41,     0,    42,     0,     0,     0,
       0,    43,     0,     0,     0,     0,    44,    45,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,    47,
      48,     0,     0,    49,     0,    50,     0,    51,     0,     0,
       0,     0,     0,     0,    52,     0,     0,     0,    53,    54,
       0,     0,    55,    56,    57,    58,     0,    59,    60,     0,
       0,     0,     0,     0,     0,    61,     0,    62,    63,    64,
       0,    65,     0,     0,    66,     0,     0,     0,    67,    68,
      69,     0,    70,    71,     0,    72,    73,     0,    74,     0,
      75,    76,    77,     0,     0,     0,    78,     0,     0,    79,
      80,    81,     0,     0,    82,    83,    84,     0,    85,     0,
       0,     0,    30,    86,     0,    87,    88,     0,     0,     0,
      89,    90,    91,   368,     0,     0,     0,    31,     0,    32,
      33,     0,     0,    34,     0,     0,     0,     0,    35,     0,
       0,    36,     0,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,     0,    42,     0,     0,
       0,     0,    43,     0,     0,     0,     0,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
      47,    48,     0,     0,    49,     0,    50,     0,    51,     0,
       0,     0,     0,     0,     0,    52,     0,     0,     0,    53,
      54,     0,     0,    55,    56,    57,    58,     0,    59,    60,
       0,     0,     0,     0,     0,     0,    61,     0,    62,    63,
      64,     0,    65,     0,     0,    66,     0,     0,     0,    67,
      68,    69,     0,    70,    71,     0,    72,    73,     0,    74,
       0,    75,    76,    77,     0,     0,     0,    78,     0,     0,
      79,    80,    81,     0,     0,    82,    83,    84,     0,    85,
      30,     0,     0,     0,    86,     0,    87,    88,     0,   463,
       0,    89,    90,    91,     0,    31,     0,    32,    33,     0,
       0,    34,     0,     0,     0,     0,    35,     0,     0,    36,
       0,     0,    37,    38,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,     0,    42,     0,     0,     0,     0,
      43,     0,     0,     0,     0,    44,    45,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,    47,    48,
       0,     0,    49,     0,    50,     0,    51,     0,     0,     0,
       0,     0,     0,    52,     0,     0,     0,    53,    54,     0,
       0,    55,    56,    57,    58,     0,    59,    60,     0,     0,
       0,     0,     0,     0,    61,     0,    62,    63,    64,     0,
      65,     0,     0,    66,     0,     0,     0,    67,    68,    69,
       0,    70,    71,     0,    72,    73,     0,    74,     0,    75,
      76,    77,     0,     0,     0,    78,     0,     0,    79,    80,
      81,     0,     0,    82,    83,    84,     0,    85,    30,     0,
       0,     0,    86,     0,    87,    88,     0,     0,     0,    89,
      90,    91,     0,    31,     0,    32,    33,     0,     0,    34,
       0,     0,     0,     0,    35,     0,     0,    36,     0,     0,
      37,    38,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,     0,    42,     0,     0,     0,     0,    43,     0,
       0,     0,     0,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,    47,    48,     0,     0,
      49,     0,    50,     0,    51,     0,     0,     0,     0,     0,
       0,    52,     0,     0,     0,    53,    54,     0,     0,    55,
      56,    57,    58,     0,    59,    60,     0,     0,     0,     0,
       0,     0,    61,     0,    62,    63,    64,     0,    65,     0,
       0,    66,     0,     0,     0,    67,    68,    69,     0,    70,
      71,     0,    72,    73,     0,    74,     0,    75,    76,    77,
       0,     0,     0,    78,     0,     0,    79,    80,    81,     0,
       0,    82,    83,    84,     0,    85,    30,     0,     0,     0,
      86,     0,    87,    88,     0,     0,     0,    89,    90,    91,
       0,    31,     0,    32,    33,     0,     0,    34,     0,     0,
       0,     0,    35,     0,     0,    36,     0,     0,    37,    38,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
       0,    42,     0,     0,     0,     0,    43,     0,     0,     0,
       0,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,    47,    48,     0,     0,    49,     0,
      50,     0,    51,     0,     0,     0,     0,     0,     0,    52,
       0,     0,     0,    53,    54,     0,     0,    55,    56,    57,
      58,     0,    59,    60,     0,     0,     0,     0,     0,     0,
      61,     0,    62,    63,    64,     0,    65,     0,     0,    66,
       0,     0,     0,    67,    68,    69,     0,    70,    71,     0,
      98,    73,     0,    74,     0,    75,    76,    77,     0,     0,
       0,    78,     0,     0,    79,    80,    81,     0,     0,    82,
      83,    84,     0,    85,     0,     0,     0,     0,    86,     0,
      87,    88,     0,     0,     0,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
       5,     6,   115,   238,   176,   108,   109,   110,     0,   264,
     440,   508,   442,    13,    13,   187,    13,    13,    13,   254,
      25,    26,    13,    16,    13,    13,   198,    12,    12,    16,
      22,    13,    67,    19,    34,    34,    13,    37,    37,    34,
       5,    34,    37,    34,    37,    12,    37,    34,    34,    12,
      37,    37,    20,    12,    34,   355,   356,    37,    38,   448,
      25,    26,    12,    12,    12,    12,    34,   115,    12,    37,
      67,     6,    57,   698,     9,    31,    13,    49,     0,     1,
     252,    37,    12,    15,   136,   137,   240,    12,    85,    56,
     345,    59,   657,    98,   719,    34,    34,    82,    37,    37,
      22,    71,   265,    34,    76,    34,    37,    34,    37,   123,
      37,   608,   104,    71,   611,    34,   151,   131,    37,    12,
       8,    14,   747,   115,   114,   114,    13,   692,    60,     0,
      67,    18,   180,   105,   196,    12,    65,    14,   143,   165,
     529,   638,    91,    91,    91,    73,    65,    91,    32,    64,
     135,   121,    36,   115,   151,   145,   161,   311,   163,   164,
      13,   223,   462,   121,    98,   149,   218,   152,   135,   174,
     166,   106,   172,   172,   146,   338,   161,   172,   166,   172,
      87,   172,   104,   680,   166,   172,   172,   154,   180,   166,
     195,    85,   172,   115,   161,   200,    22,   202,   161,   162,
     122,   456,   161,   162,   172,   135,   156,   156,   156,   156,
     135,   383,   156,   100,   151,   153,   137,   222,   106,     5,
       6,   226,   652,   458,   154,    53,   110,   166,   341,   163,
     195,   161,    14,   172,   172,   166,    12,   202,    98,    25,
      26,   172,    38,   172,    40,   172,   166,   169,   170,   171,
      53,    79,   174,   172,    80,    12,    27,    14,   180,   264,
     265,     6,   160,    47,     9,   270,    12,    93,    14,    97,
      12,    99,    14,   195,    12,   346,    79,   348,   169,   170,
       4,     5,     6,     7,     8,   290,    10,    30,    31,    12,
      74,   296,   527,   298,    97,   300,    99,    81,    22,   264,
     161,   162,   161,   162,    12,    89,   134,   167,    92,   231,
      12,    12,    98,   173,   174,    12,   238,   239,   102,    12,
       4,     5,     6,     7,     8,    49,    10,   166,   333,    73,
     335,   134,    56,   338,    12,   163,   169,   170,   168,    12,
     345,    74,   264,    12,   349,   129,    12,    47,    81,    19,
     154,    13,   587,   358,   457,     5,   361,   143,   363,    92,
     163,   159,   367,   368,    13,    49,    47,    13,   333,    13,
     335,   172,    56,   166,    74,   161,    14,   163,   164,    32,
     345,    81,   166,    36,   349,    13,   166,    12,   174,    89,
      16,   166,    92,    74,   114,    62,   129,    88,   320,    13,
      81,    13,   102,    13,   326,    76,    13,   118,    89,   195,
      14,    92,   417,    12,   200,   528,   202,    38,    38,    13,
      63,   102,    75,   345,    89,   117,   150,   349,    89,   129,
      27,   112,     5,     6,    14,    14,   222,    90,    78,     8,
     226,    94,    12,   448,    91,    12,    12,    12,   129,    12,
     122,   456,    25,    26,    12,    12,    12,   110,   463,    12,
      37,   383,    13,   468,   469,    89,   150,    14,   390,   474,
      13,     5,   153,   109,     5,   588,   109,    12,   264,   265,
       5,     5,    22,   448,   270,    12,   658,   109,     5,    12,
       5,   456,     5,   149,    34,     5,   109,    37,    38,    39,
      40,    41,    42,    43,   290,   510,    12,     5,     5,     5,
     296,     5,   298,   147,   300,   147,   147,   147,   137,    12,
     109,    13,    12,   119,   529,    98,   448,    14,    13,    13,
      12,    47,   537,     5,   456,    13,   541,    12,     5,    13,
      80,     5,    13,     5,     5,   510,    12,   333,    88,   335,
       5,     5,   338,    93,    12,   164,    13,   562,    74,   345,
      12,   164,    13,   349,   529,    81,   106,    13,    13,    13,
     143,   164,   358,    89,   164,   361,    92,   363,   583,    13,
       5,   367,   368,   138,   166,    27,   102,     5,   161,    13,
     163,   164,    13,     5,   599,   600,   112,     5,    12,     5,
      13,   174,    13,    13,     5,    12,     5,   529,    13,    13,
      12,   133,   149,   129,     5,    13,    13,    13,   583,    13,
      13,     5,   195,    13,    13,    13,   166,   200,    13,   202,
      13,   171,   172,   147,    13,   147,   147,   153,   147,    13,
      13,   130,   121,   164,   164,   164,   164,    16,   121,   222,
     130,     5,     6,   226,   104,   294,   116,   302,   300,   664,
     596,   197,   448,   171,   349,    68,   264,   589,   347,   310,
     456,    25,    26,   180,   204,   217,   390,   463,   377,   212,
     685,   256,   468,   469,   463,   698,   747,   620,   474,   270,
      -1,   264,   265,    -1,    -1,    22,   200,   270,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,    40,    41,    42,    43,   290,    -1,    -1,
     685,    -1,    -1,   296,   510,   298,    -1,   300,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   529,    98,    -1,    -1,    -1,    -1,    -1,
      -1,   537,    -1,    80,    -1,   541,    -1,    -1,    -1,    -1,
     333,    88,   335,    29,    -1,   338,    93,    -1,    -1,    -1,
      -1,    -1,   345,    -1,    -1,    -1,   349,    -1,    -1,   106,
      -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,   361,   143,
     363,    -1,    -1,    -1,   367,   368,    -1,   583,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   161,    -1,   163,
     164,    -1,    -1,   599,   600,    -1,    22,    -1,   145,    -1,
     174,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,   195,    -1,    -1,   171,   172,   200,    -1,   202,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   222,    -1,
      -1,    -1,   226,    -1,    80,   448,    -1,    -1,   664,    -1,
      -1,    -1,    88,   456,    -1,    -1,    -1,    93,    -1,    -1,
     463,    -1,    -1,    -1,   160,   468,   469,    -1,    -1,   685,
     106,   474,   168,    -1,    -1,    -1,   172,    -1,    -1,    -1,
     264,   265,    -1,    -1,    -1,    -1,   270,    -1,    -1,    -1,
     186,    -1,   188,    -1,    -1,   191,    -1,    -1,    -1,    -1,
      -1,   197,    -1,    -1,    -1,    -1,   290,   510,    -1,    -1,
      -1,    -1,   296,    -1,   298,    -1,   300,    -1,    -1,    -1,
      -1,    -1,    -1,   219,    -1,   221,   529,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   537,   171,   172,    -1,   541,    -1,
      -1,    -1,   238,    -1,   240,    -1,    -1,    -1,    -1,   333,
      -1,   335,    -1,    -1,   338,    -1,    -1,    -1,   254,    -1,
      -1,   345,    -1,    -1,    -1,   349,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   358,    -1,    -1,   361,    -1,   363,
     583,    -1,    -1,   367,   368,    -1,    -1,    -1,    -1,    -1,
      -1,   287,    -1,    -1,    -1,    -1,   599,   600,   294,   295,
      -1,    -1,    -1,    -1,    -1,    -1,   302,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   310,   311,    -1,   313,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   322,    -1,    -1,   325,
      -1,    -1,    -1,    -1,   330,    -1,    -1,    -1,    -1,    -1,
      -1,   337,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   664,    -1,    -1,   448,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   456,    -1,    -1,    -1,    -1,    -1,    -1,   463,
      -1,    -1,   685,    -1,   468,   469,    -1,    -1,    -1,    -1,
     474,    -1,    -1,   389,    -1,   391,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   399,   400,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   510,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   529,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   537,    -1,    -1,    -1,   541,    -1,    -1,
      -1,    -1,   458,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     476,    -1,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   583,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   599,   600,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,   527,    -1,    -1,    -1,   531,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    -1,    -1,    24,
     546,   547,    -1,    -1,    29,    -1,    -1,    32,    -1,    34,
      35,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
     664,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,   587,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,   685,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,
     125,    -1,   127,   128,    -1,   130,    -1,   132,   133,   134,
      -1,   657,    -1,   138,    -1,    -1,   141,   142,   143,    -1,
      -1,   146,   147,   148,    -1,   150,    -1,    -1,    -1,    -1,
     155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,
      -1,    -1,    -1,    -1,    -1,    -1,   692,   172,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      15,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    -1,    50,    51,    -1,    53,    -1,
      -1,    56,    -1,    58,    59,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,
     125,    -1,   127,   128,   129,   130,    -1,   132,   133,   134,
      -1,   136,    -1,   138,    -1,    -1,   141,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,    -1,    -1,    -1,    -1,
     155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,
      -1,    -1,   167,    -1,   169,   170,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    48,    -1,    50,    51,    -1,    53,    -1,    -1,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    69,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    92,    -1,    94,    95,    96,
      97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,   106,
     107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,
     127,   128,   129,   130,    -1,   132,   133,   134,   135,   136,
      -1,   138,    -1,    -1,   141,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,    -1,    -1,    -1,    -1,   155,    -1,
     157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,    -1,
      -1,    -1,   169,   170,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    -1,    -1,    15,    -1,    17,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    50,    51,    -1,    53,    -1,    -1,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    -1,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,   120,   121,   122,    -1,   124,   125,    -1,   127,   128,
     129,   130,    -1,   132,   133,   134,    -1,   136,    -1,   138,
      -1,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,    -1,    -1,    -1,    -1,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,
     169,   170,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,    50,
      51,    -1,    53,    -1,    -1,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    69,    -1,
      71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,   106,   107,    -1,   109,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,
     121,   122,    -1,   124,   125,    -1,   127,   128,   129,   130,
      -1,   132,   133,   134,    -1,   136,    -1,   138,    -1,    -1,
     141,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
      -1,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,    -1,   169,   170,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      13,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    48,    -1,    50,    51,    -1,
      53,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,
      -1,   124,   125,    -1,   127,   128,   129,   130,    -1,   132,
     133,   134,   135,   136,    -1,   138,    -1,    -1,   141,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,    -1,    -1,
      -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,
     163,   164,    -1,    -1,    -1,    -1,   169,   170,     3,     4,
       5,     6,     7,     8,    -1,    10,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    -1,    50,    51,    -1,    53,    -1,
      -1,    56,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    92,    -1,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,
     125,    -1,   127,   128,   129,   130,    -1,   132,   133,   134,
      -1,   136,    -1,   138,    -1,    -1,   141,   142,   143,   144,
      -1,   146,   147,   148,    -1,   150,    -1,    -1,    -1,    -1,
     155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,
      -1,    -1,   167,    -1,   169,   170,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    18,    -1,    20,    21,    -1,    -1,    24,    -1,    -1,
      -1,    28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    48,    -1,    50,    51,    -1,    53,    -1,    -1,    56,
      -1,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    71,    72,    -1,    -1,    75,    -1,
      77,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    86,
      -1,    -1,    -1,    90,    91,    92,    -1,    94,    95,    96,
      97,    -1,    99,   100,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,   109,   110,   111,    -1,   113,    -1,    -1,   116,
      -1,    -1,    -1,   120,   121,   122,    -1,   124,   125,    -1,
     127,   128,   129,   130,    -1,   132,   133,   134,   135,   136,
      -1,   138,    -1,    -1,   141,   142,   143,   144,    -1,   146,
     147,   148,    -1,   150,    -1,    -1,    -1,    -1,   155,    -1,
     157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,    -1,
      -1,    -1,   169,   170,     3,     4,     5,     6,     7,     8,
      -1,    10,    -1,    12,    13,    -1,    -1,    -1,    -1,    18,
      -1,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    28,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    -1,    48,
      -1,    50,    51,    -1,    53,    -1,    -1,    56,    -1,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,    -1,    71,    72,    -1,    -1,    75,    -1,    77,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    90,    91,    92,    -1,    94,    95,    96,    97,    -1,
      99,   100,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
     109,   110,   111,    -1,   113,    -1,    -1,   116,    -1,    -1,
      -1,   120,   121,   122,    -1,   124,   125,    -1,   127,   128,
     129,   130,    -1,   132,   133,   134,    -1,   136,    -1,   138,
      -1,    -1,   141,   142,   143,   144,    -1,   146,   147,   148,
      -1,   150,    -1,    -1,    -1,    -1,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    -1,    -1,    -1,    -1,
     169,   170,     3,     4,     5,     6,     7,     8,    -1,    10,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    18,    -1,    20,
      21,    -1,    -1,    24,    -1,    -1,    -1,    28,    29,    -1,
      -1,    32,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    -1,    48,    -1,    50,
      51,    -1,    53,    -1,    -1,    56,    -1,    58,    59,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
      71,    72,    -1,    -1,    75,    -1,    77,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,
      91,    92,    -1,    94,    95,    96,    97,    -1,    99,   100,
      -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,   109,   110,
     111,    -1,   113,    -1,    -1,   116,    -1,    -1,    -1,   120,
     121,   122,    -1,   124,   125,    -1,   127,   128,   129,   130,
      -1,   132,   133,   134,    -1,   136,    -1,   138,    -1,    -1,
     141,   142,   143,   144,    -1,   146,   147,   148,    -1,   150,
      -1,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,
      -1,   162,   163,   164,    -1,    -1,    -1,    -1,   169,   170,
       3,     4,     5,     6,     7,     8,    -1,    10,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    48,    -1,    50,    51,    -1,
      53,    -1,    -1,    56,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    92,
      -1,    94,    95,    96,    97,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,
      -1,   124,   125,    -1,   127,   128,   129,   130,    -1,   132,
     133,   134,    -1,   136,    -1,   138,    -1,    -1,   141,   142,
     143,   144,    -1,   146,   147,   148,    -1,   150,    -1,    -1,
      -1,    -1,   155,     3,   157,   158,    -1,    -1,    -1,   162,
     163,   164,    -1,    -1,    14,    -1,   169,   170,    18,    -1,
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
      -1,    -1,   162,   163,   164,    14,    -1,   167,    -1,    18,
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
      -1,   150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    -1,    18,   167,    20,
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
       3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,
      -1,   162,   163,   164,    -1,    18,   167,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,
      -1,    94,    95,    96,    97,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,
      -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,   132,
     133,   134,    -1,    -1,    -1,   138,    -1,    -1,   141,   142,
     143,    -1,    -1,   146,   147,   148,    -1,   150,     3,    -1,
      -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,
     163,   164,    -1,    18,   167,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,
     125,    -1,   127,   128,    -1,   130,    -1,   132,   133,   134,
      -1,    -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,
      -1,   146,   147,   148,    -1,   150,     3,    -1,    -1,    -1,
     155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,
      -1,    18,   167,    20,    21,    -1,    -1,    24,    -1,    -1,
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
     157,   158,    -1,    -1,    -1,   162,   163,   164,    -1,    18,
     167,    20,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
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
      -1,   150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    -1,    18,   167,    20,
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
       3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,
      -1,   162,   163,   164,    -1,    18,   167,    20,    21,    -1,
      23,    24,    25,    26,    -1,    -1,    29,    30,    31,    32,
      33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    52,
      53,    54,    55,    -1,    -1,    58,    59,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    70,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,
      83,    84,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,
      -1,    94,    95,    96,    97,    -1,    99,   100,   101,    -1,
     103,   104,    -1,    -1,   107,   108,   109,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,
      -1,   124,   125,   126,   127,   128,    -1,   130,    -1,   132,
     133,   134,    -1,    -1,    -1,   138,   139,    -1,   141,   142,
     143,    -1,    -1,   146,   147,   148,    -1,   150,     3,     4,
      -1,    -1,   155,    -1,   157,   158,    -1,    -1,    13,   162,
     163,   164,    -1,    18,    19,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,
     125,    -1,   127,   128,    -1,   130,    -1,   132,   133,   134,
      -1,    -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,
      -1,   146,   147,   148,    -1,   150,     3,    -1,    -1,    -1,
     155,    -1,   157,   158,    -1,    12,    -1,   162,   163,   164,
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
     127,   128,    -1,   130,    -1,   132,   133,   134,   135,    -1,
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
      -1,   130,    -1,   132,   133,   134,   135,    -1,    -1,   138,
      -1,    -1,   141,   142,   143,    -1,    -1,   146,   147,   148,
      -1,   150,     3,     4,    -1,    -1,   155,    -1,   157,   158,
      -1,    -1,    -1,   162,   163,   164,    -1,    18,    19,    20,
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
     150,     3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,
      12,    -1,   162,   163,   164,    -1,    18,    -1,    20,    21,
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
       4,    -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,
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
       3,   155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,
     164,    14,    -1,    -1,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,
      -1,    94,    95,    96,    97,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,
      -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,   132,
     133,   134,    -1,    -1,    -1,   138,    -1,    -1,   141,   142,
     143,    -1,    -1,   146,   147,   148,    -1,   150,    -1,    -1,
      -1,     3,   155,    -1,   157,   158,    -1,    -1,    -1,   162,
     163,   164,    14,    -1,    -1,    -1,    18,    -1,    20,    21,
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
     142,   143,    -1,    -1,   146,   147,   148,    -1,   150,    -1,
      -1,    -1,     3,   155,    -1,   157,   158,    -1,    -1,    -1,
     162,   163,   164,    14,    -1,    -1,    -1,    18,    -1,    20,
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
       3,    -1,    -1,    -1,   155,    -1,   157,   158,    -1,    12,
      -1,   162,   163,   164,    -1,    18,    -1,    20,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,    71,    72,
      -1,    -1,    75,    -1,    77,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    -1,    -1,    -1,    90,    91,    -1,
      -1,    94,    95,    96,    97,    -1,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   107,    -1,   109,   110,   111,    -1,
     113,    -1,    -1,   116,    -1,    -1,    -1,   120,   121,   122,
      -1,   124,   125,    -1,   127,   128,    -1,   130,    -1,   132,
     133,   134,    -1,    -1,    -1,   138,    -1,    -1,   141,   142,
     143,    -1,    -1,   146,   147,   148,    -1,   150,     3,    -1,
      -1,    -1,   155,    -1,   157,   158,    -1,    -1,    -1,   162,
     163,   164,    -1,    18,    -1,    20,    21,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    -1,    48,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    71,    72,    -1,    -1,
      75,    -1,    77,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    90,    91,    -1,    -1,    94,
      95,    96,    97,    -1,    99,   100,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,   109,   110,   111,    -1,   113,    -1,
      -1,   116,    -1,    -1,    -1,   120,   121,   122,    -1,   124,
     125,    -1,   127,   128,    -1,   130,    -1,   132,   133,   134,
      -1,    -1,    -1,   138,    -1,    -1,   141,   142,   143,    -1,
      -1,   146,   147,   148,    -1,   150,     3,    -1,    -1,    -1,
     155,    -1,   157,   158,    -1,    -1,    -1,   162,   163,   164,
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
     147,   148,    -1,   150,    -1,    -1,    -1,    -1,   155,    -1,
     157,   158,    -1,    -1,    -1,   162,   163,   164
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    12,    57,    82,   135,   152,   161,   176,   177,   178,
     179,   180,   181,   184,   185,   188,   189,   190,   191,   192,
     193,   194,   206,   190,   193,    73,    87,    15,    60,   212,
       3,    18,    20,    21,    24,    29,    32,    35,    36,    44,
      45,    46,    48,    53,    58,    59,    68,    71,    72,    75,
      77,    79,    86,    90,    91,    94,    95,    96,    97,    99,
     100,   107,   109,   110,   111,   113,   116,   120,   121,   122,
     124,   125,   127,   128,   130,   132,   133,   134,   138,   141,
     142,   143,   146,   147,   148,   150,   155,   157,   158,   162,
     163,   164,   221,   253,   255,   283,   301,   302,   127,   207,
     208,   301,     0,    64,   165,   115,   200,   201,    67,   151,
      85,   190,    13,    13,   221,   221,     4,     5,     6,     7,
       8,    10,    12,    28,    29,    35,    44,    50,    51,    56,
      92,   107,   129,   136,   144,   167,   169,   170,   193,   213,
     214,   220,   221,   231,   232,   233,   234,   235,   236,   245,
     246,   251,   252,   253,   254,   255,   271,   272,   283,   301,
     137,    14,   207,   166,    12,   209,   210,   177,    27,   212,
     212,   212,   160,   195,    12,    56,   154,   182,   183,   188,
     210,   193,   231,   237,   231,   247,    12,    12,    12,    12,
      12,    12,    12,   235,   235,    73,   196,   166,    12,     4,
      19,    34,    37,   172,   241,   297,   298,   299,   300,   301,
     169,   170,   243,    98,   167,   173,   174,   244,   168,    12,
      12,    12,    14,   186,   187,   231,    14,   301,   207,   211,
     301,    19,   202,   203,   231,   191,   191,   192,    12,    69,
     106,   225,   226,   227,   228,   229,   230,   231,   154,   237,
     183,   188,   166,    13,   159,   248,   249,   231,   237,   231,
       5,    13,   231,    13,    12,   193,   215,   216,   217,   218,
     221,   222,   195,   213,    13,   237,   299,   221,   172,   232,
     233,   234,   235,    15,    60,   167,   231,   295,    13,   231,
      14,   167,   301,   195,   166,    38,    14,   301,    14,    13,
     166,   193,   166,    20,    59,   204,   225,   231,   193,   227,
     114,    16,    88,    22,    38,    39,    40,    41,    42,    43,
      80,    88,    93,   106,   171,   240,   242,   237,   225,   231,
      62,   250,   248,    19,    13,   153,    13,   166,   193,   216,
     222,   298,    47,    74,    81,    89,    92,   102,   129,   166,
     223,   297,    76,   197,    13,    13,    13,   231,   118,   256,
      13,    14,   301,    14,   186,   231,   301,    14,    14,   301,
     211,   202,    13,   226,   227,     6,     9,   106,   239,   231,
      38,    38,    40,    12,   193,   238,     8,   106,   231,    22,
      80,    93,    38,    15,    17,   140,   231,   296,   193,   145,
     145,   231,    63,    23,    24,    25,    26,    30,    31,    33,
      52,    54,    55,    61,    70,    83,    84,    86,   101,   103,
     104,   108,   126,   128,   139,   147,   148,   155,   221,   273,
     274,   275,   276,   277,   278,   284,   285,   286,   287,   288,
     289,   290,   291,   221,   231,    13,   210,   219,    89,   117,
     224,   216,   224,   223,   224,   215,    89,    27,    78,   205,
     256,   256,    13,    12,   257,   258,   301,   301,    14,    14,
     167,   301,   301,   301,    14,   239,    16,   237,     8,    65,
     231,   238,   231,   231,   231,    91,    12,    12,    91,   156,
      12,    91,   156,    12,    12,    12,   122,    12,   134,   279,
     280,   282,   283,    30,    31,    12,    91,   156,    12,    12,
      12,    12,   161,   162,    12,   161,   162,    12,    13,    18,
     100,    31,   300,   300,    13,    13,   217,   112,   153,    89,
     216,   212,   225,   256,   258,   259,   260,    14,   167,   301,
     301,    14,   301,   231,    13,   231,    16,    65,   109,     5,
       5,   109,    12,     5,   109,    12,     5,   292,     5,     5,
       5,    12,   149,    12,    12,   156,    12,    91,   156,     5,
     109,    12,   292,     5,   221,     5,   147,   147,     5,   147,
     147,     5,    12,   137,   225,   210,   217,   112,   153,    12,
      77,   198,   199,   231,    13,   119,   261,   167,   301,    14,
      14,   167,   301,   231,   231,    12,    13,    13,    12,     5,
      13,    12,     5,    32,    36,    75,    90,    94,   110,   293,
     294,    13,    13,   166,    13,   166,    13,     5,   134,   281,
     283,     5,     5,    12,     5,   109,    12,    13,    12,     5,
      13,    13,   166,    13,    13,   164,   164,    13,   164,   164,
      13,     5,   221,   225,   210,    13,   138,   166,    27,   200,
     167,   301,   167,   301,    14,     5,   292,    13,   292,    13,
     293,     5,     5,    13,   166,    12,    13,    13,     5,    13,
      12,     5,   292,    13,     5,   133,   161,   162,   161,   162,
      13,   300,    12,   198,   237,   123,   131,   262,   263,   167,
     301,    13,    13,    13,    13,    13,     5,     5,    13,   292,
      13,    13,    13,   221,   147,   147,   147,   147,   198,    22,
      49,   150,   245,   264,   265,   266,   267,    13,    13,    13,
     164,   164,   164,   164,    13,   150,   245,   265,   268,   269,
     130,   121,   121,    68,   270,    71,    71,    16,    49,    76,
     105,   146,   268,   130,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   175,   176,   177,   177,   178,   178,   178,   179,   180,
     180,   180,   181,   182,   182,   182,   182,   182,   183,   184,
     185,   186,   186,   187,   188,   189,   189,   190,   190,   190,
     191,   191,   192,   192,   193,   193,   194,   195,   195,   196,
     197,   197,   198,   198,   199,   199,   199,   200,   200,   201,
     202,   202,   203,   204,   204,   204,   205,   205,   206,   206,
     207,   207,   208,   209,   209,   210,   211,   211,   212,   212,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   219,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   221,   221,   221,   221,   221,   221,   221,   221,
     222,   222,   222,   222,   222,   222,   223,   223,   223,   223,
     224,   224,   225,   225,   226,   226,   227,   227,   228,   228,
     228,   229,   229,   230,   230,   230,   230,   230,   230,   230,
     230,   230,   230,   230,   230,   230,   231,   231,   231,   232,
     232,   233,   233,   234,   234,   235,   235,   235,   236,   236,
     236,   236,   236,   236,   237,   237,   238,   238,   239,   239,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     241,   241,   242,   243,   243,   244,   244,   244,   244,   245,
     245,   245,   245,   245,   245,   245,   246,   247,   247,   248,
     248,   249,   249,   250,   250,   251,   251,   251,   251,   252,
     252,   252,   252,   252,   252,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   254,   255,   255,   255,   255,
     255,   256,   256,   257,   258,   259,   260,   260,   261,   261,
     262,   262,   263,   263,   264,   264,   265,   265,   265,   266,
     267,   268,   268,   268,   269,   270,   270,   270,   270,   270,
     271,   271,   272,   272,   272,   272,   272,   272,   272,   272,
     272,   272,   272,   272,   273,   273,   273,   273,   274,   275,
     276,   276,   276,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   278,   279,   279,   280,   280,   281,
     281,   281,   282,   282,   282,   282,   282,   283,   283,   283,
     283,   283,   284,   285,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   286,   286,   287,   287,   287,   287,
     287,   287,   287,   287,   287,   287,   287,   287,   287,   288,
     288,   288,   288,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   290,   290,   290,   290,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   292,   292,   292,   292,   293,
     293,   293,   294,   294,   294,   295,   295,   296,   296,   296,
     297,   297,   298,   298,   299,   299,   300,   301,   301,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     2,     2,     4,
       5,     1,     3,     3,     2,     1,     2,     1,     4,     4,
       1,     4,     1,     1,     3,     3,     7,     0,     2,     2,
       0,     4,     1,     3,     2,     1,     5,     0,     1,     3,
       1,     3,     2,     0,     1,     1,     0,     2,     2,     3,
       1,     3,     4,     0,     1,     3,     1,     3,     0,     1,
       1,     1,     3,     2,     1,     1,     3,     1,     1,     1,
       3,     2,     3,     0,     1,     1,     3,     3,     5,     5,
       7,     7,     6,     6,     9,     9,     8,     8,     8,     8,
       7,     7,     1,     3,     5,     4,     7,     6,     6,     5,
       6,     5,     6,     5,     4,     5,     2,     2,     2,     1,
       0,     1,     1,     3,     1,     3,     1,     2,     1,     3,
       4,     1,     3,     3,     3,     5,     6,     3,     5,     4,
       6,     3,     4,     3,     4,     2,     1,     2,     3,     1,
       3,     1,     3,     1,     3,     1,     2,     2,     1,     1,
       3,     1,     1,     1,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     0,     1,     1,
       2,     4,     4,     0,     2,     1,     1,     1,     1,     5,
       4,     6,     5,     5,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     1,
       1,     2,     2,     3,     1,     4,     0,     1,     0,     3,
       0,     3,     1,     1,     1,     1,     2,     2,     1,     2,
       4,     1,     2,     1,     2,     0,     3,     2,     2,     3,
       3,     4,     4,     3,     3,     6,     6,     4,     1,     4,
       1,     6,     1,     1,     1,     1,     1,     1,     1,     6,
       5,     2,     2,     5,     4,     2,     1,     2,     1,     1,
       1,     1,     1,     1,     2,     3,     1,     4,     1,     1,
       4,     1,     4,     1,     6,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     7,     4,     4,     4,     7,
       7,     4,     4,     4,     1,     1,     6,     4,     6,     4,
       6,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       2,     1,     1,     4,     4,     5,     5,     4,     6,     3,
       6,     3,     4,     1,     1,     1,     6,     3,     4,     1,
       5,     2,     5,     2,     4,     6,     6,     5,     7,     4,
       6,     3,     4,     1,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 2999 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3011 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3017 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3023 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3035 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3041 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* sql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3047 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* stmt_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3053 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3059 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* dql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3065 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* dml_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3071 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* insert_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3077 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* insert_columns_and_source  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3083 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* from_constructor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3089 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* delete_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3095 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* update_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3101 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* update_elem_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3107 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* update_elem  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3119 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* query_expression  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3125 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* query_expression_body  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3131 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* query_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3137 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* query_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3143 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* select_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3149 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* simple_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3155 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* opt_where  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3161 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* opt_from_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3167 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_groupby  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3173 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* grouping_element_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* grouping_element  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3185 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3191 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3197 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* sort_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3203 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* sort_key  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3209 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* opt_asc_desc  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* opt_having  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3221 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* with_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3227 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* with_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* common_table_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3239 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_derived_column_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3245 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3251 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* simple_ident_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3257 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_distinct  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3263 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* select_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3269 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* projection  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3275 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* from_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3281 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* table_reference  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3287 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* table_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* table_primary_non_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3299 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3305 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* column_ref  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3311 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* relation_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3317 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* joined_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3323 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* join_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3329 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* search_condition  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3335 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* boolean_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3341 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* boolean_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3347 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* boolean_test  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3353 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* boolean_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3359 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3365 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* row_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3371 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* factor0  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3377 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* factor1  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* factor2  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3389 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* factor3  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3395 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* factor4  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3401 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* row_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3407 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* in_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3413 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* truth_value  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3419 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* expr_const  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3425 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* case_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3431 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* case_arg  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3437 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* when_clause_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3443 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* when_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3449 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* case_default  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3455 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* func_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3461 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* aggregate_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3467 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* aggregate_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3473 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* ranking_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3479 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* ranking_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3485 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* over_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3491 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* window_specification  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3497 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* window_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3503 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* window_specification_details  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3509 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* opt_existing_window_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3515 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* opt_window_partition_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3521 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* opt_window_frame_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3527 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* window_frame_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3533 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* window_frame_extent  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3539 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 265: /* window_frame_start  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3545 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* window_frame_preceding  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3551 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* window_frame_between  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3557 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* window_frame_bound  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* window_frame_following  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3569 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* opt_window_frame_exclusion  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 271: /* scalar_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* function_call_keyword  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* data_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* user_defined_type_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* reference_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* collection_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* predefined_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3617 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 278: /* interval_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3623 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 279: /* interval_qualifier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3629 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 280: /* start_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3635 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 281: /* end_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3641 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 282: /* single_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3647 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 283: /* non_second_primary_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3653 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 284: /* boolean_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3659 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 285: /* datetime_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3665 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 286: /* numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3671 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 287: /* exact_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3677 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 288: /* approximate_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3683 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 289: /* character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3689 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 290: /* binary_large_object_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3695 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 291: /* national_character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3701 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 292: /* large_object_length  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3707 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 293: /* char_length_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3713 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 294: /* multiplier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3719 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 295: /* distinct_or_all  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3725 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 297: /* opt_as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3731 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 298: /* as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3737 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 299: /* label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3743 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 300: /* collate_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3749 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 301: /* name_r  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3755 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 302: /* reserved  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3761 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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

#line 3878 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 4072 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 237 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 4081 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 244 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4087 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 261 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 4096 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 269 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4105 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 274 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4114 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 279 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4123 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 284 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4132 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 289 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 4142 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 298 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 4151 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 4168 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 4186 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 342 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4195 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 350 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4204 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 359 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_DIRECT_SELECT_ORDER, (yyvsp[0].node));
}
#line 4213 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 367 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 4222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 372 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 4231 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 4261 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 4291 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 4321 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 470 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4330 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 475 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4339 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 483 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4368 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 510 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4374 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 512 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 521 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4392 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4398 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 530 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4407 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 539 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4416 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 546 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"()"); }
#line 4422 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 549 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING SETS");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 4433 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 558 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4439 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 564 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4448 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 573 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4457 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 581 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4466 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 589 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4474 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 593 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4482 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 597 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4490 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 603 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4496 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 605 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4505 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 615 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4514 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 620 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 4523 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 629 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4532 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 638 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4541 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 645 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 651 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4556 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 660 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4565 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 667 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4571 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 669 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4579 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 673 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 681 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4596 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 689 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4614 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 703 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4624 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 713 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 727 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4642 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 739 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 744 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4660 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 751 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4666 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 758 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4676 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 764 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4686 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 770 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4697 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 777 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4707 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 783 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4718 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 790 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4728 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 796 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4739 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 803 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4749 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 809 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4760 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 816 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4770 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 822 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4781 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 829 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4791 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 835 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4802 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 842 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4812 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 848 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4823 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 855 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4833 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 861 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4844 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 872 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4853 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 877 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4862 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 882 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4871 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 887 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4880 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 892 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4889 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 897 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4898 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 902 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4907 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 907 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4916 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 915 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4925 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 920 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4935 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 926 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4944 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 931 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4954 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 937 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4964 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 943 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4974 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 952 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4989 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 963 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5004 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 974 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5019 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 985 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 5027 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 991 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 5033 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 992 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 5039 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 999 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_OR);
}
#line 5048 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1008 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_AND);
}
#line 5057 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1017 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT);
}
#line 5066 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1026 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 5075 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1031 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 5084 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1040 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5093 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1048 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5102 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1053 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5111 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1058 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_BTW);
}
#line 5120 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1063 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_BTW);
}
#line 5129 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1068 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 5138 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 1073 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 5147 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1078 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 5156 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1083 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 5165 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 1088 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IN);
}
#line 5174 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1093 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_IN);
}
#line 5183 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1098 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 5192 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1103 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 5201 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1108 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_EXISTS);
}
#line 5210 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1118 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 5219 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1123 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5228 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1132 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5237 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 5246 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1150 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POW);
}
#line 5255 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1159 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POS);
}
#line 5264 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NEG);
}
#line 5273 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1174 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5282 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1187 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 5291 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1196 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5300 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1206 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 5306 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1207 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LT; }
#line 5312 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1208 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5318 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1209 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GT; }
#line 5324 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1210 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_EQ; }
#line 5330 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1211 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5336 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1212 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 5342 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1213 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 5348 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1214 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5354 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1215 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 5360 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1219 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_CNN; }
#line 5366 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1220 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_CNN; }
#line 5372 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1226 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.nodetype) = Node::comp_all_some_any_op_form((yyvsp[-1].nodetype), (yyvsp[0].ival));
}
#line 5380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1232 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_ADD; }
#line 5386 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1233 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MINUS; }
#line 5392 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 1237 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MUL; }
#line 5398 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1238 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_DIV; }
#line 5404 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1239 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_REM; }
#line 5410 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1240 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MOD; }
#line 5416 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1250 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5422 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1256 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_CASE);
}
#line 5431 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1263 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5437 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1270 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5446 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1278 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5455 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5464 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1290 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5470 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1292 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5479 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1309 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5489 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1315 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5499 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1321 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5509 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1327 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5519 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1333 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5535 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1345 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5551 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1359 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5557 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1360 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1361 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5569 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1362 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1363 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1364 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1365 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1366 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1367 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1368 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1373 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5621 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1381 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5627 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1382 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1383 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PERCENT_RANK"); }
#line 5639 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1384 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CUME_DIST"); }
#line 5645 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1385 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5651 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1390 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OVER "+ (yyvsp[0].node)->text()); delete((yyvsp[0].node)); }
#line 5657 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1392 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5663 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1397 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[-1].node); }
#line 5669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1406 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5678 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1413 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5684 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1418 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5690 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1420 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 5696 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1424 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5702 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1426 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    std::string s3 = (yyvsp[0].node) ? (yyvsp[0].node)->text() : "";
    (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+s3);
    delete((yyvsp[-2].node)); delete((yyvsp[-1].node)); delete((yyvsp[0].node));
}
#line 5712 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1434 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"ROWS"); }
#line 5718 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1435 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"RANGE"); }
#line 5724 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1444 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"UNBOUNDED PRECEDING"); }
#line 5730 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1445 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"CURRENT ROW"); }
#line 5736 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1450 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1455 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-2].node)->text()+" AND "+(yyvsp[0].node)->text()); delete((yyvsp[-2].node)); delete((yyvsp[0].node)); }
#line 5748 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1460 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"UNBOUNDED FOLLOWING"); }
#line 5754 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1465 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5760 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1469 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5766 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1470 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE CURRENT ROW"); }
#line 5772 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1471 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE GROUP"); }
#line 5778 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1472 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE TIES"); }
#line 5784 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1473 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER,"EXCLUDE NO OTHERS"); }
#line 5790 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1478 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5800 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1484 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5810 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1496 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5820 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1502 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1509 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5842 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1516 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5853 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1523 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 5866 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1532 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1539 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5888 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1546 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5899 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1553 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5910 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1560 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5923 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1569 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5934 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1576 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5945 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1596 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5954 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1604 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5963 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1612 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5973 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1618 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5982 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1623 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5991 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 283:
#line 1631 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6000 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1636 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 6009 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 285:
#line 1641 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6018 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1647 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6027 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1661 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6036 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1669 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 6045 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1678 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6054 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1688 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6063 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1693 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 6071 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1700 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1706 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6089 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1711 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1716 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 6106 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1723 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 6114 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1727 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 6122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1731 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 6130 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1735 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 6138 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1739 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 6146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1746 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 6154 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1753 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 6162 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1757 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6171 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1762 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6180 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1767 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6189 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1772 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 6197 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1776 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 6205 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1780 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6214 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1785 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6223 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1790 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6232 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1795 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 6240 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1799 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 6248 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1811 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6257 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1816 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1821 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6275 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1826 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1831 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1836 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1841 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6310 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1845 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6318 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1849 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1853 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6334 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1857 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6342 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1861 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 6350 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1865 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6358 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1872 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6367 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1877 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6375 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1881 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1885 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6391 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1892 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6400 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1897 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6409 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1902 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6418 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1907 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6427 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1912 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6436 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1917 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6445 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1922 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6453 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1926 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6462 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1931 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6470 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1935 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6479 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1940 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6487 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1944 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6495 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1948 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6503 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1955 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6512 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1960 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6520 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1964 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6529 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1969 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6537 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1976 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6546 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1981 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6554 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1985 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 1990 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6571 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 1994 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6580 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 1999 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6589 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2004 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6598 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2009 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6607 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2014 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6616 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2019 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6624 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2023 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6633 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2028 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6641 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2032 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6650 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2037 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6658 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2041 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6666 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2048 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6675 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2053 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6684 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2058 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6693 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2063 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6702 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2071 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6710 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2075 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6718 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2079 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6726 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2086 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6734 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2090 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2094 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6750 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2101 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6758 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2105 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6766 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2111 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6772 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2112 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6778 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 389:
#line 2113 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6784 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 390:
#line 2117 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6790 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2122 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 6796 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 396:
#line 2134 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6805 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2151 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 6811 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2152 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 6817 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 6823 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2154 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 6829 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2155 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 6835 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2156 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 6841 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2157 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 6847 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2158 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 6853 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2159 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 6859 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2160 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 6865 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2161 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 6871 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 6877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2163 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 6883 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 6889 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2165 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 6895 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2166 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 6901 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2167 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 6907 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2168 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 6913 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2169 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 6919 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2170 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 6925 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2171 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 6931 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2172 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 6937 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2173 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 6943 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2174 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 6949 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2175 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 6955 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2176 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 6961 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2177 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 6967 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2178 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
#line 6973 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2179 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
#line 6979 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 431:
#line 2180 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
#line 6985 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 432:
#line 2181 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIMESTAMP"); }
#line 6991 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 433:
#line 2182 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIME");  }
#line 6997 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 434:
#line 2183 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DESC"); }
#line 7003 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 435:
#line 2184 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "TIES"); }
#line 7009 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 436:
#line 2185 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SETS"); }
#line 7015 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 437:
#line 2186 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OTHERS"); }
#line 7021 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 438:
#line 2187 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "EXCLUDE"); }
#line 7027 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 439:
#line 2188 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ASC"); }
#line 7033 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 440:
#line 2189 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE"); }
#line 7039 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 441:
#line 2190 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT"); }
#line 7045 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 442:
#line 2191 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF"); }
#line 7051 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 7055 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2194 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
