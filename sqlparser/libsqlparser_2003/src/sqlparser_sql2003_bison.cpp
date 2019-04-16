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
    SQL2003_COLLATE = 266,
    SQL2003_CROSS = 267,
    SQL2003_FULL = 268,
    SQL2003_INNER = 269,
    SQL2003_JOIN = 270,
    SQL2003_LEFT = 271,
    SQL2003_NATURAL = 272,
    SQL2003_RIGHT = 273,
    SQL2003_UNION = 274,
    SQL2003_EXCEPT = 275,
    SQL2003_INTERSECT = 276,
    SQL2003_OR = 277,
    SQL2003_AND = 278,
    SQL2003_NOT = 279,
    SQL2003_COMP_LE = 280,
    SQL2003_COMP_LT = 281,
    SQL2003_COMP_EQ = 282,
    SQL2003_COMP_GT = 283,
    SQL2003_COMP_GE = 284,
    SQL2003_COMP_NE = 285,
    SQL2003_CNNOP = 286,
    SQL2003_LIKE = 287,
    SQL2003_BETWEEN = 288,
    SQL2003_IN = 289,
    SQL2003_IS = 290,
    SQL2003_MOD = 291,
    SQL2003_UMINUS = 292,
    SQL2003_ALL = 293,
    SQL2003_ANY = 294,
    SQL2003_ARRAY = 295,
    SQL2003_AS = 296,
    SQL2003_ASC = 297,
    SQL2003_AVG = 298,
    SQL2003_BIGINT = 299,
    SQL2003_BINARY = 300,
    SQL2003_BLOB = 301,
    SQL2003_BOOLEAN = 302,
    SQL2003_BY = 303,
    SQL2003_CASE = 304,
    SQL2003_CAST = 305,
    SQL2003_CHAR = 306,
    SQL2003_CHARACTER = 307,
    SQL2003_CHARACTERS = 308,
    SQL2003_CLOB = 309,
    SQL2003_COALESCE = 310,
    SQL2003_CODE_UNITS = 311,
    SQL2003_CONVERT = 312,
    SQL2003_CORRESPONDING = 313,
    SQL2003_COUNT = 314,
    SQL2003_CURRENT = 315,
    SQL2003_CURRENT_TIMESTAMP = 316,
    SQL2003_CURRENT_USER = 317,
    SQL2003_DATE = 318,
    SQL2003_DAY = 319,
    SQL2003_DEC = 320,
    SQL2003_DECIMAL = 321,
    SQL2003_DEFAULT = 322,
    SQL2003_DELETE = 323,
    SQL2003_DENSE_RANK = 324,
    SQL2003_DESC = 325,
    SQL2003_DISTINCT = 326,
    SQL2003_DOUBLE = 327,
    SQL2003_ELSE = 328,
    SQL2003_END = 329,
    SQL2003_END_P = 330,
    SQL2003_ERROR = 331,
    SQL2003_EXISTS = 332,
    SQL2003_FLOAT = 333,
    SQL2003_FOLLOWING = 334,
    SQL2003_FOR = 335,
    SQL2003_FROM = 336,
    SQL2003_G = 337,
    SQL2003_GROUP = 338,
    SQL2003_GROUPING = 339,
    SQL2003_HAVING = 340,
    SQL2003_HOUR = 341,
    SQL2003_INSERT = 342,
    SQL2003_INT = 343,
    SQL2003_INTEGER = 344,
    SQL2003_INTERVAL = 345,
    SQL2003_INTO = 346,
    SQL2003_K = 347,
    SQL2003_LARGE = 348,
    SQL2003_M = 349,
    SQL2003_MAX = 350,
    SQL2003_MIN = 351,
    SQL2003_MINUTE = 352,
    SQL2003_MONTH = 353,
    SQL2003_MULTISET = 354,
    SQL2003_NATIONAL = 355,
    SQL2003_NCHAR = 356,
    SQL2003_NCLOB = 357,
    SQL2003_NULLIF = 358,
    SQL2003_NUMERIC = 359,
    SQL2003_OBJECT = 360,
    SQL2003_OCTETS = 361,
    SQL2003_OF = 362,
    SQL2003_ON = 363,
    SQL2003_ONLY = 364,
    SQL2003_ORDER = 365,
    SQL2003_OUTER = 366,
    SQL2003_OVER = 367,
    SQL2003_PARTITION = 368,
    SQL2003_PRECEDING = 369,
    SQL2003_PRECISION = 370,
    SQL2003_RANGE = 371,
    SQL2003_RANK = 372,
    SQL2003_READ = 373,
    SQL2003_REAL = 374,
    SQL2003_RECURSIVE = 375,
    SQL2003_REF = 376,
    SQL2003_ROW = 377,
    SQL2003_ROWS = 378,
    SQL2003_ROW_NUMBER = 379,
    SQL2003_SCOPE = 380,
    SQL2003_SECOND = 381,
    SQL2003_SELECT = 382,
    SQL2003_SESSION_USER = 383,
    SQL2003_SET = 384,
    SQL2003_SMALLINT = 385,
    SQL2003_SOME = 386,
    SQL2003_STDDEV_POP = 387,
    SQL2003_STDDEV_SAMP = 388,
    SQL2003_SUM = 389,
    SQL2003_SYSTEM_USER = 390,
    SQL2003_THEN = 391,
    SQL2003_TIME = 392,
    SQL2003_TIMESTAMP = 393,
    SQL2003_TO = 394,
    SQL2003_UNBOUNDED = 395,
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

#line 325 "sqlparser_sql2003_bison.cpp" /* yacc.c:355  */
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

#line 355 "sqlparser_sql2003_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  86
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5013

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  165
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  100
/* YYNRULES -- Number of rules.  */
#define YYNRULES  426
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  772

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
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      44,    45,    38,    36,   164,    37,    46,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   163,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    42,     2,     2,     2,     2,     2,
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
      35,    41,    43,    47,    48,    49,    50,    51,    52,    53,
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
     154,   155,   156,   157,   158,   159,   160,   161,   162
};

#if SQL2003_DEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   219,   219,   229,   230,   238,   239,   240,   244,   248,
     249,   250,   254,   262,   267,   272,   277,   282,   291,   300,
     317,   334,   335,   343,   358,   362,   367,   375,   381,   391,
     392,   396,   422,   448,   474,   503,   508,   512,   513,   517,
     521,   528,   529,   538,   552,   553,   561,   562,   566,   574,
     575,   583,   592,   595,   599,   606,   607,   617,   622,   630,
     631,   640,   648,   649,   653,   661,   662,   670,   671,   675,
     682,   683,   691,   696,   704,   712,   721,   722,   730,   731,
     739,   744,   749,   754,   759,   768,   773,   777,   778,   783,
     789,   795,   802,   808,   815,   821,   828,   834,   841,   847,
     854,   860,   867,   873,   880,   886,   897,   902,   907,   912,
     917,   922,   927,   932,   940,   945,   950,   956,   961,   967,
     973,   982,   993,  1004,  1015,  1023,  1027,  1028,  1033,  1034,
    1042,  1043,  1044,  1045,  1046,  1047,  1048,  1052,  1053,  1054,
    1060,  1061,  1062,  1063,  1071,  1072,  1077,  1082,  1087,  1092,
    1097,  1102,  1107,  1112,  1120,  1121,  1122,  1127,  1132,  1157,
    1162,  1187,  1192,  1217,  1222,  1247,  1252,  1277,  1282,  1307,
    1312,  1317,  1322,  1327,  1332,  1337,  1342,  1347,  1352,  1357,
    1362,  1367,  1372,  1377,  1382,  1390,  1391,  1400,  1408,  1409,
    1413,  1414,  1422,  1430,  1431,  1440,  1441,  1442,  1443,  1448,
    1454,  1460,  1466,  1472,  1484,  1499,  1500,  1501,  1502,  1503,
    1504,  1505,  1506,  1507,  1508,  1512,  1521,  1522,  1523,  1527,
    1533,  1545,  1551,  1558,  1565,  1572,  1581,  1588,  1595,  1602,
    1609,  1618,  1625,  1635,  1640,  1645,  1650,  1655,  1660,  1665,
    1670,  1678,  1684,  1693,  1695,  1697,  1699,  1701,  1703,  1705,
    1707,  1709,  1711,  1713,  1715,  1717,  1719,  1721,  1723,  1725,
    1727,  1729,  1731,  1733,  1735,  1737,  1739,  1741,  1743,  1745,
    1747,  1752,  1753,  1754,  1755,  1759,  1767,  1775,  1781,  1786,
    1794,  1799,  1804,  1809,  1810,  1815,  1816,  1817,  1818,  1819,
    1820,  1824,  1832,  1837,  1841,  1846,  1850,  1851,  1856,  1863,
    1868,  1869,  1874,  1879,  1886,  1890,  1894,  1898,  1902,  1909,
    1916,  1920,  1925,  1930,  1935,  1939,  1943,  1947,  1952,  1957,
    1962,  1966,  1970,  1977,  1978,  1982,  1987,  1992,  1996,  2001,
    2006,  2010,  2015,  2020,  2024,  2028,  2032,  2036,  2043,  2048,
    2052,  2056,  2063,  2068,  2072,  2077,  2081,  2086,  2091,  2096,
    2101,  2105,  2110,  2114,  2119,  2126,  2131,  2135,  2140,  2147,
    2152,  2156,  2161,  2165,  2170,  2174,  2179,  2184,  2189,  2194,
    2198,  2203,  2207,  2212,  2219,  2224,  2229,  2234,  2242,  2246,
    2250,  2257,  2261,  2265,  2272,  2276,  2283,  2284,  2285,  2288,
    2292,  2293,  2298,  2308,  2309,  2310,  2311,  2312,  2313,  2314,
    2315,  2316,  2317,  2318,  2319,  2320,  2321,  2322,  2323,  2324,
    2325,  2326,  2327,  2328,  2329,  2330,  2331,  2332,  2333,  2334,
    2335,  2336,  2337,  2338,  2339,  2340,  2341
};
#endif

#if SQL2003_DEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "COLLATE", "CROSS",
  "FULL", "INNER", "JOIN", "LEFT", "NATURAL", "RIGHT", "UNION", "EXCEPT",
  "INTERSECT", "OR", "AND", "NOT", "COMP_LE", "COMP_LT", "COMP_EQ",
  "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE", "BETWEEN", "IN", "IS",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "'('", "')'",
  "'.'", "ALL", "ANY", "ARRAY", "AS", "ASC", "AVG", "BIGINT", "BINARY",
  "BLOB", "BOOLEAN", "BY", "CASE", "CAST", "CHAR", "CHARACTER",
  "CHARACTERS", "CLOB", "COALESCE", "CODE_UNITS", "CONVERT",
  "CORRESPONDING", "COUNT", "CURRENT", "CURRENT_TIMESTAMP", "CURRENT_USER",
  "DATE", "DAY", "DEC", "DECIMAL", "DEFAULT", "DELETE", "DENSE_RANK",
  "DESC", "DISTINCT", "DOUBLE", "ELSE", "END", "END_P", "ERROR", "EXISTS",
  "FLOAT", "FOLLOWING", "FOR", "FROM", "G", "GROUP", "GROUPING", "HAVING",
  "HOUR", "INSERT", "INT", "INTEGER", "INTERVAL", "INTO", "K", "LARGE",
  "M", "MAX", "MIN", "MINUTE", "MONTH", "MULTISET", "NATIONAL", "NCHAR",
  "NCLOB", "NULLIF", "NUMERIC", "OBJECT", "OCTETS", "OF", "ON", "ONLY",
  "ORDER", "OUTER", "OVER", "PARTITION", "PRECEDING", "PRECISION", "RANGE",
  "RANK", "READ", "REAL", "RECURSIVE", "REF", "ROW", "ROWS", "ROW_NUMBER",
  "SCOPE", "SECOND", "SELECT", "SESSION_USER", "SET", "SMALLINT", "SOME",
  "STDDEV_POP", "STDDEV_SAMP", "SUM", "SYSTEM_USER", "THEN", "TIME",
  "TIMESTAMP", "TO", "UNBOUNDED", "UPDATE", "USING", "VALUES", "VARCHAR",
  "VARYING", "VAR_POP", "VAR_SAMP", "WHEN", "WHERE", "WITH", "WITHOUT",
  "YEAR", "ZONE", "';'", "','", "$accept", "sql_stmt", "stmt_list", "stmt",
  "dql_stmt", "dml_stmt", "insert_stmt", "insert_columns_and_source",
  "from_constructor", "delete_stmt", "update_stmt", "update_elem_list",
  "update_elem", "select_stmt", "select_with_parens", "select_no_parens",
  "select_clause", "simple_select", "opt_into_clause", "opt_top",
  "opt_for_clause", "opt_where", "opt_from_clause", "opt_groupby",
  "opt_order_by", "order_by", "sort_list", "sort_key", "opt_asc_desc",
  "opt_having", "with_clause", "with_list", "common_table_expr",
  "opt_derived_column_list", "simple_ident_list_with_parens",
  "simple_ident_list", "opt_distinct", "select_expr_list", "projection",
  "from_list", "table_factor", "table_factor_non_join",
  "opt_for_system_time", "opt_with_table_hint",
  "opt_simple_ident_list_with_parens", "column_ref", "relation_factor",
  "joined_table", "join_type", "join_hint", "join_outer", "expr_list",
  "expr_const", "simple_expr", "arith_expr", "expr", "in_expr",
  "case_expr", "case_arg", "when_clause_list", "when_clause",
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
  "relation_name", "column_label", "collate_clause", "name_r", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
      37,   291,    94,   292,    40,    41,    46,   293,   294,   295,
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
     406,   407,   408,    59,    44
};
# endif

