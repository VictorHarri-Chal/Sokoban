/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** init_struct.c
*/

#include "my.h"
#include "sokoban.h"

void load_file_in_mem(obj_t *obj, char const *file)
{
    int fd = open(file, O_RDONLY);
    int filesize = 0;
    struct stat file_stat;

    stat(file, &file_stat);
    filesize = file_stat.st_size;
    if (filesize == 0)
        put_error("Can't find your map\n");
    if (!(obj->map = malloc(sizeof(char) * filesize + 1)))
        put_error("Malloc map failed\n");
    read(fd, obj->map, filesize);
    obj->map[filesize] = '\0';
    close(fd);
}

void count_columns(obj_t *obj)
{
    int i = 0;

    while (obj->map[i] != '\n') {
        obj->col++;
        i++;
    }
    if (obj->col < 0)
        put_error("Your map size isn't correct\n");
}

void count_lines(obj_t *obj)
{
    int i = 0;

    while (obj->map[i] != '\0') {
        if (obj->map[i] == '\n') {
            obj->row++;
        }
        i++;
    }
    obj->row++;
}

obj_t *init_struct(char *file)
{
    obj_t *obj;

    obj = malloc(sizeof(obj_t));
    if (!(obj))
        put_error("Objects from the structure can't be initialized\n");
    load_file_in_mem(obj, file);
    count_lines(obj);
    count_columns(obj);
    return (obj);
}

void free_struct(obj_t *obj, player_t *player)
{
    free(obj);
    free(player);
}