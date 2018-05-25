/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** substract 2 chars
*/

#include "bistro-matic.h"

int sub(char nb, char nb2, int det)
{
	int s;

	s = (nb - '0') - (nb2 - '0' + det);
	if (s < 0)
	    return ((nb - '0' + 10) - (nb2 - '0' + det));
	return (s);
}
