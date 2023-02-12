/*
** EPITECH PROJECT, 2022
** convert_base
** File description:
** convert a decimal nb into any form
*/

#include "my.h"
#include "antman.h"

int get_char_decimal(char c, int base)
{
    char digits[95] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijkl\
mnopqrstuvwxyz{|}~!#$%&'()*+,-./;<=>?@ \t";
    int i = 0;
    while (c != digits[i] && i < my_strlen(digits)) {
        i++;
    }
    return i;
}

int convert_to_decimal(char *big_nb_str, int base)
{
    int total = 0;
    my_revstr(big_nb_str);
    for (int i = 0; i < my_strlen(big_nb_str); i++) {
        total += get_char_decimal(big_nb_str[i], HIGHEST_BASE) * POWER(base, i);
    }
    my_revstr(big_nb_str);
    return total;
}
