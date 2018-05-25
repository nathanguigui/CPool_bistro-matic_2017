#include "bistro-matic.h"

char	*my_revstr(char *str)
{
	int i = 0;
	int len;
	int l;
	char *temp;

	if (!str)
		my_puterror(ERROR_MSG, 84);
	len = my_strlen(str);
	l = len - 1;
	temp = (char *)malloc(sizeof(char) * len + 2);
	if (temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	while (l >= 0) {
		temp[i] = str[l];
		i = i + 1;
		l = l - 1;
	}
	temp[i] = '\0';
	return (temp);
}