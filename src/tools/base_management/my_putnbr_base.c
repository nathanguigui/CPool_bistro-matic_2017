/*
** EPITECH PROJECT, 2017
** my_putnbr_base
** File description:
** decimal to original base
*/

#include "bistro-matic.h"

char *my_putnbr_base(char *nb, char *base)
{
	char *modulo;
	int i = 0;
	char *op;
	char *pow;
	char *temp = malloc(sizeof(char) * my_strlen(nb) * 2 + 1);

	if (temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	if (*nb == '-') {
		temp[i++] = '-';
		nb++;
	}
	pow = strdup("1");
	modulo = int_to_ascii(my_strlen(base));
	while (my_max(infin_operations(pow, modulo, 2), nb) <= 0)
		pow = infin_operations(pow, modulo, 2);
	while (my_max(nb, "0") > -1 && my_max(pow, "0") > 0) {
		op = infin_operations(nb, pow, 3);
		temp[i++] = base[my_getnbr(op)];
		op = infin_operations(op, pow, 2);
		nb = infin_operations(nb, op, 1);
		pow = infin_operations(pow, modulo, 3);
	}
	temp[i++] = '\0';
	return (temp);
}
