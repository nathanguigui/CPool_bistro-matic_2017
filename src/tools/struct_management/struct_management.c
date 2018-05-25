/*
** EPITECH PROJECT, 2017
** struct_management
** File description:
** basic functions to init and use structs
*/

#include "bistro-matic.h"

t_pile *init_struct(char *str)
{
	t_pile *pile = malloc(sizeof(t_pile));

if (pile == NULL)
	my_puterror(ERROR_MSG, EXIT_MALLOC);
pile->stack = malloc(sizeof(char) * my_strlen(str) + 1);
pile->temp = malloc(sizeof(char) * my_strlen(str) * 2 + 1);
if (pile->temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
if (pile->stack == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
pile->pos = -1;
pile->i = 0;
return (pile);
}

t_params *init_params(char *base, char *ops)
{
	t_params *param = malloc(sizeof(t_params));

	if (param == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	param->base = base;
	param->op = ops;
	return (param);
}

t_infin *init_infin(char *nb, char *nb2)
{
	t_infin *infins = malloc(sizeof(t_infin));

	if (infins == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	infins->nb = my_strdup(nb);
	infins->nb2 = my_strdup(nb2);
	infins->result = my_strdup("0");
	infins->det = 0;
	return (infins);
}

char pop(t_pile *pile)
{
	char c;

	c = pile->stack[pile->pos];
	pile->stack[pile->pos] = '\0';
	pile->pos--;
	return (c);
}

void push(t_pile *pile, char op)
{
	pile->pos++;
	pile->stack[pile->pos] = op;
}
