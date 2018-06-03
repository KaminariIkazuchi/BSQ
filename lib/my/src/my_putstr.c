/*
** EPITECH PROJECT, 2018
** putstr
** File description:
** Displaying a string
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
	return (write(1, str, my_strlen(str)) ? WRITE_SUCCESS : WRITE_FAILURE);
}

int my_putstrmod(int fd, char const *str)
{
	return (write(fd, str, my_strlen(str)) ? WRITE_SUCCESS : WRITE_FAILURE);
}