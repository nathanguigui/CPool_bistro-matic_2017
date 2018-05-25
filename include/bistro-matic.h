/*
** EPITECH PROJECT, 2017
** convert to infix
** File description:
** infnx
*/

#ifndef BISTRO_H_
#define BISTRO_H_

#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define OP_OPEN_PARENT_IDX	0
#define OP_CLOSE_PARENT_IDX	1
#define OP_PLUS_IDX		2
#define OP_SUB_IDX		3
#define OP_NEG_IDX		3
#define OP_MULT_IDX		4
#define OP_DIV_IDX		5
#define OP_MOD_IDX		6

#define EXIT_USAGE     	84
#define EXIT_BASE      	84
#define EXIT_SIZE_NEG  	84
#define EXIT_MALLOC    	84
#define EXIT_READ      	84
#define EXIT_OPS       	84

#define	SYNTAX_ERROR_MSG	"syntax error"
#define	ERROR_MSG		"error"


/*
** POINTER TO FUNCTIONS USED TO CALL RELEVANT INF OPERATION
*/

typedef char *(*function)(char *, char *, int);

/*
** BASIC LINKED LIST USED FOR RPN
*/

typedef struct s_stack
{
	char *value;
	struct s_stack *next;
} t_stack;

/*
** STRUCT USED TO CONVERT INFIX TO POSTFIX
*/

typedef struct s_pile
{
	char *stack;
	char *temp;
	int pos;
	int i;
} t_pile;

/*
** BASIC STRUCT THAT STORES PARAMETERS OF THE PROGRAMM
*/

typedef struct s_params
{
	char *base;
	char *op;
} t_params;

/*
** BASIC STRUCT THAT STORES INFIN'OPS VARIABLES
*/

typedef struct s_infin
{
	char *nb;
	char *nb2;
	char *result;
    int det;
} t_infin;

/*
** ./MAIN
*/

static void check_base(char *);
static void check_ops(char *);

static char *get_expr(unsigned);

/*
** ./LIB: BASIC AND USEFULL FUNCTIONS
*/

void my_putchar(char);
void my_putstr(char *);
void my_put_nbr(int);

int isop(char);
int my_atoi(char *);
int my_getnbr(char *);
int my_strlen(char *);
int my_strisnum(char *);
int my_char_isnum(char);
int my_strcmp(char *, char *);

char *my_revstr(char *);
char *my_strdup(char *);
char *my_revstr(char *);
char *my_strcpy(char *, char *);
char *my_strcat(char *, char *);
char *my_strtol(char *, char **, char);
char *my_strtol_base(char *, char **, char *);

/*
** ./CORE: CORE FUNCTIONS OF THE PROJECT
*/

int get_op(char, char *);
int get_pos(char, char *);
int priority(t_pile *, char);

char *convert(char *, char *);
char *eval_expr(char *, char *, char *, unsigned int);

/*
** ./INFIN_OPERATIONS : FUNCTIONS USED TO CALCULATE CALC "INFINITE" NUMBERS;
*/

char *infin_operations(char*, char*, int);
char *infin_add(char *, char*, char *, int);
char *infin_sub(char *, char*, char *, int);
char *infin_mult(char *, char*, char *, int);
char *infin_div(char *, char*, char *, int);
char *infin_mod(char *, char*, char *, int);

/*
** ./TOOLS : USEFULL FUNCTIONS
*/

/*
** PARSING
*/

int my_max(char *, char *);

char *int_to_ascii(int);
char *add_zero_to_expression(char *, char *, char *);

/*
** CALC
*/

int checknb(char *);
int add(char, char, int);
int mult(char, char, int);
int sub(char, char, int);

char *add_det(char *, int, int, int);

/*
** EPUR
*/

char *epur(char *);
char *my_epur(char *);
char *epur_zero(char *);
char *epur_space(char *);
char *epur_base(char *, char *);
char *epur_parenthese(char *, char *);

/*
** STRUCT MANAGEMENT
*/

char pop(t_pile *);

void push(t_pile *, char);
void push_list(t_stack **, char *);

char *pop_element(t_stack **);

t_pile *init_struct(char *);
t_params *init_params(char *, char *);

/*
** BASE MANAGEMENT
*/

char *my_getnbr_base(char *, char *);
char *my_putnbr_base(char *, char *);
char *base_to_decimal(char *, char *);

/*
** ./ERROR: FUNCTIONS USED TO CHECK ERRORS IN THE PROGRAM's PARAMETERS
*/

void my_puterror(char *, int);
void syntax(char *, char *, char *);

int parenthese(t_pile *, char *);
int check_error(char *, char *, char *);
int valid_char(char *, char *, char *);
int check_duplicates(char *base, char *ops);

/*
** HELP: SHOW USAGE
*/

void display_help();

#endif	/* BISTRO_H_ */
