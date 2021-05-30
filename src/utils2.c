/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-bsmysokoban-victor.harri-chal
** File description:
** utils2.c
*/

#include "my.h"
#include "sokoban.h"

void my_str_to_wordtab(obj_t *obj)
{
    int row = 0;
    int col = 0;
    int i = 0;
    int columns = 0;

    obj->tab = malloc(sizeof(char *) * (obj->row) + 1);
    for (row = 0; row < obj->row; row++)
    {
        columns = cols(obj, i);
        obj->tab[row] = malloc(sizeof(char) * columns + 1);
        for (col = 0; col < columns; col += 1) {
            obj->tab[row][col] = obj->map[i];
            i++;
        }
        i++;
    }
}

int cols(obj_t *obj, int i)
{
    int j = 0;

    while (obj->map[i] != '\n' && obj->map[i] != '\0') {
        i++;
        j++;
    }
    return (j);
}

void my_print_tab(char **tab)
{
    int i = 0;

    while (tab[i] != NULL)
    {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
}
