/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Biggest SQuare
** File description:
** Find the Biggest SQuare in a map
*/

#include "my.h"

int main(int argc, char *argv[])
{
	char *map = error_management(argc, argv);

	if (map == NULL)
		return (84);
	if (map_solver(map) == FAILURE)
		return (84);
	free(map);
	return (0);
}