/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** add unlimited nbs
*/

#include "bistro-matic.h"

int checknb(char *nb)
{
	int sign = 1;

	for (int i = 0; nb[i]; i++)
		if (nb[i] == '-')
			sign = -sign;
	return (sign);
}
