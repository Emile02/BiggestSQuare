/*
** EPITECH PROJECT, 2021
** bsq
** File description:
** file to find the square and more
*/

#include "../include/my.h"
#include "../include/coordinates.h"

void fill_bsq(coord_t *coord)
{
    coord->x -= coord->square_size;
    coord->y -= coord->square_size;
    for (int i = 0; i != coord->line; i++) {
        for (int j = 0; j != coord->column ; j++) {
            if (i >= coord->y && i <= coord->y + coord->square_size) {
                if (j >= coord->x && j <= coord->x + coord->square_size) {
                    coord->tab[i][j] = 'x';
                }
            }
        }
    }
}

int min(int a, int b)
{
    if (a > b)
        return (b);
    return (a);
}

int who_is_the_smaller(int **tabint, int x, int y)
{
    int bottom_left = tabint[y][x - 1];
    int top_left = tabint[y - 1][x - 1];
    int top_right = tabint[y - 1][x];
    int minimum = min(bottom_left, min(top_left, top_right));
    return (minimum);
}

void find_square(coord_t *coord)
{
    int min = 0;
    coord->square_size = 0;
    for (int i = 1; i != coord->line; i++) {
        for (int j = 1; j != coord->column ; j++) {
            min = who_is_the_smaller(coord->tabint, j, i);
            if (coord->tabint[i][j] > 0)
            {
                coord->tabint[i][j] = 1 + min;
            }
        }
    }
    for (int i =  0; i != coord->line; i++) {
        for (int j = 0; j != coord->column ; j++) {
            if (coord->tabint[i][j] > coord->square_size) {
                    coord->square_size = coord->tabint[i][j];
                    coord->x = j;
                    coord->y = i; } }
    }
    fill_bsq(coord);
}