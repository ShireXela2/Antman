/*
** EPITECH PROJECT, 2023
** Project
** File description:
** list_manipulation
*/

#include "../my.h"

list_t *list_end(list_t *list)
{
    if (!list || list == NULL)
        return NULL;
    for (; list->next != NULL; list = list->next);
    return list;
}

list_t *list_start(list_t *list)
{
    if (!list || list == NULL)
        return NULL;
    for (; list->previous != NULL; list = list->previous);
    return list;
}

int list_len(list_t *list)
{
    int count = 0;
    while (list != NULL) {
        list = list->next;
        count++;
    }
    return count;
}

void swap_list(list_t **src, list_t **dest)
{
    list_t *src_ptr = *src;

    if (src_ptr->next != NULL)
        (*src)->next->previous = (*src)->previous;
    if (src_ptr->previous != NULL)
        (*src)->previous->next = (*src)->next;
    if ((*src)->next != NULL)
        (*src) = (*src)->next;
    else
        (*src) = (*src)->previous;
    src_ptr->next = NULL;
    src_ptr->previous = NULL;
    if ((*dest) == NULL) {
        (*dest) = src_ptr;
    } else {
        src_ptr->previous = list_end(*dest);
        src_ptr->previous->next = src_ptr;
    }
}

void swap_elements(list_t *first_element, list_t *second_element)
{
    void *temp = first_element->data;
    first_element->data = second_element->data;
    second_element->data = temp;
}
