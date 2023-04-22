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
#line 1 "parser.y"

#include <bits/stdc++.h>
#include "fiona_base.h"
#include "../Statements/statement.h"
#include "../Statements/BlockNode.h"
#include "../Expressions/expression.h"
#include "SymbolTable.h"
#include "data_types.h"
#include "../Expressions/Literals.h"
#include "../Expressions/Variables.h"
#include "../Statements/Assignment.h"
#include "../Statements/Declaration.h"
#include "../Statements/Functions.h"
#include "../Statements/IfElseNode.h"
#include "../Statements/Loops.h"
#include "../Statements/StatementList.h"
#include "../Expressions/BinOp.h"
#include "../Statements/IO.h"
#include "../Statements/ExpStat.h"
#include "../Statements/BreakStatement.h"
#include "../Statements/ReturnStatement.h"



//extern Scope* curr_scope=new Scope(nullptr);



int yylex(void);
void yyerror(char *s);

#line 103 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_VARVAL = 3,                     /* VARVAL  */
  YYSYMBOL_INTVAL = 4,                     /* INTVAL  */
  YYSYMBOL_REALVAL = 5,                    /* REALVAL  */
  YYSYMBOL_CHARVAL = 6,                    /* CHARVAL  */
  YYSYMBOL_BOOLVAL = 7,                    /* BOOLVAL  */
  YYSYMBOL_IDENTIFIER = 8,                 /* IDENTIFIER  */
  YYSYMBOL_PRINT = 9,                      /* PRINT  */
  YYSYMBOL_DECLARE = 10,                   /* DECLARE  */
  YYSYMBOL_RETURN = 11,                    /* RETURN  */
  YYSYMBOL_EQUAL = 12,                     /* EQUAL  */
  YYSYMBOL_SEMICOLON = 13,                 /* SEMICOLON  */
  YYSYMBOL_LPARAN = 14,                    /* LPARAN  */
  YYSYMBOL_RPARAN = 15,                    /* RPARAN  */
  YYSYMBOL_FOR = 16,                       /* FOR  */
  YYSYMBOL_WHILE = 17,                     /* WHILE  */
  YYSYMBOL_LOOP = 18,                      /* LOOP  */
  YYSYMBOL_IN = 19,                        /* IN  */
  YYSYMBOL_COMMA = 20,                     /* COMMA  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_SCAN = 23,                      /* SCAN  */
  YYSYMBOL_ASSIGN = 24,                    /* ASSIGN  */
  YYSYMBOL_FUNCTION = 25,                  /* FUNCTION  */
  YYSYMBOL_DOT = 26,                       /* DOT  */
  YYSYMBOL_LPARAN_C = 27,                  /* LPARAN_C  */
  YYSYMBOL_RPARAN_C = 28,                  /* RPARAN_C  */
  YYSYMBOL_BREAK = 29,                     /* BREAK  */
  YYSYMBOL_IF = 30,                        /* IF  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_LT = 32,                        /* LT  */
  YYSYMBOL_GT = 33,                        /* GT  */
  YYSYMBOL_GE = 34,                        /* GE  */
  YYSYMBOL_EQ = 35,                        /* EQ  */
  YYSYMBOL_NE = 36,                        /* NE  */
  YYSYMBOL_ADD = 37,                       /* ADD  */
  YYSYMBOL_SUBTRACT = 38,                  /* SUBTRACT  */
  YYSYMBOL_MULTIPLY = 39,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 40,                    /* DIVIDE  */
  YYSYMBOL_LPARAN_S = 41,                  /* LPARAN_S  */
  YYSYMBOL_RPARAN_S = 42,                  /* RPARAN_S  */
  YYSYMBOL_IFX = 43,                       /* IFX  */
  YYSYMBOL_ELSE = 44,                      /* ELSE  */
  YYSYMBOL_YYACCEPT = 45,                  /* $accept  */
  YYSYMBOL_program = 46,                   /* program  */
  YYSYMBOL_function_declaration = 47,      /* function_declaration  */
  YYSYMBOL_function_call = 48,             /* function_call  */
  YYSYMBOL_block = 49,                     /* block  */
  YYSYMBOL_stmt_list = 50,                 /* stmt_list  */
  YYSYMBOL_stmt = 51,                      /* stmt  */
  YYSYMBOL_print_stmt = 52,                /* print_stmt  */
  YYSYMBOL_declaration_stmt = 53,          /* declaration_stmt  */
  YYSYMBOL_assignment_stmt = 54,           /* assignment_stmt  */
  YYSYMBOL_for_stmt = 55,                  /* for_stmt  */
  YYSYMBOL_if_stmt = 56,                   /* if_stmt  */
  YYSYMBOL_while_stmt = 57,                /* while_stmt  */
  YYSYMBOL_loop_stmt = 58,                 /* loop_stmt  */
  YYSYMBOL_array_declaration = 59,         /* array_declaration  */
  YYSYMBOL_array_access = 60,              /* array_access  */
  YYSYMBOL_arg_list = 61,                  /* arg_list  */
  YYSYMBOL_expr = 62,                      /* expr  */
  YYSYMBOL_term = 63,                      /* term  */
  YYSYMBOL_return_statement = 64,          /* return_statement  */
  YYSYMBOL_relational = 65,                /* relational  */
  YYSYMBOL_factor = 66                     /* factor  */
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
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   228

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  45
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  57
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  116

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   299


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    96,    96,    97,   100,   103,   106,   109,   110,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   128,   131,   134,   137,   138,   141,   142,   145,
     148,   151,   152,   155,   158,   159,   162,   163,   164,   165,
     166,   169,   170,   171,   174,   175,   177,   178,   179,   180,
     181,   182,   185,   186,   187,   188,   189,   190
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
  "\"end of file\"", "error", "\"invalid token\"", "VARVAL", "INTVAL",
  "REALVAL", "CHARVAL", "BOOLVAL", "IDENTIFIER", "PRINT", "DECLARE",
  "RETURN", "EQUAL", "SEMICOLON", "LPARAN", "RPARAN", "FOR", "WHILE",
  "LOOP", "IN", "COMMA", "AND", "OR", "SCAN", "ASSIGN", "FUNCTION", "DOT",
  "LPARAN_C", "RPARAN_C", "BREAK", "IF", "LE", "LT", "GT", "GE", "EQ",
  "NE", "ADD", "SUBTRACT", "MULTIPLY", "DIVIDE", "LPARAN_S", "RPARAN_S",
  "IFX", "ELSE", "$accept", "program", "function_declaration",
  "function_call", "block", "stmt_list", "stmt", "print_stmt",
  "declaration_stmt", "assignment_stmt", "for_stmt", "if_stmt",
  "while_stmt", "loop_stmt", "array_declaration", "array_access",
  "arg_list", "expr", "term", "return_statement", "relational", "factor", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-62)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      91,   -62,   -62,   -62,     3,     4,   189,   200,    12,   200,
      10,    31,    91,    15,   200,    43,   -62,   -62,   -62,    91,
     -62,    37,   -62,   -62,   -62,   -62,   -62,   -62,    57,   -62,
       1,   190,     7,   -62,   -62,   -62,    18,   200,   200,   200,
     200,   -11,   -62,    93,   133,    52,   122,   -62,    63,    58,
     -62,   122,   -62,   -62,   -62,   -62,   -62,   200,   200,   200,
     200,   200,   200,   200,   205,   205,   205,   205,   200,   200,
     101,     9,   109,   141,    20,   -62,   -62,   205,   -62,   200,
     -62,    34,   190,   190,   190,   190,   190,   190,   190,    38,
       7,     7,   -62,   -62,    -9,   153,   -62,   -62,   -62,   -62,
     -62,    54,    53,    10,   -62,   -62,    55,    10,   -62,   205,
     -62,   -12,   205,   -62,    10,   -62
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,    53,    54,    55,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    19,    40,    10,     3,
       7,     0,    11,    12,    14,    17,    15,    16,     0,    56,
       0,    34,    38,    21,    39,    43,     0,     0,     0,     0,
       0,    52,    44,     0,     0,     0,     0,    30,     0,     0,
      20,     0,     1,     8,    13,    18,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,    57,     0,    29,     0,
       6,    27,    35,    49,    47,    46,    48,    51,    50,    52,
      36,    37,    41,    42,     0,     0,    23,     5,    24,    33,
      22,     0,     0,     0,    32,    31,     0,     0,    28,     0,
       4,     0,     0,    25,     0,    26
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -62,   -62,   -62,   -62,   -10,    70,    -7,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -30,    -5,    -4,   -62,
     -62,   -61
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      47,    43,    44,    37,    46,    92,    93,    71,   112,    51,
      74,    57,    53,    36,    56,    12,   101,    37,    40,   104,
      45,    57,     1,     2,    97,     3,    41,    38,    50,    57,
      39,    70,     7,    72,    73,   100,    78,    12,    94,    48,
      57,    81,    53,    52,    39,    68,    66,    67,   111,   102,
      54,   114,    82,    83,    84,    85,    86,    87,    88,    69,
      90,    91,     1,     2,    95,     3,     4,     5,   107,     6,
      55,    77,     7,    57,     8,     9,    10,    79,   103,    39,
     106,   109,    49,    11,     0,    12,    80,    13,    14,     0,
       0,     0,     0,   108,     0,     1,     2,   110,     3,     4,
       5,   113,     6,     0,   115,     7,    75,     8,     9,    10,
       0,     0,     0,     0,    96,     0,    11,     0,    12,     0,
      13,    14,    98,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    58,    59,    60,    61,    62,    63,    64,    65,
      58,    59,    60,    61,    62,    63,    64,    65,    76,    12,
       0,     0,     0,    58,    59,    60,    61,    62,    63,    64,
      65,     0,     0,     0,    58,    59,    60,    61,    62,    63,
      64,    65,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,    99,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     1,     2,   105,     3,    41,     0,     0,
       0,     0,    42,     7,     1,     2,     0,     3,    41,     1,
       2,     0,     3,    89,     7,     0,     0,     0,     0,     7,
       0,    58,    59,    60,    61,    62,    63,    64,    65
};

