/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** my_array_len
*/

#include "../my.h"

int my_arraylen(char *const *array)
{
    int i = 0;

    for (; array[i] != NULL; i++);
    return i;
}
