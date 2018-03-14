/*
** EPITECH PROJECT, 2018
** match_builtins.c
** File description:
** match_builtins
*/

#include "my.h"
#include <unistd.h>
#include <stdlib.h>

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;

	for (; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);

	return (s1[i] - s2[i]);
}

int compare_str(char *str, char **array)
{
	int i = 0;

	while (array[i] != NULL) {
		if (my_strcmp(str, array[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}

int builtins(program_t *program)
{
	int i = 0;
	char *builtins = "cd setenv unsetenv env exit";
	char **array_builtins = my_str_to_array_delim(builtins, ' ');

	if ((compare_str(program->param_array[0], array_builtins)) == -1)
		return (0);
	else
		return (1);
	while (array_builtins[i] != NULL) {
		free(array_builtins[i]);
		i++;
	}
	free(array_builtins);
}
