/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** resize.c
*/

#include "my.h"
#include "sokoban.h"

bool term_bigger_than_map(obj_t *obj)
{
    if (obj->row > LINES || obj->col > COLS)
        return (FALSE);
    return (TRUE);
}

void resize_terminal(obj_t *obj)
{
    char const *str = "You need to resize your window\
    in order to handle the map size";

    initscr();
    raw();
    noecho();
    keypad(stdscr, TRUE);
    clear();
    mvprintw(LINES /2, (COLS-my_strlen(str))/2, str);
    refresh();
    while (getch() != KEY_RESIZE)
        while (obj->row > LINES || obj->col > COLS);
    werase(stdscr);
    endwin();
}