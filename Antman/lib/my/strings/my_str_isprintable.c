/*
** EPITECH PROJECT, 2022
** Day06
** File description:
** my_str_isprintable
*/

#include "../my.h"

int my_str_isprintable(char const *str)
{
    if (my_strlen(str) == 1)
        return 1;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] <= 31 || str[i] == 127)
            return 0;
    return 1;
}
