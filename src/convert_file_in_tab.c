/*
** EPITECH PROJECT, 2021
** BSQ
** File description:
** Convert file in tab
*/

#include "../include/coordinates.h"
#include "../include/my.h"

char **convert_file_in_tab(char *str)
{
    char **tab = malloc(sizeof(char *) * (my_strlen(str) + 1));
    int x;
    int y;
    int i = 0;
    for (y = 0; str[i] != '\0'; i++, y++) {
        tab[y] = malloc(sizeof(char) * (my_strlen(str) + 1));
        for (x = 0; str[i] != '\n' && str[i] != '\0'; i++, x++) {
            tab[y][x] = str[i];
        }
        tab[y][x] = '\0';
    }
    tab[y] = NULL;
    return (tab);
}

int **malloc_int_tab(int line, int column)
{
    int **tabint = malloc(sizeof(int *) * (line + 1));
    for (int j = 0; j != line; j++) {
        tabint[j] = malloc(sizeof(int) * (column + 1));
    }

    return (tabint);
}

void draw_map(int line, int column, char **tab)
{
    for (int i = 0; i != line; i++)
    {
        for (int j = 0; j != column; j++) {
            my_putchar(tab[i][j]);
        }
        my_putchar('\n');
    }
}

int **convert_chartab_in_inttab(char **tab)
{
    int column = my_strlen(tab[0]);
    int line = 0;
    for (;tab[line] != NULL; line++);
    int **tabint = malloc_int_tab(line, column);
    for (int i = 0; i != line; i++)
    {
        for (int j = 0; tab[i][j] != '\0'; j++) {
            if (tab[i][j] == '.')
                tabint[i][j] = 1;
            else
                tabint[i][j] = 0;
        }
    }
    return (tabint);
}