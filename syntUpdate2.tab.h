
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     real = 258,
     integer = 259,
     mc_program = 260,
     mc_end = 261,
     mc_routine = 262,
     mc_endr = 263,
     mc_integer = 264,
     mc_real = 265,
     mc_logical = 266,
     mc_character = 267,
     mc_read = 268,
     mc_write = 269,
     mc_if = 270,
     mc_then = 271,
     mc_else = 272,
     mc_endif = 273,
     mc_dowhile = 274,
     mc_enddo = 275,
     mc_call = 276,
     mc_equivalence = 277,
     mc_dimension = 278,
     or = 279,
     and = 280,
     gt = 281,
     ge = 282,
     eq = 283,
     ne = 284,
     le = 285,
     lt = 286,
     logical = 287,
     idf = 288,
     character = 289,
     aff = 290,
     pvg = 291,
     vg = 292,
     add = 293,
     sstr = 294,
     prdt = 295,
     division = 296,
     pouv = 297,
     pfer = 298,
     guill = 299,
     point = 300
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 11 "syntUpdate2.y"

    float reel;
	int integer;
	char* str;



/* Line 1676 of yacc.c  */
#line 105 "syntUpdate2.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


