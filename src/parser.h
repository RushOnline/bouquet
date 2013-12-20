/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
     CHAR = 258,
     BIT = 259,
     INT = 260,
     FLOAT = 261,
     DOUBLE = 262,
     CLASS = 263,
     IF = 264,
     ELSE = 265,
     DO = 266,
     WHILE = 267,
     FOR = 268,
     GOTO = 269,
     BREAK = 270,
     CONTINUE = 271,
     REPEAT = 272,
     MAP = 273,
     EXTENDS = 274,
     SWITCH = 275,
     CASE = 276,
     DEFAULT = 277,
     BAC = 278,
     PRAGMA = 279,
     PRAGMA_ARRAY = 280,
     PRAGMA_GET = 281,
     PRAGMA_NOGET = 282,
     PRAGMA_PUT = 283,
     PRAGMA_NOPUT = 284,
     PRAGMA_PUTXML = 285,
     PRAGMA_NOPUTXML = 286,
     PRAGMA_TRACE = 287,
     PRAGMA_NOTRACE = 288,
     PRAGMA_LINE = 289,
     PRAGMA_NOLINE = 290,
     PRAGMA_INCLUDES = 291,
     PRAGMA_NULLSTRINGS = 292,
     PRAGMA_NONULLSTRINGS = 293,
     PRAGMA_NOINCLUDES = 294,
     PRAGMA_BITSTREAM = 295,
     PRAGMA_PREFIX = 296,
     PRAGMA_ERROR_FUNC = 297,
     PRAGMA_TRACE_FUNC = 298,
     BAC_PREC = 299,
     BAC_OOC = 300,
     BAC_SOC = 301,
     BAC_TE = 302,
     BAC_RENORM = 303,
     BAC_BS = 304,
     BAC_INIT = 305,
     BAC_END = 306,
     BAC_RTABLE = 307,
     BAC_NEXTI = 308,
     BAC_TRANS = 309,
     BAC_EXCH = 310,
     INCLUDE = 311,
     IMPORT = 312,
     UNSIGNED = 313,
     SIGNED = 314,
     SHORT = 315,
     LONG = 316,
     CONST = 317,
     ALIGNED = 318,
     STATIC = 319,
     ABSTRACT = 320,
     LITTLE = 321,
     BIG = 322,
     INT_LITERAL = 323,
     DOUBLE_LITERAL = 324,
     BIT_LITERAL = 325,
     STRING_LITERAL = 326,
     VARIABLE = 327,
     CLASS_TYPE = 328,
     MAP_TYPE = 329,
     BAC_TYPE = 330,
     LABEL = 331,
     LS = 332,
     RS = 333,
     GE = 334,
     LE = 335,
     NE = 336,
     EQ = 337,
     OR = 338,
     AND = 339,
     INC = 340,
     DEC = 341,
     RANGE = 342,
     CLCL = 343,
     MUL_ASSIGN = 344,
     DIV_ASSIGN = 345,
     MOD_ASSIGN = 346,
     ADD_ASSIGN = 347,
     SUB_ASSIGN = 348,
     LS_ASSIGN = 349,
     RS_ASSIGN = 350,
     AND_ASSIGN = 351,
     XOR_ASSIGN = 352,
     OR_ASSIGN = 353,
     DBL_BRACE_L = 354,
     DBL_BRACE_R = 355,
     DECL = 356,
     EXPR = 357,
     VERBATIM = 358,
     VERBATIM_GET = 359,
     VERBATIM_PUT = 360,
     VERBATIM_BOTH = 361,
     VERBATIM_C = 362,
     VERBATIM_C_CPP = 363,
     VERBATIM_GET_C = 364,
     VERBATIM_PUT_C = 365,
     VERBATIM_BOTH_C = 366,
     VERBATIM_J = 367,
     VERBATIM_GET_J = 368,
     VERBATIM_PUT_J = 369,
     VERBATIM_BOTH_J = 370,
     LENGTHOF = 371,
     ISIDOF = 372,
     SKIPBITS = 373,
     NEXTBITS = 374,
     SNEXTBITS = 375,
     LITTLE_NEXTBITS = 376,
     LITTLE_SNEXTBITS = 377,
     NEXTCODE = 378,
     NUMBITS = 379,
     ESC_FTYPE = 380,
     ESC_MAP = 381,
     ARRAY = 382,
     LOWER_THAN_ELSE = 383
   };
