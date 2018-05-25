/*
** EPITECH PROJECT, 2017
** get_pos
** File description:
** get pos of a char in a base
*/

#include "bistro-matic.h"

int get_pos(char c, char *str)
{
	for (int i = 0; str[i]; i++)
		if (c == str[i])
			return (i);
	return (-1);
}
