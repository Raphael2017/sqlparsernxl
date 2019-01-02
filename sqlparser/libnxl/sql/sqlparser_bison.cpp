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
#define YYLAST   586

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  185
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  60
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  305

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
     723,   729,   734,   740,   749,   760,   771,   782,   789,   790,
     795,   796,   803,   808,   813,   821,   822,   823,   824,   825,
     826,   830,   831,   832,   838,   839,   840,   841,   849,   850,
     855,   860,   865,   870,   875,   880,   885,   890,   897,   898,
     903,   908,   913,   918,   923,   928,   933,   938,   943,   948,
     953,   958,   963,   968,   973,   978,   983,   988,   993,   998,
    1003,  1010,  1011,  1018,  1025,  1027,  1032,  1033,  1040,  1047,
    1053,  1058,  1069,  1079,  1092,  1104,  1111,  1115,  1122,  1125,
    1128,  1131,  1134,  1136,  1138,  1140,  1142,  1144,  1146,  1148
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

#define YYPACT_NINF -131

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-131)))

#define YYTABLE_NINF -171

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -24,   -24,  -131,    35,    19,   -30,  -116,  -131,   -60,  -131,
      16,   -43,   -31,    49,    63,   -10,    81,  -131,   -57,  -131,
    -131,   -24,   -10,   -10,   -10,    73,  -102,   -44,  -131,    16,
     -36,  -131,  -131,  -131,  -131,   -19,   154,   108,  -131,    35,
    -131,   -31,   -31,   -31,   362,   116,   116,  -131,  -102,   -44,
     132,   314,   -22,   127,   129,  -131,   176,  -131,   176,  -131,
     -38,  -131,  -131,  -131,  -131,  -131,  -131,   362,   406,   406,
      92,   362,   129,  -131,  -131,    18,  -131,  -131,  -131,   351,
     445,  -131,  -131,  -131,   163,   166,  -131,  -131,  -115,   101,
    -131,    89,  -131,   362,    66,   131,  -131,   164,    75,   459,
     154,  -131,  -131,   474,  -131,  -131,   144,   216,   257,   551,
      87,  -131,   362,   406,   406,   406,   406,   406,   406,   406,
     362,   362,    48,   362,   362,   362,   362,   362,   362,   362,
     362,   406,   221,   187,  -131,  -131,  -131,    82,   304,   116,
     116,   116,   503,   106,    93,    30,   102,   314,  -131,   265,
    -131,  -131,  -131,   362,   362,   228,    87,  -131,   209,   209,
     273,   273,   273,   273,  -131,   488,   474,   362,   406,   221,
     241,   241,   241,   241,   241,   241,   311,   151,   293,    92,
    -131,  -131,  -131,  -131,  -131,   225,  -131,  -131,  -131,   278,
    -131,  -131,  -131,   280,   195,   362,  -131,  -131,  -131,   200,
    -131,   175,  -131,     1,    26,  -131,    10,  -131,    28,  -131,
    -131,   362,   227,  -131,  -131,  -131,   271,   362,   251,  -131,
     151,   396,  -131,   406,   294,  -131,  -131,  -131,  -131,  -131,
      68,   527,  -131,     8,   224,   302,   352,    81,   339,   232,
    -131,    30,   232,   232,    30,   342,   352,    81,   551,   301,
     259,   362,   551,  -131,   406,   351,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,   316,  -131,  -131,    81,  -131,
    -131,    30,  -131,  -131,    34,  -131,  -131,  -131,    30,    81,
    -131,   362,   362,  -131,   551,   351,  -131,  -131,   224,   362,
     318,    91,  -131,  -131,   551,   551,   154,   362,   319,   326,
     551,   154,  -131,   328,  -131
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
     168,   105,   106,   108,   107,   109,   110,     0,     0,     0,
       0,   155,     0,   116,    49,    50,   111,   112,   118,   128,
      53,   114,   115,   102,     0,     0,    43,    44,    39,    40,
      16,    28,    30,     0,    24,     0,    75,    35,    70,    72,
       0,    64,    61,   139,   119,   120,   116,     0,   100,   154,
       0,   117,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    52,     0,     0,     0,
       0,     0,     0,     0,    26,     0,    33,     0,   171,     0,
      73,    66,   113,     0,     0,   160,   156,    51,   121,   122,
     123,   124,   125,   127,   126,   138,   137,     0,     0,     0,
     129,   130,   131,   133,   132,   134,   150,   135,     0,     0,
     151,   148,   142,   140,   144,     0,   168,   104,   103,     0,
     165,   166,   167,     0,   100,     0,    37,    41,    38,    29,
      25,     0,   169,     0,     0,    36,    76,    78,    80,    79,
      87,     0,    45,    71,    74,   101,     0,     0,     0,   157,
     136,     0,   149,     0,     0,   143,   141,   145,   161,   163,
       0,     0,    27,    18,     0,    79,     0,    85,     0,    99,
      97,     0,    99,    99,     0,     0,     0,    85,    34,     0,
      56,     0,   159,   153,     0,   146,   152,   176,   177,   179,
     175,   174,   178,   173,   172,     0,   162,    88,    85,    86,
      84,     0,    98,    94,     0,    95,    96,    77,     0,    85,
      83,     0,     0,    19,   158,   147,   164,    82,    93,     0,
       0,     0,    81,    46,    57,    90,     0,     0,     0,     0,
      89,     0,    92,     0,    91
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -131,  -131,   354,  -131,  -131,     0,   150,   149,   165,  -131,
    -131,  -131,  -131,  -131,   329,  -131,    -6,  -131,   347,   349,
     268,  -131,  -131,  -131,  -131,   343,  -131,  -131,   365,   -97,
     231,   236,  -131,   140,  -130,  -131,   -81,  -131,   192,  -131,
     -75,  -121,  -131,  -131,  -131,   -53,   -37,   233,  -131,  -131,
     240,  -131,  -131,  -131,  -131,   260,   -90,  -131,   252,  -131
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,    73,    14,    10,    11,    51,
      94,    95,   212,   146,    47,    15,    88,   250,    26,    27,
      74,    75,   136,   283,    12,    17,    18,    37,   269,    53,
      35,    97,    98,   205,   206,   207,   270,   208,   209,   245,
     273,   107,    76,    77,    78,    79,   108,   181,    81,   110,
     155,   156,   218,    82,   195,    83,    84,    85,   150,   265
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
       8,    13,   -11,   151,   202,   139,  -170,    80,  -169,   -14,
      45,   202,    28,     1,    99,   104,   105,   193,    46,    19,
       1,     8,   238,   239,   240,   241,   242,    -8,   243,   202,
     103,   202,   215,   202,   109,    22,    23,    24,    16,    33,
      89,    28,    28,    28,   -11,   203,   238,   239,   240,   241,
     242,   -14,   243,    31,   102,   210,   142,    20,   224,   236,
     158,   159,   160,   161,   162,   163,   164,    21,   -47,   140,
     106,    34,   111,   234,   203,    80,   -47,   236,   178,   246,
     167,   168,   169,   165,   166,   186,   170,   171,   172,   173,
     174,   175,   176,   177,    31,    60,    61,    62,    63,    64,
      65,   194,    66,   238,   239,   240,   241,   242,    32,   243,
      99,   274,     2,   210,   237,   221,    67,   216,   247,     2,
     187,    86,   257,    -8,   258,    36,    87,    39,    68,    69,
     220,    44,   180,   196,   197,   198,    70,    91,    25,    92,
     -11,   288,   259,   237,     2,   204,   268,   -14,   291,    50,
       9,   210,    71,     3,   210,   289,   279,    52,   231,    54,
     293,    29,   100,   -18,   -18,   -18,   280,   275,   276,   180,
     255,     9,   101,     1,   248,   260,    93,    30,     3,   106,
     252,   210,    72,   261,   131,   132,   133,   287,   210,    31,
      56,    58,    59,   182,   244,   183,   184,    24,   292,   299,
     262,   285,   112,   233,   303,   290,    57,    57,    57,   137,
     138,   185,   297,   141,   284,   -31,   263,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   225,   264,   226,   227,     2,   238,   239,   240,   241,
     242,   204,   243,   143,   204,   294,   230,   115,   116,   117,
     118,   119,   295,    41,    42,    43,   -18,   144,   145,   147,
     300,   152,   298,   154,   -18,   179,   -18,   200,   148,     3,
     201,   204,   129,   130,   131,   132,   133,   211,   204,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,    60,    61,    62,
      63,    64,    65,   217,    66,   119,   223,    60,    61,    62,
      63,    64,    65,   228,    66,   229,   -32,   249,    67,   113,
     114,   115,   116,   117,   118,   119,   232,   253,    67,   256,
      68,    69,   189,   130,   131,   132,   133,   267,    70,   190,
      68,    69,    96,   191,   271,   202,   272,   278,    70,   281,
     282,   286,   296,   301,    71,    60,    61,    62,    63,    64,
      65,   302,    66,   304,    71,    40,    48,    90,    49,   153,
     157,    38,    55,   213,   277,   192,    67,   113,   114,   115,
     116,   117,   118,   119,    72,   235,   219,   188,    68,    69,
       0,   214,   222,     0,    72,     0,    70,     0,     0,    60,
      61,    62,    63,    64,    65,     0,    66,     0,     0,   254,
       0,     0,    71,     0,     0,     0,     0,     0,     0,     0,
       0,   251,   113,   114,   115,   116,   117,   118,   119,     0,
       0,   153,    68,    69,     0,     0,     0,     0,     0,     0,
      70,     0,    72,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   148,     0,     0,     0,    71,   120,   121,   122,
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
       0,     0,   266,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133
};

