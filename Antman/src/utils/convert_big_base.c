/*
** EPITECH PROJECT, 2022
** convert_base
** File description:
** convert a decimal nb into any form
*/

#include "my.h"
#include "antman.h"

void convert_big_base(char *dest, unsigned long nb, int base)
{
    char digits[95] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijkl\
mnopqrstuvwxyz{|}~!#$%&'()*+,-./;<=>?@ \t";
    unsigned long temp = nb;
    int i = 0;
    int digit;
    if (temp == 0) {
        dest[0] = '0';
        i++;
    }
    while (temp > 0) {
        digit = temp % base;
        dest[i] = digits[digit];
        temp /= base;
        i++;
    }
    dest[i] = '\0';
    my_revstr(dest);
}
