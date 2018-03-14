/*
** EPITECH PROJECT, 2018
** exit.c
** File description:
** ex
*/

#include "my.h"
#include <unistd.h>

int match_exit(char *str)
{
	char exit[5] = "exit";
	int i = 0;

	while (str != NULL && str[i] != '\0' && exit[i] != '\0') {
		if (exit[i] != str[i])
			return (0);
		i++;
	}
	if (i > 0)
		return (1);
	else
		return (0);
}
