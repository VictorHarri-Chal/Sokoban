/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** win_choice.c
*/

#include "my.h"
#include "sokoban.h"

void win_choice(obj_t *obj, player_t *player)
{
    int key = 0;
    char *win_str = "Congratulations, you win !\n";
    char *res_str = "Do you wanna restart ? y/n\n";

    clear();
    refresh();
    mvprintw(LINES /2 - 1, (COLS-my_strlen(win_str))/2, win_str);
    mvprintw(LINES /2, (COLS-my_strlen(res_str))/2, res_str);
    while (key != 'y' && key != 'n')
        key = getch();
    if (key == 'n') {
        endwin();
        free_struct(obj, player);
        exit(0);
    }
    if (key == 'y')
        reset(obj);
}