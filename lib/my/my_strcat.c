/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** my_strcat
*/

#include <string.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    size_t dest_len = my_strlen(dest);
    size_t i;

    for (i = 0 ; src[i] != '\0' ; i++)
        dest[dest_len + i] = src[i];
    dest[dest_len + i] = '\0';

    return dest;
}
