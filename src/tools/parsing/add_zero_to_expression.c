/*
** EPITECH PROJECT, 2017
** add_zero_to_expression
** File description:
** turns (-x) || -x into (0-x) to handle negative number
*/

#include "bistro-matic.h"

char *add_zero_to_expression(char *str, char *base, char *op)
{
	int i = 0;
	int p = 0;
	int d = 0;
	int sign;
	char *temp = malloc(sizeof(char) * strlen(str) + my_strlen(str) / 2);

	if (temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	for (int j = 0; str[j]; j++) {
		sign = 1;
		d = 0;
		p = 0;
		if ((j == 0 || str[j - 1] == op[0]) && (str[j] == op[2] || str[j] == op[3])) {
			while ((str[j] == op[2] || str[j] == op[3]) && str[j]) {
				if (str[j] == op[3])
					sign = -sign;
				j++;
			}
			d = 1;
		}
		if (d == 1) {
			if (str[j] && (str[j] != op[0])) {
				my_putchar(str[j + 1]);
			temp[i++] = op[0];
			p = 1;
		}
			temp[i++] = base[0];
			temp[i++] = sign < 0 ? op[3] : op[2];
			while(get_pos(str[j], base) != -1 && str[j])
				temp[i++] = str[j++];
			if (p == 1)
			temp[i++] = op[1];
		}
		temp[i++] = str[j];
	}
	temp[i] = '\0';
	return (temp);
}
