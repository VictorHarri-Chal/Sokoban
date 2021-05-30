/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** mouvements.c
*/

#include "my.h"
#include "sokoban.h"

void check_mouv(obj_t *obj, player_t *player, int key)
{
    switch(key) {
        case KEY_LEFT :
            left_move(obj, player);
            break;
        case KEY_RIGHT :
            right_move(obj, player);
            break;
        case KEY_UP :
            upper_move(obj, player);
            break;
        case KEY_DOWN :
            down_move(obj, player);
            break;
        case 32 :
            reset(obj);
            break;
    }
}