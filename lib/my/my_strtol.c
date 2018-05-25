/*
** EPITECH PROJECT, 2017
** my_strtol
** File description:
** a custom strtol function
*/

#include "bistro-matic.h"

char *my_strtol(char *str, char **endptr, char c)
{
	int i = 0;
	char *temp = malloc(sizeof(char) * my_strlen(str) + 1);

	if (temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	if (!*str)
		return (NULL);
	while (*str && *str != c) {
		temp[i] = *str;
		i++;
		str = str + 1;
	}
	temp[i] = '\0';
	if (*str == c)
		str++;
	*endptr = str;
	return (temp);
}

char *my_strtol_base(char *str, char **endptr, char *base)
{
	int i = 0;
	char *temp = malloc(sizeof(char) * my_strlen(str) + 1);

	if (temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	if (!*str)
		return (NULL);
	while (*str && get_pos(*str, base) != -1) {
		temp[i] = *str;
		i++;
		str = str + 1;
	}
	temp[i] = '\0';
	*endptr = str;
	return (temp);
}
