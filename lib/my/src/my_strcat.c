/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Minishell 1
** File description:
** String concatenate
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char const *str, char const *str_2)
{
	int i = 0;
	int j = 0;
	int len = my_strlen(str) + my_strlen(str_2) + 2;
	char *str_3 = malloc(sizeof(char) * len);

	if (str_3 == NULL)
		return (NULL);
	for (;str[i] != '\0'; i++)
		str_3[i] = str[i]; 
	while (str_2[j] != '\0') {
		str_3[i] = str_2[j];
		i++;
		j++;
	}
	str_3[i] = '\0';
	return (str_3);
}