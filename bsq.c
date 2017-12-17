/*
** EPITECH PROJECT, 2017
** B-CPE-110 - BSQ
** File description:
** A program that finds the Biggest SQuare in a random map
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "include/bsq.h"

int count_col(char *buf)
{
	int i = 0;
	while (buf[i] != '\n') {
		i++;
	}
	return (0);
}

int count_lines(char *buf)
{
	int j = 0;
	int res = 0;
	while (buf[j] != '\0') {
		if (buf[j] == '\n' ) {
			res++;
		}
		j++;
	}
	return (0);
}

char **create_tab(char *buf)
{
	int i = 0;
	int x = 0;
	int y = 0;
	char **tab = malloc(sizeof(char *) * count_col(buf) * count_lines(buf));

	while (buf[i] != '\0') {
		tab[y] = malloc(sizeof(char) * count_lines(buf));
		while (buf[i] != '\n') {
			tab[y][x] = buf[i];
			x += 1;
			i += 1;
		}
		tab[y][x] = '\0';
		x = 0;
		y += 1;
		i += 1;
	}
	return (tab);
}

void disp_tab(char **tab)
{
	int y = 0;
	while (*tab[y] != '\0') {
		my_putstr(tab[y]);
		y += 1;
	}
}

char *cat(char **av)
{
	struct stat path;
	char *buf;
	int fd = open(av[1], O_RDONLY);
	stat(av[1], &path);

	buf = malloc(sizeof(char) * path.st_size + 1);	
	read(fd, buf, path.st_size);
	count_col(buf);
	count_lines(buf);
	return (buf);
}