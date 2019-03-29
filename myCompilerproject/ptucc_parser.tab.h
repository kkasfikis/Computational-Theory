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

#ifndef YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
# define YY_YY_PTUCC_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENT = 258,
    POSINT = 259,
    REAL = 260,
    STRING = 261,
    KW_PROGRAM = 262,
    KW_BEGIN = 263,
    KW_END = 264,
    KW_AND = 265,
    KW_ARRAY = 266,
    KW_BOOL = 267,
    KW_CHAR = 268,
    KW_TYPE = 269,
    KW_DIV = 270,
    KW_DO = 271,
    KW_FOR = 272,
    KW_FUNCTION = 273,
    KW_GOTO = 274,
    KW_IF = 275,
    KW_INTEGER = 276,
    KW_VAR = 277,
    KW_MOD = 278,
    KW_NOT = 279,
    KW_OF = 280,
    KW_OR = 281,
    KW_WHILE = 282,
    KW_PROCEDURE = 283,
    KW_REAL = 284,
    KW_REPEAT = 285,
    KW_TO = 286,
    KW_RESULT = 287,
    KW_RETURN = 288,
    KW_THEN = 289,
    KW_ELSE = 290,
    KW_UNTIL = 291,
    KW_DOWNTO = 292,
    OP_PLUS = 293,
    OP_MINUS = 294,
    OP_MULT = 295,
    OP_DIV = 296,
    CMP_EQUAL = 297,
    CMP_NOTEQUAL = 298,
    CMP_LESS = 299,
    CMP_LESSEQUAL = 300,
    CMP_GREATER = 301,
    CMP_GREATEREQUAL = 302,
    LOG_AND = 303,
    LOG_NOT = 304,
    LOG_OR = 305,
    ASSIGNMENT = 306,
    DEL_SEMICOLON = 307,
    DEL_LEFTPAR = 308,
    DEL_RIGHTPAR = 309,
    DEL_COMMA = 310,
    DEL_SQRLEFT = 311,
    DEL_SQRRIGHT = 312,
    DEL_COLON = 313,
    DEL_DOT = 314,
    FUNC_RDSTR = 315,
    FUNC_RDINT = 316,
    FUNC_RDREAL = 317,
    FUNC_WRSTR = 318,
    FUNC_WRINT = 319,
    FUNC_WRREAL = 320,
    BOOL_TRUE = 321,
    BOOL_FALSE = 322,
    NOT = 323,
    UPLUS_UMINUS = 324,
    CAST = 325,
    FACTORS = 326,
    PLUS_MINUS = 327,
    RELATIONAL = 328,
    LOGICAL_AND = 329,
    LOGICAL_OR = 330,
    PAR = 331
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "ptucc_parser.y" /* yacc.c:1909  */

	char* crepr;

#line 135 "ptucc_parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PTUCC_PARSER_TAB_H_INCLUDED  */
