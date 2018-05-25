/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** ascii to integer
*/

#include "bistro-matic.h"

int my_getnbr(char *str)
{
	int nb = 0;

	if (!my_strisnum(str))
		return (0);
	for (int i = 0; str[i]; i++)
		nb = nb * 10 + str[i] - '0';
	return (nb);
}
