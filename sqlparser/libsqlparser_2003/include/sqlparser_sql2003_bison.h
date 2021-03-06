/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 42 "sqlparser_sql2003.y" /* yacc.c:1909  */

// %code requires block

#include "node.h"

#line 58 "sqlparser_sql2003_bison.h" /* yacc.c:1909  */

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
#line 85 "sqlparser_sql2003.y" /* yacc.c:1909  */

    struct Node* node;
    int    ival;
    NodeType nodetype;

#line 239 "sqlparser_sql2003_bison.h" /* yacc.c:1909  */
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
