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
    UNION = 274,
    EXCEPT = 275,
    INTERSECT = 276,
    OR = 277,
    AND = 278,
    NOT = 279,
    COMP_LE = 280,
    COMP_LT = 281,
    COMP_EQ = 282,
    COMP_GT = 283,
    COMP_GE = 284,
    COMP_NE = 285,
    CNNOP = 286,
    LIKE = 287,
    BETWEEN = 288,
    IN = 289,
    IS = 290,
    MOD = 291,
    UMINUS = 292,
    ADD = 293,
    ANY = 294,
    ALL = 295,
    ALTER = 296,
    AS = 297,
    ASC = 298,
    BEGI = 299,
    BIGINT = 300,
    BINARY = 301,
    BOOLEAN = 302,
    BOTH = 303,
    BY = 304,
    CASCADE = 305,
    CASE = 306,
    CHARACTER = 307,
    CLUSTER = 308,
    COMMENT = 309,
    COMMIT = 310,
    CONSISTENT = 311,
    COLUMN = 312,
    COLUMNS = 313,
    CREATE = 314,
    CREATETIME = 315,
    CURRENT_USER = 316,
    CHANGE_OBI = 317,
    SWITCH_CLUSTER = 318,
    DATE = 319,
    DATETIME = 320,
    DEALLOCATE = 321,
    DECIMAL = 322,
    DEFAULT = 323,
    DELETE = 324,
    DESC = 325,
    DESCRIBE = 326,
    DISTINCT = 327,
    DOUBLE = 328,
    DROP = 329,
    DUAL = 330,
    ELSE = 331,
    END = 332,
    END_P = 333,
    ERROR = 334,
    EXECUTE = 335,
    EXISTS = 336,
    EXPLAIN = 337,
    FLOAT = 338,
    FOR = 339,
    FROM = 340,
    FROZEN = 341,
    FORCE = 342,
    GLOBAL = 343,
    GLOBAL_ALIAS = 344,
    GRANT = 345,
    GROUP = 346,
    HAVING = 347,
    HINT_BEGIN = 348,
    HINT_END = 349,
    HOTSPOT = 350,
    IDENTIFIED = 351,
    IF = 352,
    INTEGER = 353,
    INSERT = 354,
    INTO = 355,
    KEY = 356,
    LEADING = 357,
    LIMIT = 358,
    LOCAL = 359,
    LOCKED = 360,
    MEDIUMINT = 361,
    MEMORY = 362,
    MODIFYTIME = 363,
    MASTER = 364,
    NUMERIC = 365,
    OFFSET = 366,
    ON = 367,
    ORDER = 368,
    OPTION = 369,
    OUTER = 370,
    PARAMETERS = 371,
    PERCENT = 372,
    PASSWORD = 373,
    PRECISION = 374,
    PREPARE = 375,
    PRIMARY = 376,
    READ_STATIC = 377,
    REAL = 378,
    RENAME = 379,
    REPLACE = 380,
    RESTRICT = 381,
    PRIVILEGES = 382,
    REVOKE = 383,
    ROLLBACK = 384,
    KILL = 385,
    READ_CONSISTENCY = 386,
    SCHEMA = 387,
    SCOPE = 388,
    SELECT = 389,
    SESSION = 390,
    SESSION_ALIAS = 391,
    SET = 392,
    SHOW = 393,
    SMALLINT = 394,
    SNAPSHOT = 395,
    SPFILE = 396,
    START = 397,
    STATIC = 398,
    SYSTEM = 399,
    STRONG = 400,
    SET_MASTER_CLUSTER = 401,
    SET_SLAVE_CLUSTER = 402,
    SLAVE = 403,
    TABLE = 404,
    TABLES = 405,
    THEN = 406,
    TIES = 407,
    TIME = 408,
    TIMESTAMP = 409,
    TINYINT = 410,
    TRAILING = 411,
    TRANSACTION = 412,
    TO = 413,
    TOP = 414,
    UPDATE = 415,
    USER = 416,
    USING = 417,
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
    WEAK = 428
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 80 "sqlparser.y" /* yacc.c:355  */

    struct Node* node;
    int    ival;

#line 323 "sqlparser_bison.cpp" /* yacc.c:355  */
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

