/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Biggest SQuare
** File description:
** Algorithm for the inverted minesweeper
*/

#include "my.h"

static int little_value(int a, int b, int c)
{
	if (a > b)
		a = b;
	if (a > c)
		a = c;
	return (a);
}

int greater_value(int *map)
{
	int greater = 0;
	int pos = 0;
	int i = 0;

	for (i = 0; map[i] != -1; i++) {
		if (greater < map[i]) {
			greater = map[i];
			pos = i;
		}
	}
	return (pos);
}

int *inverted_minesweeper(int *map, int line)
{
	int i = line + 1;
	int left = 0;
	int up = 0;
	int diagonal = 0;

	for (; map[i] != -1; i++) {
		left = map[i - 1];
		up = map[i - line];
		diagonal = map[i - line - 1];
		if (map[i] != 0 && left > 0 && up > 0 && diagonal > 0)
			map[i] = little_value(left, up, diagonal) + 1;
	}
	return (map);
}