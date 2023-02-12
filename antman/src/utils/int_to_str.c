/*
** EPITECH PROJECT, 2023
** Antman
** File description:
** int_to_str
*/

#include "my.h"
#include <stdlib.h>

void my_strcat_char(char *dest, const char c)
{
    int dest_len = my_strlen(dest);

    dest[dest_len] = c;
    dest[dest_len + 1] = '\0';
}

void my_strcat_int(int nb, char *str)
{
    if (nb < 0) {
        my_strcat_char(str, '-');
        nb = -nb;
    }
    if (nb / 10)
        my_strcat_int(nb / 10, str);
    my_strcat_char(str, nb % 10 + '0');
}

char *int_to_str(char *str, int number)
{
    str[0] = '\0';
    int nb_len = my_nblen(number);
    my_strcat_int(number, str);
    str[nb_len] = '\0';
    return str;
}
