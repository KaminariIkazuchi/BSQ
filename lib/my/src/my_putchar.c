/*
** EPITECH PROJECT, 2018
** B-MUL-100 - My Hunter
** File description:
** put character
*/

#include <unistd.h>
#include "my.h"

static const int WRITE_FAILURE = 84;

int my_putchar(char c)
{
	return (write(1, &c, 1) ? WRITE_FAILURE : 0);
}