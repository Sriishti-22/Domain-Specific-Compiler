/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_DSL_PARSER_TAB_H_INCLUDED
# define YY_YY_DSL_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    IDENTIFIER = 258,              /* IDENTIFIER  */
    NUMBER = 259,                  /* NUMBER  */
    STRING = 260,                  /* STRING  */
    LOAD = 261,                    /* LOAD  */
    SAVE = 262,                    /* SAVE  */
    FILTER = 263,                  /* FILTER  */
    SELECT = 264,                  /* SELECT  */
    DROP = 265,                    /* DROP  */
    RENAME = 266,                  /* RENAME  */
    REPLACE = 267,                 /* REPLACE  */
    FILLNA = 268,                  /* FILLNA  */
    GROUPBY = 269,                 /* GROUPBY  */
    SORT = 270,                    /* SORT  */
    JOIN = 271,                    /* JOIN  */
    PREPROCESS = 272,              /* PREPROCESS  */
    TRAIN = 273,                   /* TRAIN  */
    EVALUATE = 274,                /* EVALUATE  */
    SHOW = 275,                    /* SHOW  */
    DELETE = 276,                  /* DELETE  */
    DELETE_ROWS = 277,             /* DELETE_ROWS  */
    MEAN = 278,                    /* MEAN  */
    MEDIAN = 279,                  /* MEDIAN  */
    MODE = 280,                    /* MODE  */
    STD = 281,                     /* STD  */
    VAR = 282,                     /* VAR  */
    MIN = 283,                     /* MIN  */
    MAX = 284,                     /* MAX  */
    COUNT = 285,                   /* COUNT  */
    CORR = 286,                    /* CORR  */
    COV = 287,                     /* COV  */
    LINEAR_REGRESSION = 288,       /* LINEAR_REGRESSION  */
    KNN = 289,                     /* KNN  */
    SVM = 290,                     /* SVM  */
    DECISION_TREE = 291,           /* DECISION_TREE  */
    RANDOM_FOREST = 292,           /* RANDOM_FOREST  */
    KMEANS = 293,                  /* KMEANS  */
    PLOT = 294,                    /* PLOT  */
    HISTOGRAM = 295,               /* HISTOGRAM  */
    SCATTER = 296,                 /* SCATTER  */
    BOXPLOT = 297,                 /* BOXPLOT  */
    BAR = 298,                     /* BAR  */
    AND = 299,                     /* AND  */
    OR = 300,                      /* OR  */
    NOT = 301,                     /* NOT  */
    GT = 302,                      /* GT  */
    LT = 303,                      /* LT  */
    GE = 304,                      /* GE  */
    LE = 305,                      /* LE  */
    EQ = 306,                      /* EQ  */
    NE = 307,                      /* NE  */
    BY = 308,                      /* BY  */
    WITH = 309,                    /* WITH  */
    ON = 310,                      /* ON  */
    AS = 311,                      /* AS  */
    IN = 312,                      /* IN  */
    TO = 313,                      /* TO  */
    FROM = 314,                    /* FROM  */
    WHERE = 315,                   /* WHERE  */
    OF = 316                       /* OF  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "dsl_parser.y"

    char* str;

#line 129 "dsl_parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_DSL_PARSER_TAB_H_INCLUDED  */
