/*
** EPITECH PROJECT, 2018
** my_strcut.c
** File description:
** cut
*/

#include "my.h"

char *strcut(char *str, int place)
{
	int i = place;

	while (str[i] != '\0') {
		str[i - place] = str[i];
		i++;
	}
	str[i - place] = '\0';
	return (str);
}
