/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Minishell 1
** File description:
** Epur Str
*/

#include <stdlib.h>
#include "my.h"

char *epur_str(char *str)
{
	int j = 0;
	int k = 0;
	char *new_str = NULL;
	
	if ((new_str = malloc(sizeof(char) * (my_strlen(str) + 1))) == NULL)
		return (NULL);
	for (int i = 0; str[i] != '\0'; i ++)
		if (str[i] == '\t')
			str[i] = ' ';
	while (str[j] != '\0')
		if (str[j] == ' ' && str[j + 1] == ' ')
			j ++;
		else {
			new_str[k] = str[j];
			j ++;
			k ++;
		}
	new_str[j] = '\0';
	return (new_str);
}