static const yytype_int8 yycheck[] =
{
      10,     6,     7,    14,     9,    66,    67,    37,    20,    14,
      40,    20,    19,    10,    13,    27,    77,    14,    14,    28,
       8,    20,     4,     5,    15,     7,     8,    24,    13,    20,
      41,    36,    14,    38,    39,    15,    46,    27,    68,     8,
      20,    51,    49,     0,    41,    27,    39,    40,   109,    79,
      13,   112,    57,    58,    59,    60,    61,    62,    63,    41,
      64,    65,     4,     5,    69,     7,     8,     9,    15,    11,
      13,    19,    14,    20,    16,    17,    18,    14,    44,    41,
      26,    26,    12,    25,    -1,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,   103,    -1,     4,     5,   107,     7,     8,
       9,   111,    11,    -1,   114,    14,    13,    16,    17,    18,
      -1,    -1,    -1,    -1,    13,    -1,    25,    -1,    27,    -1,
      29,    30,    13,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    31,    32,    33,    34,    35,    36,    37,    38,
      31,    32,    33,    34,    35,    36,    37,    38,    15,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    42,    31,    32,    33,    34,    35,    36,
      37,    38,    -1,     4,     5,    42,     7,     8,    -1,    -1,
      -1,    -1,    13,    14,     4,     5,    -1,     7,     8,     4,
       5,    -1,     7,     8,    14,    -1,    -1,    -1,    -1,    14,
      -1,    31,    32,    33,    34,    35,    36,    37,    38
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,     5,     7,     8,     9,    11,    14,    16,    17,
      18,    25,    27,    29,    30,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    10,    14,    24,    41,
      14,     8,    13,    62,    62,     8,    62,    49,     8,    50,
      13,    62,     0,    51,    13,    13,    13,    20,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    27,    41,
      62,    61,    62,    62,    61,    13,    15,    19,    49,    14,
      28,    49,    62,    62,    62,    62,    62,    62,    62,     8,
      63,    63,    66,    66,    61,    62,    13,    15,    13,    42,
      15,    66,    61,    44,    28,    42,    26,    15,    49,    26,
      49,    66,    20,    49,    66,    49
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    45,    46,    46,    47,    48,    49,    50,    50,    51,
      51,    51,    51,    51,    51,    51,    51,    51,    51,    51,
      51,    51,    52,    53,    54,    55,    55,    56,    56,    57,
      58,    59,    59,    60,    61,    61,    62,    62,    62,    62,
      62,    63,    63,    63,    64,    64,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    66,    66
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     6,     4,     3,     1,     2,     2,
       1,     1,     1,     2,     1,     1,     1,     1,     2,     1,
       2,     1,     4,     4,     4,     8,    10,     3,     5,     3,
       2,     5,     5,     4,     1,     3,     3,     3,     1,     1,
       1,     3,     3,     1,     2,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     3
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
  case 2: /* program: %empty  */
#line 96 "parser.y"
            {}
#line 1251 "parser.tab.c"
    break;

  case 3: /* program: stmt_list  */
#line 97 "parser.y"
                            { (yyvsp[0].sl)->execute();}
#line 1257 "parser.tab.c"
    break;

  case 4: /* function_declaration: FUNCTION IDENTIFIER LPARAN arg_list RPARAN block  */
#line 100 "parser.y"
                                                                             {(yyval.fd) = new FunctionDefinitionNode((yyvsp[-2].argl), (yyvsp[-4].str), (yyvsp[0].bn));}
#line 1263 "parser.tab.c"
    break;

  case 5: /* function_call: IDENTIFIER LPARAN arg_list RPARAN  */
#line 103 "parser.y"
                                                           {(yyval.fc) = new FunctionCallNode((yyvsp[-1].argl), (yyvsp[-3].str));}
#line 1269 "parser.tab.c"
    break;

  case 6: /* block: LPARAN_C stmt_list RPARAN_C  */
#line 106 "parser.y"
                                                            {(yyval.bn) = new BlockNode((yyvsp[-1].sl));}
#line 1275 "parser.tab.c"
    break;

  case 7: /* stmt_list: stmt  */
#line 109 "parser.y"
                                                            {(yyval.sl) = new StatementList(nullptr, (yyvsp[0].sn));}
#line 1281 "parser.tab.c"
    break;

  case 8: /* stmt_list: stmt_list stmt  */
#line 110 "parser.y"
                                                            {(yyval.sl) = new StatementList((yyvsp[-1].sl),(yyvsp[0].sn));}
#line 1287 "parser.tab.c"
    break;

  case 9: /* stmt: arg_list SEMICOLON  */
#line 113 "parser.y"
                                                            {(yyval.sn) = new ExpWrapper((yyvsp[-1].argl));}
#line 1293 "parser.tab.c"
    break;

  case 10: /* stmt: block  */
#line 114 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].bn);}
#line 1299 "parser.tab.c"
    break;

  case 11: /* stmt: declaration_stmt  */
#line 115 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].dn);}
#line 1305 "parser.tab.c"
    break;

  case 12: /* stmt: assignment_stmt  */
#line 116 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].an);}
#line 1311 "parser.tab.c"
    break;

  case 13: /* stmt: print_stmt SEMICOLON  */
#line 117 "parser.y"
                                                            {(yyval.sn)=(yyvsp[-1].pn);}
#line 1317 "parser.tab.c"
    break;

  case 14: /* stmt: for_stmt  */
#line 118 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].fn);}
#line 1323 "parser.tab.c"
    break;

  case 15: /* stmt: while_stmt  */
#line 119 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].wn);}
#line 1329 "parser.tab.c"
    break;

  case 16: /* stmt: loop_stmt  */
#line 120 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].ln);}
#line 1335 "parser.tab.c"
    break;

  case 17: /* stmt: if_stmt  */
#line 121 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].ifn);}
#line 1341 "parser.tab.c"
    break;

  case 18: /* stmt: array_declaration SEMICOLON  */
#line 122 "parser.y"
                                                            {}
#line 1347 "parser.tab.c"
    break;

  case 19: /* stmt: function_declaration  */
#line 123 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].fd);}
#line 1353 "parser.tab.c"
    break;

  case 20: /* stmt: BREAK SEMICOLON  */
#line 124 "parser.y"
                                                            {(yyval.sn) = new BreakNode();}
#line 1359 "parser.tab.c"
    break;

  case 21: /* stmt: return_statement  */
#line 125 "parser.y"
                                                            {(yyval.sn)=(yyvsp[0].ret);}
#line 1365 "parser.tab.c"
    break;

  case 22: /* print_stmt: PRINT LPARAN arg_list RPARAN  */
#line 128 "parser.y"
                                                                 {(yyval.pn) = new PrintNode((yyvsp[-1].argl));}
#line 1371 "parser.tab.c"
    break;

  case 23: /* declaration_stmt: IDENTIFIER DECLARE expr SEMICOLON  */
#line 131 "parser.y"
                                                             {(yyval.dn) = new DeclarationNode((yyvsp[-3].str), (yyvsp[-1].exp));}
#line 1377 "parser.tab.c"
    break;

  case 24: /* assignment_stmt: IDENTIFIER ASSIGN expr SEMICOLON  */
#line 134 "parser.y"
                                                             {(yyval.an) = new AssignmentNode((yyvsp[-3].str), (yyvsp[-1].exp));}
#line 1383 "parser.tab.c"
    break;

  case 25: /* for_stmt: FOR IDENTIFIER IN factor DOT DOT factor block  */
#line 137 "parser.y"
                                                                               { (yyval.fn) = new ForNode((yyvsp[-6].str), (yyvsp[-4].exp), (yyvsp[-1].exp), nullptr, (yyvsp[0].bn));}
#line 1389 "parser.tab.c"
    break;

  case 26: /* for_stmt: FOR IDENTIFIER IN factor DOT DOT factor COMMA factor block  */
#line 138 "parser.y"
                                                                               {(yyval.fn) = new ForNode((yyvsp[-8].str), (yyvsp[-6].exp), (yyvsp[-3].exp), (yyvsp[-1].exp), (yyvsp[0].bn));}
#line 1395 "parser.tab.c"
    break;

  case 27: /* if_stmt: IF expr block  */
#line 141 "parser.y"
                                                           {(yyval.ifn) = new IfElseNode((yyvsp[-1].exp), (yyvsp[0].bn), nullptr);}
#line 1401 "parser.tab.c"
    break;

  case 28: /* if_stmt: IF expr block ELSE block  */
#line 142 "parser.y"
                                                            { (yyval.ifn) = new IfElseNode((yyvsp[-3].exp), (yyvsp[-2].bn), (yyvsp[0].bn));}
#line 1407 "parser.tab.c"
    break;

  case 29: /* while_stmt: WHILE expr block  */
#line 145 "parser.y"
                                                            {(yyval.wn) = new WhileNode((yyvsp[-1].exp), (yyvsp[0].bn));}
#line 1413 "parser.tab.c"
    break;

  case 30: /* loop_stmt: LOOP block  */
#line 148 "parser.y"
                                                            {(yyval.ln) = new LoopNode((yyvsp[0].bn));}
#line 1419 "parser.tab.c"
    break;

  case 31: /* array_declaration: IDENTIFIER DECLARE LPARAN_S expr RPARAN_S  */
#line 151 "parser.y"
                                                                    {}
#line 1425 "parser.tab.c"
    break;

  case 32: /* array_declaration: IDENTIFIER DECLARE LPARAN_C arg_list RPARAN_C  */
#line 152 "parser.y"
                                                                   {}
#line 1431 "parser.tab.c"
    break;

  case 33: /* array_access: IDENTIFIER LPARAN_S expr RPARAN_S  */
#line 155 "parser.y"
                                                             {}
#line 1437 "parser.tab.c"
    break;

  case 34: /* arg_list: expr  */
#line 158 "parser.y"
                                                           {(yyval.argl) = new ArgList(nullptr, (yyvsp[0].exp));}
#line 1443 "parser.tab.c"
    break;

  case 35: /* arg_list: arg_list COMMA expr  */
#line 159 "parser.y"
                                                           {(yyval.argl) = new ArgList((yyvsp[-2].argl), (yyvsp[0].exp));}
#line 1449 "parser.tab.c"
    break;

  case 36: /* expr: expr ADD term  */
#line 162 "parser.y"
                                                            { (yyval.exp) = new AdditionNode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1455 "parser.tab.c"
    break;

  case 37: /* expr: expr SUBTRACT term  */
#line 163 "parser.y"
                                                            { (yyval.exp) = new SubtractionNode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1461 "parser.tab.c"
    break;

  case 38: /* expr: term  */
#line 164 "parser.y"
                                                            { (yyval.exp) = (yyvsp[0].exp);}
#line 1467 "parser.tab.c"
    break;

  case 39: /* expr: relational  */
#line 165 "parser.y"
                                                            {(yyval.exp)=(yyvsp[0].exp);}
#line 1473 "parser.tab.c"
    break;

  case 40: /* expr: function_call  */
#line 166 "parser.y"
                                                            {(yyval.exp)=(yyvsp[0].fc);}
#line 1479 "parser.tab.c"
    break;

  case 41: /* term: term MULTIPLY factor  */
#line 169 "parser.y"
                                                            {(yyval.exp) = new MultiplicationNode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1485 "parser.tab.c"
    break;

  case 42: /* term: term DIVIDE factor  */
#line 170 "parser.y"
                                                            { (yyval.exp) = new DivisionNode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1491 "parser.tab.c"
    break;

  case 43: /* term: factor  */
#line 171 "parser.y"
                                                            { (yyval.exp) = (yyvsp[0].exp);}
#line 1497 "parser.tab.c"
    break;

  case 44: /* return_statement: RETURN SEMICOLON  */
#line 174 "parser.y"
                                                            {(yyval.ret) = new ReturnNode(nullptr);}
#line 1503 "parser.tab.c"
    break;

  case 45: /* return_statement: RETURN expr SEMICOLON  */
#line 175 "parser.y"
                                                            {(yyval.ret) = new ReturnNode((yyvsp[-1].exp));}
#line 1509 "parser.tab.c"
    break;

  case 46: /* relational: expr GT expr  */
#line 177 "parser.y"
                                                                      {(yyval.exp) = new GTNode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1515 "parser.tab.c"
    break;

  case 47: /* relational: expr LT expr  */
#line 178 "parser.y"
                                                                      {(yyval.exp) = new LTNode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1521 "parser.tab.c"
    break;

  case 48: /* relational: expr GE expr  */
#line 179 "parser.y"
                                                                      {(yyval.exp) = new GENode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1527 "parser.tab.c"
    break;

  case 49: /* relational: expr LE expr  */
#line 180 "parser.y"
                                                                      {(yyval.exp) = new LENode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1533 "parser.tab.c"
    break;

  case 50: /* relational: expr NE expr  */
#line 181 "parser.y"
                                                                      {(yyval.exp) = new NEQNode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1539 "parser.tab.c"
    break;

  case 51: /* relational: expr EQ expr  */
#line 182 "parser.y"
                                                                      {(yyval.exp) = new EQNode((yyvsp[-2].exp), (yyvsp[0].exp));}
#line 1545 "parser.tab.c"
    break;

  case 52: /* factor: IDENTIFIER  */
#line 185 "parser.y"
                                                            {(yyval.exp) = new VariableNode((yyvsp[0].str));}
#line 1551 "parser.tab.c"
    break;

  case 53: /* factor: INTVAL  */
#line 186 "parser.y"
                                                            {(yyval.exp) = new IntegerLiteral((yyvsp[0].int_val));}
#line 1557 "parser.tab.c"
    break;

  case 54: /* factor: REALVAL  */
#line 187 "parser.y"
                                                           {(yyval.exp) = new FloatLiteral((yyvsp[0].float_val));}
#line 1563 "parser.tab.c"
    break;

  case 55: /* factor: BOOLVAL  */
#line 188 "parser.y"
                                                            { (yyval.exp) = new BoolLiteral((yyvsp[0].bool_val));}
#line 1569 "parser.tab.c"
    break;

  case 56: /* factor: array_access  */
#line 189 "parser.y"
                                                            {}
#line 1575 "parser.tab.c"
    break;

  case 57: /* factor: LPARAN expr RPARAN  */
#line 190 "parser.y"
                                                            {(yyval.exp) = (yyvsp[-1].exp);}
#line 1581 "parser.tab.c"
    break;


#line 1585 "parser.tab.c"

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

#line 193 "parser.y"


void yyerror(char *s) { 
    fprintf(stdout, "%s\n", s); 
} 

int main(void) { 
    extern FILE* yyin;
    FILE* f = fopen("input.fi","r");
    yyin = f;
    yyparse(); 
    return 0; 
} 
