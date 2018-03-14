/*
** EPITECH PROJECT, 2018
** init_sruc.c
** File description:
** init
*/

#include "my.h"
#include <stdlib.h>
#include <unistd.h>

program_t *init_struct(char **env)
{
	program_t *program = malloc(sizeof(program_t));

	program->env = env;
	program->path = array_path(env);

	return (program);
}
