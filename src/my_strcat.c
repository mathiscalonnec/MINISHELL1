/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** Concatenate two strings
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char *src)
{
	int len = my_strlen(dest) + my_strlen(src) + 1;
	char *output = malloc(sizeof(char) * len);
	int i = 0;
	int a = 0;

	while (dest[i] != '\0') {
		output[i] = dest[i];
		i++;
	}
	while (src[a] != '\0') {
		output[i] = src[a];
		i++;
		a++;
	}
	output[i] = '\0';

	return (output);

}
