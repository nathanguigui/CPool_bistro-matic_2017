/*
** EPITECH PROJECT, 2017
** res_str.c
** File description:
** 
*/

#include <stdlib.h>
int my_strlen(char const *str);

char	*add_to_res(char *res, char *k, int state)
{
	int i = 0;
	char *output;
	if (state == 1) {
		res = "";
		state = 0;
	}
	if (my_strlen(res) < 1) {
		output = malloc(sizeof(char) * 2);
		output[0] = k[0];
		output[1] = '\0';
	} else {
		output = malloc(sizeof(char) * (my_strlen(res) + my_strlen(k) + 1));
		while (res[i] != '\0') {
			output[i] = res[i];
			i = i + 1;
		}
		output[i] = k[0];
		output[i + 1] = '\0';
	}
	return(output);
}

char	*rem_to_res(char *res)
{
	char *result;
	int i = 0;

	if (my_strlen(res) == 0) {
		result = "";
		return(result);
	}else if (my_strlen(res) > 0) {
		result = res;
		int k = my_strlen(res) - 1;
		result[k] = '\0';
		return(result);
	}
}