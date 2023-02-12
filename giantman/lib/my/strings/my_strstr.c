/*
** EPITECH PROJECT, 2022
** Day06
** File description:
** my_strstr
*/

#include "../my.h"

char *my_strstr(char *str, char *to_find)
{
    if (my_strlen(str) < my_strlen(to_find))
        return ((void *)0);
    if (to_find[0] == '\0')
        return str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (my_strncmp(str + i, to_find, my_strlen(to_find)) == 0)
            return (str + i);
    }
    return ((void *)0);
}
