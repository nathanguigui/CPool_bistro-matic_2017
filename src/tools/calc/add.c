/*
** EPITECH PROJECT, 2017
** add
** File description:
** add two chars
*/

#include "bistro-matic.h"

int add(char nb, char nb2, int det)
{
	int s;

	s = (nb - '0') + (nb2 - '0') + det;
	return (s > 9? s % 10: s);
}
