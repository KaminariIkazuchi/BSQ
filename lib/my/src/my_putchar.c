/*
** EPITECH PROJECT, 2018
** B-MUL-100 - My Hunter
** File description:
** put character
*/

#include <unistd.h>
#include "my.h"

int my_putchar(char c)
{
	return (write(1, &c, 1) ? WRITE_SUCCESS : WRITE_FAILURE);
}