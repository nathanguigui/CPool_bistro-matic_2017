/*
** EPITECH PROJECT, 2017
** check_error
** File description:
** those functions check the syntax
*/

#include "bistro-matic.h"

int check_parenthese(char *str, char *ops)
{
	int parenthese = 0;

	for (int i = 0; str[i]; i++) {
		if (str[i] == ops[0])
			parenthese++;
		if (str[i] == ops[1])
			parenthese--;
		if (parenthese < 0)
			return (-1);
	}
	return ((parenthese == 0)? 1 : 0);
}

int check_operators(char *str, char *ops)
{
	for (int i = 0; str[i]; i++) {
		if (i == 0 && str[i] != ops[0] && str[i] != ops[1] && get_op(str[i], ops) != -1)
			return (0);
		if (i == my_strlen(str) - 1 && get_op(str[i], ops) != -1)
			return (0);
		if (get_op(str[i], ops) != -1 && get_op(str[i + 1], ops) != -1 && str[i + 1])
			return (0);
	}
	return (1);
}

void my_puterror(char *message, int errno)
{
	my_putstr(message);
	exit(errno);
}

int syntax_expr(char *expr)
{
	for (int i = 0; expr[i]; i++)
		for (int j = i + 1; expr[j]; j++)
			if (expr[i] == expr[j])
				return (0);
	return (1);
}

void syntax(char *str, char *base, char *ops)
{
	if (check_parenthese(str, ops) != 1)
		my_puterror(SYNTAX_ERROR_MSG, EXIT_OPS);
	if (!valid_char(str, base, ops))
		my_puterror(SYNTAX_ERROR_MSG, EXIT_OPS);
	if (syntax_expr(ops) != 1)
		my_puterror(SYNTAX_ERROR_MSG, EXIT_OPS);
	if (syntax_expr(base) != 1)
		my_puterror(SYNTAX_ERROR_MSG, EXIT_OPS);
}
