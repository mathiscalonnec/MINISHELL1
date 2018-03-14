/*
** EPITECH PROJECT, 2018
** my_exec.c
** File description:
** exec
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include "my.h"

void choose_exec(program_t *program, char *str)
{
	program->param_array = my_str_to_array_delim(str, ' ');
	if (builtins(program) == 0)
		simple_exec(program);

	else
		choose_fonction(program);
}

void simple_exec(program_t *program)
{
	char **av = program->param_array;
	char *path = my_strcat(my_strdup("/bin/"), av[0]);
	int status = -1;
	pid_t id;

	if (access(path, F_OK) == -1) {
		my_putstr(program->param_array[0]);
		my_putstr(": Command not found.\n");
	}
	else {
		av[0] = path;
		id = fork();
		if (id == 0)
			execve(path, av, program->env);
		else
			wait(&status);
	}
}
