/*
** EPITECH PROJECT, 2018
** B-PSU-110 - Minishell 1
** File description:
** Header with my functions for Minishell 1
*/

#pragma once

/* Structures */

typedef struct s_env_s {
	char *my_env;
} s_env_t;

/* Library */

int my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_putstrmod(int fd, char const *str);
int my_strlen(char const *str);
int my_strncmp(char const *str1, char const *str2, int n);
char *my_strdup(char const *src);
char *my_strcat(char const *str, char const *str_2);
char *epur_str(char *str);