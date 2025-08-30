/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "dsl_parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern int yylex();
void yyerror(const char *s);

FILE *py_code;

#line 83 "dsl_parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "dsl_parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDENTIFIER = 3,                 /* IDENTIFIER  */
  YYSYMBOL_NUMBER = 4,                     /* NUMBER  */
  YYSYMBOL_STRING = 5,                     /* STRING  */
  YYSYMBOL_LOAD = 6,                       /* LOAD  */
  YYSYMBOL_SAVE = 7,                       /* SAVE  */
  YYSYMBOL_FILTER = 8,                     /* FILTER  */
  YYSYMBOL_SELECT = 9,                     /* SELECT  */
  YYSYMBOL_DROP = 10,                      /* DROP  */
  YYSYMBOL_RENAME = 11,                    /* RENAME  */
  YYSYMBOL_REPLACE = 12,                   /* REPLACE  */
  YYSYMBOL_FILLNA = 13,                    /* FILLNA  */
  YYSYMBOL_GROUPBY = 14,                   /* GROUPBY  */
  YYSYMBOL_SORT = 15,                      /* SORT  */
  YYSYMBOL_JOIN = 16,                      /* JOIN  */
  YYSYMBOL_PREPROCESS = 17,                /* PREPROCESS  */
  YYSYMBOL_TRAIN = 18,                     /* TRAIN  */
  YYSYMBOL_EVALUATE = 19,                  /* EVALUATE  */
  YYSYMBOL_SHOW = 20,                      /* SHOW  */
  YYSYMBOL_DELETE = 21,                    /* DELETE  */
  YYSYMBOL_DELETE_ROWS = 22,               /* DELETE_ROWS  */
  YYSYMBOL_MEAN = 23,                      /* MEAN  */
  YYSYMBOL_MEDIAN = 24,                    /* MEDIAN  */
  YYSYMBOL_MODE = 25,                      /* MODE  */
  YYSYMBOL_STD = 26,                       /* STD  */
  YYSYMBOL_VAR = 27,                       /* VAR  */
  YYSYMBOL_MIN = 28,                       /* MIN  */
  YYSYMBOL_MAX = 29,                       /* MAX  */
  YYSYMBOL_COUNT = 30,                     /* COUNT  */
  YYSYMBOL_CORR = 31,                      /* CORR  */
  YYSYMBOL_COV = 32,                       /* COV  */
  YYSYMBOL_LINEAR_REGRESSION = 33,         /* LINEAR_REGRESSION  */
  YYSYMBOL_KNN = 34,                       /* KNN  */
  YYSYMBOL_SVM = 35,                       /* SVM  */
  YYSYMBOL_DECISION_TREE = 36,             /* DECISION_TREE  */
  YYSYMBOL_RANDOM_FOREST = 37,             /* RANDOM_FOREST  */
  YYSYMBOL_KMEANS = 38,                    /* KMEANS  */
  YYSYMBOL_PLOT = 39,                      /* PLOT  */
  YYSYMBOL_HISTOGRAM = 40,                 /* HISTOGRAM  */
  YYSYMBOL_SCATTER = 41,                   /* SCATTER  */
  YYSYMBOL_BOXPLOT = 42,                   /* BOXPLOT  */
  YYSYMBOL_BAR = 43,                       /* BAR  */
  YYSYMBOL_AND = 44,                       /* AND  */
  YYSYMBOL_OR = 45,                        /* OR  */
  YYSYMBOL_NOT = 46,                       /* NOT  */
  YYSYMBOL_GT = 47,                        /* GT  */
  YYSYMBOL_LT = 48,                        /* LT  */
  YYSYMBOL_GE = 49,                        /* GE  */
  YYSYMBOL_LE = 50,                        /* LE  */
  YYSYMBOL_EQ = 51,                        /* EQ  */
  YYSYMBOL_NE = 52,                        /* NE  */
  YYSYMBOL_BY = 53,                        /* BY  */
  YYSYMBOL_WITH = 54,                      /* WITH  */
  YYSYMBOL_ON = 55,                        /* ON  */
  YYSYMBOL_AS = 56,                        /* AS  */
  YYSYMBOL_IN = 57,                        /* IN  */
  YYSYMBOL_TO = 58,                        /* TO  */
  YYSYMBOL_FROM = 59,                      /* FROM  */
  YYSYMBOL_WHERE = 60,                     /* WHERE  */
  YYSYMBOL_OF = 61,                        /* OF  */
  YYSYMBOL_YYACCEPT = 62,                  /* $accept  */
  YYSYMBOL_program = 63,                   /* program  */
  YYSYMBOL_statements = 64,                /* statements  */
  YYSYMBOL_statement = 65,                 /* statement  */
  YYSYMBOL_load_stmt = 66,                 /* load_stmt  */
  YYSYMBOL_save_stmt = 67,                 /* save_stmt  */
  YYSYMBOL_filter_stmt = 68,               /* filter_stmt  */
  YYSYMBOL_select_stmt = 69,               /* select_stmt  */
  YYSYMBOL_drop_stmt = 70,                 /* drop_stmt  */
  YYSYMBOL_rename_stmt = 71,               /* rename_stmt  */
  YYSYMBOL_replace_stmt = 72,              /* replace_stmt  */
  YYSYMBOL_fillna_stmt = 73,               /* fillna_stmt  */
  YYSYMBOL_groupby_stmt = 74,              /* groupby_stmt  */
  YYSYMBOL_sort_stmt = 75,                 /* sort_stmt  */
  YYSYMBOL_join_stmt = 76,                 /* join_stmt  */
  YYSYMBOL_preprocess_stmt = 77,           /* preprocess_stmt  */
  YYSYMBOL_train_stmt = 78,                /* train_stmt  */
  YYSYMBOL_evaluate_stmt = 79,             /* evaluate_stmt  */
  YYSYMBOL_show_stmt = 80,                 /* show_stmt  */
  YYSYMBOL_delete_rows_stmt = 81,          /* delete_rows_stmt  */
  YYSYMBOL_stat_func_stmt = 82,            /* stat_func_stmt  */
  YYSYMBOL_plot_stmt = 83                  /* plot_stmt  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   93

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   316


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    30,    30,    34,    35,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    60,    66,    79,    83,    87,    91,    95,
      99,   103,   107,   111,   115,   119,   123,   127,   131,   135,
     139,   146,   150,   154,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   171,   172,   173,   174
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IDENTIFIER", "NUMBER",
  "STRING", "LOAD", "SAVE", "FILTER", "SELECT", "DROP", "RENAME",
  "REPLACE", "FILLNA", "GROUPBY", "SORT", "JOIN", "PREPROCESS", "TRAIN",
  "EVALUATE", "SHOW", "DELETE", "DELETE_ROWS", "MEAN", "MEDIAN", "MODE",
  "STD", "VAR", "MIN", "MAX", "COUNT", "CORR", "COV", "LINEAR_REGRESSION",
  "KNN", "SVM", "DECISION_TREE", "RANDOM_FOREST", "KMEANS", "PLOT",
  "HISTOGRAM", "SCATTER", "BOXPLOT", "BAR", "AND", "OR", "NOT", "GT", "LT",
  "GE", "LE", "EQ", "NE", "BY", "WITH", "ON", "AS", "IN", "TO", "FROM",
  "WHERE", "OF", "$accept", "program", "statements", "statement",
  "load_stmt", "save_stmt", "filter_stmt", "select_stmt", "drop_stmt",
  "rename_stmt", "replace_stmt", "fillna_stmt", "groupby_stmt",
  "sort_stmt", "join_stmt", "preprocess_stmt", "train_stmt",
  "evaluate_stmt", "show_stmt", "delete_rows_stmt", "stat_func_stmt",
  "plot_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-13)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -6,    10,    12,    29,    37,    38,    39,    40,    41,    42,
      -7,    44,   -13,    -4,   -13,    -5,   -11,   -12,    48,    -6,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,     4,   -13,   -13,    -3,    -2,    -1,   -13,    51,     2,
       1,     0,     3,     5,     6,     7,     8,     9,    11,    13,
      14,    53,    15,    16,    17,    18,   -13,   -13,    54,    56,
      58,    59,   -13,    57,   -13,   -13,   -13,   -13,   -13,   -13,
      62,    68,    70,    77,    78,    79,    80,    81,    82,    83,
      43,    84,    85,    86,    88,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
      89,   -13,   -13,   -13,   -13,   -13
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    34,     0,    41,    42,     0,     0,     0,     2,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    26,    27,     0,     0,     0,    31,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     1,     3,     0,     0,
       0,     0,    32,     0,    35,    36,    37,    38,    39,    40,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    25,    28,    29,    30,    33,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,    54,    55,    56,    57,    43
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -13,   -13,   -13,    73,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,   -13,
     -13,   -13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       1,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    39,    16,    40,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    41,    17,    74,    75,    76,    77,    78,    79,
      42,    43,    44,    45,    46,    47,    48,    49,    66,    61,
      50,    68,    70,    71,    72,    69,    90,    73,    95,    96,
      99,    80,    97,    98,    81,   100,    82,    83,    84,    85,
      86,   101,    87,   102,    88,    89,    91,    92,    93,    94,
     103,   104,   105,   106,   107,   108,   109,   111,   112,   113,
     110,   114,    67,   115
};

static const yytype_int8 yycheck[] =
{
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     5,    22,     5,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    40,    41,
      42,    43,     3,    39,    33,    34,    35,    36,    37,    38,
       3,     3,     3,     3,     3,     3,    53,     3,     0,    60,
      54,    47,    54,    54,     3,    58,     3,    55,     4,     3,
       3,    61,     4,     4,    61,     3,    61,    61,    61,    61,
      61,     3,    61,     3,    61,    61,    61,    61,    61,    61,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
      47,     3,    19,     4
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    22,    39,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,     5,
       5,     3,     3,     3,     3,     3,     3,     3,    53,     3,
      54,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    60,    40,    41,    42,    43,     0,    65,    47,    58,
      54,    54,     3,    55,    33,    34,    35,    36,    37,    38,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
       3,    61,    61,    61,    61,     4,     3,     4,     4,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
      47,     3,     3,     3,     3,     4
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    62,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    78,    78,    78,    78,
      78,    79,    80,    81,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    83,    83,    83,    83
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     4,     2,     2,     4,     4,
       4,     2,     3,     4,     1,     3,     3,     3,     3,     3,
       3,     1,     1,     5,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 23: /* load_stmt: LOAD STRING  */
