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
    SQL2003_CURRENT = 300,
    SQL2003_CURRENT_TIMESTAMP = 301,
    SQL2003_CURRENT_USER = 302,
    SQL2003_DATE = 303,
    SQL2003_DAY = 304,
    SQL2003_DEC = 305,
    SQL2003_DECIMAL = 306,
    SQL2003_DEFAULT = 307,
    SQL2003_DELETE = 308,
    SQL2003_DENSE_RANK = 309,
    SQL2003_DESC = 310,
    SQL2003_DISTINCT = 311,
    SQL2003_DOUBLE = 312,
    SQL2003_ELSE = 313,
    SQL2003_END = 314,
    SQL2003_END_P = 315,
    SQL2003_ERROR = 316,
    SQL2003_EXCEPT = 317,
    SQL2003_EXISTS = 318,
    SQL2003_FLOAT = 319,
    SQL2003_FOLLOWING = 320,
    SQL2003_FOR = 321,
    SQL2003_FROM = 322,
    SQL2003_FULL = 323,
    SQL2003_G = 324,
    SQL2003_GROUP = 325,
    SQL2003_GROUPING = 326,
    SQL2003_HAVING = 327,
    SQL2003_HOUR = 328,
    SQL2003_IN = 329,
    SQL2003_INNER = 330,
    SQL2003_INSERT = 331,
    SQL2003_INT = 332,
    SQL2003_INTEGER = 333,
    SQL2003_INTERSECT = 334,
    SQL2003_INTERVAL = 335,
    SQL2003_INTO = 336,
    SQL2003_IS = 337,
    SQL2003_JOIN = 338,
    SQL2003_K = 339,
    SQL2003_LARGE = 340,
    SQL2003_LEFT = 341,
    SQL2003_LIKE = 342,
    SQL2003_M = 343,
    SQL2003_MAX = 344,
    SQL2003_MIN = 345,
    SQL2003_MINUTE = 346,
    SQL2003_MOD = 347,
    SQL2003_MONTH = 348,
    SQL2003_MULTISET = 349,
    SQL2003_NATIONAL = 350,
    SQL2003_NATURAL = 351,
    SQL2003_NCHAR = 352,
    SQL2003_NCLOB = 353,
    SQL2003_NOT = 354,
    SQL2003_NULLIF = 355,
    SQL2003_NUMERIC = 356,
    SQL2003_OBJECT = 357,
    SQL2003_OCTETS = 358,
    SQL2003_OF = 359,
    SQL2003_ON = 360,
    SQL2003_ONLY = 361,
    SQL2003_OR = 362,
    SQL2003_ORDER = 363,
    SQL2003_OUTER = 364,
    SQL2003_OVER = 365,
    SQL2003_PARTITION = 366,
    SQL2003_PRECEDING = 367,
    SQL2003_PRECISION = 368,
    SQL2003_RANGE = 369,
    SQL2003_RANK = 370,
    SQL2003_READ = 371,
    SQL2003_REAL = 372,
    SQL2003_RECURSIVE = 373,
    SQL2003_REF = 374,
    SQL2003_RIGHT = 375,
    SQL2003_ROW = 376,
    SQL2003_ROWS = 377,
    SQL2003_ROW_NUMBER = 378,
    SQL2003_SCOPE = 379,
    SQL2003_SECOND = 380,
    SQL2003_SELECT = 381,
    SQL2003_SESSION_USER = 382,
    SQL2003_SET = 383,
    SQL2003_SMALLINT = 384,
    SQL2003_SOME = 385,
    SQL2003_STDDEV_POP = 386,
    SQL2003_STDDEV_SAMP = 387,
    SQL2003_SUM = 388,
    SQL2003_SYSTEM_USER = 389,
    SQL2003_THEN = 390,
    SQL2003_TIME = 391,
    SQL2003_TIMESTAMP = 392,
    SQL2003_TO = 393,
    SQL2003_UNBOUNDED = 394,
    SQL2003_UNION = 395,
    SQL2003_UPDATE = 396,
    SQL2003_USING = 397,
    SQL2003_VALUES = 398,
    SQL2003_VARCHAR = 399,
    SQL2003_VARYING = 400,
    SQL2003_VAR_POP = 401,
    SQL2003_VAR_SAMP = 402,
    SQL2003_WHEN = 403,
    SQL2003_WHERE = 404,
    SQL2003_WITH = 405,
    SQL2003_WITHOUT = 406,
    SQL2003_YEAR = 407,
    SQL2003_ZONE = 408
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

#line 326 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
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

#line 356 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  91
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5342

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  113
/* YYNRULES -- Number of rules.  */
#define YYNRULES  430
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  763

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   408

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,   164,     2,     2,
      12,    13,   159,   161,   158,   162,    14,   163,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   157,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,   160,     2,     2,     2,     2,     2,
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
     148,   149,   150,   151,   152,   153,   154,   155,   156
};

#if SQL2003_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   218,   218,   228,   229,   237,   238,   239,   243,   247,
     248,   249,   253,   261,   266,   271,   276,   281,   290,   299,
     316,   333,   334,   342,   351,   359,   364,   371,   372,   398,
     427,   428,   457,   458,   466,   474,   502,   503,   512,   526,
     527,   535,   536,   540,   548,   549,   557,   566,   569,   573,
     580,   581,   591,   596,   604,   605,   614,   622,   623,   627,
     635,   636,   644,   645,   649,   656,   657,   665,   679,   688,
     689,   697,   698,   702,   703,   715,   720,   728,   729,   734,
     740,   746,   753,   759,   766,   772,   779,   785,   792,   798,
     805,   811,   818,   824,   831,   837,   848,   853,   858,   863,
     868,   873,   878,   883,   891,   896,   902,   907,   913,   919,
     928,   939,   950,   961,   968,   969,   974,   975,   983,   984,
     992,   993,  1001,  1002,  1007,  1015,  1016,  1024,  1029,  1034,
    1039,  1044,  1049,  1054,  1059,  1064,  1069,  1074,  1083,  1084,
    1089,  1097,  1098,  1106,  1107,  1115,  1116,  1124,  1125,  1130,
    1138,  1139,  1140,  1145,  1146,  1147,  1151,  1152,  1160,  1161,
    1168,  1168,  1172,  1173,  1174,  1175,  1176,  1177,  1181,  1188,
    1189,  1193,  1194,  1195,  1196,  1200,  1201,  1202,  1203,  1204,
    1205,  1206,  1211,  1219,  1220,  1224,  1225,  1233,  1238,  1246,
    1247,  1256,  1257,  1258,  1259,  1264,  1270,  1276,  1282,  1288,
    1300,  1315,  1316,  1317,  1318,  1319,  1320,  1321,  1322,  1323,
    1324,  1328,  1337,  1338,  1339,  1343,  1349,  1361,  1367,  1374,
    1381,  1388,  1397,  1404,  1411,  1418,  1425,  1434,  1441,  1451,
    1456,  1461,  1466,  1471,  1476,  1481,  1486,  1494,  1500,  1509,
    1511,  1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,
    1531,  1533,  1535,  1537,  1539,  1541,  1543,  1545,  1547,  1549,
    1551,  1553,  1555,  1557,  1559,  1561,  1563,  1568,  1569,  1570,
    1571,  1575,  1583,  1591,  1597,  1602,  1610,  1615,  1620,  1625,
    1626,  1631,  1632,  1633,  1634,  1635,  1636,  1640,  1648,  1653,
    1657,  1662,  1666,  1667,  1672,  1679,  1684,  1685,  1690,  1695,
    1702,  1706,  1710,  1714,  1718,  1725,  1732,  1736,  1741,  1746,
    1751,  1755,  1759,  1764,  1769,  1774,  1778,  1782,  1786,  1793,
    1794,  1798,  1803,  1808,  1813,  1818,  1823,  1828,  1832,  1836,
    1840,  1844,  1848,  1852,  1859,  1864,  1868,  1872,  1879,  1884,
    1889,  1894,  1899,  1904,  1909,  1913,  1918,  1922,  1927,  1931,
    1935,  1942,  1947,  1951,  1956,  1963,  1968,  1972,  1977,  1981,
    1986,  1991,  1996,  2001,  2006,  2010,  2015,  2019,  2024,  2028,
    2035,  2040,  2045,  2050,  2058,  2062,  2066,  2073,  2077,  2081,
    2088,  2092,  2099,  2100,  2101,  2105,  2106,  2110,  2111,  2115,
    2116,  2121,  2131,  2132,  2136,  2137,  2138,  2139,  2140,  2141,
    2142,  2143,  2144,  2145,  2146,  2147,  2148,  2149,  2150,  2151,
    2152,  2153,  2154,  2155,  2156,  2157,  2158,  2159,  2160,  2161,
    2162,  2163,  2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,
    2172
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
  "COMP_NE", "CONVERT", "CORRESPONDING", "COUNT", "CROSS", "CURRENT",
  "CURRENT_TIMESTAMP", "CURRENT_USER", "DATE", "DAY", "DEC", "DECIMAL",
  "DEFAULT", "DELETE", "DENSE_RANK", "DESC", "DISTINCT", "DOUBLE", "ELSE",
  "END", "END_P", "ERROR", "EXCEPT", "EXISTS", "FLOAT", "FOLLOWING", "FOR",
  "FROM", "FULL", "G", "GROUP", "GROUPING", "HAVING", "HOUR", "IN",
  "INNER", "INSERT", "INT", "INTEGER", "INTERSECT", "INTERVAL", "INTO",
  "IS", "JOIN", "K", "LARGE", "LEFT", "LIKE", "M", "MAX", "MIN", "MINUTE",
  "MOD", "MONTH", "MULTISET", "NATIONAL", "NATURAL", "NCHAR", "NCLOB",
  "NOT", "NULLIF", "NUMERIC", "OBJECT", "OCTETS", "OF", "ON", "ONLY", "OR",
  "ORDER", "OUTER", "OVER", "PARTITION", "PRECEDING", "PRECISION", "RANGE",
  "RANK", "READ", "REAL", "RECURSIVE", "REF", "RIGHT", "ROW", "ROWS",
  "ROW_NUMBER", "SCOPE", "SECOND", "SELECT", "SESSION_USER", "SET",
  "SMALLINT", "SOME", "STDDEV_POP", "STDDEV_SAMP", "SUM", "SYSTEM_USER",
  "THEN", "TIME", "TIMESTAMP", "TO", "UNBOUNDED", "UNION", "UPDATE",
  "USING", "VALUES", "VARCHAR", "VARYING", "VAR_POP", "VAR_SAMP", "WHEN",
  "WHERE", "WITH", "WITHOUT", "YEAR", "ZONE", "';'", "','", "'*'", "'^'",
  "'+'", "'-'", "'/'", "'%'", "$accept", "sql_stmt", "stmt_list", "stmt",
  "dql_stmt", "dml_stmt", "insert_stmt", "insert_columns_and_source",
  "from_constructor", "delete_stmt", "update_stmt", "update_elem_list",
  "update_elem", "select_stmt", "query_expression",
  "query_expression_body", "query_term", "query_primary",
  "select_with_parens", "simple_table", "opt_where", "opt_from_clause",
  "opt_groupby", "opt_order_by", "order_by", "sort_list", "sort_key",
  "opt_asc_desc", "opt_having", "with_clause", "with_list",
  "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_term", "table_factor_non_join",
  "opt_simple_ident_list_with_parens", "column_ref", "relation_factor",
  "joined_table", "join_type", "join_outer", "search_condition",
  "boolean_term", "boolean_factor", "boolean_test", "boolean_primary",
  "predicate", "row_expr", "factor0", "factor1", "factor2", "factor3",
  "factor4", "row_expr_list", "in_expr", "truth_value", "comp_op",
  "comp_all_some_any_op", "plus_minus_op", "star_div_percent_mod_op",
  "expr_const", "case_expr", "case_arg", "when_clause_list", "when_clause",
  "case_default", "func_expr", "aggregate_windowed_function",
  "aggregate_function_name", "ranking_windowed_function",
  "ranking_function_name", "scalar_function", "function_call_keyword",
  "over_clause", "row_or_range_clause", "window_frame_extent", "data_type",
  "user_defined_type_name", "reference_type", "collection_type",
  "predefined_type", "interval_type", "interval_qualifier", "start_field",
  "end_field", "single_datetime_field",
  "non_second_primary_datetime_field", "boolean_type", "datetime_type",
  "numeric_type", "exact_numeric_type", "approximate_numeric_type",
  "character_string_type", "binary_large_object_string_type",
  "national_character_string_type", "large_object_length",
  "char_length_units", "multiplier", "distinct_or_all", "all_some_any",
  "opt_as_label", "as_label", "label", "collate_clause", "name_r",
  "reserved", YY_NULLPTR
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
     402,   403,   404,   405,   406,   407,   408,    59,    44,    42,
      94,    43,    45,    47,    37
};
# endif

