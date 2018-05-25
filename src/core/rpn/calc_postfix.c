/*
** EPITECH PROJECT, 2017
** main
** File description:
** process
*/

#include "bistro-matic.h"

int get_op(char c, char *op)
{
	for (int i = 0; op[i]; i++)
		if (c == op[i] && i > 1)
			return (1);
	return (0);
}

char *pop_last_elements(t_stack **pile)
{
	if ((*pile)->next == NULL)
		return (pop_element(pile));
	else
		my_puterror(SYNTAX_ERROR_MSG, 84);
}

char *process(char *str, char *nb, char *nb2, t_params *param)
{
	char *res;
	t_stack *pile = NULL;
	char *temp = my_strtol(str, &str, ' ');

	while (temp) {
		if (my_strisnum(temp))
			push_list(&pile, temp);
		else
			if (get_op(*temp, param->op)) {
				nb2 = pop_element(&pile);
				nb = pop_element(&pile);
				res = infin_operations(nb, nb2, get_pos(*temp, param->op) - 2);
				push_list(&pile, res);
			}
		temp = my_strtol(str, &str, ' ');
	}
	return (pop_last_elements(&pile));
}

char *eval_expr(char *base, char *ops, char *expr, unsigned int size)
{
	char *temp;
	t_params *param = init_params(base, ops);

	temp = add_zero_to_expression(expr, base, ops);
	temp = base_to_decimal(temp, base);
	temp = convert(temp, ops);
	temp = epur_space(temp);
	temp = process(temp, "0", "0", param);
	temp = my_putnbr_base(temp, base);
	return (epur_base(temp, base));
}
