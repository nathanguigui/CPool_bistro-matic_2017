/*
** EPITECH PROJECT, 2017
** mult
** File description:
** multiplicate 2 chars
*/

#include "bistro-matic.h"

int mult(char nb, char nb2, int det)
{
	int s;

	s = (nb - '0') * (nb2 - '0') + det;
	return (s);
}
