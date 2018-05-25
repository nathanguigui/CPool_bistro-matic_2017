/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** 
*/

int my_strlen(char const *str)
{
	int nbr;
	nbr = 0;
	while (str[nbr] != '\0') {
		nbr = nbr + 1;
	}
	return (nbr);
}
