/*
** EPITECH PROJECT, 2020
** B-PSU-200-NAN-2-1-mysokoban-victor.harri-chal
** File description:
** my.h
*/

#ifndef _MY_H_
#define _MY_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <ncurses.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdbool.h>

void my_putchar(char c);
int my_putstr(char const *str);
void my_put_nbr(int n);
int my_strlen(char const *str);
int my_strcmp(char const *s1, char const *s2);
void my_print_tab(char **tab);

#endif