
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
     mc_program = 258,
     mc_end = 259,
     mc_routine = 260,
     mc_endr = 261,
     mc_integer = 262,
     mc_real = 263,
     mc_logical = 264,
     mc_character = 265,
     mc_read = 266,
     mc_write = 267,
     mc_if = 268,
     mc_then = 269,
     mc_else = 270,
     mc_endif = 271,
     mc_dowhile = 272,
     mc_enddo = 273,
     mc_call = 274,
     mc_equivalence = 275,
     mc_dimension = 276,
     or = 277,
     and = 278,
     gt = 279,
     ge = 280,
     eq = 281,
     ne = 282,
     le = 283,
     lt = 284,
     logical = 285,
     real = 286,
     idf = 287,
     integer = 288,
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
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


