
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
     POINTVIRGULE = 258,
     DEUXPOINTS = 259,
     PARENTHESEOUVERT = 260,
     PARENTHESEFERME = 261,
     CROCHETOUVERT = 262,
     CROCHETFERME = 263,
     VIRGULE = 264,
     PROGRAM = 265,
     Begin = 266,
     END = 267,
     CONSTANT = 268,
     IN_RANGE = 269,
     NOUVELLE_LIGNE = 270,
     TAB = 271,
     IF = 272,
     ELSE = 273,
     ELIF = 274,
     ENDIF = 275,
     CASE = 276,
     CHECK = 277,
     SO = 278,
     ENDCHECK = 279,
     DEFAULT = 280,
     ENDCASE = 281,
     FOR = 282,
     DO = 283,
     ENDFOR = 284,
     COMMENTAIRE = 285,
     FLOAT = 286,
     INTEGER = 287,
     IDF = 288,
     CHAR = 289,
     MC_INT = 290,
     MC_FLOAT = 291,
     MC_CHAR = 292,
     WHILE = 293,
     AFFECTATION = 294,
     PLUS = 295,
     MULTI = 296,
     DIV = 297,
     PUISSANCE = 298,
     MOIN = 299,
     AND = 300,
     OR = 301,
     DIFF = 302,
     SUPP = 303,
     INF = 304,
     EGALE = 305,
     NONEGALE = 306,
     SUPEGALE = 307,
     INFEGALE = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 13 "bison.y"

  char* chaine;

  struct NT{
    char* type;
    char* temp;
  }NT;

  struct jump{
    int sauvFin;
    int sauvDeb;
  }jump;




/* Line 1676 of yacc.c  */
#line 122 "bison.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


