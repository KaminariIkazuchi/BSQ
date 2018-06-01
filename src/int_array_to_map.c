/*
** EPITECH PROJECT, 2018
** B-CPE-110 - BSQ
** File description:
** Fill and replace by cross the Biggest SQuare
*/

#include "my.h"

static int *place_neg(int line, int *map)
{
	int pos = greater_value(map);
	int nbr = map[pos];

	for (int count = 0; count != nbr; count++) {
		for (int cpt = 0; cpt != nbr; cpt++, pos--)
			map[pos] = -42;
		pos = pos - line + nbr;
	}
	return (map);
}

char *biggest_square(char *file, int *map, int line)
{
	int i = 0;
	int *minesweeper = inverted_minesweeper(map, line);
	int *new_map = place_neg(line, minesweeper);
	
	for (; file[i] != '\n'; i++);
	i++;
	for (int j = 0; file[i] != '\0'; i++, j++) {
		if (new_map[j] == -42)
			file[i] = 'x';
	}
	return (file);
}