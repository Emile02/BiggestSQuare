/*
** EPITECH PROJECT, 2020
** bsq
** File description:
** bsq
*/

#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

#ifndef COORDINATES_H_
#define COORDINATES_H_

typedef struct
{
    int start;
    int line;
    int column;
}map;

typedef struct coord_s
{
    int column;
    int line;
    int square_size;
    int **tabint;
    int x;
    int y;
    char **tab;
}coord_t;

int number_of_char(char *str);

int maps_init(char *str);

void find_square(coord_t *coord);

char **convert_file_in_tab(char *str);

int **convert_chartab_in_inttab(char **tab);

int number_of_line(char *str);

void draw_map(int line, int column, char **tab);

void calcul_size(coord_t *coord, char *str);

#endif
