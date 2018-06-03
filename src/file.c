/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Biggest SQuare
** File description:
** File managing
*/

#include "my.h"

int open_file(char *path_file)
{
	int fd = open(path_file, O_RDONLY);

	if (fd == FAILURE)
		return (FAILURE);
	return (fd);
}

char *read_file(int fd, char *path_file)
{
	struct stat path;
	char *buf = NULL;

	if (stat(path_file, &path) == FAILURE)
		return (NULL);
	if (path.st_size == 0)
		return (NULL);
	buf = malloc(sizeof(char) * path.st_size + 1);
	if (buf == NULL)
		return (NULL);
	if (read(fd, buf, path.st_size) == FAILURE)
		return (NULL);
	buf[path.st_size] = '\0';
	return (buf);
}