/*
** EPITECH PROJECT, 2017
** epur_parenthese
** File description:
** delete open parenthses from the postfix notation
*/

#include "bistro-matic.h"

char *epur_parenthese(char *str, char *ops)
{
	int j = 0;
	char *temp = malloc(sizeof(char) * my_strlen(str) + 1);

	if (temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	for (int i = 0; str[i]; i++) {
		if (str[i] != ops[0]) {
			temp[j] = str[i];
			j++;
		} else
			i++;
	}
	temp[j] = '\0';
	return (temp);
}
