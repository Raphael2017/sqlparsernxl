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


int yyerror(YYLTYPE* llocp, ParseResult* result, yyscan_t scanner, const char *msg) {

	return 0;
}


#line 93 "sqlparser_bison.cpp" /* yacc.c:339  */

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
#line 33 "sqlparser.y" /* yacc.c:355  */

// %code requires block

#include "node.h"

#line 129 "sqlparser_bison.cpp" /* yacc.c:355  */

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
    UNION = 266,
    EXCEPT = 267,
    INTERSECT = 268,
    OR = 269,
    AND = 270,
    NOT = 271,
    COMP_LE = 272,
    COMP_LT = 273,
    COMP_EQ = 274,
    COMP_GT = 275,
    COMP_GE = 276,
    COMP_NE = 277,
    CNNOP = 278,
    LIKE = 279,
    BETWEEN = 280,
    IN = 281,
    IS = 282,
    MOD = 283,
    UMINUS = 284,
    ADD = 285,
    ANY = 286,
    ALL = 287,
    ALTER = 288,
    AS = 289,
    ASC = 290,
    BEGI = 291,
    BIGINT = 292,
    BINARY = 293,
    BOOLEAN = 294,
    BOTH = 295,
    BY = 296,
    CASCADE = 297,
    CASE = 298,
    CHARACTER = 299,
    CLUSTER = 300,
    COMMENT = 301,
    COMMIT = 302,
    CONSISTENT = 303,
    COLUMN = 304,
    COLUMNS = 305,
    CREATE = 306,
    CREATETIME = 307,
    CROSS = 308,
    CURRENT_USER = 309,
    CHANGE_OBI = 310,
    SWITCH_CLUSTER = 311,
    DATE = 312,
    DATETIME = 313,
    DEALLOCATE = 314,
    DECIMAL = 315,
    DEFAULT = 316,
    DELETE = 317,
    DESC = 318,
    DESCRIBE = 319,
    DISTINCT = 320,
    DOUBLE = 321,
    DROP = 322,
    DUAL = 323,
    ELSE = 324,
    END = 325,
    END_P = 326,
    ERROR = 327,
    EXECUTE = 328,
    EXISTS = 329,
    EXPLAIN = 330,
    FLOAT = 331,
    FOR = 332,
    FROM = 333,
    FULL = 334,
    FROZEN = 335,
    FORCE = 336,
    GLOBAL = 337,
    GLOBAL_ALIAS = 338,
    GRANT = 339,
    GROUP = 340,
    HAVING = 341,
    HINT_BEGIN = 342,
    HINT_END = 343,
    HOTSPOT = 344,
    IDENTIFIED = 345,
    IF = 346,
    INNER = 347,
    INTEGER = 348,
    INSERT = 349,
    INTO = 350,
    JOIN = 351,
    KEY = 352,
    LEADING = 353,
    LEFT = 354,
    LIMIT = 355,
    LOCAL = 356,
    LOCKED = 357,
    MEDIUMINT = 358,
    MEMORY = 359,
    MODIFYTIME = 360,
    MASTER = 361,
    NATURAL = 362,
    NUMERIC = 363,
    OFFSET = 364,
    ON = 365,
    ORDER = 366,
    OPTION = 367,
    OUTER = 368,
    PARAMETERS = 369,
    PASSWORD = 370,
    PRECISION = 371,
    PREPARE = 372,
    PRIMARY = 373,
    READ_STATIC = 374,
    REAL = 375,
    RENAME = 376,
    REPLACE = 377,
    RESTRICT = 378,
    PRIVILEGES = 379,
    REVOKE = 380,
    RIGHT = 381,
    ROLLBACK = 382,
    KILL = 383,
    READ_CONSISTENCY = 384,
    SCHEMA = 385,
    SCOPE = 386,
    SELECT = 387,
    SESSION = 388,
    SESSION_ALIAS = 389,
    SET = 390,
    SHOW = 391,
    SMALLINT = 392,
    SNAPSHOT = 393,
    SPFILE = 394,
    START = 395,
    STATIC = 396,
    SYSTEM = 397,
    STRONG = 398,
    SET_MASTER_CLUSTER = 399,
    SET_SLAVE_CLUSTER = 400,
    SLAVE = 401,
    TABLE = 402,
    TABLES = 403,
    THEN = 404,
    TIME = 405,
    TIMESTAMP = 406,
    TINYINT = 407,
    TRAILING = 408,
    TRANSACTION = 409,
    TO = 410,
    TOP = 411,
    UPDATE = 412,
    USER = 413,
    USING = 414,
    VALUES = 415,
    VARCHAR = 416,
    VARBINARY = 417,
    WHERE = 418,
    WHEN = 419,
    WITH = 420,
    WORK = 421,
    PROCESSLIST = 422,
    QUERY = 423,
    CONNECTION = 424,
    WEAK = 425
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 73 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 317 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 347 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   625

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  182
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  290

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   425

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    32,     2,     2,
      36,    37,    30,    28,   181,    29,    38,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   180,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    34,     2,     2,     2,     2,     2,
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
      25,    26,    27,    33,    35,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
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
     174,   175,   176,   177,   178,   179
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   174,   174,   183,   184,   192,   193,   198,   203,   210,
     215,   223,   224,   229,   235,   245,   267,   293,   294,   298,
     322,   345,   368,   395,   398,   406,   409,   417,   425,   433,
     438,   443,   448,   453,   462,   468,   472,   480,   481,   487,
     488,   497,   498,   506,   507,   511,   519,   521,   529,   538,
     541,   545,   553,   554,   563,   566,   570,   577,   578,   586,
     591,   599,   607,   616,   618,   625,   626,   633,   637,   642,
     647,   652,   659,   664,   669,   674,   680,   686,   691,   700,
     711,   722,   733,   737,   744,   745,   750,   751,   759,   760,
     767,   768,   773,   781,   782,   783,   784,   785,   786,   790,
     791,   792,   798,   799,   800,   801,   809,   810,   815,   820,
     825,   830,   835,   840,   845,   850,   857,   858,   863,   868,
     873,   878,   883,   888,   893,   898,   903,   908,   913,   918,
     923,   928,   933,   938,   943,   948,   953,   958,   963,   970,
     971,   978,   985,   987,   992,   993,  1000,  1007,  1013,  1018,
    1024,  1029,  1034,  1039,  1046,  1050,  1057,  1060,  1063,  1066,
    1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "UNION", "EXCEPT",
  "INTERSECT", "OR", "AND", "NOT", "COMP_LE", "COMP_LT", "COMP_EQ",
  "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE", "BETWEEN", "IN", "IS",
  "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS", "'('", "')'",
  "'.'", "ADD", "ANY", "ALL", "ALTER", "AS", "ASC", "BEGI", "BIGINT",
  "BINARY", "BOOLEAN", "BOTH", "BY", "CASCADE", "CASE", "CHARACTER",
  "CLUSTER", "COMMENT", "COMMIT", "CONSISTENT", "COLUMN", "COLUMNS",
  "CREATE", "CREATETIME", "CROSS", "CURRENT_USER", "CHANGE_OBI",
  "SWITCH_CLUSTER", "DATE", "DATETIME", "DEALLOCATE", "DECIMAL", "DEFAULT",
  "DELETE", "DESC", "DESCRIBE", "DISTINCT", "DOUBLE", "DROP", "DUAL",
  "ELSE", "END", "END_P", "ERROR", "EXECUTE", "EXISTS", "EXPLAIN", "FLOAT",
  "FOR", "FROM", "FULL", "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS",
  "GRANT", "GROUP", "HAVING", "HINT_BEGIN", "HINT_END", "HOTSPOT",
  "IDENTIFIED", "IF", "INNER", "INTEGER", "INSERT", "INTO", "JOIN", "KEY",
  "LEADING", "LEFT", "LIMIT", "LOCAL", "LOCKED", "MEDIUMINT", "MEMORY",
  "MODIFYTIME", "MASTER", "NATURAL", "NUMERIC", "OFFSET", "ON", "ORDER",
  "OPTION", "OUTER", "PARAMETERS", "PASSWORD", "PRECISION", "PREPARE",
  "PRIMARY", "READ_STATIC", "REAL", "RENAME", "REPLACE", "RESTRICT",
  "PRIVILEGES", "REVOKE", "RIGHT", "ROLLBACK", "KILL", "READ_CONSISTENCY",
  "SCHEMA", "SCOPE", "SELECT", "SESSION", "SESSION_ALIAS", "SET", "SHOW",
  "SMALLINT", "SNAPSHOT", "SPFILE", "START", "STATIC", "SYSTEM", "STRONG",
  "SET_MASTER_CLUSTER", "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES",
  "THEN", "TIME", "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO",
  "TOP", "UPDATE", "USER", "USING", "VALUES", "VARCHAR", "VARBINARY",
  "WHERE", "WHEN", "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION",
  "WEAK", "';'", "','", "$accept", "sql_stmt", "stmt_list", "stmt",
  "select_stmt", "select_with_parens", "select_no_parens",
  "no_table_select", "select_clause", "simple_select", "opt_top",
  "opt_where", "from_dual", "from_clause", "select_limit", "opt_hint",
  "limit_expr", "opt_select_limit", "opt_for_update", "opt_groupby",
  "opt_order_by", "order_by", "sort_list", "sort_key", "opt_asc_desc",
  "opt_having", "opt_distinct", "select_expr_list", "projection",
  "from_list", "table_factor", "table_factor_non_join", "relation_factor",
  "joined_table", "join_type", "join_outer", "opt_when", "expr_list",
  "column_ref", "expr_const", "simple_expr", "arith_expr", "expr",
  "in_expr", "case_expr", "case_arg", "when_clause_list", "when_clause",
  "case_default", "func_expr", "distinct_or_all", "column_name",
  "relation_name", "function_name", "column_label", "data_type", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    43,    45,
      42,    47,    37,   283,    94,   284,    40,    41,    46,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
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
      59,    44
};
# endif

