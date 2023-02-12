/*
** EPITECH PROJECT, 2022
** Day06
** File description:
** my_revstr
*/

#include "../my.h"

char *my_revstr(char *str)
{
    int length = my_strlen(str) - 1;
    char buffer[length];
    int i = 0;
    int j = length;

    for (i = 0; i <= length && j >= 0; i++, j--)
        buffer[i] = str[j];
    buffer[i] = '\0';
    my_strcpy(str, buffer);
    return str;
}
