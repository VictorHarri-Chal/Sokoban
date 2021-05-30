/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** sokoban.h
*/

#ifndef _MY_SOKOBAN_H_
#define _MY_SOKOBAN_H_

typedef struct obj
{
    char *map;
    char **tab;
    int row;
    int col;
    int player;
    int x;
    int o;
    int ox;
    int oy;
} obj_t;

typedef struct player
{
    int px;
    int py;
} player_t;

void check_lose(obj_t *obj, player_t *player);
int count_x_blocked(obj_t *obj);
int detect_if_blocked(obj_t *obj, int i, int j);
void lose_choice(obj_t *obj, player_t *player);

void check_map(obj_t *obj);
void check_player(obj_t *obj);

void check_win(obj_t *obj, player_t *player);
void win_choice(obj_t *obj, player_t *player);

void check_x_and_o(obj_t *obj);
void count_x(obj_t *obj);
void count_o(obj_t *obj);
int check_if_null(obj_t *obj);

player_t *init_player_struct(obj_t *obj);
player_t *get_player_pos(obj_t *obj, player_t *player);

obj_t *init_struct(char *file);
void load_file_in_mem(obj_t *obj, char const *file);
void count_lines(obj_t *obj);
void count_columns(obj_t *obj);
void free_struct(obj_t *obj, player_t *player);

void check_mouv(obj_t *obj, player_t *player, int key);

void down_move(obj_t *obj, player_t *player);
void down_move_box(obj_t *obj, player_t *player);

void left_move(obj_t *obj, player_t *player);
void left_move_box(obj_t *obj, player_t *player);

void right_move(obj_t *obj, player_t *player);
void right_move_box(obj_t *obj, player_t *player);

void upper_move(obj_t *obj, player_t *player);
void upper_move_box(obj_t *obj, player_t *player);

int my_sokoban(char *file);
void check_all(obj_t *obj, player_t *player);

void pop_map(obj_t *obj);

bool term_bigger_than_map(obj_t *obj);
void resize_terminal(obj_t *obj);

void usage(void);
void put_error(char *str);
void reset(obj_t *obj);

void my_str_to_wordtab(obj_t *obj);
int cols(obj_t *obj, int i);

#endif