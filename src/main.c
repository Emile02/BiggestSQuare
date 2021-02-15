/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "../include/my.h"
#include "../include/coordinates.h"

void calcul_size(coord_t *coord, char *str)
{
    int i = 0;
    int j = 0;
    int line = my_getnbr(str);
    for (; str[i] != '\n'; i++);
    i++;
    for (; str[i + j] != '\n'; j++);
    coord->column = j;
    coord->line =  line;
}

int main(int argc, char **argv)
{
    coord_t *coord = malloc(sizeof(coord_t));
    int fd = open(argv[1], O_RDONLY);
    struct stat size;
    char *str;
    int i;
    if (lstat(argv[1], &size) == -1) return (84);
    str = malloc(sizeof(char *) * (size.st_size));
    if (!(argc == 2 && fd != -1)) return (84);
    read(fd, str, size.st_size + 1);
    str[size.st_size] = '\0';
    calcul_size(coord, str);
    for (i = 0; str[i] != '\n'; i++);
    coord->tab = convert_file_in_tab(str + (i  + 1));
    coord->tabint = convert_chartab_in_inttab(coord->tab);
    find_square(coord);
    draw_map(coord->line, coord->column, coord->tab);
    close(fd);
    free(str);
    return (0);
}