static const yytype_int16 yycheck[] =
{
       0,     1,    45,   100,     3,   120,    44,    44,    46,    45,
     112,     3,    12,    44,    51,    68,    69,   138,   120,     0,
      44,    21,    12,    13,    14,    15,    16,    87,    18,     3,
      67,     3,   153,     3,    71,    19,    20,    21,     3,    49,
      46,    41,    42,    43,    87,    44,    12,    13,    14,    15,
      16,    87,    18,    45,    54,   145,    93,    87,   179,    51,
     113,   114,   115,   116,   117,   118,   119,   183,   112,   184,
      70,    81,    72,   203,    44,   112,   120,    51,   131,    51,
      32,    33,    34,   120,   121,     3,   123,   124,   125,   126,
     127,   128,   129,   130,    45,     3,     4,     5,     6,     7,
       8,   138,    10,    12,    13,    14,    15,    16,    45,    18,
     147,   241,   143,   203,   204,   168,    24,   154,   208,   143,
      38,     5,    54,   183,    56,    44,    10,   184,    36,    37,
     167,    58,   132,   139,   140,   141,    44,     5,   122,     7,
     183,   271,    74,   233,   143,   145,   236,   183,   278,   168,
       0,   241,    60,   177,   244,   121,   246,     3,   195,    51,
     281,    12,   184,    19,    20,    21,   247,   242,   243,   169,
     223,    21,    45,    44,   211,   107,    44,    12,   177,   179,
     217,   271,    90,   115,    33,    34,    35,   268,   278,    45,
      41,    42,    43,     6,   184,     8,     9,    21,   279,   296,
     132,   254,   184,   203,   301,   171,    41,    42,    43,    46,
      44,    24,   121,   112,   251,   126,   148,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     6,   164,     8,     9,   143,    12,    13,    14,    15,
      16,   241,    18,   177,   244,   282,    51,    38,    39,    40,
      41,    42,   289,    22,    23,    24,   112,   126,    94,   184,
     297,    45,   171,   176,   120,    44,   122,   161,     3,   177,
     177,   271,    31,    32,    33,    34,    35,   175,   278,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,     3,     4,     5,
       6,     7,     8,    85,    10,    42,    23,     3,     4,     5,
       6,     7,     8,    45,    10,    45,   126,   100,    24,    36,
      37,    38,    39,    40,    41,    42,   161,    86,    24,    45,
      36,    37,    38,    32,    33,    34,    35,    45,    44,    45,
      36,    37,    38,    49,    15,     3,   124,    15,    44,    58,
     101,    45,    44,    44,    60,     3,     4,     5,     6,     7,
       8,    45,    10,    45,    60,    21,    29,    48,    29,   184,
     112,    16,    39,   147,   244,    81,    24,    36,    37,    38,
      39,    40,    41,    42,    90,   203,   156,   137,    36,    37,
      -1,   149,   169,    -1,    90,    -1,    44,    -1,    -1,     3,
       4,     5,     6,     7,     8,    -1,    10,    -1,    -1,    23,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   160,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,   184,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    90,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,    60,    22,    23,    24,
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
      14,    15,    16,    18,   184,   224,    51,   241,   231,   100,
     202,   160,   231,    86,    23,   230,    45,    54,    56,    74,
     107,   115,   132,   148,   164,   244,    45,    45,   241,   213,
     221,    15,   124,   225,   219,   225,   225,   218,    15,   241,
     221,    58,   101,   208,   231,   230,    45,   221,   219,   121,
     171,   219,   221,   226,   231,   231,    44,   121,   171,   214,
     231,    44,    45,   214,    45
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
     223,   223,   223,   223,   224,   224,   224,   224,   225,   225,
     226,   226,   227,   227,   227,   228,   228,   228,   228,   228,
     228,   229,   229,   229,   229,   229,   229,   229,   230,   230,
     230,   230,   230,   230,   230,   230,   230,   230,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   232,   232,   233,   234,   234,   235,   235,   236,   237,
     237,   238,   238,   238,   238,   238,   239,   239,   240,   241,
     242,   243,   244,   244,   244,   244,   244,   244,   244,   244
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
       5,     8,     7,     4,     2,     2,     2,     1,     1,     0,
       1,     3,     1,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     1,     1,     1,     2,     1,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     4,     3,     3,     2,
       3,     4,     3,     4,     3,     4,     5,     6,     3,     4,
       3,     1,     3,     5,     1,     0,     1,     2,     4,     2,
       0,     4,     5,     4,     6,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
#line 1583 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 4: /* STRING  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1589 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 5: /* INTNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1595 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 6: /* BOOL  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1601 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 7: /* APPROXNUM  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1607 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 8: /* NULLX  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1613 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 9: /* UNKNOWN  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1619 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 10: /* QUESTIONMARK  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1625 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 186: /* sql_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1631 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 187: /* stmt_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1637 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 188: /* stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1643 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 189: /* select_stmt  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1649 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 190: /* select_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1655 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 191: /* select_no_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1661 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 192: /* select_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1667 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 193: /* simple_select  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1673 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 194: /* opt_top  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1679 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 195: /* top_count  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1685 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 196: /* top_percent  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1691 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 197: /* opt_where  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1697 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 198: /* opt_from_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1703 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 199: /* select_limit  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1709 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 200: /* opt_hint  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1715 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 201: /* limit_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1721 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 202: /* opt_groupby  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1727 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 203: /* opt_order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1733 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 204: /* order_by  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1739 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 205: /* sort_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1745 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 206: /* sort_key  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1751 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 207: /* opt_asc_desc  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1757 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 208: /* opt_having  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1763 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 209: /* with_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1769 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 210: /* with_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1775 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 211: /* common_table_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1781 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 212: /* opt_derived_column_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1787 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 213: /* simple_ident_list_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1793 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 214: /* simple_ident_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1799 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 215: /* opt_distinct  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1805 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 216: /* select_expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1811 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 217: /* projection  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1817 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 218: /* from_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1823 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 219: /* table_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1829 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 220: /* table_factor_non_join  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1835 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 221: /* opt_simple_ident_list_with_parens  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1841 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 222: /* relation_factor  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1847 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 223: /* joined_table  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1853 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 224: /* join_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1859 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 226: /* expr_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1865 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 227: /* column_ref  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1871 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 228: /* expr_const  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1877 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 229: /* simple_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1883 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 230: /* arith_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1889 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 231: /* expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1895 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 232: /* in_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1901 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 233: /* case_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1907 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 234: /* case_arg  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1913 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 235: /* when_clause_list  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1919 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 236: /* when_clause  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1925 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 237: /* case_default  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1931 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 238: /* func_expr  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1937 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 239: /* distinct_or_all  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1943 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 240: /* column_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1949 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 241: /* relation_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1955 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 242: /* function_name  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1961 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 243: /* column_label  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1967 "sqlparser_bison.cpp" /* yacc.c:1257  */
        break;

    case 244: /* data_type  */
#line 89 "sqlparser.y" /* yacc.c:1257  */
      { delete(((*yyvaluep).node)); }
#line 1973 "sqlparser_bison.cpp" /* yacc.c:1257  */
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

#line 2090 "sqlparser_bison.cpp" /* yacc.c:1429  */
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
#line 2284 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 195 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_STMT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &STMT_LIST_SERIALIZE_FORMAT;
}
#line 2293 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 203 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2299 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 209 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2307 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 213 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2315 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 220 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2324 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 225 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &SELECT_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2333 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 234 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[0].node));
}
#line 2342 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 239 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[0].node));
}
#line 2352 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 245 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-1].node));
}
#line 2361 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 250 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-1].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-2].node));
}
#line 2371 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 256 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[-2].node);
    (yyval.node)->setChild(E_SELECT_ORDER_BY, (yyvsp[-1].node));
    (yyval.node)->setChild(E_SELECT_LIMIT, (yyvsp[0].node));
    (yyval.node)->setChild(E_SELECT_OPT_WITH, (yyvsp[-3].node));
}
#line 2382 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2409 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2437 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2465 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 2493 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 372 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2501 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 376 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &TOP_SERIALIZE_FORMAT;
}
#line 2510 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 381 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_CNT_TIES, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &TOP_TIES_SERIALIZE_FORMAT;
}
#line 2519 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 386 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &TOP_PCT_SERIALIZE_FORMAT;
}
#line 2528 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 391 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_TOP_PCT_TIES, 1, (yyvsp[-3].node));
    (yyval.node)->serialize_format = &TOP_PCT_TIES_SERIALIZE_FORMAT;
}
#line 2537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 399 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2546 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 408 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2555 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 416 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2563 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 420 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHERE_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHERE_SERIALIZE_FORMAT;
}
#line 2572 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 428 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2580 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 432 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &FROM_SERIALIZE_FORMAT;
}
#line 2589 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 440 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &LIMIT_1_SERIALIZE_FORMAT;
}
#line 2598 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 445 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &LIMIT_2_SERIALIZE_FORMAT;
}
#line 2607 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 450 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &LIMIT_3_SERIALIZE_FORMAT;
}
#line 2616 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 455 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &LIMIT_4_SERIALIZE_FORMAT;
}
#line 2625 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 460 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_LIMIT_CLAUSE, 2, (yyvsp[0].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &LIMIT_5_SERIALIZE_FORMAT;
}
#line 2634 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 468 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2642 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 475 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2650 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 479 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2658 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 486 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2664 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 488 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_GROUP_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &GROUP_BY_SERIALIZE_FORMAT;
}
#line 2673 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 495 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node);}
#line 2679 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 496 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2685 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 501 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ORDER_BY, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ORDER_BY_SERIALIZE_FORMAT;
}
#line 2694 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 509 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2700 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 511 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_LIST_SERIALIZE_FORMAT;
}
#line 2709 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 519 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SORT_KEY, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SORT_KEY_SERIALIZE_FORMAT;
}
#line 2718 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 527 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "");
}
#line 2726 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 531 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_ASC, "ASC");
}
#line 2734 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 535 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_SORT_DESC, "DESC");
}
#line 2742 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 542 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2748 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 544 "sqlparser.y" /* yacc.c:1646  */
    {
  (yyval.node) = Node::makeNonTerminalNode(E_HAVING, 1, (yyvsp[0].node));
  (yyval.node)->serialize_format = &HAVING_SERIALIZE_FORMAT;
}
#line 2757 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 552 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OPT_WITH_CLAUSE, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &WITH_CLAUSE_SERIALIZE_FORMAT;
}
#line 2766 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 561 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WITH_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2775 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 569 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_COMMON_TABLE_EXPR, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &COMMON_TABLE_EXPR_SERIALIZE_FORMAT;
}
#line 2784 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 576 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = nullptr; }
#line 2790 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 582 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2799 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 591 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SIMPLE_IDENT_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2808 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 600 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2816 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 604 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 2824 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 608 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 2832 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 616 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_SELECT_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &SELECT_EXPR_LIST_SERIALIZE_FORMAT;
}
#line 2841 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 624 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2850 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 629 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-1].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_1_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2862 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 637 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* alias_node = Node::makeNonTerminalNode(E_ALIAS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    alias_node->serialize_format = &ALIAS_2_SERIALIZE_FORMAT;

    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, alias_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2874 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 645 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* star_node = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_PROJECT_STRING, 1, star_node);
    (yyval.node)->serialize_format = &PROJECTION_SERIALIZE_FORMAT;
}
#line 2884 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 654 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2890 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 656 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FROM_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &FORM_LIST_SERIALIZE_FORMAT;
}
#line 2899 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 664 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2907 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 671 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2915 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 675 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 2924 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 680 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-3].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_3_SERIALIZE_FORMAT;
}
#line 2933 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 685 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
#line 2942 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 690 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_ALIAS, 3, (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &ALIAS_4_SERIALIZE_FORMAT;
}
#line 2951 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 698 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 2959 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 702 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = (yyvsp[0].node);
}
#line 2967 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 709 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = (yyvsp[0].node); }
#line 2973 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 714 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 2982 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 719 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-4].node), (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 2991 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 724 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &JOINED_TB_1_SERIALIZE_FORMAT;
}
#line 3001 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 730 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, (yyvsp[-6].node), (yyvsp[-7].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3010 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 735 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_INNER, "");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-6].node), (yyvsp[-4].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &JOINED_TB_3_SERIALIZE_FORMAT;
}
#line 3020 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 741 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_JOIN_CROSS, "CROSS");
    (yyval.node) = Node::makeNonTerminalNode(E_JOINED_TABLE, 4, nd, (yyvsp[-3].node), (yyvsp[0].node), nullptr);
    (yyval.node)->serialize_format = &JOINED_TB_2_SERIALIZE_FORMAT;
}
#line 3030 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 750 "sqlparser.y" /* yacc.c:1646  */
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
#line 3045 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 761 "sqlparser.y" /* yacc.c:1646  */
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
#line 3060 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 772 "sqlparser.y" /* yacc.c:1646  */
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
#line 3075 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 783 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_JOIN_INNER, "INNER");
}
#line 3083 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 789 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; /*this is a flag*/}
#line 3089 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 790 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 3095 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 797 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &EXPR_LIST_SERIALIZE_FORMAT;
}
#line 3104 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 804 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, nullptr, (yyvsp[0].node));
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT_0;
}
#line 3113 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 809 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
}
#line 3122 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 814 "sqlparser.y" /* yacc.c:1646  */
    {
    Node* nd = Node::makeTerminalNode(E_STAR, "*");
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NAME_FIELD, 2, (yyvsp[-2].node), nd);
    (yyval.node)->serialize_format = &NAME_FIELD_SERIALIZE_FORMAT;
}
#line 3132 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 833 "sqlparser.y" /* yacc.c:1646  */
    {
    // expect cover '(' expr ')'
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3142 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 842 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EXISTS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EXISTS_SERIALIZE_FORMAT;
}
#line 3151 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 851 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POS, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POS_SERIALIZE_FORMAT;
}
#line 3160 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 856 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NEG, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NEG_SERIALIZE_FORMAT;
}
#line 3169 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 861 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_ADD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_ADD_SERIALIZE_FORMAT;
}
#line 3178 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 866 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MINUS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MINUS_SERIALIZE_FORMAT;
}
#line 3187 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 871 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MUL, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MUL_SERIALIZE_FORMAT;
}
#line 3196 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 876 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_DIV, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_DIV_SERIALIZE_FORMAT;
}
#line 3205 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 881 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_REM, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_REM_SERIALIZE_FORMAT;
}
#line 3214 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 886 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_POW, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_POW_SERIALIZE_FORMAT;
}
#line 3223 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 891 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_MOD, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_MOD_SERIALIZE_FORMAT;
}
#line 3232 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 899 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LE_SERIALIZE_FORMAT;
}
#line 3241 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 904 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LT_SERIALIZE_FORMAT;
}
#line 3250 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 909 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_EQ, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_EQ_SERIALIZE_FORMAT;
}
#line 3259 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 914 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GE_SERIALIZE_FORMAT;
}
#line 3268 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 919 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_GT, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_GT_SERIALIZE_FORMAT;
}
#line 3277 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 924 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NE_SERIALIZE_FORMAT;
}
#line 3286 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 929 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_LIKE, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_LIKE_SERIALIZE_FORMAT;
}
#line 3295 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 934 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_LIKE, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_LIKE_SERIALIZE_FORMAT;
}
#line 3304 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 939 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_AND, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_AND_SERIALIZE_FORMAT;
}
#line 3313 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 944 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_OR, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_OR_SERIALIZE_FORMAT;
}
#line 3322 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 949 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_SERIALIZE_FORMAT;
}
#line 3331 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 954 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3340 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 959 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3349 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 964 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3358 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 969 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3367 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 974 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_SERIALIZE_FORMAT;
}
#line 3376 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 979 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IS_NOT, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IS_NOT_SERIALIZE_FORMAT;
}
#line 3385 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 984 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_BTW, 3, (yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_BETWEEN_SERIALIZE_FORMAT;
}
#line 3394 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 989 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_BTW, 3, (yyvsp[-5].node), (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_BETWEEN_SERIALIZE_FORMAT;
}
#line 3403 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 994 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_IN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_IN_SERIALIZE_FORMAT;
}
#line 3412 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 999 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_NOT_IN, 2, (yyvsp[-3].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_NOT_IN_SERIALIZE_FORMAT;
}
#line 3421 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 1004 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_OP_CNN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &OP_CNN_SERIALIZE_FORMAT;
}
#line 3430 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 1012 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_EXPR_LIST_WITH_PARENS, 1, (yyvsp[-1].node));
    (yyval.node)->serialize_format = &EXPR_LIST_WITH_PARENS_SERIALIZE_FORMAT;
}
#line 3439 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 1019 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE, 3, (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node));
    (yyval.node)->serialize_format = &CASE_SERIALIZE_FORMAT;
}
#line 3448 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 1027 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3456 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 1034 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN_LIST, 2, (yyvsp[-1].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_LIST_SERIALIZE_FORMAT;
}
#line 3465 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 1041 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_WHEN, 2, (yyvsp[-2].node), (yyvsp[0].node));
    (yyval.node)->serialize_format = &WHEN_SERIALIZE_FORMAT;
}
#line 3474 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 1048 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_CASE_DEFAULT, 1, (yyvsp[0].node));
    (yyval.node)->serialize_format = &ELSE_SERIALIZE_FORMAT;
}
#line 3483 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 1053 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = nullptr;
}
#line 3491 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 1059 "sqlparser.y" /* yacc.c:1646  */
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
#line 3506 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 1070 "sqlparser.y" /* yacc.c:1646  */
    {
    if (!Node::IS_AGGREGATE_FUNCTION((yyvsp[-4].node)->terminalToken_.str))
    {
    	yyerror(&(yylsp[-4]), result, scanner, "Only aggregate function can be with option distinct, all");
    	YYABORT;
    }
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 3, (yyvsp[-4].node), (yyvsp[-1].node), (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_2_SERIALIZE_FORMAT;
}
#line 3520 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 1080 "sqlparser.y" /* yacc.c:1646  */
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
#line 3537 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 1093 "sqlparser.y" /* yacc.c:1646  */
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
#line 3553 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 1105 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeNonTerminalNode(E_FUN_CALL, 1, (yyvsp[-2].node));
    (yyval.node)->serialize_format = &FUN_CALL_4_SERIALIZE_FORMAT;
}
#line 3562 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 1112 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_ALL, "ALL");
}
#line 3570 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 1116 "sqlparser.y" /* yacc.c:1646  */
    {
    (yyval.node) = Node::makeTerminalNode(E_DISTINCT, "DISTINCT");
}
#line 3578 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 1135 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "TINYINT"); }
#line 3584 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 1137 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "SMALLINT"); }
#line 3590 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 1139 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "MEDIUMINT"); }
#line 3596 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 1141 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "INTEGER"); }
#line 3602 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 1143 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_INTEGER, "BIGINT"); }
#line 3608 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 1145 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_BOOLEAN, "BOOLEAN"); }
#line 3614 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 1147 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DOUBLE, "REAL"); }
#line 3620 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 1149 "sqlparser.y" /* yacc.c:1646  */
    { (yyval.node) = Node::makeTerminalNode(E_TYPE_DATETIME, "DATETIME"); }
#line 3626 "sqlparser_bison.cpp" /* yacc.c:1646  */
    break;


#line 3630 "sqlparser_bison.cpp" /* yacc.c:1646  */
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
#line 1152 "sqlparser.y" /* yacc.c:1906  */

/*********************************
 ** Section 4: Additional C code
 *********************************/

/* empty */
