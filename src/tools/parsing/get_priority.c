/*
** EPITECH PROJECT, 2017
** get_priority
** File description:
** returns a value depending of the priority or assossiativity of an operator
*/

#include "bistro-matic.h"

int precedence(char op)
{
	switch(op) {
	case '+':
		return (1);
	case '-':
		return (1);
	case '*':
		return (2);
	case '/':
		return (2);
	case '%':
		return (2);
	}
	return (0);
}

int priority(t_pile *pile, char c)
{
	if (precedence(c) <= precedence(pile->stack[pile->pos]))
		return (1);
	return (0);
}
