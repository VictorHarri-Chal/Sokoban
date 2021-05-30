/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** move_left.c
*/

#include "my.h"
#include "sokoban.h"

void left_move(obj_t *obj, player_t *player)
{
    int i = check_if_null(obj);

    if (obj->tab[player->px][player->py - 1] != '#' && \
    obj->tab[player->px][player->py - 1] != 'X' && \
    obj->tab[player->px][player->py] == 'P') {
        if (obj->tab[player->px][player->py - 1] == 'O') {
            obj->ox = player->px;
            obj->oy = player->py - 1;
        }
        if (i == 1) {
            obj->tab[player->px][player->py] = 'O';
            obj->ox = 0;
            obj->oy = 0;
        }
        else
            obj->tab[player->px][player->py] = ' ';
        obj->tab[player->px][player->py - 1] = 'P';
        player->py--;
    }
    left_move_box(obj, player);
}

void left_move_box(obj_t *obj, player_t *player)
{
    if (obj->tab[player->px][player->py - 1] == 'X' && \
    obj->tab[player->px][player->py - 2] != '#' && \
    obj->tab[player->px][player->py - 2] != 'X' && \
    obj->tab[player->px][player->py] == 'P') {
        obj->tab[player->px][player->py] = ' ';
        obj->tab[player->px][player->py - 1] = 'P';
        obj->tab[player->px][player->py - 2] = 'X';
        player->py--;
    }
}