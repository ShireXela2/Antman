/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** my_free_array
*/

#include <stdlib.h>

void my_free_array(char **arr)
{
    for (int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}
