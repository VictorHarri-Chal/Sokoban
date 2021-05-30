/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** check_map.c
*/

#include "my.h"
#include "sokoban.h"

void check_map(obj_t *obj)
{
    int i = 0;

    while (obj->map[i] != '\0')
    {
        if (obj->map[i] == '#' || obj->map[i] == 'P' || obj->map[i] == 'X' || \
        obj->map[i] == 'O' || obj->map[i] == ' ' || obj->map[i] == '\n')
            i++;
        else
            put_error("Your map have invalid characters\n");
    }
    check_player(obj);
}

void check_player(obj_t *obj)
{
    int i = 0;

    while (obj->map[i] != '\0')
    {
        if (obj->map[i] == 'P')
            obj->player++;
        i++;
    }
    if (obj->player < 1 || obj->player > 1)
        put_error("You need to have one and only one player\n");
}