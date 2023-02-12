/*
** EPITECH PROJECT, 2023
** Project
** File description:
** node
*/

#include <stdlib.h>
#include "giantman.h"

/// @brief Creates a node with given character and occurences, and its type.
/// @param c Character to store in the node.
/// @param occurrences Number of times the character appears.
/// @param type Type of the node (Branch of Leaf).
/// @return The newly created node.
node_t *node_create(char c, unsigned int occurrences, enum type type)
{
    node_t *node = malloc(sizeof(node_t));

    node->c = c;
    node->occurrences = occurrences;
    node->type = type;
    node->path = NULL;
    node->left = NULL;
    node->right = NULL;
    return node;
}
