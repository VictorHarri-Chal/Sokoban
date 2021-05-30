/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** get_player_pos.c
*/

#include "my.h"
#include "sokoban.h"

player_t *init_player_struct(obj_t *obj)
{
    player_t *player = malloc(sizeof(player_t));

    if (!player)
        put_error("Objects from the structure can't be initialized");
    player = get_player_pos(obj, player);
    return (player);
}

player_t *get_player_pos(obj_t *obj, player_t *player)
{
    int i = 0;
    int j;

    while (obj->tab[i] != NULL)
    {
        j = 0;
        while (obj->tab[i][j] != '\0')
        {
            if (obj->tab[i][j] == 'P') {
                player->px = i;
                player->py = j;
            }
            j++;
        }
        i++;
    }
    return (player);
}