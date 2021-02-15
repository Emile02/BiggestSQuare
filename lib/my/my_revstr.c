/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** my_revstr
*/

#include <string.h>

int my_strlen(char const *str);

char *my_revstr(char *str)
{
    int a = 0;
    int b = my_strlen(str) -1;
    char c;

    while (a < b) {
        c = str[a];
        str[a] = str[b];
        str[b] = c;
        a++;
        b--;
    }
    return (str);
}
