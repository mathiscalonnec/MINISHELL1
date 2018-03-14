/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <unistd.h>
#include <stdlib.h>
#include "my.h"
#include <stdio.h>
#include <signal.h>

int main(int ac, char **av, char **env)
{
	char buffer[4096];
	program_t *program;
	int size;

	(void) av;
	if (ac != 1)
		return (84);
	signal(SIGQUIT, SIG_IGN);
	buffer[0] = 0;
	if (env[0] != NULL)
		program = init_struct(env);
	while (env[0] && match_exit(buffer) == 0) {
		if (isatty(0) == 1)
			write(1, "[$$$] > ", 8);
		size = read(STDIN_FILENO, buffer, 200);
		gestion_erreur(size);
		buffer[size - 1] = '\0';
		if (buffer[0] != '\0')
			choose_exec(program, buffer);
	}
	return (0);
}

void gestion_erreur(int size)
{
	if (size == 0 && isatty(0) == 1) {
		my_putstr("exit\n");
		exit(0);
	}
	if (size == 0)
		exit(0);
}
