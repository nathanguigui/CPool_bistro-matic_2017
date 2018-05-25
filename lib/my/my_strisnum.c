#include "bistro-matic.h"

int my_strisnum(char *str)
{
	for (int i = 0; str[i]; i++)
		if (!my_char_isnum(str[i]))
			return (0);
	return (1);
}