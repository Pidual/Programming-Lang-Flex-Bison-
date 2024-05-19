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
#line 2 "syntactic.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern int yylex(void);
void yyerror(char *s);
extern FILE *yyin;

#define MAX_SYMBOLS 256

typedef struct {
    char *name;
    float value;
    char *valueS;
} Symbol;

Symbol symbolTable[MAX_SYMBOLS];
int symbolCount = 0;

void setSymbolValue(char *name, float value) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = value;
    symbolCount++;
}

void setSymbolValue2(char *name, float value, float value2) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = value + value2;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = value + value2;
    symbolCount++;
}

void setSymbolValueC(char *name, char *valueS) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].valueS = valueS;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].valueS = valueS;
    symbolCount++;
}

void create(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {
            symbolTable[i].value = 0;
            return;
        }
    }
    symbolTable[symbolCount].name = strdup(name);
    symbolTable[symbolCount].value = 0;
    symbolCount++;
}

float getSymbolValue(char *name) {
    for (int i = 0; i < symbolCount; ++i) {
        if (strcmp(symbolTable[i].name, name) == 0) {          
            return symbolTable[i].value;
        }
    }
    printf("Variable no definida: %s\n", name);
    return 0.0;
}


#line 150 "syntactic.tab.c"

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

#include "syntactic.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IDVR = 3,                       /* IDVR  */
  YYSYMBOL_STR = 4,                        /* STR  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLO = 6,                        /* FLO  */
  YYSYMBOL_EOL = 7,                        /* EOL  */
  YYSYMBOL_VAR = 8,                        /* VAR  */
  YYSYMBOL_IGU = 9,                        /* IGU  */
  YYSYMBOL_MAS = 10,                       /* MAS  */
  YYSYMBOL_MUL = 11,                       /* MUL  */
  YYSYMBOL_RES = 12,                       /* RES  */
  YYSYMBOL_DIV = 13,                       /* DIV  */
  YYSYMBOL_MEN = 14,                       /* MEN  */
  YYSYMBOL_MEIGU = 15,                     /* MEIGU  */
  YYSYMBOL_MAY = 16,                       /* MAY  */
  YYSYMBOL_MAYGU = 17,                     /* MAYGU  */
  YYSYMBOL_EQU = 18,                       /* EQU  */
  YYSYMBOL_DIF = 19,                       /* DIF  */
  YYSYMBOL_CHI = 20,                       /* CHI  */
  YYSYMBOL_PIZ = 21,                       /* PIZ  */
  YYSYMBOL_PDE = 22,                       /* PDE  */
  YYSYMBOL_FIN = 23,                       /* FIN  */
  YYSYMBOL_NOO = 24,                       /* NOO  */
  YYSYMBOL_HAS = 25,                       /* HAS  */
  YYSYMBOL_FUN = 26,                       /* FUN  */
  YYSYMBOL_PAR = 27,                       /* PAR  */
  YYSYMBOL_RTN = 28,                       /* RTN  */
  YYSYMBOL_ITR = 29,                       /* ITR  */
  YYSYMBOL_FUE = 30,                       /* FUE  */
  YYSYMBOL_ATP = 31,                       /* ATP  */
  YYSYMBOL_ARG = 32,                       /* ARG  */
  YYSYMBOL_PRINT = 33,                     /* PRINT  */
  YYSYMBOL_POR = 34,                       /* POR  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_program = 36,                   /* program  */
  YYSYMBOL_sentence = 37,                  /* sentence  */
  YYSYMBOL_decvar = 38,                    /* decvar  */
  YYSYMBOL_initvar = 39,                   /* initvar  */
  YYSYMBOL_asigvar = 40,                   /* asigvar  */
  YYSYMBOL_value = 41,                     /* value  */
  YYSYMBOL_operation = 42,                 /* operation  */
  YYSYMBOL_callfuncion = 43,               /* callfuncion  */
  YYSYMBOL_chi = 44,                       /* chi  */
  YYSYMBOL_hasta = 45,                     /* hasta  */
  YYSYMBOL_condition = 46,                 /* condition  */
  YYSYMBOL_decfun = 47,                    /* decfun  */
  YYSYMBOL_return = 48,                    /* return  */
  YYSYMBOL_err = 49,                       /* err  */
  YYSYMBOL_for = 50,                       /* for  */
  YYSYMBOL_printSentence = 51              /* printSentence  */
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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  35
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   244

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  185

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   100,   100,   101,   102,   103,   104,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   117,   119,   122,
     125,   126,   127,   129,   130,   131,   133,   134,   135,   137,
     138,   139,   140,   146,   147,   149,   152,   155,   158,   163,
     169,   174,   180,   185,   190,   195,   200,   205,   211,   212,
     213,   214,   215,   216,   218,   219,   221,   222,   224,   230,
     236,   242,   243
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
  "\"end of file\"", "error", "\"invalid token\"", "IDVR", "STR", "INT",
  "FLO", "EOL", "VAR", "IGU", "MAS", "MUL", "RES", "DIV", "MEN", "MEIGU",
  "MAY", "MAYGU", "EQU", "DIF", "CHI", "PIZ", "PDE", "FIN", "NOO", "HAS",
  "FUN", "PAR", "RTN", "ITR", "FUE", "ATP", "ARG", "PRINT", "POR",
  "$accept", "program", "sentence", "decvar", "initvar", "asigvar",
  "value", "operation", "callfuncion", "chi", "hasta", "condition",
  "decfun", "return", "err", "for", "printSentence", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-51)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     173,    -1,   -51,   -51,    -2,     8,    17,    42,    34,    31,
      35,    84,   -51,   -51,   -51,   -51,    69,    51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   109,     6,     0,   167,   167,
      38,    33,   131,    97,    43,   -51,   -51,   -51,   167,   167,
     167,   167,   -51,    45,    86,    68,   -51,    78,    87,   -51,
     116,   -51,   128,    73,     2,     7,    75,   173,    85,    89,
     107,   103,   167,   -51,   -51,   -51,   -51,   -51,   -51,   108,
     -51,   124,   125,   133,    69,   143,   167,   167,   167,   167,
     167,   167,   179,   167,   167,   126,   129,   198,   110,   110,
     110,   110,   137,   132,   163,   147,   154,   158,   165,   153,
     170,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   171,   180,   168,   169,   -51,   187,   188,   175,   178,
     181,   182,   -51,   -51,   -51,   -51,   -51,   193,   206,   -51,
     167,   190,   207,   211,   -51,   -51,   -51,   -51,   -51,   -51,
     167,   126,   -51,    37,    12,   -51,   208,   209,    74,   192,
     213,   196,   217,   167,   167,   167,   167,   -51,   212,   -51,
     214,   215,   218,   202,   204,   167,   167,   -51,   -51,   224,
     225,   222,   223,   226,   227,   210,   216,   167,   167,   -51,
     -51,   230,   231,   -51,   -51
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    28,    26,    27,     0,     0,     0,     0,     2,     0,
       0,     0,     3,     7,     9,     8,     0,     0,    15,    11,
      12,     4,    14,    13,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     5,     6,     0,     0,
       0,     0,    10,    28,     0,     0,    25,     0,     0,    17,
       0,    28,     0,     0,     0,     0,     0,     2,     0,     0,
       0,     0,     0,    29,    31,    30,    32,    23,    24,     0,
      33,     0,    26,    27,    22,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    21,    18,    19,    20,    42,    43,    44,    45,    46,
      47,    28,     0,     0,     0,    48,    28,     0,     0,     0,
       0,     0,    49,    57,    56,    62,    61,     0,     0,    34,
       0,     0,     0,     0,    54,    55,    50,    51,    52,    53,
       0,     0,    60,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    36,     0,    37,
       0,     0,     0,     0,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      39,     0,     0,    58,    59
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -51,    -4,    -9,   176,   -28,   -50,    -7,   -25,   219,   -51,
     -51,   172,    -8,    36,   -51,   -51,   184
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    53,    21,    92,    22,    23,    24
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      45,    27,    36,    37,    32,    90,    62,    49,    25,    50,
      85,    47,     2,     3,    86,     4,    83,    84,    44,   151,
      26,    52,    54,    36,    37,    75,    59,    89,    48,    28,
      91,    63,    64,    65,    66,    87,   152,     1,    29,     2,
       3,    31,     4,    74,   149,    30,    60,    38,    39,    40,
      41,    61,    33,    94,     5,    52,    34,   112,    42,     6,
       7,   150,   117,     8,    56,    55,    26,     9,    10,   105,
     106,   107,   108,   109,   110,    68,   113,   114,   142,    38,
      39,    40,    41,    69,    35,    36,    37,     1,   155,     2,
       3,   156,     4,    67,    70,    82,    38,    39,    40,    41,
      51,    58,     2,     3,     5,   144,    98,    95,     9,     6,
       7,    96,    43,     8,     2,     3,    97,     9,    10,    51,
      71,    72,    73,   143,   118,   119,   120,   121,   161,   162,
     100,   101,   102,   148,     1,    25,     2,     3,    87,     4,
     103,   172,    76,    77,    78,    79,    80,    81,   163,   164,
     104,     5,   181,   182,   125,   123,     6,     7,   171,   115,
       8,   126,    57,   127,     9,    10,     1,   122,     2,     3,
      51,     4,     2,     3,    50,   128,     1,   129,     2,     3,
     130,     4,   111,     5,     2,     3,   124,   131,     6,     7,
     132,   133,     8,     5,   134,   135,     9,    10,     6,     7,
     140,   116,     8,     2,     3,   136,     9,    10,   137,   141,
     146,   138,   139,   145,   147,   157,   158,   153,   154,   159,
     160,   165,   167,   166,   169,   168,   170,   173,   174,   175,
     176,    88,     0,   179,    99,   177,   178,   183,   184,   180,
      93,     0,     0,     0,    46
};

