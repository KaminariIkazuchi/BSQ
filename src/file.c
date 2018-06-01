/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Biggest SQuare
** File description:
** File
*/

#include "my.h"

/*static char *read_file(int fd, size_t st_size)
{
	char *buf = NULL;
puts("hey");
	buf = malloc(sizeof(char) * st_size + 1);
	if (buf == NULL)
		return (NULL);
	if (read(fd, buf, st_size) == -1)
		return (NULL);
	buf[st_size] = '\0';
	close(fd);
	return (buf);
}

char *open_file(char *path_file)
{
	struct stat path;
	int fd = open(path_file, O_RDONLY);
	char *str = NULL;

	if (fd == -1)
		return (NULL);
	if (stat(path_file, &path) == -1)
		return (NULL);
	str = read_file(fd, path.st_size);
	return (str);
}
*/

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