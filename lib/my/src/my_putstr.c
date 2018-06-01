/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** Put string
*/

#include <unistd.h>
#include "my.h"

static const int WRITE_FAILURE = 84;

int my_putstr(char const *str)
{
	return (write(1, str, my_strlen(str)) ? 0 : WRITE_FAILURE);
}

int my_putstrmod(int fd, char const *str)
{
	return (write(fd, str, my_strlen(str)) ? 0 : WRITE_FAILURE);
}