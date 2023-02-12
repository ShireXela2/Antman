/*
** EPITECH PROJECT, 2023
** Giantman
** File description:
** create_tree
*/

#include "my.h"
#include "giantman.h"

node_t *create_tree(char const *content, int *offset)
{
    list_t *list = get_nodes(content, offset);

    if (list == NULL)
        return NULL;
    while (list_len(list) > 1) {
        bubblesort(list);
        merge_nodes(&list);
    }
    return (node_t *)list->data;
}
