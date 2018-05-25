/*
** EPITECH PROJECT, 2017
** my_getnbr_base
** File description:
** get base to decimal
*/

#include "bistro-matic.h"

int	check_sign(char *nb)
{
	int	i;
	int	s;

	s = 1;
	i = 0;
	while (nb[i]) {
		while (nb[i] == '-' || nb[i] == '+') {
			if (nb[i] == '-')
				s = -s;
			i++;
		}
		return (s);
	}
	return (s);
}

char *int_to_ascii(int nb)
{
	int i = 0;
	int d = 1;
	int nb_save = nb;
	char *temp;

	while (nb_save > 0) {
		d++;
		nb_save = nb_save / 10;
	}
	temp = malloc(sizeof(char) * d + 2);
	if (temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	if (nb == 0) {
		temp[i] = '0';
		i = i + 1;
	}
	while (nb > 0) {
		temp[i] = nb % 10 + '0';
		nb = nb / 10;
		i = i + 1;
	}
	temp[i] = '\0';
	return (my_revstr(temp));
}

char *my_getnbr_base(char *str, char *base)
{
	int i = 0;
	int c;
	char *temp;
	char *nb = malloc(sizeof(char) * (my_strlen(str) + my_strlen(base)) + 2);
	char *len;

	if (nb == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	len = int_to_ascii(my_strlen(base));
	nb[0] = '0';
	nb[1] = '\0';
	while (str[i])
	{
		c = get_pos(str[i], base);
		temp = int_to_ascii(c);
		nb = infin_operations(nb, len, 2);
		nb = infin_operations(epur_zero(nb), temp, 0);
		i++;
	}
	return (epur_zero(nb));
}

char *base_to_decimal(char *str, char *base)
{
	int i = 0;
	char *nb;
	char *temp = malloc(sizeof(char) * my_strlen(str) + my_strlen(base));

	if (temp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	while (*str) {
		if (get_pos(*str, base) == -1) {
			temp[i] = *str;
			i++;
			str++;
		} else {
			nb = my_strtol_base(str, &str, base);
			nb = my_getnbr_base(nb, base);
			temp[i] = '\0';
			temp = my_strcat(temp, nb);
			i = i + my_strlen(nb);
		}
	}
	temp[i] = '\0';
	return (temp);
}
