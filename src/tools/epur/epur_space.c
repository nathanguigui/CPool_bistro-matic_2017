/*
** EPITECH PROJECT, 2017
** epur_space
** File description:
** delete spaces at the end of an expression
*/

#include "bistro-matic.h"

char *epur_space(char *str)
{
	int i = 0;
	char *tmp;

	tmp = my_revstr(str);
	while (tmp[i] == ' ')
		i++;
	return (my_revstr(&tmp[i]));
}
