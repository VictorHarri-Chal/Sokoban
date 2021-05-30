/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** check_win_and_lose.c
*/

#include "my.h"
#include "sokoban.h"

void check_win(obj_t *obj, player_t *player)
{
    obj->o = 0;
    count_o(obj);
    if (obj->o == 0 && obj->ox == 0 && obj->oy == 0)
        win_choice(obj, player);
}