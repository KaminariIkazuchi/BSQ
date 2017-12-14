/*
** EPITECH PROJECT, 2017
** B-CPE-110 - BSQ
** File description:
** Main for BSQ
*/
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "include/bsq.h"

int main(int ac, char **av)
{

        if (ac == 1) {
                write(2, "No arguments\n", 14);
                return (84);
        }
        else if (ac > 1)
                cat(av);
}