/*
** EPITECH PROJECT, 2023
** Antman
** File description:
** create_paths
*/

#include "my.h"
#include "giantman.h"
#include <stdlib.h>

static path_list_t *create_path(char c, char *path_str)
{
    path_list_t *path = malloc(sizeof(path_list_t));
    path->c = c;
    path->path = path_str;
    return path;
}

static char *create_path_string(const char *path, char *next)
{
    char *new_path = malloc(sizeof(char) * my_strlen(path) + 2);
    new_path[0] = '\0';
    my_strcat(new_path, path);
    my_strcat(new_path, next);
    return new_path;
}

static void create_path_list(node_t *tree, char *path, list_t *paths)
{
    if (tree == NULL) {
        free(path);
        return;
    }
    tree->path = path;
    char *left_path = create_path_string(path, "0");
    char *right_path = create_path_string(path, "1");
    create_path_list(tree->left, left_path, paths);
    create_path_list(tree->right, right_path, paths);
    if (tree->type == LEAF) {
        element_create_to_list_end(paths, create_path(tree->c, path));
    }
}

list_t *create_paths(node_t *tree)
{
    list_t *paths = list_create();
    char *path = malloc(sizeof(char));
    path[0] = '\0';
    create_path_list(tree, path, paths);
    return paths;
}
