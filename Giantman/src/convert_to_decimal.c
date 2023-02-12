/*
** EPITECH PROJECT, 2022
** convert_base
** File description:
** convert a decimal nb into any form
*/

#include <stdlib.h>
#include "giantman.h"

static int my_special_strlen(char const *str)
{
    int len = 0;
    for (; str[len] != ':' && str[len] != '\0'; len++);
    if (str[len] == '\0')
        return -1;
    return len;
}

static int get_char_decimal(char c, int base)
{
    char digits[95] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijkl\
mnopqrstuvwxyz{|}~!#$%&'()*+,-./;<=>?@ \t";
    int i = 0;
    while (c != digits[i] && i < my_strlen(digits)) {
        i++;
    }
    return i;
}

unsigned int convert_to_decimal(char const *big_nb_str, int *nb_len, int base)
{
    unsigned int total = 0;
    *nb_len = my_special_strlen(big_nb_str);

    if (*nb_len == -1)
        return 0;
    for (int i = *nb_len - 1; i >= 0; i--) {
        total += get_char_decimal(big_nb_str[i], HIGHEST_BASE) *
                                                POWER(base, *nb_len - i - 1);
    }
    return total;
}
