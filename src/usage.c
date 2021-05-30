/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** usage.c
*/

#include "my.h"
#include "sokoban.h"

void usage(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t./my_sokoban map\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\tmap  file representing the warehouse map.\n");
    my_putstr("\t     # are walls\n");
    my_putstr("\t     P is the player\n");
    my_putstr("\t     X are boxes\n");
    my_putstr("\t     O are storage locations\n");
}

void put_error(char *str)
{
    my_putstr("ERROR : ");
    my_putstr(str);
    exit (84);
}

void reset(obj_t *obj)
{
    my_str_to_wordtab(obj);
    obj->x = 0;
    obj->o = 0;
    check_x_and_o(obj);
    obj->ox = 0;
    obj->oy = 0;
    pop_map(obj);
}

