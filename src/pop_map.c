/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** game.c
*/

#include "my.h"
#include "sokoban.h"

void check_all(obj_t *obj, player_t *player)
{
    int key = getch();

    check_lose(obj, player);
    check_win(obj, player);
    check_mouv(obj, player, key);
}

void pop_map(obj_t *obj)
{
    player_t *player;
    int row = 0;

    player = init_player_struct(obj);
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    refresh();
    while (1) {
        while (term_bigger_than_map(obj) == FALSE)
            resize_terminal(obj);
        clear();
        for (row = 0; obj->tab[row] != NULL; row++)
            mvprintw(row, (COLS/2)-my_strlen(obj->tab[1]), obj->tab[row]);
        check_all(obj, player);
        refresh();
    }
    endwin();
}