static const yytype_int16 yycheck[] =
{
      25,     3,    11,    11,     8,    55,    34,     7,     9,     9,
       3,     5,     5,     6,     7,     8,    14,    15,    25,     7,
      21,    28,    29,    32,    32,    50,    33,    55,    22,    21,
      55,    38,    39,    40,    41,    28,    24,     3,    21,     5,
       6,     7,     8,    50,     7,     3,     3,    10,    11,    12,
      13,     8,    21,    57,    20,    62,    21,    82,     7,    25,
      26,    24,    87,    29,    31,    27,    21,    33,    34,    76,
      77,    78,    79,    80,    81,     7,    83,    84,   128,    10,
      11,    12,    13,     5,     0,    94,    94,     3,    14,     5,
       6,    17,     8,     7,     7,    22,    10,    11,    12,    13,
       3,     4,     5,     6,    20,   130,     3,    22,    33,    25,
      26,    22,     3,    29,     5,     6,     9,    33,    34,     3,
       4,     5,     6,   130,    88,    89,    90,    91,   153,   154,
      22,     7,     7,   140,     3,     9,     5,     6,    28,     8,
       7,   166,    14,    15,    16,    17,    18,    19,   155,   156,
       7,    20,   177,   178,     7,    23,    25,    26,   165,    30,
      29,     7,    31,     5,    33,    34,     3,    30,     5,     6,
       3,     8,     5,     6,     9,    22,     3,     7,     5,     6,
       9,     8,     3,    20,     5,     6,    23,     7,    25,    26,
      22,    22,    29,    20,     7,     7,    33,    34,    25,    26,
       7,     3,    29,     5,     6,    30,    33,    34,    30,     3,
       3,    30,    30,    23,     3,    23,     3,     9,     9,    23,
       3,     9,     7,     9,    22,     7,    22,     3,     3,     7,
       7,    55,    -1,    23,    62,     9,     9,     7,     7,    23,
      56,    -1,    -1,    -1,    25
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,     6,     8,    20,    25,    26,    29,    33,
      34,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    47,    49,    50,    51,     9,    21,     3,    21,    21,
       3,     7,    36,    21,    21,     0,    37,    47,    10,    11,
      12,    13,     7,     3,    41,    42,    43,     5,    22,     7,
       9,     3,    41,    46,    41,    27,    31,    31,     4,    41,
       3,     8,    39,    41,    41,    41,    41,     7,     7,     5,
       7,     4,     5,     6,    41,    42,    14,    15,    16,    17,
      18,    19,    22,    14,    15,     3,     7,    28,    38,    39,
      40,    42,    48,    51,    36,    22,    22,     9,     3,    46,
      22,     7,     7,     7,     7,    41,    41,    41,    41,    41,
      41,     3,    42,    41,    41,    30,     3,    42,    48,    48,
      48,    48,    30,    23,    23,     7,     7,     5,    22,     7,
       9,     7,    22,    22,     7,     7,    30,    30,    30,    30,
       7,     3,    40,    41,    42,    23,     3,     3,    41,     7,
      24,     7,    24,     9,     9,    14,    17,    23,     3,    23,
       3,    42,    42,    41,    41,     9,     9,     7,     7,    22,
      22,    41,    42,     3,     3,     7,     7,     9,     9,    23,
      23,    42,    42,     7,     7
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    36,    36,    36,    37,    37,    37,
      37,    37,    37,    37,    37,    37,    37,    38,    39,    39,
      39,    39,    39,    40,    40,    40,    41,    41,    41,    42,
      42,    42,    42,    43,    43,    44,    44,    44,    44,    44,
      45,    45,    46,    46,    46,    46,    46,    46,    47,    47,
      47,    47,    47,    47,    48,    48,    49,    49,    50,    50,
      50,    51,    51
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     2,     2,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     3,     5,     5,
       5,     5,     4,     4,     4,     3,     1,     1,     1,     3,
       3,     3,     3,     4,     6,     7,     9,     9,    13,    13,
      10,    10,     3,     3,     3,     3,     3,     3,     5,     5,
       6,     6,     6,     6,     3,     3,     5,     5,    14,    14,
       6,     5,     5
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
  case 17: /* decvar: VAR IDVR EOL  */
#line 117 "syntactic.y"
                           {  create((yyvsp[-1].sval)); }
#line 1304 "syntactic.tab.c"
    break;

  case 18: /* initvar: VAR IDVR IGU INT EOL  */
#line 119 "syntactic.y"
                                   { setSymbolValue((yyvsp[-3].sval), (float)(yyvsp[-1].ival)); 
                                    (yyval.fval) = (yyvsp[-1].ival);
                                  }
#line 1312 "syntactic.tab.c"
    break;

  case 19: /* initvar: VAR IDVR IGU FLO EOL  */
#line 122 "syntactic.y"
                                   { setSymbolValue((yyvsp[-3].sval), (yyvsp[-1].fval)); 
                                    (yyval.fval) = (yyvsp[-1].fval);  
                                  }
#line 1320 "syntactic.tab.c"
    break;

  case 20: /* initvar: VAR IDVR IGU operation EOL  */
#line 125 "syntactic.y"
                                         { setSymbolValue((yyvsp[-3].sval), (float)(yyvsp[-1].fval)); }
#line 1326 "syntactic.tab.c"
    break;

  case 21: /* initvar: VAR IDVR IGU STR EOL  */
#line 126 "syntactic.y"
                                   { setSymbolValueC((yyvsp[-3].sval), (yyvsp[-1].sval)); }
#line 1332 "syntactic.tab.c"
    break;

  case 22: /* initvar: VAR IDVR IGU value  */
#line 127 "syntactic.y"
                                 { setSymbolValue((yyvsp[-2].sval), (yyvsp[0].fval)); }
#line 1338 "syntactic.tab.c"
    break;

  case 23: /* asigvar: IDVR IGU value EOL  */
#line 129 "syntactic.y"
                                 { setSymbolValue((yyvsp[-3].sval), (yyvsp[-1].fval)); }
#line 1344 "syntactic.tab.c"
    break;

  case 24: /* asigvar: IDVR IGU operation EOL  */
#line 130 "syntactic.y"
                                     { setSymbolValue((yyvsp[-3].sval), (float)(yyvsp[-1].fval)); }
#line 1350 "syntactic.tab.c"
    break;

  case 26: /* value: INT  */
#line 133 "syntactic.y"
                  { (yyval.fval) = (float)(yyvsp[0].ival); }
#line 1356 "syntactic.tab.c"
    break;

  case 27: /* value: FLO  */
#line 134 "syntactic.y"
                  { (yyval.fval) = (yyvsp[0].fval); }
#line 1362 "syntactic.tab.c"
    break;

  case 28: /* value: IDVR  */
#line 135 "syntactic.y"
                   { (yyval.fval) = getSymbolValue((yyvsp[0].sval)); }
#line 1368 "syntactic.tab.c"
    break;

  case 29: /* operation: value MAS value  */
#line 137 "syntactic.y"
                              { (yyval.fval) = (yyvsp[-2].fval) + (yyvsp[0].fval); }
#line 1374 "syntactic.tab.c"
    break;

  case 30: /* operation: value RES value  */
#line 138 "syntactic.y"
                              { (yyval.fval) = (yyvsp[-2].fval) - (yyvsp[0].fval); }
#line 1380 "syntactic.tab.c"
    break;

  case 31: /* operation: value MUL value  */
#line 139 "syntactic.y"
                              { (yyval.fval) = (yyvsp[-2].fval) * (yyvsp[0].fval); }
#line 1386 "syntactic.tab.c"
    break;

  case 32: /* operation: value DIV value  */
#line 140 "syntactic.y"
                              {if((yyvsp[0].fval) == 0)
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = (yyvsp[-2].fval)/(yyvsp[0].fval);
                              }
#line 1396 "syntactic.tab.c"
    break;

  case 33: /* callfuncion: IDVR PIZ PDE EOL  */
#line 146 "syntactic.y"
                               { create((yyvsp[-3].sval)); }
#line 1402 "syntactic.tab.c"
    break;

  case 34: /* callfuncion: IDVR PIZ INT INT PDE EOL  */
#line 147 "syntactic.y"
                                       { setSymbolValue2((yyvsp[-5].sval), (float)(yyvsp[-3].ival), (float)(yyvsp[-2].ival)); }
#line 1408 "syntactic.tab.c"
    break;

  case 35: /* chi: CHI PIZ condition PDE operation EOL FIN  */
#line 149 "syntactic.y"
                                                      {if((yyvsp[-4].fval) == 0)
                                                        printf("Entra al if: %f\n", (yyvsp[-2].fval));
                                                      }
#line 1416 "syntactic.tab.c"
    break;

  case 36: /* chi: CHI PIZ condition PDE IDVR IGU value EOL FIN  */
#line 152 "syntactic.y"
                                                           {if((yyvsp[-6].fval) == 0)
                                                            setSymbolValue((yyvsp[-4].sval), (yyvsp[-2].fval));
                                                          }
#line 1424 "syntactic.tab.c"
    break;

  case 37: /* chi: CHI PIZ condition PDE IDVR IGU operation EOL FIN  */
#line 155 "syntactic.y"
                                                               {if((yyvsp[-6].fval) == 0)
                                                                setSymbolValue((yyvsp[-4].sval), (yyvsp[-2].fval));
                                                              }
#line 1432 "syntactic.tab.c"
    break;

  case 38: /* chi: CHI PIZ condition PDE IDVR IGU value NOO IDVR IGU value EOL FIN  */
#line 158 "syntactic.y"
                                                                              {if((yyvsp[-10].fval) == 0)
                                                                                setSymbolValue((yyvsp[-8].sval), (yyvsp[-6].fval));
                                                                            else
                                                                                setSymbolValue((yyvsp[-4].sval), (yyvsp[-2].fval));
                                                                            }
#line 1442 "syntactic.tab.c"
    break;

  case 39: /* chi: CHI PIZ condition PDE IDVR IGU operation NOO IDVR IGU operation EOL FIN  */
#line 163 "syntactic.y"
                                                                                      {if((yyvsp[-10].fval) == 0)
                                                                                        setSymbolValue((yyvsp[-8].sval), (yyvsp[-6].fval));
                                                                                    else
                                                                                        setSymbolValue((yyvsp[-4].sval), (yyvsp[-2].fval));
                                                                                    }
#line 1452 "syntactic.tab.c"
    break;

  case 40: /* hasta: HAS PIZ value MEN value PDE IDVR IGU operation EOL  */
#line 169 "syntactic.y"
                                                                 {while((yyvsp[-7].fval) < (yyvsp[-5].fval)){
                                                                    (yyvsp[-7].fval) += 1;
                                                                    setSymbolValue((yyvsp[-3].sval), (yyvsp[-7].fval));
                                                                 }  
                                                                }
#line 1462 "syntactic.tab.c"
    break;

  case 41: /* hasta: HAS PIZ value MEIGU value PDE IDVR IGU operation EOL  */
#line 174 "syntactic.y"
                                                                   {while((yyvsp[-7].fval) <= (yyvsp[-5].fval)){
                                                                    (yyvsp[-7].fval) += 1;
                                                                    setSymbolValue((yyvsp[-3].sval), (yyvsp[-7].fval));
                                                                 }  
                                                                }
#line 1472 "syntactic.tab.c"
    break;

  case 42: /* condition: value MEN value  */
#line 180 "syntactic.y"
                              {if((yyvsp[-2].fval) < (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1482 "syntactic.tab.c"
    break;

  case 43: /* condition: value MEIGU value  */
#line 185 "syntactic.y"
                                {if((yyvsp[-2].fval) <= (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1492 "syntactic.tab.c"
    break;

  case 44: /* condition: value MAY value  */
#line 190 "syntactic.y"
                              {if((yyvsp[-2].fval) > (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1502 "syntactic.tab.c"
    break;

  case 45: /* condition: value MAYGU value  */
#line 195 "syntactic.y"
                                {if((yyvsp[-2].fval) >= (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1512 "syntactic.tab.c"
    break;

  case 46: /* condition: value EQU value  */
#line 200 "syntactic.y"
                              {if((yyvsp[-2].fval) == (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1522 "syntactic.tab.c"
    break;

  case 47: /* condition: value DIF value  */
#line 205 "syntactic.y"
                              {if((yyvsp[-2].fval) != (yyvsp[0].fval))
                                    (yyval.fval) = 0;
                                else
                                    (yyval.fval) = 1;
                              }
#line 1532 "syntactic.tab.c"
    break;

  case 48: /* decfun: FUN IDVR PAR EOL FUE  */
#line 211 "syntactic.y"
                                  {  create((yyvsp[-3].sval)); }
#line 1538 "syntactic.tab.c"
    break;

  case 49: /* decfun: FUN IDVR PAR return FUE  */
#line 212 "syntactic.y"
                                      {  create((yyvsp[-3].sval)); }
#line 1544 "syntactic.tab.c"
    break;

  case 50: /* decfun: FUN IDVR PAR decvar return FUE  */
#line 213 "syntactic.y"
                                             {  create((yyvsp[-4].sval)); }
#line 1550 "syntactic.tab.c"
    break;

  case 51: /* decfun: FUN IDVR PAR initvar return FUE  */
#line 214 "syntactic.y"
                                              {  create((yyvsp[-4].sval)); }
#line 1556 "syntactic.tab.c"
    break;

  case 52: /* decfun: FUN IDVR PAR asigvar return FUE  */
#line 215 "syntactic.y"
                                              {  create((yyvsp[-4].sval)); }
#line 1562 "syntactic.tab.c"
    break;

  case 53: /* decfun: FUN IDVR PAR operation return FUE  */
#line 216 "syntactic.y"
                                                {  create((yyvsp[-4].sval)); }
#line 1568 "syntactic.tab.c"
    break;

  case 58: /* for: POR PIZ IDVR IGU INT EOL value MEN value PDE IDVR IGU operation EOL  */
#line 224 "syntactic.y"
                                                                                  {int i;
                                                                                setSymbolValue((yyvsp[-11].sval), (float)(yyvsp[-9].ival)); 
                                                                                for(i = (yyvsp[-9].ival); i < (yyvsp[-5].fval); i++){
                                                                                    setSymbolValue((yyvsp[-3].sval), i);
                                                                                }
                                                                              }
#line 1579 "syntactic.tab.c"
    break;

  case 59: /* for: POR PIZ IDVR IGU INT EOL value MAYGU value PDE IDVR IGU operation EOL  */
#line 230 "syntactic.y"
                                                                                    {int i;
                                                                                setSymbolValue((yyvsp[-11].sval), (float)(yyvsp[-9].ival)); 
                                                                                for(i = (yyvsp[-9].ival); i <= (yyvsp[-5].fval); i++){
                                                                                    setSymbolValue((yyvsp[-3].sval), i);
                                                                                }
                                                                              }
#line 1590 "syntactic.tab.c"
    break;

  case 60: /* for: POR PIZ initvar condition PDE asigvar  */
#line 236 "syntactic.y"
                                                    {int i;
                                                     for(i = (yyvsp[-3].fval); i <= 9; i++){
                                                         printf("pasa");
                                                     }
                                                    }
#line 1600 "syntactic.tab.c"
    break;

  case 61: /* printSentence: PRINT PIZ value PDE EOL  */
#line 242 "syntactic.y"
                                        { printf("%f\n", (yyvsp[-2].fval)); }
#line 1606 "syntactic.tab.c"
    break;

  case 62: /* printSentence: PRINT PIZ STR PDE EOL  */
#line 243 "syntactic.y"
                                      { printf("%s\n", (yyvsp[-2].sval)); }
#line 1612 "syntactic.tab.c"
    break;


#line 1616 "syntactic.tab.c"

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

#line 244 "syntactic.y"

/**Seccion de codigo de usuario**/
void yyerror(char *s){
    printf("Error Sintáctico: %s\n", s);
}

int main(int argc, char **argv){
    printf("Inicio del programa: \n");
    if(argc>1)
        yyin=fopen(argv[1],"rt");
    else
        yyin=stdin;
    yyparse();
    return 0;
}
