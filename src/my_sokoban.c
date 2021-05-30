/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** my_sokoban.c
*/

#include "my.h"
#include "sokoban.h"

int my_sokoban(char *file)
{
    obj_t *obj = init_struct(file);

    check_map(obj);
    my_str_to_wordtab(obj);
    check_x_and_o(obj);
    pop_map(obj);
    return (0);
}