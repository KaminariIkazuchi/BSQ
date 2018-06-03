/*
** EPITECH PROJECT, 2018
** B-MUL-100 - Minishell 1
** File description:
** String to Word Array
*/

#include <stdlib.h>
#include "my.h"

static int count_sep(char const *str, char sep)
{
	int n = 0;

	for (int i = 0; str[i] != '\0'; i++)
		if (str[i] == sep)
			n++;
	return (n);
}

char **str_to_word_array(char *str, char sep)
{
	int x = 0;
	int y = 0;
	int i = 0;
	int words = count_sep(str, sep) + 1;
	char **arr = malloc(sizeof(char *) * (words + 1));

	if (arr == NULL)
		return (NULL);
	for (x = 0; str[i] != '\0'; i++) {
		arr[x] = malloc(sizeof(char) * (my_strlen(str) - words + 2));
		y = 0;
		for (y = 0; str[i] != sep && ((str[i] >= 33 && str[i] <= 57)
		|| (str[i] >= 59 && str[i] <= 126)); i++) {
			arr[x][y] = str[i];
			y++;
		}
		arr[x][y] = '\0';
		x++;
	}
	arr[x] = NULL;
	return (arr);
}

void my_show_word_array(char **arr)
{
	for (int i = 0; arr[i] != NULL; i++) {
		for (int j = 0; arr[i][j] != '\0'; j++)
			my_putchar(arr[i][j]);
		my_putchar('\n');
	}
}
