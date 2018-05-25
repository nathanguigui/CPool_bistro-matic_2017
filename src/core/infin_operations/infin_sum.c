/*
** EPITECH PROJECT, 2017
** infin_add
** File description:
** add unlimited nbs
*/

#include "bistro-matic.h"

char	*infin_add(char *nb, char *nb2, char *tmp, int det)
{
	int i = 0;

	while (nb[i] && nb2[i]) {
		tmp[i] = add(nb[i], nb2[i], det) + '0';
		det = ((nb2[i] - '0') + (nb[i] - '0') + det > 9)? 1 : 0;
		i = i + 1;
	}
	while (nb[i] != '\0') {
	 	tmp[i] = add(nb[i], '0', det) + '0';
  		det = (nb[i] - '0' + det > 9)? 1 : 0;
  		i = i + 1;
  	}
  	while (nb2[i] != '\0') {
	 	tmp[i] = add('0', nb2[i], det) + '0';
	  	det = (nb2[i] - '0' + det > 9)? 1 : 0;
	  	i = i + 1;
	}
	tmp = add_det(tmp, det,0, i);
	return (my_revstr(tmp));

}

char	*infin_sub(char *nb, char *nb2, char *tmp, int det)
{
	int i = 0;

	while (nb[i] && nb2[i]) {
		tmp[i] = sub(nb[i], nb2[i], det) + '0';
		det = ((nb[i] - '0') - (nb2[i] - '0' + det) < 0)? 1 : 0;
		i++;
	}
	while (nb[i]) {
		tmp[i] = sub(nb[i], '0', det) + '0';
		det = ((nb[i] - '0') -  det < 0)? 1 : 0;
		i++;
	}
	tmp[i] = '\0';
	return (epur_zero(my_revstr(tmp)));
}
