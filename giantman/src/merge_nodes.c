/*
** EPITECH PROJECT, 2023
** AntmanGiantman
** File description:
** merge_nodes
*/

#include "my.h"
#include "giantman.h"

void merge_nodes(list_t **big_list)
{
    list_t *list = *big_list;

    int total_occurences = ((node_t *)list->data)->occurrences +
    ((node_t *)list->next->data)->occurrences;
    list_t *new_list_element = element_create_to_list_end(list, node_create('x',
    total_occurences, BRANCH));

    ((node_t *)new_list_element->data)->left = (node_t *)list->data;
    ((node_t *)new_list_element->data)->right = (node_t *)list->next->data;

    if (list->next->next == NULL)
        (*big_list) = new_list_element;
    else
        (*big_list) = list->next->next;
    element_destroy(&list, NULL);
    element_destroy(&list, NULL);
}
