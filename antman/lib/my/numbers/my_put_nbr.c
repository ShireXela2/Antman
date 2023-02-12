/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** my_put_nbr
*/

#include "../my.h"

static int my_pow(int nb, int power)
{
    int result = nb;

    for (int i = 1; i < power; i++)
        result *= nb;
    return result;
}

static int compensate_length(int nb, int length)
{
    while (my_nblen(nb) != length) {
        my_putchar('0');
        length--;
    }
    return length;
}

static int put_if_int_max(int nb, int nb_buf)
{
    if (nb == -2147483648)
        my_putchar('8');
    else
        my_putchar(nb_buf + 48);
}

int my_put_nbr(int nb)
{
    int length;
    int nb_buf = nb;
    char c;

    if (nb_buf < 0) {
        nb_buf = nb_buf == -2147483648 ? (nb_buf + 1) * -1 : nb_buf * -1;
        my_putchar('-');
    }
    length = my_nblen(nb_buf);
    while (nb_buf >= 10) {
        c = nb_buf / my_pow(10, length - 1);
        my_putchar(c + 48);
        nb_buf = nb_buf - c * my_pow(10, length - 1);
        length--;
        length = compensate_length(nb_buf, length);
    }
    put_if_int_max(nb, nb_buf);
    return 0;
}
