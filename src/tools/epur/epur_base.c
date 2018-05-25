/*
** EPITECH PROJECT, 2017
** epur_base
** File description:
** Delete useless zeros 
*/

#include "bistro-matic.h"

char	*epur_base(char *str, char *base)
{
	if (my_strlen(str) == 1)
		return (str);
	if (my_strlen(epur(str)) == 1)
		if (str[1] == base[0])
			return (epur(str));
	while (str[0] == base[0] && str[0] && str[1] != '\0')
		str++;
	return (str);
}
