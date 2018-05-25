/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** create mem to store a string
*/

#include "bistro-matic.h"

char *my_strdup(char *str)
{
char *temp = malloc(sizeof(char) * my_strlen(str) + 1);

if (temp == NULL)
	my_puterror(ERROR_MSG, EXIT_MALLOC);
temp = my_strcpy(temp, str);
return (temp);
}