#line 353 "sqlparser_bison.cpp" /* yacc.c:358  */

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
#define YYFINAL  19
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   606

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  185
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  180
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  308

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   428

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
      44,    45,    38,    36,   184,    37,    46,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   183,
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
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   184,   184,   193,   194,   202,   203,   208,   212,   219,
     224,   232,   233,   238,   244,   249,   255,   267,   268,   272,
     296,   320,   344,   372,   375,   380,   385,   390,   397,   398,
     405,   406,   407,   416,   419,   428,   431,   439,   444,   449,
     454,   459,   468,   474,   478,   486,   487,   495,   496,   500,
     508,   510,   518,   527,   530,   534,   542,   543,   551,   559,
     560,   568,   576,   577,   581,   589,   590,   600,   603,   607,
     614,   615,   623,   628,   636,   644,   653,   655,   662,   663,
     670,   674,   679,   684,   689,   698,   701,   708,   713,   718,
     723,   729,   735,   740,   746,   755,   766,   777,   788,   795,
     796,   801,   802,   809,   814,   819,   827,   828,   829,   830,
     831,   832,   836,   837,   838,   844,   845,   846,   847,   855,
     856,   861,   866,   871,   876,   881,   886,   891,   896,   903,
     904,   909,   914,   919,   924,   929,   934,   939,   944,   949,
     954,   959,   964,   969,   974,   979,   984,   989,   994,   999,
    1004,  1009,  1016,  1017,  1024,  1031,  1033,  1038,  1039,  1046,
    1053,  1059,  1064,  1075,  1085,  1098,  1110,  1117,  1121,  1128,
    1131,  1134,  1137,  1140,  1142,  1144,  1146,  1148,  1150,  1152,
    1154
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "NULLX", "UNKNOWN", "QUESTIONMARK", "CONDITIONLESS_JOIN",
  "CROSS", "FULL", "INNER", "JOIN", "LEFT", "NATURAL", "RIGHT", "UNION",
  "EXCEPT", "INTERSECT", "OR", "AND", "NOT", "COMP_LE", "COMP_LT",
  "COMP_EQ", "COMP_GT", "COMP_GE", "COMP_NE", "CNNOP", "LIKE", "BETWEEN",
  "IN", "IS", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "'('", "')'", "'.'", "ADD", "ANY", "ALL", "ALTER", "AS", "ASC", "BEGI",
  "BIGINT", "BINARY", "BOOLEAN", "BOTH", "BY", "CASCADE", "CASE",
  "CHARACTER", "CLUSTER", "COMMENT", "COMMIT", "CONSISTENT", "COLUMN",
  "COLUMNS", "CREATE", "CREATETIME", "CURRENT_USER", "CHANGE_OBI",
  "SWITCH_CLUSTER", "DATE", "DATETIME", "DEALLOCATE", "DECIMAL", "DEFAULT",
  "DELETE", "DESC", "DESCRIBE", "DISTINCT", "DOUBLE", "DROP", "DUAL",
  "ELSE", "END", "END_P", "ERROR", "EXECUTE", "EXISTS", "EXPLAIN", "FLOAT",
  "FOR", "FROM", "FROZEN", "FORCE", "GLOBAL", "GLOBAL_ALIAS", "GRANT",
  "GROUP", "HAVING", "HINT_BEGIN", "HINT_END", "HOTSPOT", "IDENTIFIED",
  "IF", "INTEGER", "INSERT", "INTO", "KEY", "LEADING", "LIMIT", "LOCAL",
  "LOCKED", "MEDIUMINT", "MEMORY", "MODIFYTIME", "MASTER", "NUMERIC",
  "OFFSET", "ON", "ORDER", "OPTION", "OUTER", "PARAMETERS", "PERCENT",
  "PASSWORD", "PRECISION", "PREPARE", "PRIMARY", "READ_STATIC", "REAL",
  "RENAME", "REPLACE", "RESTRICT", "PRIVILEGES", "REVOKE", "ROLLBACK",
  "KILL", "READ_CONSISTENCY", "SCHEMA", "SCOPE", "SELECT", "SESSION",
  "SESSION_ALIAS", "SET", "SHOW", "SMALLINT", "SNAPSHOT", "SPFILE",
  "START", "STATIC", "SYSTEM", "STRONG", "SET_MASTER_CLUSTER",
  "SET_SLAVE_CLUSTER", "SLAVE", "TABLE", "TABLES", "THEN", "TIES", "TIME",
  "TIMESTAMP", "TINYINT", "TRAILING", "TRANSACTION", "TO", "TOP", "UPDATE",
  "USER", "USING", "VALUES", "VARCHAR", "VARBINARY", "WHERE", "WHEN",
  "WITH", "WORK", "PROCESSLIST", "QUERY", "CONNECTION", "WEAK", "';'",
  "','", "$accept", "sql_stmt", "stmt_list", "stmt", "select_stmt",
  "select_with_parens", "select_no_parens", "select_clause",
  "simple_select", "opt_top", "top_count", "top_percent", "opt_where",
  "opt_from_clause", "select_limit", "opt_hint", "limit_expr",
  "opt_groupby", "opt_order_by", "order_by", "sort_list", "sort_key",
  "opt_asc_desc", "opt_having", "with_clause", "with_list",
  "common_table_expr", "opt_derived_column_list",
  "simple_ident_list_with_parens", "simple_ident_list", "opt_distinct",
  "select_expr_list", "projection", "from_list", "table_factor",
  "table_factor_non_join", "opt_simple_ident_list_with_parens",
  "relation_factor", "joined_table", "join_type", "join_outer",
  "expr_list", "column_ref", "expr_const", "simple_expr", "arith_expr",
  "expr", "in_expr", "case_expr", "case_arg", "when_clause_list",
  "when_clause", "case_default", "func_expr", "distinct_or_all",
  "column_name", "relation_name", "function_name", "column_label",
  "data_type", YY_NULLPTR
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
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,    59,    44
};
# endif

