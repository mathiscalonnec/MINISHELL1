/*
** EPITECH PROJECT, 2018
** realloc.c
** File description:
** realloc
*/

#include <stdlib.h>
#include "my.h"

char **ad_line_and_realloc(char **array, int len_base, char *ad)
{
	char **output = malloc(sizeof(char *) * (len_base + 2));
	int i = 0;

	while (i < len_base) {
		output[i] = malloc(sizeof(char) * (my_strlen(array[i]) + 1));
		output[i] = array[i];
		i++;
	}
	output[i] = malloc(sizeof(char) * (my_strlen(ad) + 1));
	output[i] = ad;
	output[i + 1] = NULL;

	return (output);
}