#define YYPACT_NINF -504

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-504)))

#define YYTABLE_NINF -292

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,    34,   -14,   -15,    42,  5046,  5186,    96,    82,    69,
    -504,  -504,  -504,  -504,  -504,  -504,   140,   -20,   132,  -504,
    -504,    34,    68,  5046,  5046,  -504,  -504,  1906,  -504,  -504,
    -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,   153,  -504,  -504,  -504,   285,  -504,  5046,  -504,   156,
     306,  -504,  -504,    37,   303,  -504,  -504,    42,    42,    42,
     -20,  -504,   190,    47,  -504,  -504,  -504,  -504,  -504,  -504,
    1586,  2226,   346,   348,   360,   362,  -504,  -504,   365,   387,
     393,  -504,  -504,  -504,  2226,  2226,  -504,   340,   253,  -504,
     406,  3634,   -75,   161,   260,  -504,  -504,  -504,  -504,  -504,
    -504,   410,  -504,   413,  -504,  -504,   414,   193,  2226,  4197,
    -504,  5046,  5046,   408,  -504,  -504,  2226,    34,    34,    34,
    1746,  -504,  3914,   286,  2226,  -504,  -504,  -504,    49,  1586,
     418,    29,   420,    91,   288,  2226,  2226,  2226,   435,   431,
    2226,   434,  -504,  -504,  4337,   190,  1906,  2066,  -504,  4477,
    2226,  5046,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  2226,
    -504,  -504,  -504,  -504,  2226,  2226,  1266,   436,  2226,  2371,
     190,   292,   366,  4620,   438,  -504,   440,   296,   447,  -504,
     302,   270,   132,   132,  -504,  1106,   447,  1746,   351,   446,
    -504,  -504,   378,  -504,   728,  -504,  -504,  -504,  -504,   -20,
    -504,  2226,  -504,  1746,   403,   288,   276,   452,    16,   453,
    -504,    63,  -504,  3774,  4054,  -504,   335,  -504,  -504,  4054,
    -504,   394,  -504,  -504,   455,  -504,   -75,  -504,   161,   260,
    -504,  -504,  -504,   457,   259,  2226,   358,   342,  4763,  -504,
     273,  -504,  2226,  2226,  5046,   459,  4906,  -504,  5046,    30,
    -504,  2226,  -504,  -504,  -504,  1106,    12,   201,  -504,  -504,
    1746,  1746,   125,  2226,  -504,  -504,  -504,  -504,  -504,  -504,
     464,    27,  2226,    61,  1426,   447,  -504,   -32,   353,  2226,
     415,  -504,  3494,  -504,  5046,  -504,  2226,  3774,   425,   465,
     306,   395,   367,  -504,  4337,   367,   188,   367,  4337,   396,
    -504,   456,   405,  -504,   358,   358,   344,   472,  -504,  -504,
    5046,   471,  2514,  -504,    91,  -504,  5046,  5046,   473,  -504,
    -504,  -504,   446,  -504,  -504,  -504,   121,  -504,   216,  1586,
    -504,  -504,  -504,   480,    91,  2226,   464,  2226,  -504,  -504,
    -504,    91,  -504,  -504,  2226,  2226,    91,  -504,  -504,   401,
     478,  -504,    53,    55,   482,  -504,   483,   485,   382,   487,
    -504,  -504,   206,   275,    62,   488,   489,  -504,   490,  -504,
       0,    17,   492,  -504,    94,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -504,  -504,  -504,   178,  -504,   469,   494,   349,
    -504,  -504,  -504,  4337,  -504,  -504,   -61,  -504,   422,  -504,
    -504,  4337,    42,  1746,  -504,  -504,  -504,   358,   108,   495,
    2654,  5046,  -504,   309,  -504,  -504,  5046,  -504,  2226,   502,
    -504,   364,  -504,    91,    91,    91,   412,   514,   516,   417,
     515,   523,   424,   518,   526,   528,   529,  -504,   532,   530,
    -504,   399,  -504,    14,    48,    64,   538,   439,   534,   526,
     542,  5046,   544,   416,   419,   546,   423,   426,   548,  -504,
     545,  -504,   428,  -504,  -504,  -504,  -504,  -504,  1746,   306,
    4337,   -50,  2226,   351,  -504,  -504,   527,    22,    22,   145,
     543,  2794,  -504,   323,   547,  2934,  -504,    91,  -504,  2226,
     551,   553,   554,   552,   563,   556,   559,   567,   225,   560,
       4,     9,   562,   572,   274,   573,   576,   571,   579,   481,
     575,   577,   580,   583,   578,    10,   584,   585,   429,   433,
     586,   437,   445,   591,   600,  5046,   351,  -504,  -504,  1746,
     306,  -504,  2226,   493,    31,   497,   496,  -504,  -504,  -504,
     594,  -504,  -504,  -504,  3074,  3214,  -504,   329,    91,   604,
    -504,  -504,   526,   599,  -504,   526,   603,  -504,  -504,  -504,
    -504,  -504,  -504,  -504,    36,  -504,  -504,   612,  -504,   613,
    -504,    11,   607,  -504,  -504,   609,   610,   619,   614,   616,
     620,  -504,   526,   617,  -504,  -504,   621,   504,    77,  -504,
    -504,   195,  -504,  -504,  -504,   623,   469,   351,  -504,   135,
    -504,   -16,   505,     5,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  3354,   624,   625,  -504,   628,  -504,  -504,   630,   631,
    -504,   627,   629,   507,  -504,   638,  -504,   526,   639,   640,
    -504,   641,  5046,   517,   519,   520,   522,  -504,  -504,  -504,
     184,   642,   646,   650,   655,   656,   657,  -504,  -504,  -504,
    -504,  -504,  -504,  -504,   644,   661,  -504,   663,  -504,  -504,
    -504,  -504,   477,   521,   524,   525,  -504,   665,  -504,    32,
      46,    50,    57,    23,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,    24,   558,   149,   150,   565,   152,   160,   566,
     177,   200,   568,   212,   569,   570,   618,   221,  -504,  -504,
    -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -504
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,    62,     0,     0,     0,     0,     3,
       6,     7,    11,    10,     9,     8,    41,    25,    27,    30,
      32,     0,     0,     0,     0,    63,    64,     0,   392,   400,
     201,   401,   402,   403,   404,   405,   209,   302,   213,   427,
     406,   428,   399,   210,   303,   407,   397,   408,   398,   202,
     203,   304,   301,   409,   410,   411,   429,   412,   413,   414,
     415,   416,   212,   430,   417,   418,   419,   420,   214,   421,
     422,   205,   206,   204,   423,   424,   207,   208,   425,   300,
     426,     0,   394,   395,   396,    96,   393,   417,    52,    54,
      57,     1,     2,     5,     0,    24,    42,    62,    62,    62,
      26,    33,    36,     0,   175,   178,   176,   179,   177,   180,
       0,   183,   402,     0,     0,   223,   225,   181,     0,     0,
       0,   227,   228,    68,     0,     0,   155,     0,    65,   150,
       0,   385,   138,   141,   143,   145,   147,   151,   153,   154,
     194,   394,   193,   395,   192,   191,   396,    79,     0,     0,
      53,     0,     0,     0,    58,     4,     0,     0,     0,     0,
       0,    19,     0,     0,     0,    12,    16,    13,     0,     0,
       0,   156,     0,   184,     0,     0,     0,     0,     0,     0,
       0,     0,   148,   149,     0,    36,     0,     0,   390,     0,
       0,     0,    67,   386,   388,   139,   389,   169,   170,     0,
     174,   171,   172,   173,     0,     0,     0,     0,     0,     0,
      36,    21,     0,     0,    97,    55,     0,    60,     0,    43,
      44,    47,    29,    28,    31,     0,     0,     0,    37,   116,
     118,   120,   122,   125,     0,    17,    18,    15,    14,    25,
      34,     0,   152,     0,   189,   185,     0,     0,     0,     0,
     219,     0,   218,     0,     0,    38,    69,    71,    73,   385,
      72,    39,    66,   215,     0,   387,   140,   391,   142,   144,
     146,   380,   381,     0,     0,     0,     0,     0,     0,    81,
      80,    20,     0,     0,     0,    99,     0,    59,     0,     0,
      56,     0,    48,    49,    46,     0,     0,   156,   137,   121,
       0,     0,     0,     0,   166,   164,   165,   162,   163,   167,
       0,     0,     0,     0,     0,     0,   157,     0,     0,     0,
       0,   186,     0,   222,     0,   224,     0,     0,     0,    72,
      77,     0,   114,   113,     0,   114,     0,   114,     0,     0,
      75,     0,    50,   216,   200,   196,     0,     0,   211,   217,
       0,    99,     0,    22,    23,   103,     0,     0,    98,    61,
      45,   126,   117,   119,   160,   161,     0,   123,     0,     0,
     158,   133,   135,     0,   131,     0,     0,     0,   382,   384,
     383,   127,   168,   128,     0,     0,   190,   182,   331,   401,
     354,   305,   349,   350,   348,   306,   327,   333,     0,   336,
     330,   329,   407,     0,   369,   368,   332,   337,   418,   328,
     318,   317,   424,   271,     0,   268,   269,   270,   267,   286,
     284,   285,   283,   319,   320,   279,   282,   281,     0,     0,
      74,    78,    76,     0,   115,   110,     0,   111,     0,   112,
      70,     0,    62,     0,    35,   199,   195,   198,     0,   103,
       0,     0,    83,    82,   101,   102,     0,   124,     0,     0,
     136,     0,   134,   132,   187,   188,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,     0,   299,
     287,     0,   289,   296,   358,   356,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   220,
     274,   275,     0,   278,   280,   221,   226,   108,     0,     0,
       0,     0,     0,    51,   197,   236,     0,     0,     0,     0,
       0,     0,    87,    86,   102,     0,   100,   129,   159,     0,
     352,     0,     0,   346,     0,     0,   344,     0,   373,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   366,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   105,   107,   109,     0,
       0,    40,     0,     0,     0,     0,     0,   238,   237,   234,
       0,   235,    95,    94,     0,     0,    85,    84,   130,     0,
     353,   339,     0,     0,   338,     0,     0,   374,   375,   379,
     377,   378,   376,   372,   371,   347,   326,     0,   324,     0,
     334,     0,   294,   288,   292,     0,     0,     0,     0,   364,
       0,   359,     0,     0,   367,   322,     0,     0,   309,   310,
     311,   314,   315,   316,   342,     0,   277,   104,   106,     0,
     240,     0,     0,     0,   241,   239,   230,    91,    90,    93,
      92,     0,     0,     0,   341,     0,   340,   370,     0,     0,
     298,     0,     0,   295,   357,     0,   355,     0,     0,     0,
     362,     0,     0,     0,     0,     0,     0,   273,   276,   233,
       0,     0,     0,     0,     0,     0,     0,    89,    88,   351,
     345,   343,   325,   323,     0,     0,   361,     0,   360,   365,
     321,   272,     0,     0,     0,     0,   232,     0,   231,     0,
       0,     0,     0,     0,   297,   293,   363,   307,   308,   312,
     313,   229,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   266,   251,
     256,   261,   246,   263,   248,   253,   258,   243,   264,   249,
     254,   259,   244,   265,   250,   255,   260,   245,   247,   252,
     262,   257,   242
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -504,  -504,   503,  -504,  -504,  -504,  -504,  -504,   533,  -504,
    -504,   409,  -504,   103,    21,    13,   231,   537,  -178,  -504,
    -121,  -504,  -504,  -504,  -445,   402,  -504,  -504,  -504,  -504,
     -33,  -504,  -504,  -101,   421,   -88,   501,  -504,   359,  -223,
    -330,  -504,  -504,  -504,   341,  -212,   370,    80,  -155,   398,
    -184,  -504,  -504,  -504,   688,   510,   508,   498,   -86,  -504,
    -156,   327,   350,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
     463,  -504,  -504,  -504,  -504,    85,  -504,   361,  -504,  -504,
    -312,  -503,   194,  -504,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -504,    -5,  -504,  -504,  -504,  -504,  -504,  -504,
    -504,  -504,  -482,   110,  -504,  -504,  -504,   460,   466,   535,
    -412,   451,  -504
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,   165,   166,    13,
      14,   210,   211,    15,   170,    17,    18,    19,   126,    20,
     161,   185,   342,    95,    96,   219,   220,   294,   444,    21,
      88,    89,   153,   154,   216,    27,   127,   128,   255,   256,
     257,   258,   432,   129,   130,   260,   339,   435,   296,   229,
     230,   231,   232,   233,   171,   132,   133,   134,   135,   136,
     172,   371,   367,   314,   315,   199,   204,   137,   138,   174,
     244,   245,   320,   139,   140,   141,   142,   143,   144,   145,
     348,   520,   577,   414,   415,   416,   417,   418,   419,   480,
     481,   613,   482,   146,   420,   421,   422,   423,   424,   425,
     426,   427,   539,   603,   604,   275,   382,   192,   193,   194,
     195,   147,    86
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      84,    84,   168,   519,   436,   228,   254,   554,   236,   157,
     158,   159,   492,   503,    22,   504,   580,   606,    84,    84,
     247,    16,   608,   625,   660,   361,   545,   573,   734,   495,
     328,   264,   445,   446,   100,   372,   641,   722,   182,   183,
     290,   329,     1,   299,   574,    97,     1,   508,   298,     1,
     190,   725,   682,   191,   150,   728,    23,    25,   569,   162,
     546,     1,   731,   190,   261,   468,   191,   471,   597,    24,
     575,   735,   598,   685,   486,   254,   548,   736,   300,   642,
     723,   101,    84,   375,   509,   316,   197,   198,   317,   281,
      82,    82,   738,     2,   726,   570,    91,   190,   729,   683,
     191,    26,   163,   507,   328,   732,   384,   499,    82,    82,
     653,   511,   500,   655,    16,   329,     3,   363,   215,   270,
     686,   515,   300,    98,    16,   190,    84,   364,   191,   373,
     365,   364,   370,    97,   365,   514,   681,   383,   376,   739,
     669,   469,   602,   472,    84,    92,    84,    84,   679,   254,
     487,   377,   549,   493,   494,  -291,   254,    84,   579,     4,
     254,   324,   607,     4,   576,   737,     4,   609,   626,   661,
     496,   497,    82,   643,   724,    22,     4,   707,     4,    84,
     568,     5,   239,     6,    84,   697,    84,   241,   727,    16,
       6,   501,   730,   164,   680,   164,   547,   706,   370,   733,
       6,   470,     6,   473,    84,   -96,   167,   209,    84,   502,
     488,    98,   550,   459,    99,   191,    82,   741,   743,    94,
     746,   326,   516,   303,   678,   517,    93,   366,   748,   431,
     673,   674,   458,   518,    82,   190,    82,    82,   191,   304,
     305,   306,   307,   308,   309,   751,    94,    82,    84,    84,
     190,    94,   517,   191,    84,   254,   200,   597,    37,   332,
     518,   598,   517,   254,   742,   744,   333,   747,   753,    82,
     518,   238,   345,    84,    82,   749,    82,   335,   310,    84,
     756,    84,    44,    84,   148,   -97,   311,   352,   513,   761,
     292,   312,   752,   190,    82,   322,   191,   599,    82,   149,
      51,   517,    52,   313,   190,   484,   485,   191,   239,   518,
     190,   337,   600,   191,   151,   754,   601,    84,   152,    84,
     201,   -98,    84,   525,   202,   203,    37,   757,   293,    84,
     156,   602,   254,    84,   479,  -101,   762,   584,    82,    82,
     239,  -100,   160,   651,    82,    84,    81,    84,   675,   676,
      44,    84,    84,   566,   512,   349,   571,   447,   175,   241,
     176,    79,   506,    82,   102,   103,    83,    83,    51,    82,
      52,    82,   177,    82,   178,   303,   190,   179,   190,   191,
     529,   191,   331,   190,    83,    83,   191,   190,   222,   223,
     191,   304,   305,   306,   307,   308,   309,   483,   190,   180,
     190,   191,   612,   191,   283,   181,   332,    82,   567,    82,
     184,   186,    82,   333,   637,   437,   639,   439,   187,    82,
     205,   334,   206,    82,   335,   207,   208,   218,    84,    79,
     310,   240,   235,   242,   336,    82,    84,    82,   311,   243,
     249,    82,    82,   312,   250,    84,    84,   252,    83,   276,
     282,    84,   286,   287,   288,   313,    85,    90,   337,   289,
     291,   300,   301,   302,   319,   323,   325,   341,   343,   638,
     344,   347,   331,   356,    85,    85,   369,   387,   430,   434,
     443,   433,   441,   442,   448,   450,    84,   456,   460,   466,
     467,   385,    83,   338,   474,   475,   332,   476,   477,   478,
     489,   490,   491,   333,   498,    84,   191,   505,   510,   521,
      83,   334,    83,    83,   335,   528,    84,   530,    82,   531,
      84,   532,   533,    83,   336,   259,    82,   534,   535,   536,
     537,   538,   267,   540,   541,    82,    82,   542,    90,   614,
     544,    82,   543,   551,   552,    83,   553,   555,   337,   557,
      83,   560,    83,   563,   572,   558,   581,   564,   559,   565,
      84,   585,   561,   589,   592,   562,   590,   591,   593,   594,
      83,   595,   596,   605,    83,   610,    82,   611,   615,    84,
      84,   616,   196,   617,   618,   629,   619,   620,   623,   630,
     621,   624,   622,   632,   259,    82,   155,   627,   628,   631,
     214,   633,    90,   217,   634,   635,    82,   646,   640,   652,
      82,   645,   654,   217,    83,    83,   656,   658,   659,   662,
      83,   644,   663,   664,   665,   668,   671,   666,   667,   684,
     670,   672,   694,   717,   695,    85,   677,   689,   690,    83,
     196,   691,    85,   692,   693,    83,    84,    83,  -290,    83,
      82,   696,   698,   699,   700,   708,   702,   714,   703,   704,
     280,   705,   709,   413,   285,   428,   710,    84,   259,    82,
      82,   711,   712,   713,   715,   259,   716,   718,   721,   259,
     719,   720,   740,    83,   758,    83,   760,   262,    83,   745,
     750,   353,   755,   360,   759,    83,   224,   440,   362,    83,
     266,   237,   269,   462,    85,   196,   438,   268,   321,   359,
     196,    83,   578,    83,   657,   131,   457,    83,    83,   340,
     330,     0,     0,     0,   265,     0,     0,     0,     0,   351,
       0,     0,     0,     0,     0,   355,    82,   358,     0,   217,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     303,     0,     0,     0,     0,     0,     0,    82,     0,     0,
       0,     0,   190,     0,     0,   191,   304,   305,   306,   307,
     308,   309,     0,    85,   259,    85,     0,     0,    85,     0,
       0,     0,   259,     0,     0,    85,     0,     0,     0,    85,
       0,     0,     0,     0,    83,     0,     0,     0,     0,   173,
       0,   449,    83,   453,     0,   310,     0,   454,   455,     0,
       0,    83,    83,   311,     0,     0,     0,    83,   312,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     313,     0,   556,     0,     0,     0,   212,     0,     0,     0,
       0,     0,     0,     0,   221,     0,     0,     0,   234,     0,
       0,   259,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   246,     0,   248,     0,     0,   251,     0,
       0,    83,     0,     0,   131,     0,     0,     0,     0,     0,
       0,     0,    83,     0,    85,     0,    83,     0,     0,     0,
       0,     0,    85,     0,   274,     0,   277,     0,     0,     0,
       0,   523,   524,     0,     0,     0,   636,   526,     0,     0,
       0,     0,     0,   297,     0,   234,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    83,     0,     0,     0,
       0,   318,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    85,     0,     0,    83,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    85,     0,   346,     0,     0,     0,     0,     0,     0,
     212,   354,   583,     0,     0,     0,   587,     0,     0,   221,
       0,     0,     0,   297,     0,     0,     0,     0,   234,   234,
       0,   368,     0,     0,     0,     0,     0,     0,     0,     0,
     374,     0,   381,     0,     0,     0,     0,   386,     0,     0,
       0,     0,    83,   701,   429,     0,    85,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    83,     0,   648,   650,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   461,     0,   463,     0,     0,     0,     0,
       0,     0,   464,   465,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   688,     0,     0,     0,     0,     0,     0,    28,
     104,   105,   106,   107,   108,     0,   109,     0,   295,     0,
       0,     0,     0,    85,    29,     0,     0,    30,     0,     0,
      31,   234,     0,     0,   111,   112,     0,     0,    33,     0,
       0,   113,    34,     0,     0,     0,   527,     0,     0,     0,
     114,    35,    36,     0,     0,   115,   116,     0,    37,     0,
       0,   117,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,   226,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   118,   234,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,   227,   119,
       0,    54,    55,    56,     0,    57,     0,   588,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   120,
      66,    67,    68,    69,    70,     4,   121,     0,     0,     0,
      71,    72,    73,   122,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,     0,    76,    77,   234,     0,     6,
      78,    79,    80,     0,     0,     0,     0,   124,   125,    28,
     104,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,   271,     0,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,   111,   112,     0,     0,    33,     0,
       0,   113,    34,     0,     0,     0,     0,     0,     0,     0,
     114,    35,    36,     0,     0,   115,   116,     0,    37,     0,
       0,   117,     0,    38,     0,   272,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   118,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,   119,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   120,
      66,    67,    68,    69,    70,     0,   121,     0,     0,     0,
      71,    72,    73,   122,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     0,
      78,    79,    80,     0,     0,   273,     0,   124,   125,    28,
     104,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,   378,     0,   379,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,   111,   112,     0,     0,    33,     0,
       0,   113,    34,     0,     0,     0,     0,     0,     0,     0,
     114,    35,    36,     0,     0,   115,   116,     0,    37,     0,
       0,   117,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   118,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,   119,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   120,
      66,    67,    68,    69,    70,     0,   121,     0,     0,   380,
      71,    72,    73,   122,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     0,
      78,    79,    80,     0,     0,     0,     0,   124,   125,    28,
     104,   105,   106,   107,   108,     0,   109,     0,   169,     0,
       0,     0,     0,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,   111,   112,     0,     0,    33,     0,
       0,   113,    34,     0,     0,     0,     0,     0,     0,     0,
     114,    35,    36,     0,     0,   115,   116,     0,    37,     0,
       0,   117,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   118,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,   119,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   120,
      66,    67,    68,    69,    70,     4,   121,     0,     0,     0,
      71,    72,    73,   122,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     6,
      78,    79,    80,     0,     0,     0,     0,   124,   125,    28,
     104,   105,   106,   107,   108,     0,   109,     0,   225,     0,
       0,     0,     0,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,   111,   112,     0,     0,    33,     0,
       0,   113,    34,     0,     0,     0,     0,     0,     0,     0,
     114,    35,    36,     0,     0,   115,   116,     0,    37,     0,
       0,   117,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,   226,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   118,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,   227,   119,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   120,
      66,    67,    68,    69,    70,     0,   121,     0,     0,     0,
      71,    72,    73,   122,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     0,
      78,    79,    80,     0,     0,     0,     0,   124,   125,    28,
     104,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,   111,   112,     0,     0,    33,     0,
       0,   113,    34,     0,     0,     0,     0,     0,     0,     0,
     114,    35,    36,     0,     0,   115,   116,     0,    37,     0,
       0,   117,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   118,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,   119,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   120,
      66,    67,    68,    69,    70,     0,   121,     0,     0,     0,
      71,    72,    73,   122,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     0,
      78,    79,    80,     0,     0,   123,     0,   124,   125,    28,
     104,   105,   106,   107,   108,     0,   109,     0,   110,   263,
       0,     0,     0,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,   111,   112,     0,     0,    33,     0,
       0,   113,    34,     0,     0,     0,     0,     0,     0,     0,
     114,    35,    36,     0,     0,   115,   116,     0,    37,     0,
       0,   117,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   118,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,   119,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   120,
      66,    67,    68,    69,    70,     0,   121,     0,     0,     0,
      71,    72,    73,   122,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     0,
      78,    79,    80,     0,     0,     0,     0,   124,   125,    28,
     104,   105,   106,   107,   108,     0,   109,     0,   110,     0,
       0,     0,     0,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,   111,   112,     0,     0,    33,     0,
       0,   113,    34,     0,     0,     0,     0,     0,     0,     0,
     114,    35,    36,     0,     0,   115,   116,     0,    37,     0,
       0,   117,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,   118,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,   119,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,   120,
      66,    67,    68,    69,    70,     0,   121,     0,     0,     0,
      71,    72,    73,   122,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,    28,    76,    77,     0,     0,     0,
      78,    79,    80,     0,     0,   278,     0,   124,   125,    29,
       0,     0,    30,     0,     0,    31,     0,     0,     0,     0,
      32,     0,     0,    33,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,    39,     0,     0,     0,    40,
      41,     0,     0,    42,     0,    43,     0,    44,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,    46,    47,
       0,     0,    48,    49,    50,    51,     0,    52,    53,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,     0,
      57,     0,     0,     0,     0,    58,    59,    60,    61,    62,
      63,     0,    64,    65,     0,    66,    67,    68,    69,    70,
       0,     0,     0,     0,     0,    71,    72,    73,     0,     0,
       0,     0,     0,    74,     0,     0,     0,    28,    75,     0,
      76,    77,     0,     0,     0,    78,    79,    80,   451,     0,
     279,     0,    29,     0,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   452,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   522,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   582,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   586,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   647,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   649,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   687,     0,    30,     0,   388,   389,   390,
     391,     0,     0,    32,   392,   393,    33,   394,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,   395,    37,   396,   397,     0,
       0,    38,     0,     0,   398,     0,     0,     0,    39,     0,
       0,   399,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,   400,   401,     0,   402,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,   403,     0,   404,   405,     0,     0,   406,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,   407,    64,   408,     0,    66,    67,
      68,    69,    70,     0,     0,     0,   409,     0,    71,    72,
      73,     0,     0,   410,   411,     0,    74,    28,   188,     0,
       0,   412,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   189,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,   190,     0,
      34,   191,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,   327,     0,    78,    79,
      80,     0,    29,     0,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     4,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,     0,     0,
       0,    75,     0,    76,    77,     0,     1,     6,    78,    79,
      80,     0,    29,     0,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     4,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,    28,   188,     0,
       0,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,     0,    29,   189,     0,    30,     0,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,    40,    41,     0,     0,    42,     0,    43,     0,
      44,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,    46,    47,     0,     0,    48,    49,    50,    51,     0,
      52,    53,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,     0,    57,     0,     0,     0,     0,    58,    59,
      60,    61,    62,    63,     0,    64,    65,     0,    66,    67,
      68,    69,    70,     0,     0,     0,     0,     0,    71,    72,
      73,     0,     0,     0,     0,     0,    74,     0,     0,     0,
      28,    75,     0,    76,    77,     0,     0,     0,    78,    79,
      80,   213,     0,     0,     0,    29,     0,     0,    30,     0,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    33,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,     0,    42,
       0,    43,     0,    44,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,    46,    47,     0,     0,    48,    49,
      50,    51,     0,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,     0,    57,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,     0,     0,     0,    74,
      28,     0,     0,     0,    75,     0,    76,    77,     0,   253,
       0,    78,    79,    80,     0,    29,     0,     0,    30,     0,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    33,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,     0,    42,
       0,    43,     0,    44,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,    46,    47,     0,     0,    48,    49,
      50,    51,     0,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,     0,    57,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,     0,     0,     0,    74,
      28,   188,     0,     0,    75,     0,    76,    77,     0,     0,
       0,    78,    79,    80,     0,    29,     0,     0,    30,     0,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    33,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,    35,    36,     0,     0,     0,     0,     0,    37,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,    39,     0,     0,     0,    40,    41,     0,     0,    42,
       0,    43,     0,    44,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,    46,    47,     0,     0,    48,    49,
      50,    51,     0,    52,    53,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,     0,    57,     0,     0,     0,
       0,    58,    59,    60,    61,    62,    63,     0,    64,    65,
       0,    66,    67,    68,    69,    70,     0,     0,     0,     0,
       0,    71,    72,    73,     0,     0,     0,     0,     0,    74,
       0,     0,     0,    28,    75,     0,    76,    77,     0,     0,
       0,    78,    79,    80,   284,     0,     0,     0,    29,     0,
       0,    30,     0,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    36,     0,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,    39,     0,     0,     0,    40,    41,
       0,     0,    42,     0,    43,     0,    44,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,    46,    47,     0,
       0,    48,    49,    50,    51,     0,    52,    53,     0,     0,
       0,     0,     0,     0,     0,    54,    55,    56,     0,    57,
       0,     0,     0,     0,    58,    59,    60,    61,    62,    63,
       0,    64,    65,     0,    66,    67,    68,    69,    70,     0,
       0,     0,     0,     0,    71,    72,    73,     0,     0,     0,
       0,     0,    74,     0,     0,     0,    28,    75,     0,    76,
      77,     0,     0,     0,    78,    79,    80,   350,     0,     0,
       0,    29,     0,     0,    30,     0,     0,    31,     0,     0,
       0,     0,    32,     0,     0,    33,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,    35,    36,
       0,     0,     0,     0,     0,    37,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,    39,     0,     0,
       0,    40,    41,     0,     0,    42,     0,    43,     0,    44,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
      46,    47,     0,     0,    48,    49,    50,    51,     0,    52,
      53,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,     0,    57,     0,     0,     0,     0,    58,    59,    60,
      61,    62,    63,     0,    64,    65,     0,    66,    67,    68,
      69,    70,     0,     0,     0,     0,     0,    71,    72,    73,
       0,     0,     0,     0,     0,    74,     0,     0,     0,    28,
      75,     0,    76,    77,     0,     0,     0,    78,    79,    80,
     357,     0,     0,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,     0,    32,     0,     0,    33,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,     0,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,     0,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,     0,     0,     0,    74,    28,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     0,
      78,    79,    80,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,     0,    32,     0,     0,    33,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,     0,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    64,    65,     0,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,     0,     0,     0,    74,    28,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     0,
      78,    79,    80,     0,    29,     0,     0,    30,     0,     0,
      31,     0,     0,     0,     0,    32,     0,     0,    33,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,    35,    36,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
      39,     0,     0,     0,    40,    41,     0,     0,    42,     0,
      43,     0,    44,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,    46,    47,     0,     0,    48,    49,    50,
      51,     0,    52,    53,     0,     0,     0,     0,     0,     0,
       0,    54,    55,    56,     0,    57,     0,     0,     0,     0,
      58,    59,    60,    61,    62,    63,     0,    87,    65,     0,
      66,    67,    68,    69,    70,     0,     0,     0,     0,     0,
      71,    72,    73,     0,     0,     0,     0,     0,    74,     0,
       0,     0,     0,    75,     0,    76,    77,     0,     0,     0,
      78,    79,    80
};

