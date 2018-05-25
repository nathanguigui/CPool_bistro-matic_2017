/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** add unlimited nbs
*/

#include "bistro-matic.h"

char *infin_mult(char *nb, char *nb2, char *tmp, int det)
{
	int l = 0;
	int det2 = 0;
	int calc = 0;
	int temp;

	for (int j = 0; nb2[j]; j = j + 1) {
		l = j;
		det = 0;
		for (int i = 0; nb[i]; i++) {
			temp = mult(nb2[j], nb[i], det);
			det = temp > 9? temp / 10 : 0;
			temp = temp > 9? temp % 10 : temp;
			if (my_strlen(nb) > 1 && my_strlen(nb2) > 1) {
				if (l > 0 && j > 0) {
					if (tmp[l])
						calc = temp + (tmp[l] - '0') + det2;
					else
						calc = temp + det2;
					det2 = calc > 9 ? 1 : 0;
					tmp[l] = calc > 9 ? (calc % 10) + '0': calc + '0';
				} else
					tmp[l] = temp + '0';
			} else
				tmp[l] = temp + '0';
			l = l + 1;
			if (nb[i + 1] == '\0' && det != 0) {
				tmp[l] = det + '0';
			}
		}
	}
	tmp = add_det(tmp, det2, det, l);
	return (epur_zero(my_revstr(tmp)));
}

char *infin_div(char *nb, char *nb2, char *tmp, int det)
{
	int j = 0;
	int f;
	int l = 0;
	int len = my_strlen(nb);
	int len2 = my_strlen(nb2);
	char *mult = malloc(sizeof(char) * len + 200);
	char *temp = malloc(sizeof(char) * len + 100);

	if (len >= len2)
		for (j = 0; j < len2; j++)
			temp[j] = nb[j];
	else
		for (j = 0; nb[j]; j++)
			temp[j] = nb[j];
	for (int i = j - 1 ; nb[i]; i++) {
		f = 0 + '0';
		mult = infin_operations(nb2, (char *)&f, 2);
		if (my_strlen(epur_zero(temp)) > 1)
			while (my_strlen(mult) < 2) {
				f++;
				mult = infin_operations(nb2, (char *)&f, 2);
			}
		while (my_max(epur_zero(mult), epur_zero(temp)) < 0 && f <= '9') {
			f++;
			mult = infin_operations(nb2, (char *)&f, 2);
		}
		f = (my_max(mult, epur_zero(temp)) > 0)? f - 1: f;
		tmp[l] = f;
		mult = infin_operations(nb2, (char *)&f, 2);
		temp = infin_operations(temp, mult, 1);
		j = my_strlen(temp);
		temp[j] = nb[i + 1];
		l++;
	}
	tmp[l] = '\0';
	return (epur_zero(tmp));
}

char	*infin_mod(char *nb, char *nb2, char *tmp, int det)
{
	int j = 0;
	int f;
	int l = 0;
	int len = my_strlen(nb);
	int len2 = my_strlen(nb2);
	char *mult = malloc(sizeof(char) * len + 20);
	char *temp = malloc(sizeof(char) * len + 10);

	if (len >= len2)
		for (j = 0; j < len2; j++)
			temp[j] = nb[j];
	else
		for (j = 0; nb[j]; j++)
			temp[j] = nb[j];
	for (int i = j - 1 ; nb[i]; i++) {
		f = 0 + '0';
		mult = infin_mult(my_revstr(nb2), (char *)&f, mult, 0);
		if (my_strlen(epur_zero(temp)) > 1)
			while (my_strlen(mult) < 2) {
				f++;
				mult = infin_mult(my_revstr(nb2), (char *)&f, mult, 0);
			}
		while (my_max(epur_zero(mult), epur_zero(temp)) < 0 && f <= '9') {
			f++;
			mult = infin_mult(my_revstr(nb2), (char *)&f, mult, 0);
		}
		f = (my_max(epur_zero(mult), epur_zero(temp)) > 0)? f - 1: f;
		tmp[l] = f;
		mult = infin_mult(my_revstr(nb2), (char *)&f, mult, 0);
		temp = infin_sub(my_revstr(temp), my_revstr(mult), temp, 0);
		j = my_strlen(temp);
		temp[j] = nb[i + 1];
		l++;
	}
	temp[j] = '\0';
	return (epur_zero(temp));
}
