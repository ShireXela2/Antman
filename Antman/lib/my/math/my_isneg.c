/*
** EPITECH PROJECT, 2022
** Day03
** File description:
** my_isneg
*/

#include "../my.h"

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return 0;
}
