/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** concatenate two strings
*/

#include "bistro-matic.h"

char	*my_strcat(char *dest, char *src)
{
	char *temp = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src)) + 1);
	int len;
	int i = 0;
	int j = 0;

		while (dest[i]) {
		temp[i] = dest[i];
		i = i + 1;
	}
	while (src[j]) {
		temp[i] = src[j];
		j = j + 1;
		i = i + 1;
	}
	temp[i] = '\0';
	return (temp);
}
