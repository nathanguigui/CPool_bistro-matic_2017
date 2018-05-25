/*
** EPITECH PROJECT, 2017
** main
** File description:
** main 
*/

#include "bistro-matic.h"

int main(int ac, char **av)
{
	unsigned int size;
	char *expr;

	if (ac == 2 && my_strcmp(av[1], "-h") == 0 || ac != 4) {
		display_help();
		return (EXIT_USAGE);
	}
	check_base(av[1]);
	check_ops(av[2]);
	size = my_atoi(av[3]);
	expr = get_expr(size);
	syntax(expr, av[1], av[2]);
	my_putstr(eval_expr(av[1], av[2], expr, size));
	return (EXIT_SUCCESS);
}

void check_base(char *b)
{
	if (my_strlen(b) < 2)
		my_puterror(SYNTAX_ERROR_MSG, EXIT_BASE);
}

char *get_expr(unsigned int size)
{
	char *expr;

	if (size <= 0)
		my_puterror(SYNTAX_ERROR_MSG, EXIT_SIZE_NEG);
	expr = malloc(sizeof(char) * size + 1);
	if (expr == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	if (read(0, expr, size) != size)
		my_puterror(ERROR_MSG, EXIT_READ);
	expr[size] = '\0';
	return (expr);
}

void check_ops(char *ops)
{
	if (my_strlen(ops) != 7)
		my_puterror(SYNTAX_ERROR_MSG, EXIT_OPS);
}
