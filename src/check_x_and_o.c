/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** check_x_and_o.c
*/

#include "my.h"
#include "sokoban.h"

void count_x(obj_t *obj)
{
    int i = 0;
    int j;

    while (obj->tab[i] != NULL) {
        j = 0;
        while (obj->tab[i][j] != '\0') {
            if (obj->tab[i][j] == 'X')
                obj->x++;
            j++;
        }
        i++;
    }
}

void count_o(obj_t *obj)
{
    int i = 0;
    int j;

    while (obj->tab[i] != NULL) {
        j = 0;
        while (obj->tab[i][j] != '\0') {
            if (obj->tab[i][j] == 'O')
                obj->o++;
            j++;
        }
        i++;
    }
}

void check_x_and_o(obj_t *obj)
{
    count_x(obj);
    count_o(obj);
    if (obj->x == 0 || obj->o == 0)
        put_error("Your map need to have at least one x and one o\n");
    if (obj->x != obj->o)
        put_error("You need to have same amount of X and O\n");
}

int check_if_null(obj_t *obj)
{
    if (obj->ox != 0 || obj->oy != 0)
        return (1);
    else
        return (0);
    return (0);
}