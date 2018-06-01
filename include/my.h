/*
** EPITECH PROJECT, 2018
** B-PSU-110 - Minishell 1
** File description:
** Header with my functions for Minishell 1
*/

#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#pragma once

/* Structures */

/* Library */

int my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_putstrmod(int fd, char const *str);
char *my_strdup(char const *src);
char *my_strcat(char const *str, char const *str_2);
int my_strlen(char const *str);
int my_strncmp(char const *str1, char const *str2, int n);
char **str_to_word_array(char *str, char sep);
void my_show_word_array(char **arr);
char *epur_str(char *str);

/* BSQ */

char *error_management(int agrc, char *argv[]);
int open_file(char *path_file);
char *read_file(int fd, char *path_file);
void my_show_int_array(int *arr, int new_line, int end_arr);
int *inverted_minesweeper(int *map, int line);
int map_solver(char *file);
char *biggest_square(char *file, int *map, int line);
int greater_value(int *map);

/* ENUM */

enum {
	FAILURE = -1,
	SUCCESS = 0
};