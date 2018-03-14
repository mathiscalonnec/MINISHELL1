/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** Duplicate a string
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char *str)
{
	char *output = malloc(sizeof(char) * (my_strlen(str) + 1));
	int i = 0;

	for (; str[i] != '\0'; i++) {
		output[i] = str[i];
	}
	output[i] = '\0';
	return (output);
}
