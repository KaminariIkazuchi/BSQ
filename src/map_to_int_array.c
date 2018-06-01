/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Biggest SQuare
** File description:
** Algorithm for BSQ
*/

#include "my.h"

static int line_size(char *map)
{
	int i = 0;
	int nbr = 0;
	int save = 0;

	for (; map[i] != '\n'; i++);
	i = i + 1;
	for (; map[i] != '\n'; i++,nbr++);
	save = nbr + 1;
	for (; map[i] != '\n' || map[i] != '\0'; i++)
		if (map[i] == '\n')
			return (save);
	return (-3);
}

static int *map_to_int_array(char *map)
{
	int i = 0;
	int j = 0;
	int *arr = malloc(sizeof(int) * (my_strlen(map) + 1));

	if (arr == NULL)
		return (NULL);
	for (i = 0; map[i] != '\n'; i++);
	i++;
	for (j = 0; map[i] != '\0'; i++, j++) {
		if (map[i] == '\n')
			arr[j] = -2;
		if (map[i] == '.')
			arr[j] = 1;
		if (map[i] == 'o')
			arr[j] = 0;
	}
	arr[j] = -1;
	return (arr);
}

static void print_map(char *file)
{
	char *new_map = NULL;
	register int size_1 = 0;
	register int size_2 = 0;

	for (; file[size_1] != '\0'; size_1++);
	new_map = malloc(sizeof(char) * size_1);
	size_1 = 0;
	for(;file[size_1] != '\n';size_1++);
	size_1++;
	for (; file[size_1] != '\0'; size_2++, size_1++)
		new_map[size_2] = file[size_1];
	size_1--;
	new_map[size_1] = '\0';
	my_putstr(new_map);
	free(new_map);
}

int map_solver(char *file)
{
	int *map = map_to_int_array(file);
	char *algo = NULL;
	int line = 0;

	if (map == NULL)
		return (FAILURE);
	line = line_size(file);
	algo = biggest_square(file, map, line);
	print_map(algo);
	free(map);
	return (0);
}