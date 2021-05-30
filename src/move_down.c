/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** move_down.c
*/

#include "my.h"
#include "sokoban.h"

void down_move(obj_t *obj, player_t *player)
{
    int i = check_if_null(obj);

    if (obj->tab[player->px + 1][player->py] != '#' && \
    obj->tab[player->px + 1][player->py] != 'X' && \
    obj->tab[player->px][player->py] == 'P') {
        if (obj->tab[player->px + 1][player->py] == 'O') {
            obj->ox = player->px + 1;
            obj->oy = player->py;
        }
        if (i == 1) {
            obj->tab[player->px][player->py] = 'O';
            obj->ox = 0;
            obj->oy = 0;
        }
        else
            obj->tab[player->px][player->py] = ' ';
        obj->tab[player->px + 1][player->py] = 'P';
        player->px++;
    }
    down_move_box(obj, player);
}

void down_move_box(obj_t *obj, player_t *player)
{
    if (obj->tab[player->px + 1][player->py] == 'X' && \
    obj->tab[player->px + 2][player->py] != '#' && \
    obj->tab[player->px + 2][player->py] != 'X' && \
    obj->tab[player->px][player->py] == 'P') {
        obj->tab[player->px][player->py] = ' ';
        obj->tab[player->px + 1][player->py] = 'P';
        obj->tab[player->px + 2][player->py] = 'X';
        player->px++;
    }
}