/*
** EPITECH PROJECT, 2017
** my_putchar
** File description:
** display a char on the screen
*/

#include "bistro-matic.h"

void my_putchar(char c)
{
	write(1, &c, 1);
}