#define YYPACT_NINF -241

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-241)))

#define YYTABLE_NINF -159

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -26,   -26,  -241,    41,   -38,  -132,  -241,   -72,   -74,  -241,
      19,   -28,    69,    72,   -55,  -241,  -241,   -26,   439,  -241,
      -8,    -8,    -8,    64,   -90,    51,   -31,  -241,  -241,  -241,
     136,    -8,  -241,   -14,  -241,  -241,  -241,  -241,  -241,  -241,
     439,   473,   473,   204,   439,   102,  -241,  -241,  -241,  -241,
     125,   598,  -241,  -241,  -241,   106,   112,  -241,  -241,   -25,
     -25,   -25,   439,    90,    90,    86,  -241,  -241,  -241,   422,
     494,  -241,  -241,    57,   139,   167,   598,     5,  -241,   473,
     473,   473,   473,   473,   473,   473,   439,   439,    39,   439,
     439,   439,   439,   439,   439,   439,   439,   473,   137,    28,
       9,   383,  -241,  -241,   166,  -241,   166,  -241,  -241,    32,
     513,  -241,  -241,   -98,    92,  -241,  -241,    33,    38,   544,
    -241,   439,   439,   149,     5,   192,   192,   195,   195,   195,
     195,  -241,   557,   494,   439,   473,   137,   227,   227,   227,
     227,   227,   227,   138,   173,   326,   204,  -241,  -241,  -241,
    -241,  -241,    95,  -241,  -241,  -241,   193,  -241,  -241,  -241,
     194,   107,   439,   -55,   439,  -241,  -241,  -241,    90,    90,
      90,    20,    63,    63,  -241,  -241,   422,  -241,   233,  -241,
    -241,   259,   439,   158,  -241,   173,   456,  -241,   473,   202,
    -241,  -241,  -241,  -241,  -241,   223,   574,    -8,  -241,  -241,
    -241,  -241,  -241,    -1,  -241,    10,  -241,   133,  -241,    12,
    -241,  -241,   439,   -90,   150,  -241,  -241,   439,   598,  -241,
     473,   125,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,   206,  -241,   422,    59,   245,   210,   242,  -241,  -241,
     126,  -241,    81,   126,   152,   126,    81,   154,   242,  -241,
     598,  -241,   211,   165,   598,   125,  -241,   175,  -241,  -241,
    -241,  -241,   203,  -241,    82,  -241,  -241,    81,  -241,   439,
     439,  -241,    81,   439,   253,  -241,   208,  -241,   598,   598,
     260,   439,   256,   255,   257,   598,   260,  -241,   258,  -241
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    34,     0,     0,     3,     5,    18,    86,    11,
      44,    17,    18,     0,    23,     1,     2,     6,     0,     7,
      54,    54,    54,     0,     0,    39,     0,    12,    10,     9,
       0,    54,     4,   156,    93,    94,    96,    95,    97,    98,
       0,     0,     0,     0,   143,     0,   104,    99,   100,   106,
     116,    87,   102,   103,    90,     0,     0,    55,    56,     0,
       0,     0,     0,     0,     0,    39,    13,    40,    24,     0,
     127,   107,   108,   104,     0,    88,   142,     0,   105,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,    18,    20,    17,    22,    21,    45,    46,
      49,    35,    36,    31,    32,    14,    62,    37,    57,    59,
     101,     0,     0,   148,   144,   109,   110,   111,   112,   113,
     115,   114,   126,   125,     0,     0,     0,   117,   118,   119,
     121,   120,   122,   138,   123,     0,     0,   139,   136,   130,
     128,   132,     0,   156,    92,    91,     0,   153,   154,   155,
       0,    88,     0,    23,     0,    50,    51,    48,     0,     0,
       0,     0,    25,    25,    38,    15,     0,   159,     0,    60,
      89,     0,     0,     0,   145,   124,     0,   137,     0,     0,
     131,   129,   133,   149,   151,     0,     0,    54,    47,    29,
      33,    30,   157,     0,    27,     0,    28,    63,    65,    67,
      66,    72,     0,    37,    41,    58,    61,     0,   147,   141,
       0,   134,   140,   164,   165,   167,   163,   162,   166,   161,
     160,     0,   150,     0,    18,     0,    66,     0,    71,    83,
      85,    82,     0,    85,     0,    85,     0,     0,     0,    69,
      26,    16,     0,    52,   146,   135,   152,     0,    73,    70,
      84,    79,     0,    80,     0,    81,    64,     0,    68,     0,
       0,    19,     0,     0,     0,    76,     0,    42,    53,    75,
       0,     0,     0,   156,     0,    74,     0,    78,     0,    77
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,   280,  -241,  -241,     0,    21,  -241,   145,   156,
     135,   127,  -241,  -241,   275,   199,   -57,    93,     2,  -241,
    -241,  -241,   141,  -241,  -241,  -241,   -17,  -160,  -241,    66,
    -185,    46,  -241,   100,  -241,   -75,  -241,   -95,  -240,  -241,
    -241,     8,   -15,   179,  -241,  -241,   196,  -241,  -241,  -241,
    -241,   217,   131,  -241,   140,  -241
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,     5,     6,    46,    13,     9,    10,    11,
      31,   213,   172,   173,   174,    14,   113,   175,    27,   253,
      24,    25,   108,   109,   167,   271,    59,   117,   118,   206,
     207,   208,   209,   210,   247,   261,    19,    74,    47,    48,
      49,    50,    75,   148,    52,    77,   123,   124,   183,    53,
     162,    54,    55,    56,   179,   231
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       7,    12,   202,    51,    60,    61,   160,   114,    -8,   -39,
       1,     1,   153,   202,    69,   202,   215,     7,   235,    63,
     168,     8,  -158,   202,  -157,    70,   180,    66,    64,    76,
      20,    21,    22,    57,   149,   203,   150,   151,     8,   154,
     284,    15,    16,    73,   152,    78,   288,   110,    17,    71,
      72,   189,   -39,   237,   119,   248,   203,   262,    26,   103,
     103,   103,   202,   134,   135,   136,    58,   115,   -18,   -18,
     -18,   132,   133,   257,   137,   138,   139,   140,   141,   142,
     143,   144,   276,   169,   202,   202,   161,   125,   126,   127,
     128,   129,   130,   131,    28,   111,    28,   204,   147,    18,
     112,   190,   237,   191,   192,   145,    28,   181,    -8,    29,
      30,   199,   200,   201,    62,     2,   102,   203,     1,   185,
     171,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,    67,   147,    26,     1,    23,
       2,    68,    63,   186,   100,   -39,    73,   196,   101,   110,
     195,    64,   -39,    79,    80,    81,    82,    83,    84,    85,
     -43,   119,    96,    97,    98,    99,   -18,   218,   263,   -43,
     265,   205,    26,   146,   277,   -18,   120,   -18,   122,    22,
     233,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   239,   221,   250,    97,    98,
      99,   170,   254,   234,   104,   106,   107,    33,    34,    35,
      36,    37,    38,   164,    39,   105,   105,   105,   119,   176,
      40,   240,    81,    82,    83,    84,    85,   182,   255,    85,
     193,   194,    41,    42,   241,   212,   177,   219,   242,   222,
      43,   243,   205,   256,   252,   202,   205,   258,   260,   244,
      95,    96,    97,    98,    99,   278,    44,   264,   279,   267,
     270,   269,   272,   283,   205,   239,   285,   205,   245,   223,
     239,   224,   205,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,    45,   121,   280,
     225,   240,   286,  -157,   287,   289,   240,    32,   197,    65,
     214,   163,   211,   236,   241,   198,   251,   239,   242,   241,
     275,   243,   266,   242,   246,   187,   243,   155,   216,   244,
     184,     0,   273,     0,   244,   226,     0,   281,     0,     0,
       0,     0,     0,   240,   211,   227,   238,     0,   245,     0,
     249,   188,     0,   245,     0,     2,   241,     0,   121,     0,
     242,     0,   228,   243,    79,    80,    81,    82,    83,    84,
      85,   244,     0,     0,     0,   238,     0,     0,   259,   229,
       0,   274,     0,   211,     0,     0,   282,   211,     0,   268,
     245,     0,     0,     0,   230,     0,    33,    34,    35,    36,
      37,    38,     0,    39,     0,   211,     0,     0,   211,    40,
       0,     0,     0,   211,     0,     0,     0,     0,     0,     0,
       0,    41,    42,   156,     0,     0,     0,   217,     0,    43,
     157,     0,     0,     0,   158,    33,    34,    35,    36,    37,
      38,     0,    39,     0,     0,    44,     0,     0,    40,     0,
       0,     0,    33,    34,    35,    36,    37,    38,     0,    39,
      41,    42,   116,     0,     0,    40,     0,   159,    43,     0,
       0,     0,     0,     0,     0,     0,    45,    41,    42,     0,
       0,   220,     0,     0,    44,    43,    33,    34,    35,    36,
      37,    38,     0,    39,    79,    80,    81,    82,    83,    84,
      85,    44,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    42,     0,     0,    45,     0,     0,     0,    43,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    45,     0,     0,    44,     0,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,     0,     0,     0,     0,     0,     0,   177,     0,     0,
       0,     0,     0,     0,     0,     0,    45,   165,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   166,     0,   178,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   232,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99
};