#define YYPACT_NINF -165

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-165)))

#define YYTABLE_NINF -172

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -21,   -21,  -165,    19,    31,   -53,  -143,  -165,   -63,  -165,
      38,   -25,   -31,     2,     5,   -32,    16,  -165,  -106,  -165,
    -165,   -21,   -32,   -32,   -32,    47,   -85,   -76,  -165,    38,
     -12,  -165,  -165,  -165,  -165,   -54,   114,    92,  -165,    19,
    -165,   -31,   -31,   -31,   391,    41,    41,  -165,   -85,   -76,
     122,   348,   -59,   108,   113,  -165,   146,  -165,   146,  -165,
      84,  -165,  -165,  -165,  -165,  -165,  -165,   391,   426,   426,
       1,   391,   113,  -165,  -165,   -10,  -165,  -165,  -165,   380,
     465,  -165,  -165,  -165,   126,   131,  -165,  -165,   -92,    65,
    -165,    54,  -165,   391,     4,    61,  -165,    94,    18,   479,
     114,  -165,  -165,   494,  -165,  -165,    74,   159,   205,   571,
      36,  -165,   391,   426,   426,   426,   426,   426,   426,   426,
     391,   391,   235,   391,   391,   391,   391,   391,   391,   391,
     391,   426,   202,   176,  -165,  -165,  -165,   104,   333,    41,
      41,    41,   523,    87,    72,    71,    78,   348,  -165,   251,
    -165,  -165,  -165,   391,   391,   172,    36,  -165,   306,   306,
     216,   216,   216,   216,  -165,   508,   494,   391,   426,   202,
     328,   328,   328,   328,   328,   328,   175,   241,   224,     1,
    -165,  -165,  -165,  -165,  -165,   125,  -165,  -165,  -165,   233,
    -165,  -165,  -165,   234,   191,   391,  -165,  -165,  -165,   162,
    -165,   121,  -165,    12,    70,  -165,    86,  -165,    73,  -165,
    -165,   391,   190,  -165,  -165,  -165,   284,   391,   206,  -165,
     241,   260,  -165,   426,   258,  -165,  -165,  -165,  -165,  -165,
     217,   547,  -165,    45,   440,   259,   318,    16,   307,   199,
    -165,    71,   199,   311,   199,    71,   312,   318,    16,   571,
     271,   229,   391,   571,  -165,   426,   380,  -165,  -165,  -165,
    -165,  -165,  -165,  -165,  -165,  -165,   286,  -165,  -165,    16,
    -165,  -165,    71,  -165,  -165,   123,  -165,   120,  -165,  -165,
      71,    16,  -165,   391,   391,  -165,   571,   380,  -165,  -165,
     440,   391,   289,  -165,   134,  -165,  -165,   571,   571,   114,
     391,   290,   297,   571,   114,  -165,   305,  -165
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     0,    42,     0,     0,     0,     3,     5,    18,     7,
      48,    17,     0,    18,     0,    67,    62,    58,    59,     1,
       2,     6,    67,    67,    67,     0,     0,    12,    18,    48,
      17,    10,     9,    68,    69,    23,     0,     0,    63,     0,
       4,     0,     0,     0,     0,     0,     0,    13,     0,    15,
       0,     0,    65,     0,     0,    60,    20,    17,    22,    21,
     169,   106,   107,   109,   108,   110,   111,     0,     0,     0,
       0,   156,     0,   117,    49,    50,   112,   113,   119,   129,
      53,   115,   116,   103,     0,     0,    43,    44,    39,    40,
      16,    28,    30,     0,    24,     0,    75,    35,    70,    72,
       0,    64,    61,   140,   120,   121,   117,     0,   101,   155,
       0,   118,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    52,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    33,     0,   172,     0,
      73,    66,   114,     0,     0,   161,   157,    51,   122,   123,
     124,   125,   126,   128,   127,   139,   138,     0,     0,     0,
     130,   131,   132,   134,   133,   135,   151,   136,     0,     0,
     152,   149,   143,   141,   145,     0,   169,   105,   104,     0,
     166,   167,   168,     0,   101,     0,    37,    41,    38,    29,
      25,     0,   170,     0,     0,    36,    76,    78,    80,    79,
      87,     0,    45,    71,    74,   102,     0,     0,     0,   158,
     137,     0,   150,     0,     0,   144,   142,   146,   162,   164,
       0,     0,    27,    18,     0,    79,     0,    85,     0,   100,
      98,     0,   100,     0,   100,     0,     0,     0,    85,    34,
       0,    56,     0,   160,   154,     0,   147,   153,   177,   178,
     180,   176,   175,   179,   174,   173,     0,   163,    88,    85,
      86,    84,     0,    99,    95,     0,    96,     0,    97,    77,
       0,    85,    83,     0,     0,    19,   159,   148,   165,    82,
      94,     0,     0,    91,     0,    81,    46,    57,    90,     0,
       0,     0,     0,    89,     0,    93,     0,    92
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -165,  -165,   314,  -165,  -165,     0,    32,   149,   156,  -165,
    -165,  -165,  -165,  -165,   316,  -165,   -30,  -165,   337,   338,
     256,  -165,  -165,  -165,  -165,   334,  -165,  -165,   358,   -98,
     263,   232,  -165,   135,  -164,    99,   -86,  -165,   180,  -165,
     -79,  -124,  -165,  -165,  -165,   -50,   -41,   218,  -165,  -165,
     244,  -165,  -165,  -165,  -165,   253,    48,  -165,   239,  -165
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    73,    14,    10,    11,    51,
      94,    95,   212,   146,    47,    15,    88,   251,    26,    27,
      74,    75,   136,   285,    12,    17,    18,    37,   270,    53,
      35,    97,    98,   205,   206,   207,   271,   208,   209,   246,
     274,   107,    76,    77,    78,    79,   108,   181,    81,   110,
     155,   156,   218,    82,   195,    83,    84,    85,   150,   266
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    13,   151,    80,    60,    61,    62,    63,    64,    65,
      99,    66,    28,     1,   193,   202,    89,    33,   104,   105,
     -11,     8,    16,     1,    -8,    67,   103,    45,   139,   215,
     109,    19,     9,   -14,    20,    46,   -47,    68,    69,   234,
      21,    28,    28,    28,   -47,    70,    86,    31,   202,    34,
      32,    87,   142,     9,   102,   224,   203,    22,    23,    24,
      36,    71,   -11,   158,   159,   160,   161,   162,   163,   164,
     106,    80,   111,   202,   202,   -14,   202,   275,    39,   165,
     166,   178,   170,   171,   172,   173,   174,   175,   176,   177,
      31,    72,   140,   -18,   -18,   -18,   236,   194,   238,   239,
     240,   241,   242,   243,   244,    44,    99,   186,   290,   196,
     197,   198,     2,   216,    50,   203,   294,    52,   221,    31,
      -8,   236,     2,   202,   247,   100,   220,    91,  -171,    92,
    -170,   225,   180,   226,   227,   238,   239,   240,   241,   242,
     243,   244,   187,    54,     2,   204,   238,   239,   240,   241,
     242,   243,   244,   101,   231,     2,     3,     1,   -11,   296,
      25,    29,   282,   276,     1,   278,    93,    24,    30,   180,
     249,   -14,   137,   256,   112,   138,   253,   141,     3,   106,
     -31,   143,   182,   289,   183,   184,   -18,   144,   145,     3,
      56,    58,    59,   210,   -18,   295,   -18,    57,    57,    57,
     185,   302,   147,   233,   152,   287,   306,   130,   131,   132,
     133,   286,   154,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   204,   230,   297,   291,   204,   179,   223,   200,   201,
     298,   210,   237,   211,   148,   300,   248,   217,   119,   303,
     113,   114,   115,   116,   117,   118,   119,   167,   168,   169,
     245,   258,   204,   259,   131,   132,   133,   204,   228,   229,
     204,   237,   232,   255,   269,    41,    42,    43,   -32,   210,
     250,   260,   254,   210,   292,   281,   113,   114,   115,   116,
     117,   118,   119,   257,   268,   301,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     210,   202,   272,   273,   261,   210,   277,   280,   210,   283,
     284,   288,   262,   299,   304,    40,    60,    61,    62,    63,
      64,    65,   305,    66,   115,   116,   117,   118,   119,   263,
     307,    60,    61,    62,    63,    64,    65,    67,    66,   129,
     130,   131,   132,   133,    90,   264,    48,    49,   157,    68,
      69,   189,    67,    55,    38,   153,   293,    70,   190,   213,
     279,   265,   191,   235,    68,    69,    96,   222,   214,   153,
     188,     0,    70,    71,    60,    61,    62,    63,    64,    65,
     219,    66,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,     0,   192,    67,   113,   114,   115,   116,
     117,   118,   119,    72,     0,     0,     0,    68,    69,    60,
      61,    62,    63,    64,    65,    70,    66,     0,    72,     0,
       0,     0,     0,     0,   252,     0,     0,     0,     0,     0,
       0,    71,   238,   239,   240,   241,   242,   243,   244,     0,
       0,     0,    68,    69,     0,     0,     0,     0,     0,     0,
      70,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,   148,     0,     0,     0,    71,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,     0,    72,   134,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     149,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   135,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   199,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   267,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133
};

