/*
** EPITECH PROJECT, 2023
** AntmanGiantman
** File description:
** create_path
*/

#include "antman.h"
#include <stdlib.h>

path_list_t *create_path(char c, char *path_str)
{
    path_list_t *path = malloc(sizeof(path_list_t));
    path->c = c;
    path->path = path_str;
    return path;
}
