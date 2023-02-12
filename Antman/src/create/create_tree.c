/*
** EPITECH PROJECT, 2023
** AntmanGiantman
** File description:
** create_tree
*/

#include "my.h"
#include "antman.h"

node_t *create_tree(list_t **list)
{
    while (list_len(*list) > 1) {
        bubblesort(*list);
        merge_nodes(list);
    }
    return (node_t *)(*list)->data;
}
