/*
** EPITECH PROJECT, 2017
** valid_char
** File description:
** check if char is in base
*/

#include "bistro-matic.h"

int check_duplicates(char *base, char *ops)
{
	for (int i = 0; base[i]; i = i +1)
		for (int j = 0; ops[j]; j = j + 1)
			if (base[i] == ops[j])
				return (0);
	return (1);
}

int valid_char(char *str, char *base, char *ops)
{
	for (int i = 0; str[i]; i++)
		if (get_pos(str[i], base) == -1 && get_pos(str[i], ops) == -1)
			return (0);
	return (1);
}
