/*
** EPITECH PROJECT, 2017
** B-PSU-110 - Minishell 1
** File description:
** A function that allocate memory and copies the string given as argument in it
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
	char *dest;
	int i;
	int len = my_strlen(src);

	dest = malloc(sizeof(char) * len);
	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return(dest);
}
