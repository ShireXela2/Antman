/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** my_malloc_array
*/

#include <stdlib.h>

char **my_malloc_array(int rows, int columns)
{
    char **arr = malloc(sizeof(char *) * (rows + 1));

    arr[rows] = NULL;
    for (int i = 0; i < rows; i++) {
        arr[i] = malloc(sizeof(char) * (columns + 1));
        arr[i][columns] = '\0';
    }
    return arr;
}
