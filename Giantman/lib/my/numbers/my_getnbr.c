/*
** EPITECH PROJECT, 2022
** Day04
** File description:
** my_getnbr
*/

#include "../my.h"

int get_sign(char const *str, int *index)
{
    int sign = 1;

    for (; str[*index] == '+' || str[*index] == '-'; (*index)++) {
        if (str[*index] == '-')
            sign *= -1;
    }
    return sign;
}

int is_integer(unsigned int nb, int sign, int n_digit)
{
    nb = nb * 10 + n_digit;
    if (nb > 2147483647 && sign == 1)
        return 1;
    if (nb > 2147483648 && sign == -1)
        return 1;
    return 0;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = get_sign(str, &i);
    int nb = 0;

    if (str[i] > '9' || str[i] < '0')
        return 0;
    nb += str[i++] - '0';
    for (; str[i] <= '9' && str[i] >= '0'; i++) {
        if (is_integer(nb, sign, str[i] - '0') == 1)
            return 0;
        nb *= 10;
        nb += str[i] - '0';
    }
    nb *= sign;
    return nb;
}