#line 60 "dsl_parser.y"
                {
        fprintf(py_code, "df = pd.read_csv(\"%s\")\n", (yyvsp[0].str));
    }
#line 1229 "dsl_parser.tab.c"
    break;

  case 24: /* save_stmt: SAVE STRING  */
#line 66 "dsl_parser.y"
                {
        // Replace .py with .csv if needed
        char* filename = strdup((yyvsp[0].str));
        char* ext = strrchr(filename, '.');
        if (ext && strcmp(ext, ".py") == 0) {
            strcpy(ext, ".csv");
        }
        fprintf(py_code, "df.to_csv(\"%s\", index=False)\n", filename);
        free(filename);
    }
#line 1244 "dsl_parser.tab.c"
    break;

  case 25: /* filter_stmt: FILTER IDENTIFIER GT NUMBER  */
#line 79 "dsl_parser.y"
                                { fprintf(py_code, "df = df[df[\"%s\"] > %s]\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1250 "dsl_parser.tab.c"
    break;

  case 26: /* select_stmt: SELECT IDENTIFIER  */
#line 83 "dsl_parser.y"
                      { fprintf(py_code, "df = df[[\"%s\"]]\n", (yyvsp[0].str)); }
#line 1256 "dsl_parser.tab.c"
    break;

  case 27: /* drop_stmt: DROP IDENTIFIER  */
#line 87 "dsl_parser.y"
                    { fprintf(py_code, "df.drop(columns=[\"%s\"], inplace=True)\n", (yyvsp[0].str)); }
#line 1262 "dsl_parser.tab.c"
    break;

  case 28: /* rename_stmt: RENAME IDENTIFIER TO IDENTIFIER  */
#line 91 "dsl_parser.y"
                                    { fprintf(py_code, "df.rename(columns={\"%s\": \"%s\"}, inplace=True)\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1268 "dsl_parser.tab.c"
    break;

  case 29: /* replace_stmt: REPLACE IDENTIFIER WITH NUMBER  */
#line 95 "dsl_parser.y"
                                   { fprintf(py_code, "df[\"%s\"].replace(to_replace=None, value=%s, inplace=True)\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1274 "dsl_parser.tab.c"
    break;

  case 30: /* fillna_stmt: FILLNA IDENTIFIER WITH NUMBER  */
#line 99 "dsl_parser.y"
                                  { fprintf(py_code, "df[\"%s\"].fillna(%s, inplace=True)\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1280 "dsl_parser.tab.c"
    break;

  case 31: /* groupby_stmt: GROUPBY IDENTIFIER  */
#line 103 "dsl_parser.y"
                       { fprintf(py_code, "df.groupby(\"%s\")\n", (yyvsp[0].str)); }
#line 1286 "dsl_parser.tab.c"
    break;

  case 32: /* sort_stmt: SORT BY IDENTIFIER  */
#line 107 "dsl_parser.y"
                       { fprintf(py_code, "df.sort_values(by=\"%s\", inplace=True)\n", (yyvsp[0].str)); }
#line 1292 "dsl_parser.tab.c"
    break;

  case 33: /* join_stmt: JOIN IDENTIFIER ON IDENTIFIER  */
#line 111 "dsl_parser.y"
                                  { fprintf(py_code, "df = df.merge(%s, on=\"%s\")\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1298 "dsl_parser.tab.c"
    break;

  case 34: /* preprocess_stmt: PREPROCESS  */
#line 115 "dsl_parser.y"
               { fprintf(py_code, "# Add preprocessing steps here (e.g., scaling, encoding)\n"); }
#line 1304 "dsl_parser.tab.c"
    break;

  case 35: /* train_stmt: TRAIN WITH LINEAR_REGRESSION  */
#line 119 "dsl_parser.y"
                                 {
        fprintf(py_code, "from sklearn.linear_model import LinearRegression\n");
        fprintf(py_code, "model = LinearRegression()\nmodel.fit(X_train, y_train)\n");
    }
#line 1313 "dsl_parser.tab.c"
    break;

  case 36: /* train_stmt: TRAIN WITH KNN  */
#line 123 "dsl_parser.y"
                     {
        fprintf(py_code, "from sklearn.neighbors import KNeighborsClassifier\n");
        fprintf(py_code, "model = KNeighborsClassifier(n_neighbors=5)\nmodel.fit(X_train, y_train)\n");
    }
#line 1322 "dsl_parser.tab.c"
    break;

  case 37: /* train_stmt: TRAIN WITH SVM  */
#line 127 "dsl_parser.y"
                     {
        fprintf(py_code, "from sklearn.svm import SVC\n");
        fprintf(py_code, "model = SVC()\nmodel.fit(X_train, y_train)\n");
    }
#line 1331 "dsl_parser.tab.c"
    break;

  case 38: /* train_stmt: TRAIN WITH DECISION_TREE  */
#line 131 "dsl_parser.y"
                               {
        fprintf(py_code, "from sklearn.tree import DecisionTreeClassifier\n");
        fprintf(py_code, "model = DecisionTreeClassifier()\nmodel.fit(X_train, y_train)\n");
    }
#line 1340 "dsl_parser.tab.c"
    break;

  case 39: /* train_stmt: TRAIN WITH RANDOM_FOREST  */
#line 135 "dsl_parser.y"
                               {
        fprintf(py_code, "from sklearn.ensemble import RandomForestClassifier\n");
        fprintf(py_code, "model = RandomForestClassifier()\nmodel.fit(X_train, y_train)\n");
    }
#line 1349 "dsl_parser.tab.c"
    break;

  case 40: /* train_stmt: TRAIN WITH KMEANS  */
#line 139 "dsl_parser.y"
                        {
        fprintf(py_code, "from sklearn.cluster import KMeans\n");
        fprintf(py_code, "model = KMeans(n_clusters=3)\nmodel.fit(X_train)\n");
    }
#line 1358 "dsl_parser.tab.c"
    break;

  case 41: /* evaluate_stmt: EVALUATE  */
#line 146 "dsl_parser.y"
             { fprintf(py_code, "# Add evaluation metrics here\n"); }
#line 1364 "dsl_parser.tab.c"
    break;

  case 42: /* show_stmt: SHOW  */
#line 150 "dsl_parser.y"
         { fprintf(py_code, "print(df.head())\n"); }
#line 1370 "dsl_parser.tab.c"
    break;

  case 43: /* delete_rows_stmt: DELETE_ROWS WHERE IDENTIFIER GT NUMBER  */
#line 154 "dsl_parser.y"
                                           { fprintf(py_code, "df = df[df[\"%s\"] <= %s]\n", (yyvsp[-2].str), (yyvsp[0].str)); }
#line 1376 "dsl_parser.tab.c"
    break;

  case 44: /* stat_func_stmt: SHOW MEAN OF IDENTIFIER  */
#line 158 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].mean())\n", (yyvsp[0].str)); }
#line 1382 "dsl_parser.tab.c"
    break;

  case 45: /* stat_func_stmt: SHOW MEDIAN OF IDENTIFIER  */
#line 159 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].median())\n", (yyvsp[0].str)); }
#line 1388 "dsl_parser.tab.c"
    break;

  case 46: /* stat_func_stmt: SHOW MODE OF IDENTIFIER  */
#line 160 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].mode())\n", (yyvsp[0].str)); }
#line 1394 "dsl_parser.tab.c"
    break;

  case 47: /* stat_func_stmt: SHOW STD OF IDENTIFIER  */
#line 161 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].std())\n", (yyvsp[0].str)); }
#line 1400 "dsl_parser.tab.c"
    break;

  case 48: /* stat_func_stmt: SHOW VAR OF IDENTIFIER  */
#line 162 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].var())\n", (yyvsp[0].str)); }
#line 1406 "dsl_parser.tab.c"
    break;

  case 49: /* stat_func_stmt: SHOW MIN OF IDENTIFIER  */
#line 163 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].min())\n", (yyvsp[0].str)); }
#line 1412 "dsl_parser.tab.c"
    break;

  case 50: /* stat_func_stmt: SHOW MAX OF IDENTIFIER  */
#line 164 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].max())\n", (yyvsp[0].str)); }
#line 1418 "dsl_parser.tab.c"
    break;

  case 51: /* stat_func_stmt: SHOW COUNT OF IDENTIFIER  */
#line 165 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].count())\n", (yyvsp[0].str)); }
#line 1424 "dsl_parser.tab.c"
    break;

  case 52: /* stat_func_stmt: SHOW CORR OF IDENTIFIER  */
#line 166 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].corr())\n", (yyvsp[0].str)); }
#line 1430 "dsl_parser.tab.c"
    break;

  case 53: /* stat_func_stmt: SHOW COV OF IDENTIFIER  */
#line 167 "dsl_parser.y"
                                { fprintf(py_code, "print(df[\"%s\"].cov())\n", (yyvsp[0].str)); }
#line 1436 "dsl_parser.tab.c"
    break;

  case 54: /* plot_stmt: PLOT HISTOGRAM OF IDENTIFIER  */
#line 171 "dsl_parser.y"
                                   { fprintf(py_code, "df[\"%s\"].hist()\nplt.show()\n", (yyvsp[0].str)); }
#line 1442 "dsl_parser.tab.c"
    break;

  case 55: /* plot_stmt: PLOT SCATTER OF IDENTIFIER  */
#line 172 "dsl_parser.y"
                                   { fprintf(py_code, "df.plot.scatter(x=\"%s\", y=\"%s\")\nplt.show()\n", (yyvsp[0].str), (yyvsp[0].str)); }
#line 1448 "dsl_parser.tab.c"
    break;

  case 56: /* plot_stmt: PLOT BOXPLOT OF IDENTIFIER  */
#line 173 "dsl_parser.y"
                                   { fprintf(py_code, "df.boxplot(column=\"%s\")\nplt.show()\n", (yyvsp[0].str)); }
#line 1454 "dsl_parser.tab.c"
    break;

  case 57: /* plot_stmt: PLOT BAR OF IDENTIFIER  */
#line 174 "dsl_parser.y"
                                   { fprintf(py_code, "df[\"%s\"].value_counts().plot.bar()\nplt.show()\n", (yyvsp[0].str)); }
#line 1460 "dsl_parser.tab.c"
    break;


#line 1464 "dsl_parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 177 "dsl_parser.y"


void yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
}