static const yytype_int16 yycheck[] =
{
       0,     1,   100,    44,     3,     4,     5,     6,     7,     8,
      51,    10,    12,    44,   138,     3,    46,    49,    68,    69,
      45,    21,     3,    44,    87,    24,    67,   112,   120,   153,
      71,     0,     0,    45,    87,   120,   112,    36,    37,   203,
     183,    41,    42,    43,   120,    44,     5,    45,     3,    81,
      45,    10,    93,    21,    54,   179,    44,    19,    20,    21,
      44,    60,    87,   113,   114,   115,   116,   117,   118,   119,
      70,   112,    72,     3,     3,    87,     3,   241,   184,   120,
     121,   131,   123,   124,   125,   126,   127,   128,   129,   130,
      45,    90,   184,    19,    20,    21,    51,   138,    12,    13,
      14,    15,    16,    17,    18,    58,   147,     3,   272,   139,
     140,   141,   143,   154,   168,    44,   280,     3,   168,    45,
     183,    51,   143,     3,    51,   184,   167,     5,    44,     7,
      46,     6,   132,     8,     9,    12,    13,    14,    15,    16,
      17,    18,    38,    51,   143,   145,    12,    13,    14,    15,
      16,    17,    18,    45,   195,   143,   177,    44,   183,   283,
     122,    12,   248,   242,    44,   244,    44,    21,    12,   169,
     211,   183,    46,   223,   184,    44,   217,   112,   177,   179,
     126,   177,     6,   269,     8,     9,   112,   126,    94,   177,
      41,    42,    43,   145,   120,   281,   122,    41,    42,    43,
      24,   299,   184,   203,    45,   255,   304,    32,    33,    34,
      35,   252,   176,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,   241,    51,   284,   121,   245,    44,    23,   161,   177,
     291,   203,   204,   175,     3,   121,   208,    85,    42,   300,
      36,    37,    38,    39,    40,    41,    42,    32,    33,    34,
     184,    54,   272,    56,    33,    34,    35,   277,    45,    45,
     280,   233,   161,    23,   236,    22,    23,    24,   126,   241,
     100,    74,    86,   245,   171,   247,    36,    37,    38,    39,
      40,    41,    42,    45,    45,   171,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
     272,     3,    15,   124,   107,   277,    15,    15,   280,    58,
     101,    45,   115,    44,    44,    21,     3,     4,     5,     6,
       7,     8,    45,    10,    38,    39,    40,    41,    42,   132,
      45,     3,     4,     5,     6,     7,     8,    24,    10,    31,
      32,    33,    34,    35,    48,   148,    29,    29,   112,    36,
      37,    38,    24,    39,    16,   184,   277,    44,    45,   147,
     245,   164,    49,   203,    36,    37,    38,   169,   149,   184,
     137,    -1,    44,    60,     3,     4,     5,     6,     7,     8,
     156,    10,    -1,    -1,    -1,    -1,    -1,    -1,    60,    -1,
      -1,    -1,    -1,    -1,    81,    24,    36,    37,    38,    39,
      40,    41,    42,    90,    -1,    -1,    -1,    36,    37,     3,
       4,     5,     6,     7,     8,    44,    10,    -1,    90,    -1,
      -1,    -1,    -1,    -1,   160,    -1,    -1,    -1,    -1,    -1,
      -1,    60,    12,    13,    14,    15,    16,    17,    18,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    90,     3,    -1,    -1,    -1,    60,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    -1,    90,    52,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      51,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    79,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    44,   143,   177,   186,   187,   188,   189,   190,   191,
     192,   193,   209,   190,   191,   200,     3,   210,   211,     0,
      87,   183,    19,    20,    21,   122,   203,   204,   190,   192,
     193,    45,    45,    49,    81,   215,    44,   212,   213,   184,
     187,   215,   215,   215,    58,   112,   120,   199,   203,   204,
     168,   194,     3,   214,    51,   210,   192,   193,   192,   192,
       3,     4,     5,     6,     7,     8,    10,    24,    36,    37,
      44,    60,    90,   190,   205,   206,   227,   228,   229,   230,
     231,   233,   238,   240,   241,   242,     5,    10,   201,   201,
     199,     5,     7,    44,   195,   196,    38,   216,   217,   231,
     184,    45,   190,   231,   230,   230,   190,   226,   231,   231,
     234,   190,   184,    36,    37,    38,    39,    40,    41,    42,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    52,    79,   207,    46,    44,   120,
     184,   112,   231,   177,   126,    94,   198,   184,     3,    51,
     243,   214,    45,   184,   176,   235,   236,   205,   230,   230,
     230,   230,   230,   230,   230,   231,   231,    32,    33,    34,
     231,   231,   231,   231,   231,   231,   231,   231,   230,    44,
     190,   232,     6,     8,     9,    24,     3,    38,   240,    38,
      45,    49,    81,   226,   231,   239,   201,   201,   201,    45,
     161,   177,     3,    44,   190,   218,   219,   220,   222,   223,
     241,   175,   197,   216,   243,   226,   231,    85,   237,   235,
     231,   230,   232,    23,   226,     6,     8,     9,    45,    45,
      51,   231,   161,   190,   219,   223,    51,   241,    12,    13,
      14,    15,    16,    17,    18,   184,   224,    51,   241,   231,
     100,   202,   160,   231,    86,    23,   230,    45,    54,    56,
      74,   107,   115,   132,   148,   164,   244,    45,    45,   241,
     213,   221,    15,   124,   225,   219,   225,    15,   225,   218,
      15,   241,   221,    58,   101,   208,   231,   230,    45,   221,
     219,   121,   171,   220,   219,   221,   226,   231,   231,    44,
     121,   171,   214,   231,    44,    45,   214,    45
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   185,   186,   187,   187,   188,   188,   189,   189,   190,
     190,   191,   191,   191,   191,   191,   191,   192,   192,   193,
     193,   193,   193,   194,   194,   194,   194,   194,   195,   195,
     196,   196,   196,   197,   197,   198,   198,   199,   199,   199,
     199,   199,   200,   201,   201,   202,   202,   203,   203,   204,
     205,   205,   206,   207,   207,   207,   208,   208,   209,   210,
     210,   211,   212,   212,   213,   214,   214,   215,   215,   215,
     216,   216,   217,   217,   217,   217,   218,   218,   219,   219,
     220,   220,   220,   220,   220,   221,   221,   222,   223,   223,
     223,   223,   223,   223,   223,   224,   224,   224,   224,   225,
     225,   226,   226,   227,   227,   227,   228,   228,   228,   228,
     228,   228,   229,   229,   229,   229,   229,   229,   229,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   230,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   232,   232,   233,   234,   234,   235,   235,   236,
     237,   237,   238,   238,   238,   238,   238,   239,   239,   240,
     241,   242,   243,   244,   244,   244,   244,   244,   244,   244,
     244
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     1,     0,     1,     1,     3,
       3,     1,     2,     3,     2,     3,     4,     1,     1,     9,
       4,     4,     4,     0,     2,     4,     3,     5,     1,     3,
       1,     1,     3,     0,     2,     0,     2,     4,     4,     2,
       2,     4,     0,     1,     1,     0,     3,     1,     0,     3,
       1,     3,     2,     0,     1,     1,     0,     2,     2,     1,
       3,     4,     0,     1,     3,     1,     3,     0,     1,     1,
       1,     3,     1,     2,     3,     1,     1,     3,     1,     1,
       1,     4,     4,     3,     3,     0,     1,     1,     3,     6,
       5,     4,     8,     7,     4,     2,     2,     2,     1,     1,
       0,     1,     3,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     2,     1,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     3,
       2,     3,     4,     3,     4,     3,     4,     5,     6,     3,
       4,     3,     1,     3,     5,     1,     0,     1,     2,     4,
       2,     0,     4,     5,     4,     6,     3,     1,     1,     1,
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
#line 1590 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1596 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1602 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1608 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1614 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1620 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1626 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1632 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* sql_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1638 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* stmt_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1644 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1650 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1656 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* select_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1662 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* select_no_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1668 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* select_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1674 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* simple_select  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1680 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_top  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1686 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* top_count  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1692 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* top_percent  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1698 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_where  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1704 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_from_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1710 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* select_limit  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1716 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1722 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* limit_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1728 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_groupby  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1734 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1740 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1746 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* sort_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1752 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* sort_key  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1758 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_asc_desc  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1764 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_having  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1770 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* with_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1776 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* with_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1782 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* common_table_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1788 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_derived_column_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1794 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* simple_ident_list_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1800 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* simple_ident_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1806 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_distinct  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1812 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* select_expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1818 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* projection  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1824 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* from_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1830 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* table_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1836 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* table_factor_non_join  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1842 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_simple_ident_list_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1848 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* relation_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1854 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* joined_table  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1860 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* join_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1866 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1872 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* column_ref  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1878 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* expr_const  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1884 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* simple_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1890 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* arith_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1896 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1902 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* in_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1908 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* case_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1914 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* case_arg  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1920 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* when_clause_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1926 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* when_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1932 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* case_default  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1938 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* func_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1944 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* distinct_or_all  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1950 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* column_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1956 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* relation_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1962 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* function_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1968 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* column_label  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1974 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* data_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1980 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 2097 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 185 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    result->result_tree_ = (yyvsp[-1].node);
    result->accept = true;
    YYACCEPT;
}
#line 2291 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 195 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &STMT_LIST_SERIALIZE_FORMAT;
}
#line 2300 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 203 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2306 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 209 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2314 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 213 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2322 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 220 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2331 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 225 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2340 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 234 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[0].node));
}
#line 2349 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 239 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[0].node));
}
#line 2359 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 245 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-1].node));
}
#line 2368 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 250 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-2].node));
}
#line 2378 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-3].node));
}
#line 2389 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 274 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT, E_SELECT_PROPERTY_CNT,
                    (yyvsp[-6].node),             /* E_SELECT_DISTINCT 0 */
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
                    (yyvsp[-5].node),             /* E_SELECT_OPT_TOP 15 */
                    nullptr         /* E_SELECT_OPT_WITH 16 */
                    );
    (yyval.node)->serialize_format = &SELECT_SERIALIZE_FORMAT;
}
#line 2416 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 297 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr              /* E_SELECT_OPT_WITH 16 */
                        );
    (yyval.node)->serialize_format = &SELECT_UNION_SERIALIZE_FORMAT;
}
#line 2444 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 321 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr              /* E_SELECT_OPT_WITH 16 */
                        );
    (yyval.node)->serialize_format = &SELECT_INTERSECT_SERIALIZE_FORMAT;
}
#line 2472 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 345 "sqlparser.y" /* yacc.c:1646  */
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
                        nullptr              /* E_SELECT_OPT_WITH 16 */
                        );
    (yyval.node)->serialize_format = &SELECT_EXCEPT_SERIALIZE_FORMAT;
}
#line 2500 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 372 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2508 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 376 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 2517 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 381 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 2526 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 386 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 2535 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 391 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 2544 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 399 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2553 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 408 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2562 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 416 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 420 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 2579 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 428 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2587 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 432 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 2596 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 440 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &LIMIT_1_SERIALIZE_FORMAT;
}
#line 2605 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 445 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &LIMIT_2_SERIALIZE_FORMAT;
}
#line 2614 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 450 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &LIMIT_3_SERIALIZE_FORMAT;
}
#line 2623 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 455 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &LIMIT_4_SERIALIZE_FORMAT;
}
#line 2632 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 460 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &LIMIT_5_SERIALIZE_FORMAT;
}
#line 2641 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 468 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2649 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 475 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2657 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 479 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2665 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 486 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2671 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 488 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 2680 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 495 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2686 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 496 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2692 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 501 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 2701 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 509 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2707 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 511 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 2716 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 519 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 2725 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 527 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 2733 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 531 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 2741 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 535 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 2749 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 542 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2755 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 544 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 2764 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 552 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 2773 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 561 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2782 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 569 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 2791 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 576 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2797 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 582 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2806 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 591 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2815 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 600 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2823 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 604 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 2831 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 608 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 2839 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 616 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SELECT_EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2848 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 624 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2857 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 629 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2869 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 637 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2881 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 645 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2891 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 654 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2897 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 656 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FORM_LIST_SERIALIZE_FORMAT;
}
#line 2906 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 664 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2914 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 671 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2922 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 675 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 2931 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 680 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 2940 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 685 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
#line 2949 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 690 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
#line 2958 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 698 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2966 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 702 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2974 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 709 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2980 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 714 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2989 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 719 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 2998 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 724 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3008 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 730 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_NATURAL, "NATURAL");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 3018 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 736 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3027 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 741 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3037 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 747 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 3047 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 756 "sqlparser.y" /* yacc.c:1646  */
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
#line 3062 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 767 "sqlparser.y" /* yacc.c:1646  */
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
#line 3077 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 778 "sqlparser.y" /* yacc.c:1646  */
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
#line 3092 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 789 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 3100 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 795 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 3106 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 796 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3112 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 803 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 3121 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 810 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT_0;
}
#line 3130 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 815 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
}
#line 3139 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 820 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), nd);
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
}
#line 3149 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 839 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3159 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 848 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 3168 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 857 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 3177 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 862 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 3186 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 867 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 3195 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 872 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 3204 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 877 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 3213 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 882 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 3222 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 887 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 3231 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 892 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 3240 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 897 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 3249 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 905 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 3258 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 910 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 3267 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 915 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3276 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 920 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 3285 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 925 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 3294 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 930 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 3303 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 935 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 3312 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 940 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 3321 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 945 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 3330 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 950 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 3339 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 955 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 3348 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 960 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3357 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 965 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3366 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 970 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3375 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 975 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3384 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 980 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3393 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 985 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3402 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 990 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 3411 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 995 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 3420 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 1000 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 3429 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1005 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 3438 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 1010 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 3447 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1018 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3456 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 1025 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 3465 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 1033 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3473 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1040 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_LIST_SERIALIZE_FORMAT;
}
#line 3482 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1047 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 3491 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1054 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 3500 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1059 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3508 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1065 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::IS_CAN_WITH_STAR_FUNCTION((yyvsp[-3].node)->terminalToken_.str))
    {
    	yyerror(&(yylsp[-3]), result, scanner, "Only COUNT function can be with parameter '*'");
    	YYABORT;
    }
    Node* star = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), star);
    (yyval.node)->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
