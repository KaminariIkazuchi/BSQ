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
#include "include/bsq.h"

void cat(char **av)
{
	struct stat path;
	char *buf;
	int fd = open(av[1], O_RDONLY);
	stat(av[1], &path);
	buf = malloc(sizeof(char) * path.st_size + 1);
	
	read(fd, buf, path.st_size);
	my_putstr(buf);
	free(buf);
}