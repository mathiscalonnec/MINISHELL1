/*
** EPITECH PROJECT, 2018
** choose_fonction.c
** File description:
** choose
*/

#include "my.h"
#include <stdlib.h>

void choose_fonction(program_t *program)
{
	int i = 0;
	char *builtins = "cd setenv unsetenv env";
	char **array_builtins = my_str_to_array_delim(builtins, ' ');
	char **str_array = program->param_array;
	int id = compare_str(str_array[0], array_builtins);

	if (id == 0)
		my_cd(program);
	else if (id == 1)
		my_setenv(program);
	else if (id == 2)
		my_unsetenv(program);
	else if (id == 3)
		my_env(program->env);
	while (array_builtins[i] != NULL) {
		free(array_builtins[i]);
		i++;
	}
	free(array_builtins);
}
