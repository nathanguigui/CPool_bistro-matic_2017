/*
** EPITECH PROJECT, 2017
** epur_zero
** File description:
** epur_zero
*/

#include "bistro-matic.h"

char	*epur_zero(char *str)
{
	if (my_strlen(str) == 1)
		return (str);
	while (str[0] == '0' && str[0] && str[1] != '\0')
			str++;
	return (str);
}
