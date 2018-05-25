/*
** EPITECH PROJECT, 2017
** convert to infix
** File description:
** infnx
*/

#include "bistro-matic.h"

void add_lastop(t_pile *pile)
{
	while (pile->pos > -1) {
		pile->temp[pile->i++] = pile->stack[pile->pos];
		pile->temp[pile->i++] = ' ';
		pile->pos--;
	}
	pile->temp[pile->i] = '\0';
}

void add_char(t_pile *pile)
{
	pile->temp[pile->i++] = pop(pile);
	pile->temp[pile->i++] = ' ';
}

int parenthese(t_pile *pile, char *op)
{
	while (pile->pos > -1 && pile->stack[pile->pos] != op[0])
		add_char(pile);
	if (pile->pos > -1 && pile->stack[pile->pos] != op[0])
	        my_puterror(SYNTAX_ERROR_MSG, 84);
	else
		add_char(pile);
	return (0);
}

char *convert(char *str, char *op)
{
	t_pile *pile = init_struct(str);

	for (int j = 0; str[j]; j++) {
		if (my_char_isnum(str[j])) {
			pile->temp[pile->i++] = str[j];
			if ((str[j + 1] && !my_char_isnum(str[j + 1]))
			    || j + 1 == my_strlen(str))
				pile->temp[pile->i++] = ' ';
		}
		else if (str[j] == op[0])
			push(pile, str[j]);
		else if (str[j] == op[1])
			parenthese(pile, op);
		else {
			while (pile->pos > -1 && priority(pile, str[j]))
				add_char(pile);
			push(pile, str[j]);
		}
	}
	add_lastop(pile);
	return (epur_parenthese(pile->temp, op));
}