static const yytype_int16 yycheck[] =
{
       0,     1,     3,    18,    21,    22,   101,    64,    80,    37,
      36,    36,     3,     3,    31,     3,   176,    17,   203,   109,
     118,     0,    36,     3,    38,    40,   121,    25,   118,    44,
      11,    12,    13,    41,     6,    36,     8,     9,    17,    30,
     280,     0,    80,    43,    16,    45,   286,    62,   180,    41,
      42,   146,    80,    43,    69,    43,    36,   242,    86,    59,
      60,    61,     3,    24,    25,    26,    74,    65,    11,    12,
      13,    86,    87,   233,    89,    90,    91,    92,    93,    94,
      95,    96,   267,   181,     3,     3,   101,    79,    80,    81,
      82,    83,    84,    85,    37,     5,    37,    77,    98,   173,
      10,     6,    43,     8,     9,    97,    37,   122,   180,    37,
     165,   168,   169,   170,    50,   141,   141,    36,    36,   134,
      87,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   166,   136,    86,    36,   120,
     141,     5,   109,   135,    38,   173,   146,   162,    36,   164,
      43,   118,   180,    28,    29,    30,    31,    32,    33,    34,
     109,   176,    24,    25,    26,    27,   109,   182,   243,   118,
     245,   171,    86,    36,   269,   118,    37,   120,   173,    13,
     197,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    62,   188,   212,    25,    26,
      27,   109,   217,   203,    59,    60,    61,     3,     4,     5,
       6,     7,     8,   181,    10,    59,    60,    61,   233,   181,
      16,    88,    30,    31,    32,    33,    34,    78,   220,    34,
      37,    37,    28,    29,   101,   172,     3,    79,   105,    37,
      36,   108,   242,    37,    94,     3,   246,    37,   122,   116,
      23,    24,    25,    26,    27,   270,    52,   105,   273,   105,
      95,    50,    87,     3,   264,    62,   281,   267,   135,    46,
      62,    48,   272,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    83,   181,    36,
      67,    88,    36,    38,    37,    37,    88,    17,   163,    24,
     173,   102,   171,   203,   101,   164,   213,    62,   105,   101,
     264,   108,   246,   105,   181,   136,   108,   100,   178,   116,
     124,    -1,   119,    -1,   116,   102,    -1,   119,    -1,    -1,
      -1,    -1,    -1,    88,   203,   112,   205,    -1,   135,    -1,
     209,    15,    -1,   135,    -1,   141,   101,    -1,   181,    -1,
     105,    -1,   129,   108,    28,    29,    30,    31,    32,    33,
      34,   116,    -1,    -1,    -1,   234,    -1,    -1,   237,   146,
      -1,   168,    -1,   242,    -1,    -1,   168,   246,    -1,   248,
     135,    -1,    -1,    -1,   161,    -1,     3,     4,     5,     6,
       7,     8,    -1,    10,    -1,   264,    -1,    -1,   267,    16,
      -1,    -1,    -1,   272,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    30,    -1,    -1,    -1,   158,    -1,    36,
      37,    -1,    -1,    -1,    41,     3,     4,     5,     6,     7,
       8,    -1,    10,    -1,    -1,    52,    -1,    -1,    16,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,    -1,    10,
      28,    29,    30,    -1,    -1,    16,    -1,    74,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    28,    29,    -1,
      -1,    15,    -1,    -1,    52,    36,     3,     4,     5,     6,
       7,     8,    -1,    10,    28,    29,    30,    31,    32,    33,
      34,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    28,    29,    -1,    -1,    83,    -1,    -1,    -1,    36,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    83,    -1,    -1,    52,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    44,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    72,    -1,    43,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    36,   141,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   187,   188,   197,     0,    80,   180,   173,   218,
      11,    12,    13,   120,   202,   203,    86,   200,    37,    37,
     165,   192,   184,     3,     4,     5,     6,     7,     8,    10,
      16,    28,    29,    36,    52,    83,   187,   220,   221,   222,
     223,   224,   226,   231,   233,   234,   235,    41,    74,   208,
     208,   208,    50,   109,   118,   196,   200,   166,     5,   208,
     224,   223,   223,   187,   219,   224,   224,   227,   187,    28,
      29,    30,    31,    32,    33,    34,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      38,    36,   141,   187,   190,   191,   190,   190,   204,   205,
     224,     5,    10,   198,   198,   200,    30,   209,   210,   224,
      37,   181,   173,   228,   229,   223,   223,   223,   223,   223,
     223,   223,   224,   224,    24,    25,    26,   224,   224,   224,
     224,   224,   224,   224,   224,   223,    36,   187,   225,     6,
       8,     9,    16,     3,    30,   233,    30,    37,    41,    74,
     219,   224,   232,   197,   181,    44,    72,   206,   118,   181,
     109,    87,   194,   195,   196,   199,   181,     3,    43,   236,
     219,   224,    78,   230,   228,   224,   223,   225,    15,   219,
       6,     8,     9,    37,    37,    43,   224,   192,   204,   198,
     198,   198,     3,    36,    77,   187,   211,   212,   213,   214,
     215,   234,   172,   193,   193,   209,   236,   158,   224,    79,
      15,   223,    37,    46,    48,    67,   102,   112,   129,   146,
     161,   237,    37,   208,   187,   212,   215,    43,   234,    62,
      88,   101,   105,   108,   116,   135,   181,   216,    43,   234,
     224,   199,    94,   201,   224,   223,    37,   209,    37,   234,
     122,   217,   212,   217,   105,   217,   211,   105,   234,    50,
      95,   207,    87,   119,   168,   213,   212,   219,   224,   224,
      36,   119,   168,     3,   220,   224,    36,    37,   220,    37
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   182,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   188,   188,   188,   189,   189,   190,   190,   191,
     191,   191,   191,   192,   192,   193,   193,   194,   195,   196,
     196,   196,   196,   196,   197,   198,   198,   199,   199,   200,
     200,   201,   201,   202,   202,   203,   204,   204,   205,   206,
     206,   206,   207,   207,   208,   208,   208,   209,   209,   210,
     210,   210,   210,   211,   211,   212,   212,   213,   213,   213,
     213,   213,   214,   215,   215,   215,   215,   215,   215,   216,
     216,   216,   216,   216,   217,   217,   218,   218,   219,   219,
     220,   220,   220,   221,   221,   221,   221,   221,   221,   222,
     222,   222,   222,   222,   222,   222,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   225,
     225,   226,   227,   227,   228,   228,   229,   230,   230,   231,
     231,   231,   231,   231,   232,   232,   233,   234,   235,   236,
     237,   237,   237,   237,   237,   237,   237,   237
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     2,     1,     3,
       3,     1,     2,     3,     4,     6,     8,     1,     1,     9,
       4,     4,     4,     0,     2,     0,     2,     2,     2,     4,
       4,     2,     2,     4,     0,     1,     1,     0,     1,     0,
       2,     0,     3,     1,     0,     3,     1,     3,     2,     0,
       1,     1,     0,     2,     0,     1,     1,     1,     3,     1,
       2,     3,     1,     1,     3,     1,     1,     1,     3,     2,
       3,     2,     1,     3,     6,     5,     4,     8,     7,     2,
       2,     2,     1,     1,     1,     0,     0,     2,     1,     3,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     2,     1,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     3,     2,     3,     4,
       3,     4,     3,     4,     5,     6,     3,     4,     3,     1,
       3,     5,     1,     0,     1,     2,     4,     2,     0,     4,
       5,     4,     6,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
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
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1572 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1578 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1584 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1590 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1596 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1602 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1608 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1614 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 183: /* sql_stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1620 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 184: /* stmt_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1626 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 185: /* stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1632 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* select_stmt  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1638 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* select_with_parens  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1644 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* select_no_parens  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1650 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* no_table_select  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1656 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* select_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1662 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* simple_select  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1668 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* opt_top  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1674 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* opt_where  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1680 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* from_dual  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1686 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* from_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1692 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* select_limit  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1698 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_hint  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1704 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* limit_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1710 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* opt_select_limit  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1716 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_for_update  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1722 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* opt_groupby  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1728 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_order_by  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1734 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* order_by  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1740 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* sort_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1746 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* sort_key  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1752 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* opt_asc_desc  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1758 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_having  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1764 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_distinct  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1770 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* select_expr_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1776 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* projection  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1782 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* from_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1788 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* table_factor  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1794 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* table_factor_non_join  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1800 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* relation_factor  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1806 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* joined_table  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1812 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* join_type  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1818 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* join_outer  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1824 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* opt_when  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1830 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* expr_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1836 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* column_ref  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1842 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* expr_const  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1848 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* simple_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1854 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* arith_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1860 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1866 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 225: /* in_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1872 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* case_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1878 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* case_arg  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1884 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* when_clause_list  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1890 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* when_clause  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1896 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* case_default  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1902 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* func_expr  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1908 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* distinct_or_all  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1914 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* column_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1920 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* relation_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1926 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* function_name  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1932 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* column_label  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1938 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* data_type  */
#line 82 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1944 "sqlparser_bison.cpp" /* yacc.c:1257  */
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
#line 52 "sqlparser.y" /* yacc.c:1429  */
{
	// Initialize
	yylloc.first_column = 0;
	yylloc.last_column = 0;
	yylloc.first_line = 0;
	yylloc.last_line = 0;
}

#line 2061 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 175 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 2255 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 185 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", "; ", "{1}"};
}
#line 2264 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 193 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2270 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 199 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_WHEN, (yyvsp[0].node));
}
#line 2279 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 204 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2287 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 211 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"( ", "{0}", " )"};
}
#line 2296 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 216 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"( ", "{0}", " )"};
}
#line 2305 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 225 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyvsp[-1].node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2314 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 230 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 236 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-3].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-2].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_FOR_UPDATE, (yyvsp[0].node));
}
#line 2335 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 246 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
            (yyvsp[-2].node),             /* E_SELECT_DISTINCT 0 */
            (yyvsp[-1].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
            nullptr,        /* E_SELECT_FROM_LIST 2 */
            nullptr,        /* E_SELECT_OPT_WHERE 3 */
            nullptr,        /* E_SELECT_GROUP_BY 4 */
            nullptr,        /* E_SELECT_HAVING 5 */
            nullptr,        /* E_SELECT_SET_OPERATION 6 */
            nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
            nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
            nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
            nullptr,        /* E_SELECT_ORDER_BY 10 */
            (yyvsp[0].node),             /* E_SELECT_LIMIT 11 */
            nullptr,        /* E_SELECT_FOR_UPDATE 12 */
            (yyvsp[-4].node),             /* E_SELECT_HINTS 13 */
            nullptr,        /* E_SELECT_WHEN 14 */
            (yyvsp[-3].node)              /* E_SELECT_OPT_TOP 15 */
            );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2361 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 269 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
                (yyvsp[-4].node),             /* E_SELECT_DISTINCT 0 */
                (yyvsp[-3].node),             /* E_SELECT_SELECT_EXPR_LIST 1 */
                (yyvsp[-2].node),             /* E_SELECT_FROM_LIST 2 */
                (yyvsp[-1].node),             /* E_SELECT_OPT_WHERE 3 */
                nullptr,        /* E_SELECT_GROUP_BY 4 */
                nullptr,        /* E_SELECT_HAVING 5 */
                nullptr,        /* E_SELECT_SET_OPERATION 6 */
                nullptr,        /* E_SELECT_ALL_SPECIFIED 7 */
                nullptr,        /* E_SELECT_FORMER_SELECT_STMT 8 */
                nullptr,        /* E_SELECT_LATER_SELECT_STMT 9 */
                nullptr,        /* E_SELECT_ORDER_BY 10 */
                (yyvsp[0].node),             /* E_SELECT_LIMIT 11 */
                nullptr,        /* E_SELECT_FOR_UPDATE 12 */
                (yyvsp[-6].node),             /* E_SELECT_HINTS 13 */
                nullptr,        /* E_SELECT_WHEN 14 */
                (yyvsp[-5].node)              /* E_SELECT_OPT_TOP 15 */
                );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2387 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 301 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
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
                    (yyvsp[-7].node),             /* E_SELECT_HINTS 13 */
                    nullptr,        /* E_SELECT_WHEN 14 */
                    (yyvsp[-6].node)              /* E_SELECT_OPT_TOP 15 */
                    );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2413 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 323 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_UNION, "UNION");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
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
                        nullptr              /* E_SELECT_OPT_TOP 15 */
                        );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2440 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 346 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_INTERSECT, "INTERSECT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
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
                        nullptr              /* E_SELECT_OPT_TOP 15 */
                        );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2467 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 369 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* set_op = Node::makeTerminalNode(E_SET_EXCEPT, "EXCEPT");
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, 16,
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
                        nullptr              /* E_SELECT_OPT_TOP 15 */
                        );
    (yyval.node)->serialize_format = SELECT_SERIALIZE_FORMAT;
}
#line 2494 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 395 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2502 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 399 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"TOP ", "{0}"};
}
#line 2511 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 406 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2519 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 410 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHERE ", "{0}"};
}
#line 2528 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 418 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 0);
    (yyval.node)->serialize_format = {"FROM ", "DUAL"};
}
#line 2537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 426 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"FROM ", "{0}"};
}
#line 2546 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 434 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"LIMIT ", "{0}", " OFFSET ", "{1}"};
}
#line 2555 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 439 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"OFFSET ", "{1}", " LIMIT ", "{0}"};
}
#line 2564 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 444 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = {"LIMIT ", "{0}"};
}
#line 2573 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 449 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"OFFSET ", "{1}"};
}
#line 2582 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 454 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"LIMIT ", "{1}", ", ", "{0}"};
}
#line 2591 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 462 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2599 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 469 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2607 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 473 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2615 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 480 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2621 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 482 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2627 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 487 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2633 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 489 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_BOOL, "FOR UPDATE");
    (yyval.node)->terminalToken_.i = 1;
}
#line 2642 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 497 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2648 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 499 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"GROUP", " BY ", "{0}"};
}
#line 2657 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 506 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2663 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 507 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2669 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 512 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"ORDER", " BY ", "{0}"};
}
#line 2678 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 520 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2684 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 522 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ", ", "{1}"};
}
#line 2693 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 530 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ", "{1}"};
}
#line 2702 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 538 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 2710 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 542 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 2718 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 546 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 2726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 553 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2732 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 555 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = {"HAVING ", "{0}"};
}
#line 2741 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 563 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2749 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 567 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 2757 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 571 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 2765 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 579 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ", ", "{1}"};
}
#line 2774 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 587 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2783 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 592 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = {"{0}", " ", "{1}"};

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2795 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 600 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = {"{0}", " AS ", "{1}"};

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2807 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 608 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = {"{0}"};
}
#line 2817 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 617 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2823 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 619 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ", ", "{1}"};
}
#line 2832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 627 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2840 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 634 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2848 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 638 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " AS ", "{1}"};
}
#line 2857 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 643 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ", "{1}"};
}
#line 2866 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 648 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " AS ", "{1}"};
}
#line 2875 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 653 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ", "{1}"};
}
#line 2884 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 660 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2890 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 665 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 2899 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 670 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}", " ON ", "{3}"};
}
#line 2908 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 675 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}", " ON ", "{3}"};
}
#line 2918 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 681 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}"};
}
#line 2928 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 687 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}", " USING ", "(", "{3}", ")"};
}
#line 2937 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 692 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{1}", " ", "{0}", " JOIN ", "{2}", " USING ", "(", "{3}", ")"};
}
#line 2947 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 701 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].node))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_FULL, "FULL");
    }
}
#line 2962 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 712 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].node))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_LEFT, "LEFT");
    }
}
#line 2977 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 723 "sqlparser.y" /* yacc.c:1646  */
    {
    if ((yyvsp[0].node))
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT OUTER");
    }
    else
    {
        (yyval.node) = Node::makeTerminalNode(E_JOIN_RIGHT, "RIGHT");
    }
}
#line 2992 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 734 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 3000 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 738 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
}
#line 3008 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 744 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (Node*)1; /*this is a flag*/}
#line 3014 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 745 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 3020 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 750 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = NULL; }
#line 3026 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 752 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHEN ", "{0}"};
}
#line 3035 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 761 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ", ", "{1}"};
}
#line 3044 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 769 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", ".", "{1}"};
}
#line 3053 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 774 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), nd);
    (yyval.node)->serialize_format = {"{0}", ".", "{1}"};
}
#line 3063 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 793 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 3073 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 802 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"EXISTS ", "{0}"};
}
#line 3082 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 811 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"+", "{0}"};
}
#line 3091 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 816 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"-", "{0}"};
}
#line 3100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 821 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " + ", "{1}"};
}
#line 3109 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 826 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " - ", "{1}"};
}
#line 3118 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 831 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " * ", "{1}"};
}
#line 3127 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 836 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " / ", "{1}"};
}
#line 3136 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 841 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " % ", "{1}"};
}
#line 3145 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 846 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ^ ", "{1}"};
}
#line 3154 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 851 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " MOD ", "{1}"};
}
#line 3163 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 859 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " <= ", "{1}"};
}
#line 3172 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 864 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " < ", "{1}"};
}
#line 3181 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 869 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " = ", "{1}"};
}
#line 3190 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 874 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " >= ", "{1}"};
}
#line 3199 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 879 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " > ", "{1}"};
}
#line 3208 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 884 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " <> ", "{1}"};
}
#line 3217 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 889 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " LIKE ", "{1}"};
}
#line 3226 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 894 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " NOT LIKE ", "{1}"};
}
#line 3235 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 899 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " AND ", "{1}"};
}
#line 3244 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 904 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " OR ", "{1}"};
}
#line 3253 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 909 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"NOT ", "{0}"};
}
#line 3262 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 914 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS ", "{1}"};
}
#line 3271 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 919 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS NOT ", "{1}"};
}
#line 3280 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 924 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS ", "{1}"};
}
#line 3289 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 929 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS NOT ", "{1}"};
}
#line 3298 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 934 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS ", "{1}"};
}
#line 3307 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 939 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IS NOT ", "{1}"};
}
#line 3316 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 944 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " BETWEEN ", "{1}", " AND ", "{2}"};
}
#line 3325 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 949 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " NOT BETWEEN ", "{1}", " AND ", "{2}"};
}
#line 3334 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 954 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " IN ", "{1}"};
}
#line 3343 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 959 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " NOT IN ", "{1}"};
}
#line 3352 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 964 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " || ", "{1}"};
}
#line 3361 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 972 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"(", "{0}", ")"};
}
#line 3370 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 979 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"CASE ", "{0}", " ", "{1}", " ", "{2}", " END"};
}
#line 3379 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 987 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3387 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 994 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"{0}", " ", "{1}"};
}
#line 3396 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 1001 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = {"WHEN ", "{0}", " THEN ", "{1}"};
}
#line 3405 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 1008 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = {"ELSE ", "{0}"};
}
#line 3414 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 1013 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3422 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1019 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), star);
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", ")"};
}
#line 3432 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1025 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{2}", " ", "{1}", ")"};
}
#line 3441 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1030 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", ")"};
}
#line 3450 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1035 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = {"{0}", "(", "{1}", " AS ", "{2}", ")"};
}
#line 3459 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1040 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = {"{0}", "()"};
}
#line 3468 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1047 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3476 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1051 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3484 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1071 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 3490 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1073 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 3496 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1075 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 3502 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1077 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 3508 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1079 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 3514 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1081 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 3520 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1083 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
#line 3526 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1085 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
#line 3532 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 3536 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 1088 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
