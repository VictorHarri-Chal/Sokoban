/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** check_lose.c
*/

#include "../include/my.h"
#include "../include/sokoban.h"

int detect_if_blocked(obj_t *obj, int i, int j)
{
    if ((obj->tab[i - 1][j] == '#' || obj->tab[i - 1][j] == 'X' \
    || obj->tab[i + 1][j] == '#' || obj->tab[i + 1][j] == 'X') \
    && (obj->tab[i][j - 1] == '#' || obj->tab[i][j - 1] == 'X' \
    || obj->tab[i][j + 1] == '#' || obj->tab[i][j + 1] == 'X'))
        return (1);
    return (0);
}

int count_x_blocked(obj_t *obj)
{
    int i = 0;
    int j;
    int x_blocked = 0;

    while (obj->tab[i] != NULL)
    {
        j = 0;
        while (obj->tab[i][j] != '\0')
        {
            if (obj->tab[i][j] == 'X') {
                if (detect_if_blocked(obj, i, j) == 1)
                    x_blocked++;
            }
            j++;
        }
        i++;
    }
    return (x_blocked);
}

void check_lose(obj_t *obj, player_t *player)
{
    int x_blocked = count_x_blocked(obj);

    if (x_blocked == obj->x) {
        lose_choice(obj, player);
    }
}