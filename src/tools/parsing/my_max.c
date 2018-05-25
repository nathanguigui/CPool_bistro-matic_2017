/*
** EPITECH PROJECT, 2017
** my_max
** File description:
** checks if nb is superior or equal to nb2
*/

#include "bistro-matic.h"

int my_max(char *nb, char *nb2)
{
	if (checknb(nb) == 1 && checknb(nb2) == -1)
		return (1);
	if (checknb(nb) == -1 && checknb(nb2) == 1)
		return (-1);
	if (my_strlen(nb) > my_strlen(nb2))
		return (1);
	if (my_strlen(nb) == my_strlen(nb2)) {
		if (my_strcmp(nb, nb2) > 0)
			return (1);
		if (my_strcmp(nb, nb2) == 0)
			return (0);
	}
	return (-1);
}
