/*
** EPITECH PROJECT, 2022
** Day06
** File description:
** my_str_islower
*/

#include "../my.h"

int my_str_islower(char const *str)
{
    if (my_strlen(str) == 1)
        return 1;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < 'a' || str[i] > 'z')
            return 0;
    return 1;
}
