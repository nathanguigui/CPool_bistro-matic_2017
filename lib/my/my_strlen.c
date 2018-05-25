#include "bistro-matic.h"

int my_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}