#define YYPACT_NINF -505

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-505)))

#define YYTABLE_NINF -296

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     184,    68,    -6,   -29,   -14,  4737,  4851,    98,    46,   -53,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,    48,  -505,
      -8,    90,    99,  4737,  4737,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,    54,  -505,  -505,
    -505,   154,  4737,  -505,    51,   166,  -505,  -505,   184,   -14,
     -14,   -14,   161,   144,  -505,    48,  -505,  -505,    79,   138,
    1686,  2006,  3130,  -505,  4737,  4737,   234,  -505,  -505,    -8,
      -8,    -8,  2006,   -99,  -505,   144,  2006,  -505,  2535,   148,
    2006,  -505,  -505,  -505,    94,  -505,  -505,  -505,  -505,  -505,
    -505,   218,   277,  2006,  2166,  2166,  -505,  1526,  2006,   282,
     286,   302,   308,  -505,  -505,   320,   323,   326,  -505,  -505,
    -505,  -505,   191,  -505,   332,  -505,  -505,   369,  2421,  -505,
    -505,  -505,   341,  -505,   359,  -505,  -505,  -505,   368,    70,
      79,   258,  1070,  3247,   393,  -505,   396,   281,   320,   447,
     447,  -505,  -505,   312,   748,   354,   364,  -505,  1070,  -505,
    -505,   284,  -505,  -505,   430,   436,   595,   570,   570,    43,
     437,  1070,   327,  2006,  2006,  2006,   480,  -505,  2006,   210,
     398,  1686,  1846,  2166,  2166,  2166,  2166,  2166,  2166,  2166,
    -505,  4737,  2006,  2006,    40,  1206,  1206,  1206,  1206,  1206,
    1206,  2006,  2006,  2166,   450,   279,  3363,  -505,  -505,  -505,
    1366,   457,  2006,  2774,  -505,  2006,  4737,   449,  3480,  -505,
    4737,  -505,  2006,  -505,  -505,  -505,  -505,  4737,  2006,  -505,
    -505,  -505,  2006,   421,   327,   874,   459,   403,   460,   367,
    -505,   456,     9,     9,   110,   469,  3594,    79,  -505,  -505,
     473,   570,   570,   478,   478,   478,   478,  -505,  -505,  1119,
     595,  2006,  2166,   450,  -505,  -505,  -505,   603,   320,   603,
     320,   603,   320,   603,   320,   603,   320,   603,   320,   631,
     428,   470,  1526,  -505,  -505,  -505,  -505,  -505,    37,  -505,
     476,  -505,  -505,   934,  2006,   402,   962,  -505,  3711,   212,
    -505,  -505,  4737,  4737,   479,  -505,  -505,  -505,  -505,   622,
    2006,   444,  -505,  2280,  -505,  4737,  -505,  2006,  2006,   406,
       7,   397,   409,  -505,  -505,  -505,   498,  -505,  2649,  3825,
    -505,    42,  -505,  -505,  -505,   455,  -505,   428,   499,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  2166,   504,  -505,  -505,
    -505,   402,   402,   987,  -505,  -505,  4737,   505,  2899,  -505,
    -505,  4737,  2006,  1070,  -505,  -505,   448,   511,  -505,    63,
     105,   512,  -505,   513,   515,   438,   516,  -505,  -505,   384,
     390,   106,   520,   521,  -505,   522,  -505,     4,    26,   533,
    -505,   160,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,    19,  -505,   568,   536,  1041,   231,  -505,    14,
     452,   125,  -505,  -505,  -505,  3013,   557,   539,  4737,   166,
    -505,   571,   467,  -505,  3594,   467,   405,   467,  3594,   574,
    3939,   534,   500,  2166,   369,  -505,  -505,  -505,   402,   547,
    4053,  -505,  4737,   293,  -505,  1070,   484,   598,   599,   486,
     561,   610,   525,   623,   637,   638,   663,  -505,   664,   627,
    -505,   528,  -505,   -12,   -13,   168,   668,   563,   634,   637,
     674,  4737,   675,   535,   537,   677,   538,   542,   684,  -505,
     646,  -505,   553,  -505,  -505,  -505,  -505,  -505,   199,   648,
     673,   676,   679,   680,   681,  -505,   166,  -505,  -505,  3594,
    -505,  -505,  -505,    78,  -505,   682,  -505,  -505,  3594,  4737,
    -505,  -505,   -14,  2006,  -505,   369,  -505,  4167,  -505,   305,
     652,  4281,   661,   665,   666,   662,   704,   667,   669,   709,
     351,   670,   -24,   -22,   671,   712,   391,   713,   714,   678,
     716,   609,   685,   686,   688,   719,   689,   -19,   690,   691,
     564,   575,   693,   577,   578,   697,   720,  4737,  -505,   698,
    -505,    12,    17,    20,    39,    10,  -505,  -505,  -505,  2006,
     166,  -505,  3594,  -505,   208,  -505,  -505,  2006,  1070,  -505,
    -505,  4395,  4509,  -505,   331,   739,  -505,  -505,   637,   700,
    -505,   637,   701,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
     134,  -505,  -505,   742,  -505,   746,  -505,   -16,   708,  -505,
    -505,   710,   711,   752,   715,   717,   753,  -505,   637,   721,
    -505,  -505,   757,   619,   299,  -505,  -505,   311,  -505,  -505,
    -505,   723,   568,  -505,   175,   633,   176,   178,   653,   179,
     181,   654,   245,   248,   655,   256,   642,   657,   703,   257,
    1070,  -505,  -505,  2006,   166,  -505,  -505,  -505,  -505,  -505,
    -505,  4623,   744,   747,  -505,   750,  -505,  -505,   756,   758,
    -505,   788,   789,   606,  -505,   759,  -505,   637,   760,   761,
    -505,   762,  4737,   651,   672,   683,   695,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,  -505,  1070,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,  -505,   763,   764,  -505,   765,  -505,  -505,  -505,
    -505,   636,   658,   659,   660,  -505,  -505,  -505,  -505,  -505,
    -505,  -505
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     0,     0,    67,     0,     0,     0,     0,     3,
       6,     7,    11,    10,     9,     8,    30,    24,    46,    29,
       0,    30,     0,     0,     0,    68,    69,    36,   393,   400,
     205,   401,   402,   403,   404,   405,   213,   306,   217,   406,
     399,   214,   307,   407,   397,   408,   398,   206,   207,   308,
     305,   409,   410,   411,   412,   413,   414,   415,   416,   216,
     417,   418,   419,   420,   218,   421,   422,   209,   210,   208,
     423,   424,   211,   212,   425,   304,   426,     0,   394,   395,
     396,   106,   417,    57,    59,    62,     1,     2,     5,    67,
      67,    67,     0,    37,    47,    46,    26,    25,    41,     0,
       0,     0,     0,    58,     0,     0,     0,    63,     4,     0,
       0,     0,     0,     0,    27,    37,     0,    19,     0,     0,
       0,    12,    16,    13,     0,   130,   131,   133,   132,   134,
     135,     0,     0,     0,     0,     0,    75,     0,   188,   402,
       0,     0,   227,   229,   136,     0,     0,     0,   231,   232,
     142,    35,    70,   137,     0,   138,   144,   154,    72,   140,
     141,   198,   394,   197,   395,   196,   195,   155,   396,    89,
      41,    21,    23,     0,   107,    60,     0,    65,     0,    32,
      34,    33,    48,    49,    52,     0,    38,    28,    42,    17,
      18,   128,    15,    14,     0,     0,   173,   145,   146,   142,
       0,   189,     0,     0,     0,     0,     0,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     391,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,   156,   390,
       0,     0,     0,     0,    20,     0,     0,   109,     0,    64,
       0,    61,     0,    53,    54,    51,    40,     0,     0,   223,
     222,   139,     0,   193,   190,     0,     0,     0,     0,     0,
     240,     0,     0,     0,     0,     0,     0,    41,    71,   219,
       0,   147,   148,   149,   150,   151,   153,   152,   392,   172,
     171,     0,     0,     0,   386,   388,   387,   157,     0,   159,
       0,   161,     0,   165,     0,   163,     0,   167,     0,   184,
     169,     0,     0,   185,   182,   176,   174,   178,     0,    74,
       0,   384,   385,     0,     0,     0,     0,    91,     0,    90,
      22,   113,     0,     0,   108,    66,    50,    39,   129,     0,
       0,     0,   191,     0,   226,     0,   228,     0,     0,     0,
       0,     0,     0,   242,   241,   238,     0,   239,     0,     0,
      43,    76,    78,    85,    79,    44,   220,   170,     0,   183,
     158,   160,   162,   166,   164,   168,     0,     0,   177,   175,
     179,   204,   200,     0,   215,   221,     0,   109,     0,   111,
     112,     0,     0,   194,   187,   337,   401,   358,   309,   345,
     343,   354,   310,   333,   330,     0,   339,   336,   335,   407,
       0,   364,   373,   327,   340,   418,   334,   316,   322,   424,
     275,     0,   272,   273,   274,   271,   290,   288,   289,   287,
     323,   324,   283,   286,   285,     0,     0,     0,   244,     0,
       0,     0,   245,   243,   234,    30,     0,    79,     0,    87,
     389,     0,   126,   125,     0,   126,     0,   126,     0,     0,
      86,     0,    55,     0,   180,   186,   203,   199,   202,   113,
       0,    93,     0,    92,   110,   192,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   341,     0,   303,
     291,     0,   293,   300,   362,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     278,   279,     0,   282,   284,   225,   230,   237,     0,     0,
       0,     0,     0,     0,     0,   114,    87,    88,    84,     0,
     127,   125,   124,     0,   125,     0,   125,    77,     0,     0,
      80,    86,    67,     0,    31,   181,   201,     0,    97,    96,
     112,     0,   356,     0,     0,   352,     0,     0,   350,     0,
     377,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   371,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   236,     0,
     235,     0,     0,     0,     0,     0,    83,   119,   121,     0,
       0,   122,     0,   123,     0,    86,    82,     0,    56,   105,
     104,     0,     0,    95,    94,     0,   357,   344,     0,     0,
     342,     0,     0,   378,   379,   383,   381,   382,   380,   376,
     375,   353,   332,     0,   329,     0,   338,     0,   298,   292,
     296,     0,     0,     0,     0,   369,     0,   363,     0,     0,
     372,   326,     0,     0,   313,   314,   315,   319,   320,   321,
     348,     0,   281,   233,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     116,   118,   120,     0,     0,    81,    45,   101,   100,   103,
     102,     0,     0,     0,   347,     0,   346,   374,     0,     0,
     302,     0,     0,   299,   361,     0,   359,     0,     0,     0,
     367,     0,     0,     0,     0,     0,     0,   277,   280,   270,
     255,   260,   265,   250,   267,   252,   257,   262,   247,   268,
     253,   258,   263,   248,   269,   254,   259,   264,   249,   251,
     256,   266,   261,   246,   115,   117,    99,    98,   355,   351,
     349,   331,   328,     0,     0,   366,     0,   365,   370,   325,
     276,     0,     0,     0,     0,   301,   297,   368,   311,   312,
     317,   318
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -505,  -505,   725,  -505,  -505,  -505,  -505,  -505,   692,  -505,
    -505,   572,  -505,  -505,   749,    27,   183,  -505,  -505,  -505,
     724,  -160,  -505,  -505,   728,  -203,   567,  -505,  -505,  -505,
    -505,    23,  -505,  -505,   -83,    -3,   -86,   604,  -505,   366,
    -345,  -505,  -505,  -504,   304,  -505,    15,   474,   372,  -253,
     -73,  -129,  -505,  -505,   -94,   -51,   532,  -505,  -505,   580,
    -505,  -505,  -505,  -505,    29,  -505,   342,  -505,  -505,  -278,
    -267,   558,  -505,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -505,    -5,  -505,  -505,  -505,  -505,  -505,  -505,  -505,
    -505,  -475,   204,  -505,  -505,   432,  -342,   613,  -423,   590
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,     8,     9,    10,    11,    12,   121,   122,    13,
      14,   170,   171,    15,   150,    22,    18,    19,   210,   100,
     114,   117,   277,   462,    93,    94,   182,   183,   255,   544,
      20,    83,    84,   106,   527,   176,    27,   151,   152,   360,
     361,   362,   460,   540,   528,   153,   154,   364,   459,   532,
     531,   190,   155,   156,   157,   191,   314,   159,   202,   263,
     264,   341,   160,   161,   162,   163,   164,   165,   166,   167,
     275,   353,   421,   422,   423,   424,   425,   426,   490,   491,
     639,   492,   168,   427,   428,   429,   430,   431,   432,   433,
     434,   561,   629,   630,   324,   298,   449,   237,   238,   169
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      80,    80,   107,   109,   110,   111,   274,   356,   200,   513,
     244,   514,   439,   446,   349,   676,   124,   664,    80,    80,
      77,   632,   667,   634,   576,   670,   651,    17,   185,   700,
     221,   568,   567,    25,    78,    78,     1,   606,    98,    99,
     197,   198,   350,   378,   673,   379,   380,   384,   502,   158,
     172,   186,    78,    78,   451,   452,   453,   454,   455,   456,
     457,   184,   -30,   -30,   -30,   188,    26,    89,    90,    91,
     505,    24,   291,   292,   293,   266,   440,    80,   351,   677,
     512,   665,   196,   280,    23,   678,   668,   201,    96,   671,
     451,   452,   453,   454,   455,   456,   457,    80,    86,    80,
      80,   685,   520,   466,   467,   103,   526,   478,   674,   533,
      88,    78,     1,    80,  -106,    17,   243,   365,   541,   281,
     282,   283,   284,   285,   286,   287,   123,   175,     4,   338,
      87,    78,   -30,    78,    78,    96,  -295,   521,     1,   311,
     633,   569,   635,   693,    97,   652,   695,    78,   701,   481,
     496,   193,   265,    80,   267,   355,   441,   269,   352,   679,
     158,   666,   -30,   503,   504,   479,   669,    92,    80,   672,
     519,   289,   290,   709,   297,   299,   301,   303,   305,   307,
     309,   310,   118,   377,   597,   506,   507,    78,   675,   323,
     546,   326,   101,   604,   172,   599,   623,   605,   368,   624,
     102,   184,    78,    95,     4,   509,   458,   482,   497,   510,
     105,   339,   570,   523,   119,   104,    80,   480,   112,   437,
     451,   452,   453,   454,   455,   456,   457,     6,     1,   600,
       4,    80,   756,   113,   518,   272,   288,   116,    80,   718,
     367,    80,   273,    80,   588,    80,   120,   335,   524,   628,
      78,   589,    80,     6,   337,   270,  -107,   682,   388,   483,
     498,     2,   194,   719,   722,    78,   724,   727,   511,   729,
     571,    80,    78,   383,     4,    78,   517,    78,   598,    78,
       3,   601,   464,   603,   178,   315,    78,   316,   317,   393,
     120,   363,   179,   180,   181,   221,   436,     6,   720,   723,
     189,   725,   728,   318,   730,    78,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
       4,   195,   572,    80,   272,   683,   203,    80,    80,    92,
     204,   273,   271,   732,     5,   272,   734,  -108,    80,   551,
      80,   475,   273,     6,   737,   742,   205,    79,    79,  -111,
      92,   611,   206,    80,    80,   211,   272,    78,   420,   684,
     435,    78,    78,   273,     1,    79,    79,   208,   733,   545,
     209,   735,    78,   363,    78,  -110,   212,   691,   221,   738,
     743,    80,   534,    80,   536,   240,    80,    78,    78,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   241,   493,   213,   214,   215,   216,   217,
     218,   219,   242,   623,   221,    78,   624,    78,   452,   453,
      78,   455,   245,   457,    79,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   248,
      80,   249,   625,    80,    79,   250,    79,    79,   258,    80,
     494,   495,   626,    80,   627,    80,   607,    37,   713,   714,
      79,   233,   234,   235,    37,    80,   628,    80,    91,   363,
     715,   716,   256,   363,    78,   259,   252,    78,   686,    42,
     257,   260,   261,    78,   262,   268,    42,    78,   276,    78,
      49,    50,   608,   376,   312,   332,    80,    49,    50,    78,
      79,    78,   325,   340,   344,   346,   213,   214,   215,   216,
     217,   218,   219,   348,   357,    79,   578,   681,   366,   489,
     219,   381,   463,   147,    80,   391,   638,   394,   442,   438,
      78,   347,   443,    80,    80,   213,   214,   215,   216,   217,
     218,   219,    80,   444,   363,    75,    80,   461,   680,   465,
     476,   470,    75,   363,   345,   477,   484,   485,    78,   486,
     488,   640,   487,    79,   499,   500,   501,    78,    78,   451,
     452,   453,   454,   455,   456,   457,    78,   508,    79,   221,
      78,   515,    80,   522,   525,    79,   529,   530,    79,   538,
      79,   542,    79,   547,   543,    81,    85,    80,   552,    79,
     555,   745,   662,   553,   554,   556,    80,    80,   215,   216,
     217,   218,   219,    81,    81,   557,    78,   363,    79,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,    78,   744,   221,   231,   232,   233,   234,   235,   558,
      78,    78,   560,   562,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   300,   302,
     304,   306,   308,   232,   233,   234,   235,   559,   563,   564,
      79,   565,    85,   573,    79,    79,   566,   574,   575,   577,
     579,   580,   582,   581,   583,    79,    80,    79,   584,   585,
     586,   587,   174,   590,    85,   177,   591,   602,   612,   592,
      79,    79,   593,   594,   595,   615,   618,    80,   177,   619,
     616,   617,   620,   621,   622,   631,   636,   637,   641,   642,
      78,   644,   643,   645,   649,   661,   655,   760,    79,   646,
      79,   647,   648,    79,   650,   653,   654,   656,   657,   658,
     659,    78,   660,   663,   692,   694,   696,   698,   239,    16,
      21,   699,   702,   712,  -294,   703,   704,   705,   708,   221,
     706,   707,   711,   247,   721,   739,   710,   392,   717,    16,
     222,   223,   224,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   726,   731,   736,    79,   740,   748,
      79,   741,   749,   753,   754,   750,    79,   761,   768,   253,
      79,   751,    79,   752,   755,   757,   758,   759,   765,   766,
     767,    81,    79,   108,    79,   278,   192,   330,   762,   336,
     769,   770,   771,   115,   537,   369,   239,   254,   535,   763,
     596,   354,   447,   329,   697,     0,   331,    16,   334,   187,
     177,   764,     0,    79,   342,     0,     0,   177,    16,   319,
       0,     0,     0,     0,     0,     0,     0,     0,    16,    16,
      16,     0,     0,     0,     0,     0,    81,    21,     0,     0,
       0,    79,     0,    16,     0,     0,     0,     0,     0,     0,
      79,    79,     0,     0,     0,   221,   199,     0,     0,    79,
       0,     0,     0,    79,   207,     0,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
       0,     0,     0,     0,     0,     0,     0,     0,   387,     0,
       0,     0,   389,   390,   343,     0,     0,   251,     0,    79,
       0,     0,     0,    81,     0,    81,     0,     0,     0,     0,
       0,     0,     0,     0,    79,   221,     0,     0,    81,   450,
       0,     0,     0,    79,    79,     0,   222,   223,   224,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
       0,     0,     0,   221,     0,     0,   469,     0,   473,   382,
       0,   474,     0,   313,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   221,     0,
       0,     0,     0,     0,     0,     0,     0,   385,     0,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,     0,     0,   359,     0,     0,     0,     0,
       0,     0,   468,    79,     0,   450,     0,     0,   450,     0,
       0,     0,   313,     0,    81,     0,     0,   370,    81,   371,
     450,   372,   221,   373,    79,   374,     0,   375,     0,     0,
     549,   199,   550,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,     0,
       0,   221,     0,     0,     0,     0,   516,     0,     0,     0,
       0,    81,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,     0,   445,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    81,
       0,     0,     0,     0,     0,     0,     0,     0,    81,   450,
       0,     0,     0,     0,     0,     0,     0,   610,     0,     0,
       0,   614,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    81,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    81,     0,     0,     0,     0,     0,     0,     0,
       0,   688,   690,   359,     0,     0,     0,   359,     0,    28,
     125,   126,   127,   128,   129,     0,   130,     0,     0,     0,
       0,     0,   131,     0,   132,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,     0,
     137,     0,     0,   294,   295,    29,     0,     0,    30,     0,
      31,     0,     0,     0,   138,   139,     0,     0,    33,     0,
     140,    34,   141,    35,    36,     0,   142,   143,   359,    37,
       0,   747,   144,     0,    38,     0,     0,   359,     0,     0,
       0,     0,   145,     0,    39,     0,     0,    40,     0,    41,
       0,    42,    81,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,   146,     0,
      52,    53,     0,     0,    54,     0,     0,   147,    55,    56,
      57,    58,    59,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     0,   148,     0,     0,   296,    67,    68,    69,
     149,   359,     0,     0,     0,    70,     0,     0,     0,    71,
       0,    72,    73,     0,     0,     0,    74,    75,    76,    28,
     125,   126,   127,   128,   129,     0,   130,     0,     0,     0,
       0,     0,   131,     0,   132,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,   320,     0,     0,     0,     0,     0,
     137,     0,     0,   321,     0,    29,     0,     0,    30,     0,
      31,     0,     0,     0,   138,   139,     0,     0,    33,     0,
     140,    34,   141,    35,    36,     0,   142,   143,     0,    37,
       0,     0,   144,     0,    38,     0,   322,     0,     0,     0,
       0,     0,   145,     0,    39,     0,     0,    40,     0,    41,
       0,    42,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,   146,     0,
      52,    53,     0,     0,    54,     0,     0,   147,    55,    56,
      57,    58,    59,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     0,   148,     0,     0,     0,    67,    68,    69,
     149,     0,     0,     0,     0,    70,     0,     0,     0,    71,
       0,    72,    73,     0,     0,     0,    74,    75,    76,    28,
     125,   126,   127,   128,   129,     0,   130,     0,     0,     0,
       0,     0,   131,     0,   132,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,     0,
     137,     0,     0,     0,     0,    29,     0,     0,    30,     0,
      31,     0,     0,     0,   138,   139,     0,     0,    33,     0,
     140,    34,   141,    35,    36,     0,   142,   143,     0,    37,
       0,     0,   144,     0,    38,     0,     0,     0,     0,     0,
       0,     0,   145,     0,    39,     0,     0,    40,     0,    41,
       0,    42,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,   146,     0,
      52,    53,     0,     0,    54,     0,     0,   147,    55,    56,
      57,    58,    59,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     4,   148,     0,     0,     0,    67,    68,    69,
     149,     0,     0,     0,     0,    70,     0,     0,     0,    71,
       0,    72,    73,     0,     0,     6,    74,    75,    76,    28,
     125,   126,   127,   128,   129,     0,   130,     0,     0,     0,
       0,     0,   131,     0,   132,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,   136,     0,     0,     0,     0,     0,
     137,     0,     0,     0,     0,    29,     0,     0,    30,     0,
      31,     0,     0,     0,   138,   139,     0,     0,    33,     0,
     140,    34,   141,    35,    36,     0,   142,   143,     0,    37,
       0,     0,   144,     0,    38,     0,     0,     0,     0,     0,
       0,     0,   145,     0,    39,     0,     0,    40,     0,    41,
       0,    42,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,   146,     0,
      52,    53,     0,     0,    54,     0,     0,   147,    55,    56,
      57,    58,    59,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     0,   148,     0,     0,     0,    67,    68,    69,
     149,     0,     0,     0,     0,    70,     0,     0,     0,    71,
       0,    72,    73,     0,     0,     0,    74,    75,    76,    28,
     125,   126,   127,   128,   129,     0,   130,     0,     0,     0,
       0,     0,   131,     0,   132,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,     0,
     137,   279,     0,     0,     0,    29,     0,     0,    30,     0,
      31,     0,     0,     0,   138,   139,     0,     0,    33,     0,
     140,    34,   141,    35,    36,     0,   142,   143,     0,    37,
       0,     0,   144,     0,    38,     0,     0,     0,     0,     0,
       0,     0,   145,     0,    39,     0,     0,    40,     0,    41,
       0,    42,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,   146,     0,
      52,    53,     0,     0,    54,     0,     0,   147,    55,    56,
      57,    58,    59,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     0,   148,     0,     0,     0,    67,    68,    69,
     149,     0,     0,     0,     0,    70,     0,     0,     0,    71,
       0,    72,    73,     0,     0,     0,    74,    75,    76,    28,
     125,   126,   127,   128,   129,     0,   130,     0,     0,     0,
       0,     0,   131,     0,   132,     0,     0,     0,     0,     0,
     133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,     0,
     137,     0,     0,     0,     0,    29,     0,     0,    30,     0,
      31,     0,     0,     0,   138,   139,     0,     0,    33,     0,
     140,    34,   141,    35,    36,     0,   142,   143,     0,    37,
       0,     0,   144,     0,    38,     0,     0,     0,     0,     0,
       0,     0,   145,     0,    39,     0,     0,    40,     0,    41,
       0,    42,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,   146,     0,
      52,    53,     0,     0,    54,     0,     0,   147,    55,    56,
      57,    58,    59,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     0,   148,     0,     0,     0,    67,    68,    69,
     149,     0,     0,     0,     0,    70,     0,     0,     0,    71,
       0,    72,    73,     0,     0,     0,    74,    75,    76,    28,
     125,   126,   127,   128,   129,     0,   130,     0,     0,     0,
       0,     0,   131,     0,   132,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   134,   135,     0,     0,     0,     0,     0,     0,
     137,     0,     0,     0,     0,    29,     0,     0,    30,     0,
      31,     0,     0,     0,   138,   139,     0,     0,    33,     0,
     140,    34,   141,    35,    36,     0,   142,   143,     0,    37,
       0,     0,   144,     0,    38,     0,     0,     0,     0,     0,
       0,     0,   145,     0,    39,     0,     0,    40,     0,    41,
       0,    42,     0,     0,     0,    43,     0,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,   146,     0,
      52,    53,     0,    28,    54,     0,     0,     0,    55,    56,
      57,    58,    59,     0,     0,    60,    61,    62,    63,    64,
      65,    66,     0,   148,     0,     0,     0,    67,    68,    69,
     149,     0,     0,     0,     0,    70,     0,     0,     0,    71,
       0,    72,    73,     0,     0,     0,    74,    75,    76,    29,
       0,     0,    30,   395,   396,   397,   398,     0,     0,    32,
     399,   400,    33,   401,     0,    34,     0,    35,    36,     0,
       0,     0,   402,    37,   403,   404,     0,     0,    38,     0,
       0,   405,     0,     0,     0,     0,     0,   406,    39,     0,
       0,    40,     0,    41,     0,    42,     0,   407,   408,   409,
       0,    44,    45,    46,    47,    48,    49,    50,    51,   410,
     411,   412,     0,   413,    52,    53,     0,     0,    54,     0,
       0,     0,    55,    56,    57,    58,    59,     0,   414,    60,
     415,    62,    63,    64,    65,    66,     0,     0,     0,   416,
       0,    67,    68,    69,    28,   220,   417,   418,     0,    70,
       0,     0,   221,   419,     0,    72,    73,     0,     0,     0,
      74,    75,    76,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      29,   236,     0,    30,     0,    31,     0,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,     0,    35,    36,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,    40,     0,    41,     0,    42,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,    52,    53,     0,    28,    54,
       0,     0,     0,    55,    56,    57,    58,    59,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,     0,     0,     0,
      70,     0,     0,     0,    71,     0,    72,    73,     0,     1,
       0,    74,    75,    76,    29,     0,     0,    30,     0,    31,
       0,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,     0,    35,    36,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,    40,     0,    41,     0,
      42,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,    52,
      53,     0,    28,    54,     0,     0,     0,    55,    56,    57,
      58,    59,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     4,     0,     0,     0,     0,    67,    68,    69,     0,
       0,     0,     0,     0,    70,     0,     0,     0,    71,     0,
      72,    73,     0,   358,     6,    74,    75,    76,    29,     0,
       0,    30,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,     0,    35,    36,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
      40,     0,    41,     0,    42,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,    52,    53,     0,     0,    54,     0,     0,
       0,    55,    56,    57,    58,    59,     0,    28,    60,    61,
      62,    63,    64,    65,    66,     4,     0,     0,     0,     0,
      67,    68,    69,     0,     0,     0,     0,     0,    70,     0,
       0,     0,    71,     0,    72,    73,     0,     0,     6,    74,
      75,    76,   327,     0,     0,     0,     0,     0,     0,     0,
     328,     0,     0,    29,     0,     0,    30,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,    34,
       0,    35,    36,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,    40,     0,    41,     0,    42,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,    52,    53,
       0,     0,    54,     0,     0,     0,    55,    56,    57,    58,
      59,     0,    28,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,    67,    68,    69,     0,     0,
       0,     0,     0,    70,     0,     0,     0,    71,     0,    72,
      73,     0,     0,     0,    74,    75,    76,   471,     0,     0,
       0,     0,     0,     0,     0,   472,     0,     0,    29,     0,
       0,    30,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,     0,    35,    36,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
      40,     0,    41,     0,    42,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,    52,    53,     0,    28,    54,     0,     0,
       0,    55,    56,    57,    58,    59,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
      67,    68,    69,     0,     0,     0,     0,     0,    70,     0,
       0,     0,    71,     0,    72,    73,     0,     0,    96,    74,
      75,    76,    29,   448,     0,    30,     0,    31,     0,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,     0,
      35,    36,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,    40,     0,    41,     0,    42,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,    52,    53,     0,
       0,    54,     0,    28,     0,    55,    56,    57,    58,    59,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,     0,
       0,     0,    70,     0,     0,     0,    71,     0,    72,    73,
       0,     0,     0,    74,    75,    76,   173,     0,     0,    29,
       0,     0,    30,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,    34,     0,    35,    36,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,    40,     0,    41,     0,    42,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,    52,    53,     0,     0,    54,     0,
      28,     0,    55,    56,    57,    58,    59,     0,     0,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,    67,    68,    69,     0,     0,     0,     0,     0,    70,
       0,     0,     0,    71,     0,    72,    73,     0,     0,     0,
      74,    75,    76,   246,     0,     0,    29,     0,     0,    30,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    33,
       0,     0,    34,     0,    35,    36,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,    40,     0,
      41,     0,    42,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,    52,    53,     0,     0,    54,    28,   220,     0,    55,
      56,    57,    58,    59,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,    67,    68,
      69,     0,     0,     0,     0,     0,    70,     0,     0,     0,
      71,     0,    72,    73,     0,     0,     0,    74,    75,    76,
       0,     0,    29,     0,     0,    30,     0,    31,     0,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,     0,
      35,    36,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,    40,     0,    41,     0,    42,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,    52,    53,     0,
       0,    54,     0,    28,     0,    55,    56,    57,    58,    59,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,     0,
       0,     0,    70,     0,     0,     0,    71,     0,    72,    73,
       0,     0,     0,    74,    75,    76,   333,     0,     0,    29,
       0,     0,    30,     0,    31,     0,     0,     0,     0,    32,
       0,     0,    33,     0,     0,    34,     0,    35,    36,     0,
       0,     0,     0,    37,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,    40,     0,    41,     0,    42,     0,     0,     0,    43,
       0,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,    52,    53,     0,    28,    54,     0,
       0,     0,    55,    56,    57,    58,    59,     0,     0,    60,
      61,    62,    63,    64,    65,    66,     0,     0,     0,     0,
       0,    67,    68,    69,     0,     0,     0,     0,     0,    70,
       0,     0,     0,    71,     0,    72,    73,     0,   358,     0,
      74,    75,    76,    29,     0,     0,    30,     0,    31,     0,
       0,     0,     0,    32,     0,     0,    33,     0,     0,    34,
       0,    35,    36,     0,     0,     0,     0,    37,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,     0,     0,    40,     0,    41,     0,    42,
       0,     0,     0,    43,     0,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,    52,    53,
       0,     0,    54,     0,    28,     0,    55,    56,    57,    58,
      59,     0,     0,    60,    61,    62,    63,    64,    65,    66,
       0,     0,     0,     0,     0,    67,    68,    69,     0,     0,
       0,     0,     0,    70,     0,     0,     0,    71,     0,    72,
      73,     0,     0,     0,    74,    75,    76,   386,     0,     0,
      29,     0,     0,    30,     0,    31,     0,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,     0,    35,    36,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,    40,     0,    41,     0,    42,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,    52,    53,     0,    28,    54,
       0,     0,     0,    55,    56,    57,    58,    59,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,     0,     0,     0,
      70,     0,     0,     0,    71,     0,    72,    73,     0,     0,
       0,    74,    75,    76,    29,   448,     0,    30,     0,    31,
       0,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,     0,    35,    36,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,    40,     0,    41,     0,
      42,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,    52,
      53,     0,    28,    54,     0,     0,     0,    55,    56,    57,
      58,    59,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,    67,    68,    69,     0,
       0,     0,     0,     0,    70,     0,     0,     0,    71,     0,
      72,    73,     0,     0,     0,    74,    75,    76,    29,   539,
       0,    30,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,     0,    35,    36,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
      40,     0,    41,     0,    42,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,    52,    53,     0,    28,    54,     0,     0,
       0,    55,    56,    57,    58,    59,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
      67,    68,    69,     0,     0,     0,     0,     0,    70,     0,
       0,   548,    71,     0,    72,    73,     0,     0,     0,    74,
      75,    76,    29,     0,     0,    30,     0,    31,     0,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,     0,
      35,    36,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,    40,     0,    41,     0,    42,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,    52,    53,     0,
      28,    54,     0,     0,     0,    55,    56,    57,    58,    59,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,     0,
       0,     0,    70,     0,     0,   609,    71,     0,    72,    73,
       0,     0,     0,    74,    75,    76,    29,     0,     0,    30,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    33,
       0,     0,    34,     0,    35,    36,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,    40,     0,
      41,     0,    42,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,    52,    53,     0,    28,    54,     0,     0,     0,    55,
      56,    57,    58,    59,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,    67,    68,
      69,     0,     0,     0,     0,     0,    70,     0,     0,   613,
      71,     0,    72,    73,     0,     0,     0,    74,    75,    76,
      29,     0,     0,    30,     0,    31,     0,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,     0,    35,    36,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,    40,     0,    41,     0,    42,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,    52,    53,     0,    28,    54,
       0,     0,     0,    55,    56,    57,    58,    59,     0,     0,
      60,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,     0,     0,     0,
      70,     0,     0,   687,    71,     0,    72,    73,     0,     0,
       0,    74,    75,    76,    29,     0,     0,    30,     0,    31,
       0,     0,     0,     0,    32,     0,     0,    33,     0,     0,
      34,     0,    35,    36,     0,     0,     0,     0,    37,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,     0,     0,    40,     0,    41,     0,
      42,     0,     0,     0,    43,     0,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,    52,
      53,     0,    28,    54,     0,     0,     0,    55,    56,    57,
      58,    59,     0,     0,    60,    61,    62,    63,    64,    65,
      66,     0,     0,     0,     0,     0,    67,    68,    69,     0,
       0,     0,     0,     0,    70,     0,     0,   689,    71,     0,
      72,    73,     0,     0,     0,    74,    75,    76,    29,     0,
       0,    30,     0,    31,     0,     0,     0,     0,    32,     0,
       0,    33,     0,     0,    34,     0,    35,    36,     0,     0,
       0,     0,    37,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,     0,
      40,     0,    41,     0,    42,     0,     0,     0,    43,     0,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,    52,    53,     0,    28,    54,     0,     0,
       0,    55,    56,    57,    58,    59,     0,     0,    60,    61,
      62,    63,    64,    65,    66,     0,     0,     0,     0,     0,
      67,    68,    69,     0,     0,     0,     0,     0,    70,     0,
       0,   746,    71,     0,    72,    73,     0,     0,     0,    74,
      75,    76,    29,     0,     0,    30,     0,    31,     0,     0,
       0,     0,    32,     0,     0,    33,     0,     0,    34,     0,
      35,    36,     0,     0,     0,     0,    37,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,     0,     0,    40,     0,    41,     0,    42,     0,
       0,     0,    43,     0,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,    52,    53,     0,
      28,    54,     0,     0,     0,    55,    56,    57,    58,    59,
       0,     0,    60,    61,    62,    63,    64,    65,    66,     0,
       0,     0,     0,     0,    67,    68,    69,     0,     0,     0,
       0,     0,    70,     0,     0,     0,    71,     0,    72,    73,
       0,     0,     0,    74,    75,    76,    29,     0,     0,    30,
       0,    31,     0,     0,     0,     0,    32,     0,     0,    33,
       0,     0,    34,     0,    35,    36,     0,     0,     0,     0,
      37,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,     0,    40,     0,
      41,     0,    42,     0,     0,     0,    43,     0,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,    52,    53,     0,    28,    54,     0,     0,     0,    55,
      56,    57,    58,    59,     0,     0,    60,    61,    62,    63,
      64,    65,    66,     0,     0,     0,     0,     0,    67,    68,
      69,     0,     0,     0,     0,     0,    70,     0,     0,     0,
      71,     0,    72,    73,     0,     0,     0,    74,    75,    76,
      29,     0,     0,    30,     0,    31,     0,     0,     0,     0,
      32,     0,     0,    33,     0,     0,    34,     0,    35,    36,
       0,     0,     0,     0,    37,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
       0,     0,    40,     0,    41,     0,    42,     0,     0,     0,
      43,     0,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,    52,    53,     0,     0,    54,
       0,     0,     0,    55,    56,    57,    58,    59,     0,     0,
      82,    61,    62,    63,    64,    65,    66,     0,     0,     0,
       0,     0,    67,    68,    69,     0,     0,     0,     0,     0,
      70,     0,     0,     0,    71,     0,    72,    73,     0,     0,
       0,    74,    75,    76
};

