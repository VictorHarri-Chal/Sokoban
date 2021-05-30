/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** main.c
*/

#include "my.h"
#include "sokoban.h"

int main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (my_strcmp(av[1], "-h") == 0) {
        usage();
        return (84);
    }
    if (my_sokoban(av[1]) == 84)
        return (84);
    return (0);
}