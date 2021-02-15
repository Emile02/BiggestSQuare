/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** my_getnbr
*/

int my_getnbr (char *str)
{
    int i = 0;
    int sign = -1;
    int nb = 0;

    for (; str[i] == '+' || str[i] == '-'; i++) {
        if (str[i]  == '-')
            sign = sign * -1;
    }
    for (; str[i] >= '0' && str[i] <= '9'; i++) {
        nb = nb * 10 - (str[i] - '0');
    }
    return (nb * sign);
}
