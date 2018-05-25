/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** add unlimited nbs
*/

#include "bistro-matic.h"

char	*infin_operations(char *nb, char *nb2, int op)
{
	char *tmp;

 	tmp = (char *)malloc(sizeof(char) * (my_strlen(nb) + my_strlen(nb2)) + 1);
	if (tmp == NULL)
		my_puterror(ERROR_MSG, EXIT_MALLOC);
	switch (op) {
	case (0):
		if (checknb(nb) == checknb(nb2))
			tmp = infin_add(my_revstr(epur(nb)), my_revstr(epur(nb2)), tmp, 0);
		else {
			if (my_max(epur(nb), epur(nb2)) == 1)
				tmp = infin_sub(my_revstr(epur(nb)), my_revstr(epur(nb2)), tmp, 0);
			else
				tmp = infin_sub(my_revstr(epur(nb2)), my_revstr(epur(nb)), tmp, 0);
		}
	 	break;
	case (1):
		if (checknb(nb) == checknb(nb2)) {;
			if (my_max(epur(nb), epur(nb2)) == 1)
				tmp = infin_sub(my_revstr(epur(nb)), my_revstr(epur(nb2)), tmp, 0);
			else
				tmp = infin_sub(my_revstr(epur(nb2)), my_revstr(epur(nb)), tmp, 0);
		} else {
			tmp = infin_add(my_revstr(epur(nb)), my_revstr(epur(nb2)), tmp, 0);
		}
		break;
	case (2):
		if (my_strlen(epur(nb2)) > my_strlen(epur(nb)))
			tmp = infin_mult(my_revstr(epur(nb2)), my_revstr(epur(nb)), tmp, 0);
		else
			tmp = infin_mult(my_revstr(epur(nb)), my_revstr(epur(nb2)), tmp, 0);
		break;
	case (3):
		tmp = infin_div(epur(nb), epur(nb2), tmp, 0);
		break;
	case (4):
		tmp = infin_mod(epur(nb), epur(nb2), tmp, 0);
		break;
	}

	if (op == 1 && checknb(nb) == 1 && checknb(nb2) == 1
	    && my_max(epur(nb), epur(nb2)) < 0)
	if (op == 1 && checknb(nb) == 1 && checknb(nb2) == -1)
		tmp = epur(tmp);
	if (op == 1 && checknb(nb) == -1 && checknb(nb2) == 1)
		tmp = my_strcat(my_strdup("-"), epur(tmp));
	if (op == 1 && checknb(nb) == -1 && checknb(nb2) == -1)
		tmp = my_strcat(my_strdup("-"), epur(tmp));
	if (op < 2 && (checknb(nb) == -1 && my_max(epur(nb), epur(nb2)) > 0
		       || checknb(nb2) == -1 && my_max(epur(nb), epur(nb2)) < 0)) {
		tmp = my_strcat(my_strdup("-"), epur(tmp));
	}
	if (checknb(nb) != checknb(nb2) && op > 1)
		tmp = my_strcat(my_strdup("-"), epur(tmp));
	if (checknb(nb) == checknb(nb2) && op > 1)
		tmp = epur(tmp);
	return (tmp);
}
