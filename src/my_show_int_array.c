/*
** EPITECH PROJECT, 2018
** B-CPE-110 - Biggest SQuare
** File description:
** Prints an array of integers
*/

#include "my.h"

void my_show_int_array(int *arr, int new_line, int end_arr)
{
	for (int i = 0; arr[i] != end_arr; i++) {
		if (arr[i] == new_line)
			my_putchar('\n');
		else
			my_put_nbr(arr[i]);
	}
}