#line 3523 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1076 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::IS_AGGREGATE_FUNCTION((yyvsp[-4].node)->terminalToken_.str))
    {
    	yyerror(&(yylsp[-4]), result, scanner, "Only aggregate function can be with option distinct, all");
    	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_2_SERIALIZE_FORMAT;
}
#line 3537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1086 "sqlparser.y" /* yacc.c:1646  */
    {
    if (Node::ListLength((yyvsp[-1].node)) > 1 &&
    	Node::IS_ONE_PARAM_FUNCTION((yyvsp[-3].node)->terminalToken_.str))
    {
    	std::string err = (yyvsp[-3].node)->terminalToken_.str;
    	err += " function only support 1 parameter";
	yyerror(&(yylsp[-3]), result, scanner, err.c_str());
	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 2, (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_1_SERIALIZE_FORMAT;
}
#line 3554 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1099 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::IS_CAN_WITH_AS_FUNCTION((yyvsp[-5].node)->terminalToken_.str))
    {
    	std::string err = (yyvsp[-5].node)->terminalToken_.str;
	err += " function not support as option";
	yyerror(&(yylsp[-5]), result, scanner, err.c_str());
	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-5].node), (yyvsp[-3].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &FUN_CALL_3_SERIALIZE_FORMAT;
}
#line 3570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1111 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_4_SERIALIZE_FORMAT;
}
#line 3579 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1118 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3587 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 1122 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3595 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1141 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 3601 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1143 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 3607 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1145 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 3613 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1147 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 3619 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1149 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 3625 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1151 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 3631 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1153 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
#line 3637 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 1155 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
#line 3643 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 3647 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 1158 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