static const yytype_int16 yycheck[] =
{
       5,     6,    85,    89,    90,    91,   209,   274,   137,   432,
     170,   434,     5,   358,     5,     5,    99,     5,    23,    24,
       5,    45,     5,    45,   499,     5,    45,     0,   127,    45,
      11,    44,    44,    47,     5,     6,    44,   541,    23,    24,
     134,   135,    33,     6,     5,     8,     9,   325,    44,   100,
     101,   150,    23,    24,    12,    13,    14,    15,    16,    17,
      18,   112,    19,    20,    21,   116,    80,    19,    20,    21,
      44,   100,    32,    33,    34,   204,    69,    82,    69,    69,
      61,    69,   133,   212,    90,    75,    69,   138,    45,    69,
      12,    13,    14,    15,    16,    17,    18,   102,     0,   104,
     105,   605,    88,   381,   382,    82,   448,    44,    69,   454,
     163,    82,    44,   118,    44,    88,    46,   277,   460,   213,
     214,   215,   216,   217,   218,   219,    99,   104,   136,   258,
      84,   102,    89,   104,   105,    45,   148,   123,    44,   233,
     164,   154,   164,   618,    45,   164,   621,   118,   164,    44,
      44,   124,   203,   158,   205,    45,   149,   208,   149,   149,
     211,   149,   119,   159,   160,   102,   149,   119,   173,   149,
     437,   222,   223,   648,   225,   226,   227,   228,   229,   230,
     231,   232,    44,   312,   529,   159,   160,   158,   149,   240,
     468,   242,   138,   538,   245,   117,    62,   539,   292,    65,
      46,   252,   173,    20,   136,    45,   164,   102,   102,    49,
      44,   262,    44,    88,    76,   164,   221,   154,    57,   348,
      12,    13,    14,    15,    16,    17,    18,   159,    44,   151,
     136,   236,   707,    89,   437,   125,   221,   158,   243,   662,
     291,   246,   132,   248,    45,   250,   152,   250,   123,   115,
     221,   518,   257,   159,   257,    45,    44,   602,    46,   154,
     154,    77,    44,    88,    88,   236,    88,    88,   108,    88,
     102,   276,   243,   324,   136,   246,    45,   248,   531,   250,
      96,   534,   376,   536,    50,     6,   257,     8,     9,   340,
     152,   276,   109,   110,   111,    11,   347,   159,   123,   123,
     152,   123,   123,    24,   123,   276,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     136,    44,   154,   328,   125,   117,    44,   332,   333,   119,
      44,   132,   122,    88,   150,   125,    88,    44,   343,    46,
     345,   392,   132,   159,    88,    88,    44,     5,     6,    44,
     119,    46,    44,   358,   359,   164,   125,   328,   343,   151,
     345,   332,   333,   132,    44,    23,    24,    44,   123,   463,
      44,   123,   343,   358,   345,    44,    44,    46,    11,   123,
     123,   386,   455,   388,   457,    44,   391,   358,   359,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    44,   409,    36,    37,    38,    39,    40,
      41,    42,    44,    62,    11,   386,    65,   388,    13,    14,
     391,    16,   164,    18,    82,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    46,
     445,    45,    91,   448,   102,   164,   104,   105,   164,   454,
      60,    61,   101,   458,   103,   460,   542,    73,   159,   160,
     118,    33,    34,    35,    73,   470,   115,   472,    21,   454,
     159,   160,   118,   458,   445,    45,   164,   448,   607,    95,
     116,    45,    45,   454,   157,     5,    95,   458,    90,   460,
     106,   107,   543,    23,    44,    46,   501,   106,   107,   470,
     158,   472,    45,    82,    45,    45,    36,    37,    38,    39,
      40,    41,    42,    57,    45,   173,   501,   600,    45,   135,
      42,    45,    23,   121,   529,    46,   135,    83,   131,   123,
     501,   164,   123,   538,   539,    36,    37,    38,    39,    40,
      41,    42,   547,    45,   529,   161,   551,    92,   599,    45,
     102,    46,   161,   538,   151,    44,    44,    44,   529,    44,
      44,   566,   124,   221,    44,    44,    44,   538,   539,    12,
      13,    14,    15,    16,    17,    18,   547,    44,   236,    11,
     551,    45,   587,   131,    45,   243,    15,   120,   246,    15,
     248,    57,   250,    46,    94,     5,     6,   602,   114,   257,
     114,   684,   587,     5,     5,    44,   611,   612,    38,    39,
      40,    41,    42,    23,    24,     5,   587,   602,   276,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   602,   683,    11,    31,    32,    33,    34,    35,   114,
     611,   612,     5,     5,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   226,   227,
     228,   229,   230,    32,    33,    34,    35,    44,     5,     5,
     328,    44,    82,     5,   332,   333,   148,   114,    44,     5,
       5,   146,     5,   146,   146,   343,   691,   345,   146,     5,
      44,   138,   102,    45,   104,   105,    23,    15,    46,    23,
     358,   359,    23,    23,    23,    44,    44,   712,   118,     5,
      45,    45,    45,    44,     5,    45,    45,     5,     5,     5,
     691,     5,    44,   114,     5,     5,   162,   712,   386,    44,
     388,    45,    44,   391,    45,    45,    45,   162,    45,   162,
     162,   712,    45,    45,     5,    45,    45,     5,   158,     0,
       1,     5,    44,   134,   148,    45,    45,     5,     5,    11,
      45,    44,     5,   173,   131,   123,    45,   145,    45,    20,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,   131,   131,   131,   445,   131,    45,
     448,    88,    45,     5,     5,    45,   454,   146,   162,    51,
     458,    45,   460,    45,    45,    45,    45,    45,    45,    45,
      45,   221,   470,    88,   472,   211,   124,   245,   146,   252,
     162,   162,   162,    95,   458,   293,   236,    79,   456,   146,
     526,   273,   358,   243,   630,    -1,   246,    88,   248,   115,
     250,   146,    -1,   501,   264,    -1,    -1,   257,    99,   236,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   109,   110,
     111,    -1,    -1,    -1,    -1,    -1,   276,   118,    -1,    -1,
      -1,   529,    -1,   124,    -1,    -1,    -1,    -1,    -1,    -1,
     538,   539,    -1,    -1,    -1,    11,   137,    -1,    -1,   547,
      -1,    -1,    -1,   551,   145,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   328,    -1,
      -1,    -1,   332,   333,    50,    -1,    -1,   178,    -1,   587,
      -1,    -1,    -1,   343,    -1,   345,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   602,    11,    -1,    -1,   358,   359,
      -1,    -1,    -1,   611,   612,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    11,    -1,    -1,   386,    -1,   388,    45,
      -1,   391,    -1,   234,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,   276,    -1,    -1,    -1,    -1,
      -1,    -1,    45,   691,    -1,   445,    -1,    -1,   448,    -1,
      -1,    -1,   293,    -1,   454,    -1,    -1,   298,   458,   300,
     460,   302,    11,   304,   712,   306,    -1,   308,    -1,    -1,
     470,   312,   472,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    11,    -1,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      -1,   501,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    -1,   358,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   529,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   538,   539,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   547,    -1,    -1,
      -1,   551,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   587,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   602,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   611,   612,   454,    -1,    -1,    -1,   458,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    48,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    -1,    70,    71,   529,    73,
      -1,   691,    76,    -1,    78,    -1,    -1,   538,    -1,    -1,
      -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    93,
      -1,    95,   712,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,   112,    -1,
     114,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,    -1,   137,    -1,    -1,   140,   141,   142,   143,
     144,   602,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    47,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    -1,    70,    71,    -1,    73,
      -1,    -1,    76,    -1,    78,    -1,    80,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,   112,    -1,
     114,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,    -1,   137,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    -1,    70,    71,    -1,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,   112,    -1,
     114,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,    -1,   159,   160,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    -1,    70,    71,    -1,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,   112,    -1,
     114,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,    -1,   137,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    -1,    70,    71,    -1,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,   112,    -1,
     114,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,    -1,   137,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    -1,    70,    71,    -1,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,   112,    -1,
     114,   115,    -1,    -1,   118,    -1,    -1,   121,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,    -1,   137,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    -1,
      -1,    -1,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,    -1,    52,    -1,
      54,    -1,    -1,    -1,    58,    59,    -1,    -1,    62,    -1,
      64,    65,    66,    67,    68,    -1,    70,    71,    -1,    73,
      -1,    -1,    76,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    93,
      -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,   112,    -1,
     114,   115,    -1,     3,   118,    -1,    -1,    -1,   122,   123,
     124,   125,   126,    -1,    -1,   129,   130,   131,   132,   133,
     134,   135,    -1,   137,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,
      -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,    49,
      -1,    -1,    52,    53,    54,    55,    56,    -1,    -1,    59,
      60,    61,    62,    63,    -1,    65,    -1,    67,    68,    -1,
      -1,    -1,    72,    73,    74,    75,    -1,    -1,    78,    -1,
      -1,    81,    -1,    -1,    -1,    -1,    -1,    87,    88,    -1,
      -1,    91,    -1,    93,    -1,    95,    -1,    97,    98,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,    -1,   113,   114,   115,    -1,    -1,   118,    -1,
      -1,    -1,   122,   123,   124,   125,   126,    -1,   128,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,   139,
      -1,   141,   142,   143,     3,     4,   146,   147,    -1,   149,
      -1,    -1,    11,   153,    -1,   155,   156,    -1,    -1,    -1,
     160,   161,   162,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,     3,   118,
      -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,   153,    -1,   155,   156,    -1,    44,
      -1,   160,   161,   162,    49,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,
      95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,     3,   118,    -1,    -1,    -1,   122,   123,   124,
     125,   126,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,    44,   159,   160,   161,   162,    49,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    -1,    93,    -1,    95,    -1,    -1,    -1,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,    -1,   118,    -1,    -1,
      -1,   122,   123,   124,   125,   126,    -1,     3,   129,   130,
     131,   132,   133,   134,   135,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,   153,    -1,   155,   156,    -1,    -1,   159,   160,
     161,   162,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    49,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,
      -1,    67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,    95,
      -1,    -1,    -1,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,
      -1,    -1,   118,    -1,    -1,    -1,   122,   123,   124,   125,
     126,    -1,     3,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,   153,    -1,   155,
     156,    -1,    -1,    -1,   160,   161,   162,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    46,    -1,    -1,    49,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    -1,    93,    -1,    95,    -1,    -1,    -1,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,     3,   118,    -1,    -1,
      -1,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    -1,   153,    -1,   155,   156,    -1,    -1,    45,   160,
     161,   162,    49,    50,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,    93,    -1,    95,    -1,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,   118,    -1,     3,    -1,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,   153,    -1,   155,   156,
      -1,    -1,    -1,   160,   161,   162,    46,    -1,    -1,    49,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    93,    -1,    95,    -1,    -1,    -1,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,    -1,    -1,   118,    -1,
       3,    -1,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,   153,    -1,   155,   156,    -1,    -1,    -1,
     160,   161,   162,    46,    -1,    -1,    49,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,
      93,    -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,    -1,   118,     3,     4,    -1,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
     153,    -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,
      -1,    -1,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,    93,    -1,    95,    -1,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
      -1,   118,    -1,     3,    -1,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,   153,    -1,   155,   156,
      -1,    -1,    -1,   160,   161,   162,    46,    -1,    -1,    49,
      -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,
      -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    93,    -1,    95,    -1,    -1,    -1,    99,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,   114,   115,    -1,     3,   118,    -1,
      -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,
      -1,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,   149,
      -1,    -1,    -1,   153,    -1,   155,   156,    -1,    44,    -1,
     160,   161,   162,    49,    -1,    -1,    52,    -1,    54,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,
      -1,    67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,
      -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,    95,
      -1,    -1,    -1,    99,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,
      -1,    -1,   118,    -1,     3,    -1,   122,   123,   124,   125,
     126,    -1,    -1,   129,   130,   131,   132,   133,   134,   135,
      -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,   153,    -1,   155,
     156,    -1,    -1,    -1,   160,   161,   162,    46,    -1,    -1,
      49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,     3,   118,
      -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,   153,    -1,   155,   156,    -1,    -1,
      -1,   160,   161,   162,    49,    50,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,
      95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,     3,   118,    -1,    -1,    -1,   122,   123,   124,
     125,   126,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,   153,    -1,
     155,   156,    -1,    -1,    -1,   160,   161,   162,    49,    50,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    -1,    93,    -1,    95,    -1,    -1,    -1,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,     3,   118,    -1,    -1,
      -1,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    38,   153,    -1,   155,   156,    -1,    -1,    -1,   160,
     161,   162,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,    93,    -1,    95,    -1,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
       3,   118,    -1,    -1,    -1,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    38,   153,    -1,   155,   156,
      -1,    -1,    -1,   160,   161,   162,    49,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,
      93,    -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,     3,   118,    -1,    -1,    -1,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,    38,
     153,    -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,
      49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,     3,   118,
      -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    38,   153,    -1,   155,   156,    -1,    -1,
      -1,   160,   161,   162,    49,    -1,    -1,    52,    -1,    54,
      -1,    -1,    -1,    -1,    59,    -1,    -1,    62,    -1,    -1,
      65,    -1,    67,    68,    -1,    -1,    -1,    -1,    73,    -1,
      -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    88,    -1,    -1,    91,    -1,    93,    -1,
      95,    -1,    -1,    -1,    99,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,   114,
     115,    -1,     3,   118,    -1,    -1,    -1,   122,   123,   124,
     125,   126,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,    -1,    -1,    -1,    -1,    -1,   141,   142,   143,    -1,
      -1,    -1,    -1,    -1,   149,    -1,    -1,    38,   153,    -1,
     155,   156,    -1,    -1,    -1,   160,   161,   162,    49,    -1,
      -1,    52,    -1,    54,    -1,    -1,    -1,    -1,    59,    -1,
      -1,    62,    -1,    -1,    65,    -1,    67,    68,    -1,    -1,
      -1,    -1,    73,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,
      91,    -1,    93,    -1,    95,    -1,    -1,    -1,    99,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,   114,   115,    -1,     3,   118,    -1,    -1,
      -1,   122,   123,   124,   125,   126,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,    -1,    -1,    -1,    -1,    -1,
     141,   142,   143,    -1,    -1,    -1,    -1,    -1,   149,    -1,
      -1,    38,   153,    -1,   155,   156,    -1,    -1,    -1,   160,
     161,   162,    49,    -1,    -1,    52,    -1,    54,    -1,    -1,
      -1,    -1,    59,    -1,    -1,    62,    -1,    -1,    65,    -1,
      67,    68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,
      -1,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    88,    -1,    -1,    91,    -1,    93,    -1,    95,    -1,
      -1,    -1,    99,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,   114,   115,    -1,
       3,   118,    -1,    -1,    -1,   122,   123,   124,   125,   126,
      -1,    -1,   129,   130,   131,   132,   133,   134,   135,    -1,
      -1,    -1,    -1,    -1,   141,   142,   143,    -1,    -1,    -1,
      -1,    -1,   149,    -1,    -1,    -1,   153,    -1,   155,   156,
      -1,    -1,    -1,   160,   161,   162,    49,    -1,    -1,    52,
      -1,    54,    -1,    -1,    -1,    -1,    59,    -1,    -1,    62,
      -1,    -1,    65,    -1,    67,    68,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    88,    -1,    -1,    91,    -1,
      93,    -1,    95,    -1,    -1,    -1,    99,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,   114,   115,    -1,     3,   118,    -1,    -1,    -1,   122,
     123,   124,   125,   126,    -1,    -1,   129,   130,   131,   132,
     133,   134,   135,    -1,    -1,    -1,    -1,    -1,   141,   142,
     143,    -1,    -1,    -1,    -1,    -1,   149,    -1,    -1,    -1,
     153,    -1,   155,   156,    -1,    -1,    -1,   160,   161,   162,
      49,    -1,    -1,    52,    -1,    54,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    62,    -1,    -1,    65,    -1,    67,    68,
      -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,    -1,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    -1,    91,    -1,    93,    -1,    95,    -1,    -1,    -1,
      99,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,   114,   115,    -1,    -1,   118,
      -1,    -1,    -1,   122,   123,   124,   125,   126,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,    -1,    -1,    -1,
      -1,    -1,   141,   142,   143,    -1,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,   153,    -1,   155,   156,    -1,    -1,
      -1,   160,   161,   162
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    44,    77,    96,   136,   150,   159,   166,   167,   168,
     169,   170,   171,   174,   175,   178,   179,   180,   181,   182,
     195,   179,   180,    90,   100,    47,    80,   201,     3,    49,
      52,    54,    59,    62,    65,    67,    68,    73,    78,    88,
      91,    93,    95,    99,   101,   102,   103,   104,   105,   106,
     107,   108,   114,   115,   118,   122,   123,   124,   125,   126,
     129,   130,   131,   132,   133,   134,   135,   141,   142,   143,
     149,   153,   155,   156,   160,   161,   162,   211,   229,   231,
     247,   264,   129,   196,   197,   264,     0,    84,   163,    19,
      20,    21,   119,   189,   190,   181,    45,    45,   211,   211,
     184,   138,    46,   196,   164,    44,   198,   199,   167,   201,
     201,   201,    57,    89,   185,   189,   158,   186,    44,    76,
     152,   172,   173,   180,   199,     4,     5,     6,     7,     8,
      10,    16,    18,    24,    36,    37,    38,    44,    58,    59,
      64,    66,    70,    71,    76,    86,   112,   121,   137,   144,
     179,   202,   203,   210,   211,   217,   218,   219,   220,   222,
     227,   228,   229,   230,   231,   232,   233,   234,   247,   264,
     176,   177,   220,    46,   264,   196,   200,   264,    50,   181,
     181,   181,   191,   192,   220,   127,   150,   185,   220,   152,
     216,   220,   173,   180,    44,    44,   220,   219,   219,   179,
     216,   220,   223,    44,    44,    44,    44,   179,    44,    44,
     183,   164,    44,    36,    37,    38,    39,    40,    41,    42,
       4,    11,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    50,   262,   263,   264,
      44,    44,    44,    46,   186,   164,    46,   264,    46,    45,
     164,   179,   164,    51,    79,   193,   118,   116,   164,    45,
      45,    45,   157,   224,   225,   220,   216,   220,     5,   220,
      45,   122,   125,   132,   190,   235,    90,   187,   202,    45,
     216,   219,   219,   219,   219,   219,   219,   219,   211,   220,
     220,    32,    33,    34,    47,    48,   140,   220,   260,   220,
     260,   220,   260,   220,   260,   220,   260,   220,   260,   220,
     220,   219,    44,   179,   221,     6,     8,     9,    24,   262,
      38,    47,    80,   220,   259,    45,   220,    38,    46,   264,
     176,   264,    46,    46,   264,   200,   191,   200,   216,   220,
      82,   226,   224,    50,    45,   151,    45,   164,    57,     5,
      33,    69,   149,   236,   236,    45,   235,    45,    44,   179,
     204,   205,   206,   211,   212,   186,    45,   220,   219,   221,
     179,   179,   179,   179,   179,   179,    23,   216,     6,     8,
       9,    45,    45,   220,   234,    45,    46,   264,    46,   264,
     264,    46,   145,   220,    83,    53,    54,    55,    56,    60,
      61,    63,    72,    74,    75,    81,    87,    97,    98,    99,
     109,   110,   111,   113,   128,   130,   139,   146,   147,   153,
     211,   237,   238,   239,   240,   241,   242,   248,   249,   250,
     251,   252,   253,   254,   255,   211,   220,   216,   123,     5,
      69,   149,   131,   123,    45,   179,   205,   212,    50,   261,
     264,    12,    13,    14,    15,    16,    17,    18,   164,   213,
     207,    92,   188,    23,   219,    45,   234,   234,    45,   264,
      46,    38,    46,   264,   264,   220,   102,    44,    44,   102,
     154,    44,   102,   154,    44,    44,    44,   124,    44,   135,
     243,   244,   246,   247,    60,    61,    44,   102,   154,    44,
      44,    44,    44,   159,   160,    44,   159,   160,    44,    45,
      49,   108,    61,   263,   263,    45,    45,    45,   190,   235,
      88,   123,   131,    88,   123,    45,   261,   199,   209,    15,
     120,   215,   214,   205,   215,   213,   215,   204,    15,    50,
     208,   261,    57,    94,   194,   219,   234,    46,    38,   264,
     264,    46,   114,     5,     5,   114,    44,     5,   114,    44,
       5,   256,     5,     5,     5,    44,   148,    44,    44,   154,
      44,   102,   154,     5,   114,    44,   256,     5,   211,     5,
     146,   146,     5,   146,   146,     5,    44,   138,    45,   235,
      45,    23,    23,    23,    23,    23,   209,   205,   214,   117,
     151,   214,    15,   214,   205,   261,   208,   201,   220,    38,
     264,    46,    46,    38,   264,    44,    45,    45,    44,     5,
      45,    44,     5,    62,    65,    91,   101,   103,   115,   257,
     258,    45,    45,   164,    45,   164,    45,     5,   135,   245,
     247,     5,     5,    44,     5,   114,    44,    45,    44,     5,
      45,    45,   164,    45,    45,   162,   162,    45,   162,   162,
      45,     5,   211,    45,     5,    69,   149,     5,    69,   149,
       5,    69,   149,     5,    69,   149,     5,    69,    75,   149,
     220,   199,   205,   117,   151,   208,   216,    38,   264,    38,
     264,    46,     5,   256,    45,   256,    45,   257,     5,     5,
      45,   164,    44,    45,    45,     5,    45,    44,     5,   256,
      45,     5,   134,   159,   160,   159,   160,    45,   263,    88,
     123,   131,    88,   123,    88,   123,   131,    88,   123,    88,
     123,   131,    88,   123,    88,   123,   131,    88,   123,   123,
     131,    88,    88,   123,   220,   199,    38,   264,    45,    45,
      45,    45,    45,     5,     5,    45,   256,    45,    45,    45,
     211,   146,   146,   146,   146,    45,    45,    45,   162,   162,
     162,   162
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   165,   166,   167,   167,   168,   168,   168,   169,   170,
     170,   170,   171,   172,   172,   172,   172,   172,   173,   174,
     175,   176,   176,   177,   178,   179,   179,   180,   180,   181,
     181,   182,   182,   182,   182,   183,   184,   185,   185,   185,
     185,   186,   186,   187,   188,   188,   189,   189,   190,   191,
     191,   192,   193,   193,   193,   194,   194,   195,   195,   196,
     196,   197,   198,   198,   199,   200,   200,   201,   201,   201,
     202,   202,   203,   203,   203,   203,   204,   204,   205,   205,
     206,   206,   206,   206,   206,   207,   208,   209,   209,   210,
     210,   210,   210,   210,   210,   210,   210,   210,   210,   210,
     210,   210,   210,   210,   210,   210,   211,   211,   211,   211,
     211,   211,   211,   211,   212,   212,   212,   212,   212,   212,
     212,   213,   213,   213,   213,   214,   215,   215,   216,   216,
     217,   217,   217,   217,   217,   217,   217,   218,   218,   218,
     218,   218,   218,   218,   219,   219,   219,   219,   219,   219,
     219,   219,   219,   219,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   220,   220,   220,   220,   220,
     220,   220,   220,   220,   220,   221,   221,   222,   223,   223,
     224,   224,   225,   226,   226,   227,   227,   227,   227,   228,
     228,   228,   228,   228,   228,   229,   229,   229,   229,   229,
     229,   229,   229,   229,   229,   230,   231,   231,   231,   232,
     232,   233,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   234,   234,   234,   234,   234,   234,   234,
     234,   235,   235,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   237,   237,   237,   237,   238,   239,   240,   240,   240,
     241,   241,   241,   241,   241,   241,   241,   241,   241,   241,
     241,   242,   243,   243,   244,   244,   245,   245,   245,   246,
     246,   246,   246,   246,   247,   247,   247,   247,   247,   248,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   250,   250,   251,   251,   251,   251,   251,
     251,   251,   251,   251,   251,   251,   251,   251,   252,   252,
     252,   252,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   254,   254,   254,   254,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   255,   255,   256,   256,   256,   256,   257,   257,
     257,   258,   258,   258,   259,   259,   260,   260,   260,   261,
     262,   262,   263,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   264
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     0,     1,     1,     1,     1,
       1,     1,     4,     1,     2,     2,     1,     2,     2,     4,
       5,     1,     3,     1,     1,     3,     3,     3,     4,     1,
       1,     9,     4,     4,     4,     0,     0,     0,     2,     4,
       3,     0,     2,     2,     0,     4,     0,     1,     3,     1,
       3,     2,     0,     1,     1,     0,     2,     2,     3,     1,
       3,     4,     0,     1,     3,     1,     3,     0,     1,     1,
       1,     3,     1,     2,     3,     1,     1,     3,     1,     1,
       3,     5,     4,     4,     3,     0,     0,     0,     1,     1,
       3,     3,     5,     5,     7,     7,     6,     6,     9,     9,
       8,     8,     8,     8,     7,     7,     1,     3,     5,     4,
       7,     6,     6,     5,     3,     6,     5,     6,     5,     4,
       5,     3,     3,     3,     2,     0,     0,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     2,     1,     2,     2,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     2,     3,     4,     3,
       4,     3,     4,     3,     4,     3,     4,     3,     4,     3,
       4,     3,     3,     2,     3,     4,     3,     4,     3,     4,
       5,     6,     3,     4,     3,     1,     3,     5,     0,     1,
       1,     2,     4,     0,     2,     1,     1,     1,     1,     5,
       4,     6,     5,     5,     4,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     4,     1,     1,     1,     3,
       4,     4,     3,     3,     6,     6,     4,     1,     4,     1,
       6,     1,     1,     8,     5,     7,     7,     6,     4,     4,
       3,     2,     2,     2,     2,     2,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       6,     1,     1,     1,     1,     1,     6,     5,     2,     2,
       5,     4,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     3,     1,     4,     1,     1,     4,     1,     4,
       1,     6,     4,     1,     1,     1,     1,     1,     1,     1,
       1,     7,     7,     4,     4,     4,     1,     7,     7,     4,
       4,     4,     1,     1,     1,     6,     4,     1,     6,     4,
       1,     6,     4,     1,     1,     1,     1,     1,     4,     1,
       1,     2,     4,     1,     4,     1,     5,     5,     4,     6,
       3,     6,     3,     4,     1,     6,     3,     4,     1,     5,
       2,     5,     2,     4,     1,     6,     6,     5,     7,     4,
       6,     3,     4,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
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
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2699 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2705 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2711 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2717 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2723 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2735 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2741 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 166: /* sql_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2747 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 167: /* stmt_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 168: /* stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2759 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 169: /* dql_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 170: /* dml_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 171: /* insert_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 172: /* insert_columns_and_source  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 173: /* from_constructor  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2789 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 174: /* delete_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 175: /* update_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2801 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 176: /* update_elem_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2807 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 177: /* update_elem  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 178: /* select_stmt  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 179: /* select_with_parens  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2825 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 180: /* select_no_parens  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 181: /* select_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2837 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 182: /* simple_select  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2843 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* opt_into_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2849 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* opt_top  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2855 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* opt_for_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2861 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* opt_where  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2867 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* opt_from_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2873 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* opt_groupby  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2879 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* opt_order_by  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2885 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* order_by  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2891 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* sort_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2897 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* sort_key  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2903 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_asc_desc  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2909 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_having  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2915 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* with_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2921 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* with_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2927 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* common_table_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2933 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_derived_column_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2939 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* simple_ident_list_with_parens  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2945 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* simple_ident_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2951 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_distinct  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2957 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* select_expr_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2963 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* projection  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2969 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* from_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2975 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* table_factor  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* table_factor_non_join  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2987 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_for_system_time  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2993 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_with_table_hint  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 2999 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* opt_simple_ident_list_with_parens  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* column_ref  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3011 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* relation_factor  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3017 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* joined_table  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3023 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* join_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* expr_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3035 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* expr_const  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3041 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* simple_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3047 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* arith_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3053 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3059 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* in_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3065 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* case_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3071 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* case_arg  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3077 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* when_clause_list  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3083 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* when_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3089 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* case_default  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3095 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* func_expr  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3101 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* aggregate_windowed_function  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3107 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* aggregate_function_name  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* ranking_windowed_function  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3119 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* ranking_function_name  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3125 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* scalar_function  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3131 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* function_call_keyword  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3137 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* over_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3143 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* row_or_range_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3149 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* window_frame_extent  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3155 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* data_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3161 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* user_defined_type_name  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3167 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* reference_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3173 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* collection_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* predefined_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3185 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* interval_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3191 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* interval_qualifier  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3197 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* start_field  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3203 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 245: /* end_field  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3209 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 246: /* single_datetime_field  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 247: /* non_second_primary_datetime_field  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3221 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 248: /* boolean_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3227 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 249: /* datetime_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3233 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 250: /* numeric_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3239 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 251: /* exact_numeric_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3245 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 252: /* approximate_numeric_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3251 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 253: /* character_string_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3257 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 254: /* binary_large_object_string_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3263 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 255: /* national_character_string_type  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3269 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 256: /* large_object_length  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3275 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 257: /* char_length_units  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3281 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 258: /* multiplier  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3287 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 259: /* distinct_or_all  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 261: /* relation_name  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3299 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 262: /* column_label  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3305 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 263: /* collate_clause  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3311 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
        break;

    case 264: /* name_r  */
#line 94 "./sqlparser_sql2003.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 3317 "sqlparser_sql2003_bison.cpp" /* yacc.c:1257  */
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

#line 3434 "sqlparser_sql2003_bison.cpp" /* yacc.c:1429  */
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
#line 220 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 3628 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 231 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SEMICOLON_LIST_SERIALIZE_FORMAT;
}
#line 3637 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 238 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3643 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 255 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT, E_INSERT_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &INSERT_SERIALIZE_FORMAT;
}
#line 3652 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 263 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3661 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 268 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3670 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 273 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 278 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3688 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* src = Node::makeTerminalNode(E_IDENTIFIER, "DEFAULT VALUES");
    (yyval.node) = Node::makeNonTerminalNode(E_INSERT_COLUMNS_AND_SOURCE, E_INSERT_COLUMNS_AND_SOURCE_PROPERTY_CNT, nullptr, src);
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 3698 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 292 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_VALUES_CTOR, E_VALUES_CTOR_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TABLE_VALUE_CTOR_SERIALIZE_FORMAT;
}
#line 3707 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 301 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3724 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 318 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3742 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 336 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_UPDATE_ELEM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 3751 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 344 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3766 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 363 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3775 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 368 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3784 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 376 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[0].node));
}
#line 3794 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 382 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_CLAUSE, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-3].node));
}
#line 3805 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 398 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3834 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 423 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3864 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 449 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3894 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 475 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 3924 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 503 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3930 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 508 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3936 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 512 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3942 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 514 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR UPDATE");
}
#line 3950 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 518 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR UPDATE OF "+(yyvsp[0].node)->text());
}
#line 3958 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 522 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FOR READ ONLY");
}
#line 3966 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3972 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 530 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, E_WHERE_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 3981 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 539 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, E_FROM_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 3990 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 552 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3996 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 554 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, E_GROUP_BY_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 4005 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 561 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4011 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 567 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, E_ORDER_BY_PROPERTY_CNT, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 4020 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 576 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4029 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 584 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, E_SORT_KEY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4038 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 592 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 4046 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 596 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 4054 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 600 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 4062 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 606 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4068 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 608 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_HAVING, E_HAVING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 4077 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 618 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 4086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 623 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, E_OPT_WITH_CLAUSE_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_RECURSIVE_CLAUSE_SERIALIZE_FORMAT;
}
#line 4095 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 632 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 641 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, E_COMMON_TABLE_EXPR_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 4113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 648 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4119 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 654 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4128 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 663 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4137 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 670 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4143 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 672 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 4151 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 676 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 4159 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 684 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4168 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 692 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4177 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 697 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &DOUBLE_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4189 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 705 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr, nullptr);
    alias_node->serialize_format = &AS_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, alias_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4201 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 713 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, E_PROJECT_STRING_PROPERTY_CNT, star_node);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4211 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 723 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4220 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 740 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[0].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 4229 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 745 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-3].node));
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4238 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 750 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), nullptr, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &PENTA_SERIALIZE_FORMAT_0;
}
#line 4247 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 755 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &AS_SERIALIZE_FORMAT;
}
#line 4256 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, E_ALIAS_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &QUADRUPLE_SERIALIZE_FORMAT;
}
#line 4265 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 768 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4271 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 773 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4277 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 777 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 4283 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 784 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4293 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 790 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4303 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 796 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_1;
}
#line 4314 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 803 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4324 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 809 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_2;
}
#line 4335 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 816 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4345 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 822 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 829 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4366 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 835 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), nullptr);
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_3;
}
#line 4377 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 842 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4387 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 848 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node), (yyvsp[-8].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4398 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 855 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4408 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 861 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), (yyvsp[-4].node), nullptr, (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4419 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 868 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4429 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 874 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, (yyvsp[-5].node), (yyvsp[-7].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4440 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 881 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			(yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4450 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 887 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, E_OP_NAME_FIELD_PROPERTY_CNT,
    			nd, (yyvsp[-2].node), nullptr, nullptr, (yyvsp[-6].node));
    (yyval.node)->serialize_format = &OP_NAME_FIELD_SERIALIZE_FORMAT_4;
}
#line 4461 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 898 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 4470 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 903 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_1;
}
#line 4479 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 908 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4488 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 913 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_2;
}
#line 4497 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 918 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), (yyvsp[-4].node), (yyvsp[-6].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4506 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 923 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), (yyvsp[-2].node), nullptr, (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4515 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 928 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, (yyvsp[-3].node), (yyvsp[-5].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4524 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 933 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TABLE_IDENT, E_TABLE_IDENT_PROPERTY_CNT, (yyvsp[0].node), nullptr, nullptr, (yyvsp[-4].node));
    (yyval.node)->serialize_format = &TABLE_IDENT_SERIALIZE_FORMAT_3;
}
#line 4533 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 941 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4542 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 946 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4551 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 951 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 4561 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 957 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4570 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 962 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_USING_SERIALIZE_FORMAT;
}
#line 4580 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 968 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4590 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 974 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL " + (yyvsp[-2].node)->text());
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, E_JOINED_TABLE_PROPERTY_CNT, nd, (yyvsp[-4].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 4600 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 983 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4615 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 994 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4630 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 1005 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4645 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 1016 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER"+Node::convert_join_hint((yyvsp[0].ival)));
}
#line 4653 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 1023 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4659 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 1027 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 4665 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 1028 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 4671 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 1035 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
}
#line 4680 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 1048 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_STRING, "DEFAULT"); }
#line 4686 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 1055 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 4696 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 1064 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 4705 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 1073 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 4714 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1078 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 4723 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1083 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 4732 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1088 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 4741 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1093 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 4750 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1098 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 4759 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1103 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 4768 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1108 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 4777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1113 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 4786 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1123 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_COLLATE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 4795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1128 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 4804 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1133 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4833 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1158 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 4842 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1163 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4871 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1188 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 4880 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1193 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4909 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1218 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 4918 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1223 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4947 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1248 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 4956 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1253 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 4985 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1278 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 4994 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5023 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 1308 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 5032 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 1313 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 5041 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 1318 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 5050 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1323 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 5059 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1328 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, E_OP_UNARY_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 5068 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1333 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5077 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1338 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5086 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1343 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5095 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1348 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5104 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1353 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 5113 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1358 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 5122 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1363 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 5131 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 1368 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, E_OP_TERNARY_PROPERTY_CNT, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 5140 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 1373 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 5149 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 1378 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 5158 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 1383 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, E_OP_BINARY_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 5167 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 1392 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, E_PARENS_PROPERTY_CNT, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SINGLE_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 5176 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 1401 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, E_CASE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 5185 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 1408 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5191 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 1415 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SPACE_LIST_SERIALIZE_FORMAT;
}
#line 5200 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 1423 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, E_WHEN_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 5209 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 1430 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 5215 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 1432 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, E_CASE_DEFAULT_PROPERTY_CNT, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 5224 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 199:
#line 1449 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5234 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 200:
#line 1455 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5244 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 201:
#line 1461 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node), (yyvsp[-3].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5254 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 202:
#line 1467 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-4].node), (yyvsp[-1].node), nullptr, (yyvsp[-2].node), nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_DIS_OVER_SERIALIZE_FORMAT;
}
#line 5264 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 203:
#line 1473 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5280 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 204:
#line 1485 "./sqlparser_sql2003.y" /* yacc.c:1646  */
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
#line 5296 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 205:
#line 1499 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "AVG"); }
#line 5302 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 206:
#line 1500 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MAX"); }
#line 5308 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 207:
#line 1501 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MIN"); }
#line 5314 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 208:
#line 1502 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SUM"); }
#line 5320 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 209:
#line 1503 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_POP"); }
#line 5326 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 210:
#line 1504 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "STDDEV_SAMP"); }
#line 5332 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 211:
#line 1505 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_POP"); }
#line 5338 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 212:
#line 1506 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VAR_SAMP"); }
#line 5344 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 213:
#line 1507 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "COUNT"); }
#line 5350 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 214:
#line 1508 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "GROUPING"); }
#line 5356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 215:
#line 1513 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), nullptr, (yyvsp[0].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5366 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 216:
#line 1521 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANK"); }
#line 5372 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 217:
#line 1522 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "DENSE_RANK"); }
#line 5378 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 218:
#line 1523 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW_NUMBER"); }
#line 5384 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 219:
#line 1528 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-2].node), nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5394 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 220:
#line 1534 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5404 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 221:
#line 1546 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		(yyvsp[-3].node), (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5414 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 222:
#line 1552 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "RIGHT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5425 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 223:
#line 1559 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "LEFT");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5436 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 224:
#line 1566 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CAST");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-3].node), nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_AS_SERIALIZE_FORMAT;
}
#line 5447 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 225:
#line 1573 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* transcoding_name = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text());
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CONVERT");
    delete((yyvsp[-1].node));
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
        		fun_name, (yyvsp[-3].node), nullptr, nullptr, transcoding_name);
    (yyval.node)->serialize_format = &FUN_CALL_USING_SERIALIZE_FORMAT;
}
#line 5460 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 226:
#line 1582 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "COALESCE");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5471 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 227:
#line 1589 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5482 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 228:
#line 1596 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_TIMESTAMP");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, (yyvsp[-1].node), nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5493 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 229:
#line 1603 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5504 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 230:
#line 1610 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* expr_list = Node::makeNonTerminalNode(E_EXPR_LIST, E_LIST_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-1].node));
    expr_list->serialize_format = &COMMA_LIST_SERIALIZE_FORMAT;
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "NULLIF");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, expr_list, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &FUN_CALL_1_OVER_SERIALIZE_FORMAT;
}
#line 5517 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 231:
#line 1619 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SESSION_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5528 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 232:
#line 1626 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* fun_name = Node::makeTerminalNode(E_IDENTIFIER, "SYSTEM_USER");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, E_FUN_CALL_PROPERTY_CNT,
    		fun_name, nullptr, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &SINGLE_SERIALIZE_FORMAT;
}
#line 5539 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 233:
#line 1636 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5548 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 234:
#line 1641 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5557 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 235:
#line 1646 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5566 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 236:
#line 1651 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-2].node), (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5575 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 237:
#line 1656 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, (yyvsp[-1].node), nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5584 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 238:
#line 1661 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, (yyvsp[-1].node), nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5593 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 239:
#line 1666 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5602 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 240:
#line 1671 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OVER_CLAUSE, E_OVER_CLAUSE_PROPERTY_CNT, nullptr, nullptr, nullptr);
    (yyval.node)->serialize_format = &OVER_CLAUSE_SERIALIZE_FORMAT;
}
#line 5611 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 241:
#line 1679 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* rows = Node::makeTerminalNode(E_IDENTIFIER, "ROWS");
    (yyval.node) = Node::makeNonTerminalNode(E_ROWS_CLAUSE, E_ROWS_CLAUSE_PROPERTY_CNT, rows, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5621 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 242:
#line 1685 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    Node* range = Node::makeTerminalNode(E_IDENTIFIER, "RANGE");
    (yyval.node) = Node::makeNonTerminalNode(E_RANGE_CLAUSE, E_RANGE_CLAUSE_PROPERTY_CNT, range, (yyvsp[0].node));
    (yyval.node)->serialize_format = &DOUBLE_SERIALIZE_FORMAT;
}
#line 5631 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 243:
#line 1694 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED PRECEDING"); }
#line 5637 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 244:
#line 1696 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, (yyvsp[-1].node)->text()+"PRECEDING"); delete((yyvsp[-1].node)); }
#line 5643 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 245:
#line 1698 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CURRENT ROW"); }
#line 5649 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 246:
#line 1700 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED PRECEDING"); }
#line 5655 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 247:
#line 1702 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5661 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 248:
#line 1704 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED PRECEDING"); }
#line 5667 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 249:
#line 1706 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED PRECEDING"); }
#line 5673 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 250:
#line 1708 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED PRECEDING"); delete((yyvsp[-4].node)); }
#line 5679 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 251:
#line 1710 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node));}
#line 5685 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 252:
#line 1712 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5691 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 253:
#line 1714 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5697 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 254:
#line 1716 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-1].node)); }
#line 5703 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 255:
#line 1718 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" PRECEDING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5709 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 256:
#line 1720 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND CURRENT ROW"); }
#line 5715 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 257:
#line 1722 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5721 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 258:
#line 1724 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND CURRENT ROW"); }
#line 5727 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 259:
#line 1726 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND CURRENT ROW"); }
#line 5733 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 260:
#line 1728 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND CURRENT ROW"); delete((yyvsp[-4].node)); }
#line 5739 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 261:
#line 1730 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND UNBOUNDED FOLLOWING"); }
#line 5745 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 262:
#line 1732 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5751 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 263:
#line 1734 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND UNBOUNDED FOLLOWING"); }
#line 5757 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 264:
#line 1736 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND UNBOUNDED FOLLOWING"); }
#line 5763 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 265:
#line 1738 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND UNBOUNDED FOLLOWING"); delete((yyvsp[-4].node)); }
#line 5769 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 266:
#line 1740 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED PRECEDING AND DECIMAL FOLLOWING"); }
#line 5775 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 267:
#line 1742 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" PRECEDING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5781 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 268:
#line 1744 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN CURRENT ROW AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5787 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 269:
#line 1746 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN UNBOUNDED FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-1].node)); }
#line 5793 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 270:
#line 1748 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BETWEEN "+(yyvsp[-4].node)->text()+" FOLLOWING AND "+(yyvsp[-1].node)->text()+" FOLLOWING"); delete((yyvsp[-4].node)); delete((yyvsp[-1].node)); }
#line 5799 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 275:
#line 1760 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5808 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 276:
#line 1768 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REF("+(yyvsp[-3].node)->text()+")SCOPE "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5817 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 277:
#line 1776 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" ARRAY("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-4].node));
    delete((yyvsp[-1].node));
}
#line 5827 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 278:
#line 1782 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" ARRAY");
    delete((yyvsp[-1].node));
}
#line 5836 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 279:
#line 1787 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" MULTISET");
    delete((yyvsp[-1].node));
}
#line 5845 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 280:
#line 1795 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-4].node)->text()+" CHARACTER SET "+(yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-4].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5854 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 281:
#line 1800 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+" CHARACTER SET "+(yyvsp[0].node)->text());
    delete((yyvsp[-3].node));delete((yyvsp[0].node));
}
#line 5863 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 282:
#line 1805 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5872 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 284:
#line 1811 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 5881 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 291:
#line 1825 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTERVAL "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 5890 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 292:
#line 1833 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" TO "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[0].node));
}
#line 5899 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 294:
#line 1842 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5908 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 297:
#line 1852 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5917 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 298:
#line 1857 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5925 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 299:
#line 1864 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-3].node)->text()+"("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5934 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 301:
#line 1870 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 5943 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 302:
#line 1875 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 5952 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 303:
#line 1880 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SECOND");
}
#line 5960 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 304:
#line 1887 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "YEAR");
}
#line 5968 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 305:
#line 1891 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MONTH");
}
#line 5976 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 306:
#line 1895 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DAY");
}
#line 5984 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 307:
#line 1899 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "HOUR");
}
#line 5992 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 308:
#line 1903 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "MINUTE");
}
#line 6000 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 309:
#line 1910 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BOOLEAN");
}
#line 6008 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 310:
#line 1917 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DATE");
}
#line 6016 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 311:
#line 1921 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6025 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 312:
#line 1926 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6034 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 313:
#line 1931 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6043 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 314:
#line 1936 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITH TIME ZONE");
}
#line 6051 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 315:
#line 1940 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME WITHOUT TIME ZONE");
}
#line 6059 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 316:
#line 1944 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIME");
}
#line 6067 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 317:
#line 1948 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITH TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6076 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 318:
#line 1953 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-4].node)->text()+") WITHOUT TIME ZONE");
    delete((yyvsp[-4].node));
}
#line 6085 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 319:
#line 1958 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6094 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 320:
#line 1963 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITH TIME ZONE");
}
#line 6102 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 321:
#line 1967 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP WITHOUT TIME ZONE");
}
#line 6110 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 322:
#line 1971 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "TIMESTAMP");
}
#line 6118 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 325:
#line 1983 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6127 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 326:
#line 1988 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6136 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 327:
#line 1993 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NUMERIC");
}
#line 6144 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 328:
#line 1997 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6153 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 329:
#line 2002 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6162 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 330:
#line 2007 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DECIMAL");
}
#line 6170 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 331:
#line 2011 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-3].node)->text()+","+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-3].node));delete((yyvsp[-1].node));
}
#line 6179 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 332:
#line 2016 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6188 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 333:
#line 2021 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DEC");
}
#line 6196 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 334:
#line 2025 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "SMALLINT");
}
#line 6204 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 335:
#line 2029 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INTEGER");
}
#line 6212 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 336:
#line 2033 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "INT");
}
#line 6220 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 337:
#line 2037 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BIGINT");
}
#line 6228 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 338:
#line 2044 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6237 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 339:
#line 2049 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "FLOAT");
}
#line 6245 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 340:
#line 2053 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "REAL");
}
#line 6253 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 341:
#line 2057 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "DOUBLE PRECISION");
}
#line 6261 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 342:
#line 2064 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6270 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 343:
#line 2069 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER");
}
#line 6278 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 344:
#line 2073 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6287 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 345:
#line 2078 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR");
}
#line 6295 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 346:
#line 2082 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6304 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 347:
#line 2087 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6313 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 348:
#line 2092 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "VARCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6322 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 349:
#line 2097 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6331 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 350:
#line 2102 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTER LARGE OBJECT");
}
#line 6339 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 351:
#line 2106 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6348 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 352:
#line 2111 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHAR LARGE OBJECT");
}
#line 6356 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 353:
#line 2115 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6365 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 354:
#line 2120 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CLOB");
}
#line 6373 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 355:
#line 2127 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6382 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 356:
#line 2132 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BINARY LARGE OBJECT");
}
#line 6390 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 357:
#line 2136 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6399 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 358:
#line 2141 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "BLOB");
}
#line 6407 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 359:
#line 2148 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6416 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 360:
#line 2153 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER");
}
#line 6424 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 361:
#line 2157 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6433 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 362:
#line 2162 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR");
}
#line 6441 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 363:
#line 2166 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6450 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 364:
#line 2171 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR");
}
#line 6458 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 365:
#line 2175 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6467 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 366:
#line 2180 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6476 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 367:
#line 2185 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR VARYING("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6485 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 368:
#line 2190 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6494 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 369:
#line 2195 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NATIONAL CHARACTER LARGE OBJECT");
}
#line 6502 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 370:
#line 2199 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6511 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 371:
#line 2204 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCHAR LARGE OBJECT");
}
#line 6519 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 372:
#line 2208 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB("+(yyvsp[-1].node)->text()+")");
    delete((yyvsp[-1].node));
}
#line 6528 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 373:
#line 2213 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "NCLOB");
}
#line 6536 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 374:
#line 2220 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-2].node)->text()+" "+(yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-2].node));delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6545 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 375:
#line 2225 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6554 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 376:
#line 2230 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[-1].node)->text()+" "+(yyvsp[0].node)->text());
    delete((yyvsp[-1].node));delete((yyvsp[0].node));
}
#line 6563 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 377:
#line 2235 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, (yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6572 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 378:
#line 2243 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CHARACTERS");
}
#line 6580 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 379:
#line 2247 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "CODE_UNITS");
}
#line 6588 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 380:
#line 2251 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "OCTETS");
}
#line 6596 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 381:
#line 2258 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "K");
}
#line 6604 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 382:
#line 2262 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "M");
}
#line 6612 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 383:
#line 2266 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "G");
}
#line 6620 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 384:
#line 2273 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 6628 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 385:
#line 2277 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 6636 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 386:
#line 2283 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 6642 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 387:
#line 2284 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 6648 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 388:
#line 2285 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.ival) = 2; }
#line 6654 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 392:
#line 2299 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_STRING, "COLLATE "+(yyvsp[0].node)->text());
    delete((yyvsp[0].node));
}
#line 6663 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 397:
#line 2312 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "K"); }
#line 6669 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 398:
#line 2313 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "M"); }
#line 6675 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 399:
#line 2314 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "G"); }
#line 6681 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 400:
#line 2315 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ARRAY"); }
#line 6687 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 401:
#line 2316 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "BINARY"); }
#line 6693 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 402:
#line 2317 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CAST"); }
#line 6699 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 403:
#line 2318 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CHARACTERS"); }
#line 6705 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 404:
#line 2319 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CODE_UNITS"); }
#line 6711 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 405:
#line 2320 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "CORRESPONDING"); }
#line 6717 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 406:
#line 2321 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "FOLLOWING"); }
#line 6723 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 407:
#line 2322 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "INTERVAL"); }
#line 6729 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 408:
#line 2323 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "LARGE"); }
#line 6735 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 409:
#line 2324 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "MULTISET"); }
#line 6741 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 410:
#line 2325 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OBJECT"); }
#line 6747 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 411:
#line 2326 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "OCTETS"); }
#line 6753 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 412:
#line 2327 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ONLY"); }
#line 6759 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 413:
#line 2328 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PARTITION"); }
#line 6765 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 414:
#line 2329 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECEDING"); }
#line 6771 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 415:
#line 2330 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "PRECISION"); }
#line 6777 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 416:
#line 2331 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RANGE"); }
#line 6783 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 417:
#line 2332 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "RECURSIVE"); }
#line 6789 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 418:
#line 2333 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "REF"); }
#line 6795 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 419:
#line 2334 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROW"); }
#line 6801 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 420:
#line 2335 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ROWS"); }
#line 6807 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 421:
#line 2336 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SCOPE"); }
#line 6813 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 422:
#line 2337 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "SECOND"); }
#line 6819 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 423:
#line 2338 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "UNBOUNDED"); }
#line 6825 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 424:
#line 2339 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "VARCHAR"); }
#line 6831 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 425:
#line 2340 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "WITHOUT"); }
#line 6837 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;

  case 426:
#line 2341 "./sqlparser_sql2003.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_IDENTIFIER, "ZONE"); }
#line 6843 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
    break;


#line 6847 "sqlparser_sql2003_bison.cpp" /* yacc.c:1646  */
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
#line 2344 "./sqlparser_sql2003.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