#endif
/* Tokens.  */
#define CHAR 258
#define BIT 259
#define INT 260
#define FLOAT 261
#define DOUBLE 262
#define CLASS 263
#define IF 264
#define ELSE 265
#define DO 266
#define WHILE 267
#define FOR 268
#define GOTO 269
#define BREAK 270
#define CONTINUE 271
#define REPEAT 272
#define MAP 273
#define EXTENDS 274
#define SWITCH 275
#define CASE 276
#define DEFAULT 277
#define BAC 278
#define PRAGMA 279
#define PRAGMA_ARRAY 280
#define PRAGMA_GET 281
#define PRAGMA_NOGET 282
#define PRAGMA_PUT 283
#define PRAGMA_NOPUT 284
#define PRAGMA_PUTXML 285
#define PRAGMA_NOPUTXML 286
#define PRAGMA_TRACE 287
#define PRAGMA_NOTRACE 288
#define PRAGMA_LINE 289
#define PRAGMA_NOLINE 290
#define PRAGMA_INCLUDES 291
#define PRAGMA_NULLSTRINGS 292
#define PRAGMA_NONULLSTRINGS 293
#define PRAGMA_NOINCLUDES 294
#define PRAGMA_BITSTREAM 295
#define PRAGMA_PREFIX 296
#define PRAGMA_ERROR_FUNC 297
#define PRAGMA_TRACE_FUNC 298
#define BAC_PREC 299
#define BAC_OOC 300
#define BAC_SOC 301
#define BAC_TE 302
#define BAC_RENORM 303
#define BAC_BS 304
#define BAC_INIT 305
#define BAC_END 306
#define BAC_RTABLE 307
#define BAC_NEXTI 308
#define BAC_TRANS 309
#define BAC_EXCH 310
#define INCLUDE 311
#define IMPORT 312
#define UNSIGNED 313
#define SIGNED 314
#define SHORT 315
#define LONG 316
#define CONST 317
#define ALIGNED 318
#define STATIC 319
#define ABSTRACT 320
#define LITTLE 321
#define BIG 322
#define INT_LITERAL 323
#define DOUBLE_LITERAL 324
#define BIT_LITERAL 325
#define STRING_LITERAL 326
#define VARIABLE 327
#define CLASS_TYPE 328
#define MAP_TYPE 329
#define BAC_TYPE 330
#define LABEL 331
#define LS 332
#define RS 333
#define GE 334
#define LE 335
#define NE 336
#define EQ 337
#define OR 338
#define AND 339
#define INC 340
#define DEC 341
#define RANGE 342
#define CLCL 343
#define MUL_ASSIGN 344
#define DIV_ASSIGN 345
#define MOD_ASSIGN 346
#define ADD_ASSIGN 347
#define SUB_ASSIGN 348
#define LS_ASSIGN 349
#define RS_ASSIGN 350
#define AND_ASSIGN 351
#define XOR_ASSIGN 352
#define OR_ASSIGN 353
#define DBL_BRACE_L 354
#define DBL_BRACE_R 355
#define DECL 356
#define EXPR 357
#define VERBATIM 358
#define VERBATIM_GET 359
#define VERBATIM_PUT 360
#define VERBATIM_BOTH 361
#define VERBATIM_C 362
#define VERBATIM_C_CPP 363
#define VERBATIM_GET_C 364
#define VERBATIM_PUT_C 365
#define VERBATIM_BOTH_C 366
#define VERBATIM_J 367
#define VERBATIM_GET_J 368
#define VERBATIM_PUT_J 369
#define VERBATIM_BOTH_J 370
#define LENGTHOF 371
#define ISIDOF 372
#define SKIPBITS 373
#define NEXTBITS 374
#define SNEXTBITS 375
#define LITTLE_NEXTBITS 376
#define LITTLE_SNEXTBITS 377
#define NEXTCODE 378
#define NUMBITS 379
#define ESC_FTYPE 380
#define ESC_MAP 381
#define ARRAY 382
#define LOWER_THAN_ELSE 383




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 2068 of yacc.c  */
#line 60 "parser.y"

    char            *string;
    int             ival;
    double          dval;
    unsigned int    uival;
    bit_t           *bit;
    list_t          *lp;
    symbol_t        *sp;
    node_t          *np;
    verbatim_t	    *vp;



/* Line 2068 of yacc.c  */
#line 320 "parser.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


