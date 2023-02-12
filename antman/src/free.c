/*
** EPITECH PROJECT, 2023
** Antman
** File description:
** free
*/

#include "my.h"
#include "antman.h"
#include <stdlib.h>

void free_tree_paths(node_t *tree)
{
    if (tree == NULL)
        return;
    free_tree_paths(tree->left);
    free_tree_paths(tree->right);
    if (tree->path != NULL)
        free(tree->path);
    free(tree);
}

void free_all(node_t *tree, list_t *paths, list_t *frequencies, char *content)
{
    free(content);
    free(frequencies);
    free_tree_paths(tree);
    list_destroy(paths, free);
}
