/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** my_put_nbr
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str);

int my_put_nbr(int nb)
{
    int mod = 0;
    if (nb <= -2147483648) {
        my_putstr("-2147483648");
    }
    if (nb < 0 && nb > -2147483648) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10)
    {
        mod = (nb % 10);
        nb = (nb / 10);
        my_put_nbr(nb);
        my_putchar(48 + mod);
    }
    else if (nb >= 0 && nb <= 9)
        my_putchar(nb + 48);
    return (0);
}
