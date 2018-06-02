/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Biggest SQuare
** File description:
** Managing errors in BSQ
*/

#include "my.h"

static int check_chars(char *map)
{
	int i = 0;
	int nbr = 0;

	for (i = 0; map[i] != '\n'; i++);
	for (; map[i] != '\0'; i++) {
		if (map[i] != '.' && map[i] != 'o' && map[i] != '\n')
			return (FAILURE);
		if (map[i] == '.' && map[i] != 'o')
			nbr++;
	}
	if (nbr == 0)
		return (FAILURE);
	return (SUCCESS);
}

static char *check_file(char *path_file)
{
	char *map = NULL;
	int fd = open_file(path_file);

	if (fd == FAILURE)
		return (NULL);
	map = read_file(fd, path_file);
	close(fd);
	if (map == NULL)
		return (NULL);
	if (check_chars(map) == FAILURE) {
		free(map);
		return (NULL);
	}
	return (map);
}

char *error_management(int argc, char *argv[])
{
	char *map = NULL;

	if (argc != 2) {
		my_putstrmod(2, "Error: Bad number of arguments.");
		return (NULL);
	}
	map = check_file(argv[1]);
	return (map);
}
