/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Minishell 1
** File description:
** my_strncmp
*/

#include "my.h"
#include <unistd.h>

int my_strncmp(char const *str1, char const *str2, int n)
{
	int i = 0;
	
	while (str1[i] != '\0' && str2[i] != '\0') {
		if (str1[i] != str2[i]) 
			return (str1[i] - str2[i]);
		if (i > n)
			return (-1);
		i++;
	}
	if (i < n)
		return (-1);
	return (0);
}