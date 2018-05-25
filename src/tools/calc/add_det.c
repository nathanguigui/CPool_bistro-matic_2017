/*
** EPITECH PROJECT, 2017
** add_det
** File description:
** add remaining detentions at the end of an operation
*/

#include "bistro-matic.h"

char *add_det(char *temp, int det, int det2, int i)
{
	if (det2 > 0) {
		temp[i] = det2 + '0';
		i++;
	}
	if (det > 0) {
		temp[i] = det + '0';
		i++;
	}
	temp[i] = '\0';
	return (temp);
}
