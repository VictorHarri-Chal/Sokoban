/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** lose_choice.c
*/

#include "my.h"
#include "sokoban.h"

void lose_choice(obj_t *obj, player_t *player)
{
    int key = 0;
    char *lose_str = "You lose !\n";
    char *try_str = "Try again ? y/n\n";

    clear();
    refresh();
    mvprintw(LINES /2 - 1, (COLS-my_strlen(lose_str))/2, lose_str);
    mvprintw(LINES /2, (COLS-my_strlen(try_str))/2, try_str);
    while (key != 'y' && key != 'n')
        key = getch();
    if (key == 'n') {
        endwin();
        free_struct(obj, player);
        exit(1);
    }
    if (key == 'y')
        reset(obj);
}
