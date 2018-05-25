/*
** EPITECH PROJECT, 2017
** atoi
** File description:
** ascii to integer
*/

#include "bistro-matic.h"

int my_atoi(char *str)
{
	int i = 0;
	int sign = 1;
	int nb = 0;

	while (str[i] && (str[i] == '-' || str[i] == '+')) {
		if (str[i] == '-')
			sign = -sign;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9')) {
		nb = nb * 10 + str[i] - '0';
		i++;
	}
	return (nb);
}
