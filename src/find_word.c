/*
** EPITECH PROJECT, 2018
** find_word.c
** File description:
** find a word inside array
*/

#include <stdlib.h>
#include "my.h"

char *find_word_return_string(char **env, char *word)
{
	int i = 0;

	while (env[i] != NULL) {
		if (match_word(env[i], word) == 1)
			return (env[i]);
		i++;
	}
	return (NULL);
}

int find_word_return_int(char **env, char *word)
{
	int i = 0;

	while (env[i] != NULL) {
		if (match_word(env[i], word) == 1)
			return (i);
		i++;
	}
	return (-1);
}

int match_word(char *str, char *word)
{
	int i = 0;

	while (word[i] != '\0') {
		if (word[i] != str[i])
			return (0);
		i++;
	}
	return (1);

}

char **array_path(char **str)
{
	char *return_string = find_word_return_string(str, "PATH=") + 5;
	char **output = my_str_to_array_delim(return_string, ':');

	return (output);
}
