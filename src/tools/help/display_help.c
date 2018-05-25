/*
** EPITECH PROJECT, 2017
** display_help
** File description:
** display usage
*/

#include "bistro-matic.h"

void display_help()
{
	my_putstr("USAGE\n");
	my_putstr("\t   ./calc base operators size_read\n\n");
	my_putstr("DESCRIPTION\n");
	my_putstr("\t   base\t      all the symbols of the base\n");
	my_putstr("\t   operators  all the symbols for the parentheses");
	my_putstr(" and the 5 operators\n");
	my_putstr("\t   size_read  number of characters to be read\n");
}
