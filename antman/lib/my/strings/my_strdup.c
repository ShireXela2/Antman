/*
** EPITECH PROJECT, 2022
** Day08
** File description:
** my_strdup
*/

#include "../my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src) + 1));

    dest[my_strlen(src)] = '\0';
    my_strcpy(dest, src);
    return dest;
}
