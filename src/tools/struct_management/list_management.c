/*
** EPITECH PROJECT, 2017
** list_management
** File description:
** basis list functions
*/

#include "bistro-matic.h"

void push_list(t_stack **p, char *nb)
{
	t_stack *pile = malloc(sizeof(t_stack));

	if (pile == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	pile->value = nb;
	pile->next = *p;
	*p = pile; 
}

char *pop_element(t_stack **pile)
{
	char *value;
	t_stack *temp;

	if (*pile) {
		temp = (*pile)->next;
		value = (*pile)->value;
		free (*pile);
		*pile = temp;
		return (value);
	}
	my_puterror(SYNTAX_ERROR_MSG, 84);
}
