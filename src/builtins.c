/*
** EPITECH PROJECT, 2018
** builtins.c
** File description:
** all builtins
*/

#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "my.h"

void my_cd(program_t *program)
{
	if (chdir(program->param_array[1]) == -1) {
		my_putstr(strerror(errno));
		my_putchar('\n');
	}
}

void my_setenv(program_t *program)
{
	int size = 0;
	char *input;

	if (program->param_array[1] == NULL && program->param_array[2] == NULL)
		my_env(program->env);
	else if (program->param_array[1] != NULL) {
		input = my_strcat(program->param_array[1], "=");
		if (program->param_array[2] != NULL)
			input = my_strcat(input, program->param_array[2]);
		while (program->env[size] != NULL)
			size++;
		program->env = ad_line_and_realloc(program->env, size, input);
	}
}

void my_unsetenv(program_t *program)
{
	int li;
	int size = 0;

	if (program->param_array[1] != NULL) {
		li = find_word_return_int(program->env, program->param_array[1]);
		if (li != -1) {
			unsetenv_body(program, &size, &li);
		}
	}
}

void unsetenv_body(program_t *program, int *size, int *line)
{
	while (program->env[*size] != NULL)
		*size = *size + 1;
	program->env[*line] = program->env[*size - 1];
	program->env[*size - 1] = NULL;
}

void my_env(char **env)
{
	int i = 0;

	while (env[i] != NULL) {
		my_putstr(env[i]);
		my_putchar('\n');
		i++;
	}
}
