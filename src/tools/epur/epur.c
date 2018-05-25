/*
** EPITECH PROJECT, 2017
** epur
** File description:
** delete sign 
*/

#include "bistro-matic.h"

char *epur(char *str)
{
	int i = 0;
	int j = 0;
	char *temp = malloc(sizeof(char) * my_strlen(str) + 1);

	while (str[i] == '-' && str[i])
		i = i + 1;
	for (i = i; str[i]; i++) {
		temp[j] = str[i];
		j++;
	}
	temp[j] = '\0';
	return (temp);
}
