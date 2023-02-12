/*
** EPITECH PROJECT, 2023
** AntmanGiantman
** File description:
** create_node
*/

#include "antman.h"
#include <stdlib.h>

node_t *create_node(char c, int occurences, enum type type)
{
    node_t *node = malloc(sizeof(node_t));
    node->c = c;
    node->occurrences = occurences;
    node->left = NULL;
    node->right = NULL;
    node->path = NULL;
    node->type = type;
    return node;
}