static const yytype_int16 yycheck[] =
{
       5,     6,   103,   448,   334,   160,   184,   489,   164,    97,
      98,    99,    12,   425,     1,   427,   519,    13,    23,    24,
     176,     0,    13,    13,    13,    13,    12,     5,     5,    12,
     253,   187,   344,   345,    21,     8,     5,     5,   124,   125,
     218,   253,    12,   227,    22,    65,    12,   108,   226,    12,
      34,     5,    68,    37,    87,     5,    70,    15,   108,    12,
      12,    12,     5,    34,   185,    12,    37,    12,    32,    84,
      48,    48,    36,    68,    12,   253,    12,    54,   110,    48,
      48,    13,    87,    22,   145,   241,   161,   162,   243,   210,
       5,     6,    68,    56,    48,   145,     0,    34,    48,   115,
      37,    59,    55,   433,   327,    48,   138,    13,    23,    24,
     592,   441,    18,   595,    93,   327,    79,   301,   151,   205,
     115,    13,   110,   143,   103,    34,   131,     6,    37,   102,
       9,     6,   310,    65,     9,   447,   639,   315,    77,   115,
     622,    88,   106,    88,   149,    63,   151,   152,    13,   327,
      88,    90,    88,   153,   154,   141,   334,   162,    13,   129,
     338,   145,   158,   129,   142,   142,   129,   158,   158,   158,
     153,   154,    87,   142,   142,   162,   129,   680,   129,   184,
     510,   144,   169,   153,   189,   667,   191,   158,   142,   168,
     153,    97,   142,   146,   639,   146,   148,    13,   376,   142,
     153,   148,   153,   148,   209,    12,   103,    14,   213,    31,
     148,   143,   148,   369,    82,    37,   131,    68,    68,   111,
      68,   158,   114,    22,   636,   117,   157,   102,    68,   330,
     153,   154,    16,   125,   149,    34,   151,   152,    37,    38,
      39,    40,    41,    42,    43,    68,   111,   162,   253,   254,
      34,   111,   117,    37,   259,   433,    95,    32,    52,    71,
     125,    36,   117,   441,   115,   115,    78,   115,    68,   184,
     125,   168,    13,   278,   189,   115,   191,    89,    77,   284,
      68,   286,    76,   288,   131,    12,    85,    14,   443,    68,
      20,    90,   115,    34,   209,    19,    37,    72,   213,    14,
      94,   117,    96,   102,    34,    30,    31,    37,   295,   125,
      34,   123,    87,    37,   158,   115,    91,   322,    12,   324,
     159,    12,   327,    14,   163,   164,    52,   115,    58,   334,
      27,   106,   510,   338,   128,    12,   115,    14,   253,   254,
     327,    12,   152,    14,   259,   350,     5,   352,   153,   154,
      76,   356,   357,   508,   442,    13,   512,    13,    12,   158,
      12,   155,    13,   278,    23,    24,     5,     6,    94,   284,
      96,   286,    12,   288,    12,    22,    34,    12,    34,    37,
      16,    37,    47,    34,    23,    24,    37,    34,   157,   158,
      37,    38,    39,    40,    41,    42,    43,   402,    34,    12,
      34,    37,   128,    37,    38,    12,    71,   322,   509,   324,
      70,   158,   327,    78,   569,   335,   572,   337,    12,   334,
     160,    86,    12,   338,    89,    12,    12,    19,   433,   155,
      77,    13,   146,    13,    99,   350,   441,   352,    85,   151,
       5,   356,   357,    90,    13,   450,   451,    13,    87,    13,
     158,   456,    14,    13,   158,   102,     5,     6,   123,    12,
     158,   110,    16,    85,    61,    13,    13,    73,    13,   570,
      13,   113,    47,    14,    23,    24,    12,    62,    13,   112,
      75,    86,    86,    27,    12,    14,   491,    14,     8,    88,
      12,   138,   131,   158,    12,    12,    71,    12,   116,    12,
      12,    12,    12,    78,    12,   510,    37,    13,    86,    14,
     149,    86,   151,   152,    89,    13,   521,   105,   433,     5,
     525,     5,   105,   162,    99,   184,   441,    12,     5,   105,
      12,     5,   191,     5,     5,   450,   451,     5,    87,   544,
     141,   456,    12,     5,   105,   184,    12,     5,   123,     5,
     189,     5,   191,     5,    27,   139,    13,    12,   139,   131,
     565,    14,   139,    12,    12,   139,    13,    13,     5,    13,
     209,    12,     5,    13,   213,    13,   491,     5,     5,   584,
     585,     5,   131,    12,     5,   156,   105,    12,     5,   156,
      13,    13,    12,   156,   253,   510,    93,    13,    13,    13,
     149,   156,   151,   152,    13,     5,   521,    13,   115,     5,
     525,   115,    13,   162,   253,   254,    13,     5,     5,    12,
     259,   124,    13,    13,     5,     5,     5,    13,    12,   124,
      13,   127,     5,   156,     5,   184,    13,    13,    13,   278,
     189,    13,   191,    13,    13,   284,   651,   286,   141,   288,
     565,    13,    13,    13,    13,    13,   139,    13,   139,   139,
     209,   139,    16,   322,   213,   324,    16,   672,   327,   584,
     585,    16,    16,    16,    13,   334,    13,   156,    13,   338,
     156,   156,   124,   322,   115,   324,    68,   186,   327,   124,
     124,   282,   124,   291,   124,   334,   159,   338,   300,   338,
     190,   168,   204,   376,   253,   254,   336,   199,   245,   288,
     259,   350,   518,   352,   604,    27,   366,   356,   357,   259,
     254,    -1,    -1,    -1,   189,    -1,    -1,    -1,    -1,   278,
      -1,    -1,    -1,    -1,    -1,   284,   651,   286,    -1,   288,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,   672,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    37,    38,    39,    40,    41,
      42,    43,    -1,   322,   433,   324,    -1,    -1,   327,    -1,
      -1,    -1,   441,    -1,    -1,   334,    -1,    -1,    -1,   338,
      -1,    -1,    -1,    -1,   433,    -1,    -1,    -1,    -1,   111,
      -1,   350,   441,   352,    -1,    77,    -1,   356,   357,    -1,
      -1,   450,   451,    85,    -1,    -1,    -1,   456,    90,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     102,    -1,   491,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   156,    -1,    -1,    -1,   160,    -1,
      -1,   510,   491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   175,    -1,   177,    -1,    -1,   180,    -1,
      -1,   510,    -1,    -1,   186,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   521,    -1,   433,    -1,   525,    -1,    -1,    -1,
      -1,    -1,   441,    -1,   206,    -1,   208,    -1,    -1,    -1,
      -1,   450,   451,    -1,    -1,    -1,   565,   456,    -1,    -1,
      -1,    -1,    -1,   225,    -1,   227,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   565,    -1,    -1,    -1,
      -1,   243,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   491,    -1,    -1,   584,   585,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   510,    -1,   275,    -1,    -1,    -1,    -1,    -1,    -1,
     282,   283,   521,    -1,    -1,    -1,   525,    -1,    -1,   291,
      -1,    -1,    -1,   295,    -1,    -1,    -1,    -1,   300,   301,
      -1,   303,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     312,    -1,   314,    -1,    -1,    -1,    -1,   319,    -1,    -1,
      -1,    -1,   651,   672,   326,    -1,   565,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   672,    -1,   584,   585,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   375,    -1,   377,    -1,    -1,    -1,    -1,
      -1,    -1,   384,   385,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   651,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,   672,    18,    -1,    -1,    21,    -1,    -1,
      24,   443,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,   458,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,   508,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,   102,   103,
      -1,   105,   106,   107,    -1,   109,    -1,   529,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,   569,    -1,   153,
     154,   155,   156,    -1,    -1,    -1,    -1,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,    -1,    -1,    -1,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,    -1,   159,    -1,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    15,    -1,    17,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,    -1,    -1,   133,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,    -1,    -1,    -1,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,    -1,    -1,    -1,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,   153,
     154,   155,   156,    -1,    -1,    -1,    -1,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    66,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,   102,   103,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,    -1,    -1,    -1,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,    -1,    -1,    -1,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,    -1,    -1,    -1,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,    -1,   159,    -1,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    13,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,    -1,    -1,    -1,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,    -1,    -1,    -1,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    -1,    -1,    49,    50,    -1,    52,    -1,
      -1,    55,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    89,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,   103,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,   123,
     124,   125,   126,   127,   128,    -1,   130,    -1,    -1,    -1,
     134,   135,   136,   137,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,     3,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,    -1,    14,    -1,   161,   162,    18,
      -1,    -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,
      29,    -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      69,    -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,
      -1,    -1,    91,    92,    93,    94,    -1,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,
     109,    -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,
     119,    -1,   121,   122,    -1,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,     3,   147,    -1,
     149,   150,    -1,    -1,    -1,   154,   155,   156,    14,    -1,
     159,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,   159,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,   159,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,   159,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,   159,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,   159,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,   159,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,   159,    -1,    21,    -1,    23,    24,    25,
      26,    -1,    -1,    29,    30,    31,    32,    33,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    51,    52,    53,    54,    -1,
      -1,    57,    -1,    -1,    60,    -1,    -1,    -1,    64,    -1,
      -1,    67,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    80,    81,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    98,    -1,   100,   101,    -1,    -1,   104,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,   132,    -1,   134,   135,
     136,    -1,    -1,   139,   140,    -1,   142,     3,     4,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,    19,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    34,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    12,    -1,   154,   155,
     156,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,    -1,    -1,
      -1,   147,    -1,   149,   150,    -1,    12,   153,   154,   155,
     156,    -1,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,     3,     4,    -1,
      -1,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    -1,    18,    19,    -1,    21,    -1,    -1,    24,    -1,
      -1,    -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      46,    -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,
      76,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    87,    88,    -1,    -1,    91,    92,    93,    94,    -1,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
     106,   107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,
     116,   117,   118,   119,    -1,   121,   122,    -1,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,    -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,
       3,   147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,
     156,    14,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    88,    -1,    -1,    91,    92,
      93,    94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,    -1,   121,   122,
      -1,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,   142,
       3,    -1,    -1,    -1,   147,    -1,   149,   150,    -1,    12,
      -1,   154,   155,   156,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    88,    -1,    -1,    91,    92,
      93,    94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,    -1,   121,   122,
      -1,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,   142,
       3,     4,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,
      -1,   154,   155,   156,    -1,    18,    -1,    -1,    21,    -1,
      -1,    24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,
      -1,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,
      -1,    74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    -1,    -1,    87,    88,    -1,    -1,    91,    92,
      93,    94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,
      -1,   114,   115,   116,   117,   118,   119,    -1,   121,   122,
      -1,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,   142,
      -1,    -1,    -1,     3,   147,    -1,   149,   150,    -1,    -1,
      -1,   154,   155,   156,    14,    -1,    -1,    -1,    18,    -1,
      -1,    21,    -1,    -1,    24,    -1,    -1,    -1,    -1,    29,
      -1,    -1,    32,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    52,    -1,    -1,    -1,    -1,    57,    -1,    -1,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      -1,    -1,    72,    -1,    74,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,    -1,    87,    88,    -1,
      -1,    91,    92,    93,    94,    -1,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   105,   106,   107,    -1,   109,
      -1,    -1,    -1,    -1,   114,   115,   116,   117,   118,   119,
      -1,   121,   122,    -1,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,    -1,    -1,    -1,
      -1,    -1,   142,    -1,    -1,    -1,     3,   147,    -1,   149,
     150,    -1,    -1,    -1,   154,   155,   156,    14,    -1,    -1,
      -1,    18,    -1,    -1,    21,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      -1,    68,    69,    -1,    -1,    72,    -1,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,
      87,    88,    -1,    -1,    91,    92,    93,    94,    -1,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,   106,
     107,    -1,   109,    -1,    -1,    -1,    -1,   114,   115,   116,
     117,   118,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,     3,
     147,    -1,   149,   150,    -1,    -1,    -1,   154,   155,   156,
      14,    -1,    -1,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,    -1,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,   142,     3,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,    -1,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,   142,     3,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156,    -1,    18,    -1,    -1,    21,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    29,    -1,    -1,    32,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    68,    69,    -1,    -1,    72,    -1,
      74,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,    -1,    87,    88,    -1,    -1,    91,    92,    93,
      94,    -1,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   105,   106,   107,    -1,   109,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,    -1,   121,   122,    -1,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
     134,   135,   136,    -1,    -1,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    -1,   147,    -1,   149,   150,    -1,    -1,    -1,
     154,   155,   156
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    12,    56,    79,   129,   144,   153,   166,   167,   168,
     169,   170,   171,   174,   175,   178,   179,   180,   181,   182,
     184,   194,   180,    70,    84,    15,    59,   200,     3,    18,
      21,    24,    29,    32,    36,    45,    46,    52,    57,    64,
      68,    69,    72,    74,    76,    83,    87,    88,    91,    92,
      93,    94,    96,    97,   105,   106,   107,   109,   114,   115,
     116,   117,   118,   119,   121,   122,   124,   125,   126,   127,
     128,   134,   135,   136,   142,   147,   149,   150,   154,   155,
     156,   209,   240,   242,   258,   276,   277,   121,   195,   196,
     276,     0,    63,   157,   111,   188,   189,    65,   143,    82,
     180,    13,   209,   209,     4,     5,     6,     7,     8,    10,
      12,    28,    29,    35,    44,    49,    50,    55,    89,   103,
     123,   130,   137,   159,   161,   162,   183,   201,   202,   208,
     209,   219,   220,   221,   222,   223,   224,   232,   233,   238,
     239,   240,   241,   242,   243,   244,   258,   276,   131,    14,
     195,   158,    12,   197,   198,   167,    27,   200,   200,   200,
     152,   185,    12,    55,   146,   172,   173,   178,   198,    12,
     179,   219,   225,   219,   234,    12,    12,    12,    12,    12,
      12,    12,   223,   223,    70,   186,   158,    12,     4,    19,
      34,    37,   272,   273,   274,   275,   276,   161,   162,   230,
      95,   159,   163,   164,   231,   160,    12,    12,    12,    14,
     176,   177,   219,    14,   276,   195,   199,   276,    19,   190,
     191,   219,   181,   181,   182,    12,    66,   102,   213,   214,
     215,   216,   217,   218,   219,   146,   225,   173,   178,   180,
      13,   158,    13,   151,   235,   236,   219,   225,   219,     5,
      13,   219,    13,    12,   183,   203,   204,   205,   206,   209,
     210,   185,   201,    13,   225,   274,   220,   209,   221,   222,
     223,    15,    59,   159,   219,   270,    13,   219,    14,   159,
     276,   185,   158,    38,    14,   276,    14,    13,   158,    12,
     183,   158,    20,    58,   192,    12,   213,   219,   183,   215,
     110,    16,    85,    22,    38,    39,    40,    41,    42,    43,
      77,    85,    90,   102,   228,   229,   225,   213,   219,    61,
     237,   235,    19,    13,   145,    13,   158,    12,   204,   210,
     273,    47,    71,    78,    86,    89,    99,   123,   158,   211,
     272,    73,   187,    13,    13,    13,   219,   113,   245,    13,
      14,   276,    14,   176,   219,   276,    14,    14,   276,   199,
     190,    13,   214,   215,     6,     9,   102,   227,   219,    12,
     183,   226,     8,   102,   219,    22,    77,    90,    15,    17,
     133,   219,   271,   183,   138,   138,   219,    62,    23,    24,
      25,    26,    30,    31,    33,    51,    53,    54,    60,    67,
      80,    81,    83,    98,   100,   101,   104,   120,   122,   132,
     139,   140,   147,   209,   248,   249,   250,   251,   252,   253,
     259,   260,   261,   262,   263,   264,   265,   266,   209,   219,
      13,   198,   207,    86,   112,   212,   205,   212,   211,   212,
     203,    86,    27,    75,   193,   245,   245,    13,    12,   276,
      14,    14,   159,   276,   276,   276,    14,   227,    16,   225,
       8,   219,   226,   219,   219,   219,    88,    12,    12,    88,
     148,    12,    88,   148,    12,    12,    12,   116,    12,   128,
     254,   255,   257,   258,    30,    31,    12,    88,   148,    12,
      12,    12,    12,   153,   154,    12,   153,   154,    12,    13,
      18,    97,    31,   275,   275,    13,    13,   205,   108,   145,
      86,   205,   200,   213,   245,    13,   114,   117,   125,   189,
     246,    14,   159,   276,   276,    14,   276,   219,    13,    16,
     105,     5,     5,   105,    12,     5,   105,    12,     5,   267,
       5,     5,     5,    12,   141,    12,    12,   148,    12,    88,
     148,     5,   105,    12,   267,     5,   209,     5,   139,   139,
       5,   139,   139,     5,    12,   131,   213,   198,   205,   108,
     145,   225,    27,     5,    22,    48,   142,   247,   247,    13,
     246,    13,   159,   276,    14,    14,   159,   276,   219,    12,
      13,    13,    12,     5,    13,    12,     5,    32,    36,    72,
      87,    91,   106,   268,   269,    13,    13,   158,    13,   158,
      13,     5,   128,   256,   258,     5,     5,    12,     5,   105,
      12,    13,    12,     5,    13,    13,   158,    13,    13,   156,
     156,    13,   156,   156,    13,     5,   209,   213,   198,   225,
     115,     5,    48,   142,   124,   115,    13,   159,   276,   159,
     276,    14,     5,   267,    13,   267,    13,   268,     5,     5,
      13,   158,    12,    13,    13,     5,    13,    12,     5,   267,
      13,     5,   127,   153,   154,   153,   154,    13,   275,    13,
     189,   246,    68,   115,   124,    68,   115,   159,   276,    13,
      13,    13,    13,    13,     5,     5,    13,   267,    13,    13,
      13,   209,   139,   139,   139,   139,    13,   246,    13,    16,
      16,    16,    16,    16,    13,    13,    13,   156,   156,   156,
     156,    13,     5,    48,   142,     5,    48,   142,     5,    48,
     142,     5,    48,   142,     5,    48,    54,   142,    68,   115,
     124,    68,   115,    68,   115,   124,    68,   115,    68,   115,
     124,    68,   115,    68,   115,   124,    68,   115,   115,   124,
      68,    68,   115
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   165,   166,   167,   167,   168,   168,   168,   169,   170,
     170,   170,   171,   172,   172,   172,   172,   172,   173,   174,
     175,   176,   176,   177,   178,   179,   179,   180,   180,   180,
     181,   181,   182,   182,   183,   184,   185,   185,   186,   187,
     187,   188,   188,   189,   190,   190,   191,   192,   192,   192,
     193,   193,   194,   194,   195,   195,   196,   197,   197,   198,
     199,   199,   200,   200,   200,   201,   201,   202,   202,   203,
     203,   204,   204,   205,   205,   206,   206,   207,   207,   208,
     208,   208,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   208,   208,   209,   209,   209,   209,
     209,   209,   209,   209,   210,   210,   210,   210,   210,   210,
     211,   211,   211,   211,   212,   212,   213,   213,   214,   214,
     215,   215,   216,   216,   216,   217,   217,   218,   218,   218,
     218,   218,   218,   218,   218,   218,   218,   218,   219,   219,
     219,   220,   220,   221,   221,   222,   222,   223,   223,   223,
     224,   224,   224,   224,   224,   224,   225,   225,   226,   226,
     227,   227,   228,   228,   228,   228,   228,   228,   229,   230,
     230,   231,   231,   231,   231,   232,   232,   232,   232,   232,
     232,   232,   233,   234,   234,   235,   235,   236,   236,   237,
     237,   238,   238,   238,   238,   239,   239,   239,   239,   239,
     239,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   241,   242,   242,   242,   243,   243,   244,   244,   244,
     244,   244,   244,   244,   244,   244,   244,   244,   244,   245,
     245,   245,   245,   245,   245,   245,   245,   246,   246,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   248,   248,   248,
     248,   249,   250,   251,   251,   251,   252,   252,   252,   252,
     252,   252,   252,   252,   252,   252,   252,   253,   254,   254,
     255,   255,   256,   256,   256,   257,   257,   257,   257,   257,
     258,   258,   258,   258,   258,   259,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   260,   260,   260,   261,
     261,   262,   262,   262,   262,   262,   262,   262,   262,   262,
     262,   262,   262,   262,   263,   263,   263,   263,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   265,   265,   265,   265,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     267,   267,   267,   267,   268,   268,   268,   269,   269,   269,
     270,   270,   271,   271,   271,   272,   272,   273,   273,   274,
     274,   275,   276,   276,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277,   277,   277,   277,   277,   277,   277,   277,   277,   277,
     277
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     2,     2,     4,
       5,     1,     3,     3,     2,     1,     2,     1,     4,     4,
       1,     4,     1,     3,     3,     7,     0,     2,     2,     0,
       4,     0,     1,     3,     1,     3,     2,     0,     1,     1,
       0,     2,     2,     3,     1,     3,     4,     0,     1,     3,
       1,     3,     0,     1,     1,     1,     3,     2,     1,     1,
       3,     1,     1,     1,     3,     2,     3,     0,     1,     1,
       3,     3,     5,     5,     7,     7,     6,     6,     9,     9,
       8,     8,     8,     8,     7,     7,     1,     3,     5,     4,
       7,     6,     6,     5,     6,     5,     6,     5,     4,     5,
       2,     2,     2,     1,     0,     1,     1,     3,     1,     3,
       1,     2,     1,     3,     4,     1,     3,     3,     3,     5,
       6,     3,     4,     3,     4,     3,     4,     2,     1,     2,
       3,     1,     3,     1,     3,     1,     3,     1,     2,     2,
       1,     1,     3,     1,     1,     1,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     0,     1,     1,     2,     4,     4,     0,
       2,     1,     1,     1,     1,     5,     4,     6,     5,     5,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     1,     1,     3,     4,     4,     3,     3,
       6,     6,     4,     1,     4,     1,     6,     1,     1,     8,
       5,     7,     7,     6,     4,     4,     3,     2,     2,     2,
       2,     2,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     1,     1,     1,
       1,     1,     6,     5,     2,     2,     5,     4,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       4,     1,     1,     4,     1,     4,     1,     6,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,     4,
       4,     4,     7,     7,     4,     4,     4,     1,     1,     1,
       1,     6,     4,     6,     4,     6,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     2,     1,     1,     4,     4,
       5,     5,     4,     6,     3,     6,     3,     4,     1,     1,
       1,     6,     3,     4,     1,     5,     2,     5,     2,     4,
       6,     6,     5,     7,     4,     6,     3,     4,     1,     1,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
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
#line 2774 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2780 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2786 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2792 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2798 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2804 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2810 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2816 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 166: /* sql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2822 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 167: /* stmt_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2828 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 168: /* stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 169: /* dql_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2840 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 170: /* dml_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2846 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 171: /* insert_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2852 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 172: /* insert_columns_and_source  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2858 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 173: /* from_constructor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2864 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 174: /* delete_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2870 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 175: /* update_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2876 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* update_elem_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2882 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* update_elem  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2888 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* select_stmt  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2894 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* query_expression  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2900 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* query_expression_body  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2906 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* query_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2912 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* query_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2918 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* select_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2924 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* simple_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2930 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_where  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2936 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_from_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2942 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_groupby  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2948 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2954 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* order_by  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2960 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* sort_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2966 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* sort_key  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2972 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_asc_desc  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2978 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_having  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2984 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* with_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2990 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* with_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* common_table_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3002 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_derived_column_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3008 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3014 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* simple_ident_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3020 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_distinct  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3026 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* select_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3032 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* projection  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3038 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* from_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3044 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* table_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3050 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* table_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3056 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* table_factor_non_join  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3062 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_simple_ident_list_with_parens  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3068 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* column_ref  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3074 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* relation_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3080 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* joined_table  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* join_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3092 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* search_condition  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* boolean_term  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* boolean_factor  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* boolean_test  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3116 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* boolean_primary  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* predicate  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* row_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3134 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* factor0  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3140 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* factor1  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* factor2  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3152 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* factor3  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3158 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* factor4  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3164 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* row_expr_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* in_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3176 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* truth_value  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3182 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* expr_const  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3188 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* case_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3194 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* case_arg  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3200 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* when_clause_list  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3206 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* when_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3212 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* case_default  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3218 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* func_expr  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* aggregate_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3230 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* aggregate_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3236 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* ranking_windowed_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3242 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* ranking_function_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3248 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* scalar_function  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* function_call_keyword  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3260 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* over_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3266 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* row_or_range_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3272 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* window_frame_extent  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3278 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* data_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3284 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* user_defined_type_name  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* reference_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3296 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* collection_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* predefined_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* interval_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3314 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* interval_qualifier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3320 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* start_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* end_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3332 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* single_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3338 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* non_second_primary_datetime_field  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3344 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* boolean_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3350 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 260: /* datetime_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3362 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* exact_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3368 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* approximate_numeric_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3374 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3380 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 265: /* binary_large_object_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3386 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 266: /* national_character_string_type  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3392 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 267: /* large_object_length  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3398 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 268: /* char_length_units  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3404 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 269: /* multiplier  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3410 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 270: /* distinct_or_all  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3416 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 272: /* opt_as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3422 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 273: /* as_label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3428 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 274: /* label  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3434 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 275: /* collate_clause  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3440 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 276: /* name_r  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3446 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 277: /* reserved  */
#line 95 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3452 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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

#line 3569 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 219 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3763 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 230 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3772 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 237 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3778 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 254 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 3787 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 262 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3796 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 267 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3805 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 272 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3814 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 277 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3823 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 282 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3833 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 291 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 3842 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 300 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3859 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 317 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3877 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 335 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3886 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 343 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3895 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 352 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_DIRECT_SELECT_ORDER, (yyvsp[0].node));
}
#line 3904 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 360 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 3913 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 365 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_DIRECT_SELECT, E_DIRECT_SELECT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &SELECT_DIRECT_SERIALIZE_FORMAT;
}
#line 3922 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 373 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3952 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 399 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3982 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 429 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4012 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 459 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4021 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 467 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4030 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 475 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4059 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 502 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4065 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 504 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 4074 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 513 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 4083 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 526 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4089 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4098 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 535 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 541 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 550 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 558 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4131 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 566 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4139 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 570 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4147 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 574 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4155 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 580 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4161 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 582 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 592 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 597 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 4188 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 606 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4197 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 615 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4206 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 622 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4212 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 628 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4221 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 637 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4230 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 644 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4236 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 646 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4244 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 650 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4252 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 658 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4261 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 666 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4279 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 680 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4289 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 690 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4298 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 704 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4307 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 716 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4316 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 721 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4325 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 728 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4331 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 735 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4341 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 741 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4351 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 747 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4362 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 754 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4372 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 767 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4393 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 773 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4404 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 780 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4414 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 786 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4425 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 793 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4435 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 799 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4446 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 806 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4456 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 812 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4467 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 819 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4477 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 825 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4488 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 832 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4498 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 838 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4509 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 849 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4518 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 854 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4527 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 859 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4536 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 864 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4545 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 869 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4554 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 874 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 879 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4572 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 884 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 892 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4590 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 897 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4600 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 903 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4609 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 908 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4619 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 914 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4629 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 920 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4639 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 929 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4654 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 940 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 951 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4684 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 962 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 4692 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 968 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4698 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 969 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 4704 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 976 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_OR);
}
#line 4713 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 985 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_AND);
}
#line 4722 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 994 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT);
}
#line 4731 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1003 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 4740 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1008 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 4749 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1017 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4758 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1025 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4767 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 1030 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode((yyvsp[-1].nodetype), E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4776 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1035 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_BTW);
}
#line 4785 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 1040 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_BTW);
}
#line 4794 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 1045 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_LIKE);
}
#line 4803 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 1050 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_LIKE);
}
#line 4812 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 1055 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IN);
}
#line 4821 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 1060 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NOT_IN);
}
#line 4830 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 1065 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS);
}
#line 4839 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1070 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_IS_NOT);
}
#line 4848 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 1075 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_EXISTS);
}
#line 4857 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1085 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4866 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 1090 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_CNN);
}
#line 4875 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 1099 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4884 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 1108 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format((yyvsp[-1].nodetype));
}
#line 4893 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1117 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POW);
}
#line 4902 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1126 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_POS);
}
#line 4911 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1131 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_OP_NEG);
}
#line 4920 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4929 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4938 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4947 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1172 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LE; }
#line 4953 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1173 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_LT; }
#line 4959 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1174 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GE; }
#line 4965 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1175 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_GT; }
#line 4971 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1176 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_EQ; }
#line 4977 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1177 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_NE; }
#line 4983 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1182 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.nodetype) = Node::comp_all_some_any_op_form((yyvsp[-1].nodetype), (yyvsp[0].ival));
}
#line 4991 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1188 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_ADD; }
#line 4997 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1189 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MINUS; }
#line 5003 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1193 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MUL; }
#line 5009 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1194 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_DIV; }
#line 5015 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1195 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_REM; }
#line 5021 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1196 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.nodetype) = E_OP_MOD; }
#line 5027 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1206 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 5033 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1212 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = Node::op_serialize_format(E_CASE);
}
#line 5042 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1219 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5048 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1226 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5057 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1234 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5066 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1239 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5075 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 1246 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5081 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 1248 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5090 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 1265 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5100 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 1271 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 197:
#line 1277 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5120 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 198:
#line 1283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5130 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1289 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5146 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1301 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5162 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1315 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5168 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1316 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5174 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1317 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5180 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1318 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5186 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1319 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5192 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1320 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1321 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5204 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1322 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5210 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1323 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5216 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1324 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5222 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1329 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5232 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1337 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5238 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1338 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5244 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1339 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5250 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1344 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5260 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1350 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5270 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1362 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5280 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1368 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5291 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1375 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1382 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5313 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1389 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 5326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1398 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5337 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1405 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5348 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1412 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5359 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1419 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5370 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1426 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5383 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1435 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5394 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1442 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5405 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1452 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5414 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1457 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5423 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1462 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5432 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1467 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5441 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1472 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5450 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1477 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5459 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1482 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5468 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1487 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5477 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1495 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5487 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1501 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5497 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1510 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 5503 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1512 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 5509 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1514 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 5515 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1516 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 5521 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1518 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5527 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1520 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 5533 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1522 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 5539 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1524 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5545 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1526 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 5551 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5557 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1530 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1532 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5569 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1534 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1536 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 5581 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1538 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5587 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1540 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 5593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1542 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 5599 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1544 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5605 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1546 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 5611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1548 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5617 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1550 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 5623 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1552 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 5629 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1554 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5635 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1556 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 5641 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1558 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5647 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1560 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5653 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1562 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5659 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1564 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5665 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 271:
#line 1576 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5674 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 272:
#line 1584 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5683 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 273:
#line 1592 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5693 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 274:
#line 1598 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5702 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1603 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5711 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1611 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5720 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1616 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1621 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5738 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1627 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5747 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 287:
#line 1641 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5756 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 288:
#line 1649 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 5765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 290:
#line 1658 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5774 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 293:
#line 1668 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1673 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5791 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 295:
#line 1680 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5800 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1686 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5809 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1691 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5818 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1696 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5826 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 300:
#line 1703 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 5834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1707 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 5842 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1711 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 5850 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1715 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 5858 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1719 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 5866 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1726 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 5874 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1733 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 5882 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1737 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5891 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1742 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5900 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1747 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5909 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1752 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 5917 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1756 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 5925 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5934 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1765 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 5943 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1770 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5952 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1775 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 5960 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1779 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 5968 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1783 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP");
}
#line 5976 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1787 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME");
}
#line 5984 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1799 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5993 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1804 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6002 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 323:
#line 1809 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6011 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 324:
#line 1814 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6020 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1819 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1824 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6038 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1829 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6046 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1833 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6054 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 1837 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6062 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 1841 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6070 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 1845 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6078 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 1849 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 6086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 1853 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6094 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 1860 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6103 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 1865 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6111 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 1869 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6119 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 1873 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6127 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 1880 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6136 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 1885 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6145 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 1890 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6154 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 1895 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6163 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 1900 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6172 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 1905 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6181 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 1910 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6189 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 1914 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6198 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 1919 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6206 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 1923 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 1928 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6223 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 1932 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6231 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 1936 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6239 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 1943 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6248 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 1948 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6256 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 1952 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6265 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 1957 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6273 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 1964 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6282 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 1969 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6290 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 1973 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6299 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 1978 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6307 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 1982 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6316 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 1987 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6325 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 1992 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6334 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 1997 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6343 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2002 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6352 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2007 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6360 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2011 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6369 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2016 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6377 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2020 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6386 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2025 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6394 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2029 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6402 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2036 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6411 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2041 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6420 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2046 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6429 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2051 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6438 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2059 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6446 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2063 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6454 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2067 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6462 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2074 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6470 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2078 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6478 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2082 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6486 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2089 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6494 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2093 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6502 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2099 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6508 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2100 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6514 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2101 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6520 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2105 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 6526 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2110 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 6532 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 391:
#line 2122 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6541 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2139 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 6547 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2140 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 6553 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 6559 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2142 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 6565 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2143 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 6571 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2144 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 6577 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2145 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 6583 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2146 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 6589 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2147 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 6595 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2148 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 6601 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2149 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 6607 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2150 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 6613 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2151 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 6619 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2152 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 6625 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 6631 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2154 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 6637 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2155 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PARTITION"); }
#line 6643 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2156 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 6649 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2157 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 6655 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2158 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANGE"); }
#line 6661 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2159 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 6667 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2160 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 6673 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2161 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 6679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROWS"); }
#line 6685 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2163 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 6691 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2164 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 6697 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2165 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 6703 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2166 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 6709 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2167 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 6715 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2168 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 6721 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 427:
#line 2169 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ERROR"); }
#line 6727 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 428:
#line 2170 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOR"); }
#line 6733 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 429:
#line 2171 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OF"); }
#line 6739 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 430:
#line 2172 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "READ"); }
#line 6745 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 6749 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2175 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
