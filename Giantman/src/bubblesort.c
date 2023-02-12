/*
** EPITECH PROJECT, 2023
** AntmanGiantman
** File description:
** bubblesort
*/

#include "my.h"
#include "giantman.h"

int one_browse(list_t *list)
{
    int swap = 0;
    while (list->next != NULL) {
        if (((node_t *)list->data)->occurrences >
        ((node_t *)list->next->data)->occurrences) {
            swap_elements(list, list->next);
            swap++;
        }
        list = list->next;
    }
    return swap;
}

void bubblesort(list_t *list)
{
    if (list == NULL)
        return;
    while (one_browse(list));
}
