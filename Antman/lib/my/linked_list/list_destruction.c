/*
** EPITECH PROJECT, 2023
** MyRadar
** File description:
** list_destruction
*/

#include "../my.h"
#include <stdlib.h>

void element_destroy(list_t **element, void destroy_ptr(void *))
{
    list_t *cpy = *element;

    if (cpy == NULL)
        return;
    if (cpy->previous != NULL)
        cpy->previous->next = cpy->next;
    if (cpy->next != NULL)
        cpy->next->previous = cpy->previous;
    if (destroy_ptr != NULL && cpy->data != NULL)
        destroy_ptr(cpy->data);
    if ((*element)->next != NULL)
        (*element) = (*element)->next;
    else if ((*element)->previous != NULL)
        (*element) = (*element)->previous;
    else
        (*element) = NULL;
    free(cpy);
}

void list_destroy(list_t *list, void destroy_ptr(void *))
{
    list = list_start(list);
    while (list != NULL) {
        element_destroy(&list, destroy_ptr);
    }
}
