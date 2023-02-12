/*
** EPITECH PROJECT, 2023
** Project
** File description:
** list_allocation
*/

#include "../my.h"
#include <stdlib.h>

list_t *list_create(void)
{
    list_t *list = malloc(sizeof(list_t));

    list->data = NULL;
    list->next = NULL;
    list->previous = NULL;
    return list;
}

list_t *element_create(void *data)
{
    list_t *element = malloc(sizeof(list_t));

    element->data = data;
    element->next = NULL;
    element->previous = NULL;
    return element;
}

list_t *element_create_to_list_end(list_t *list, void *data)
{
    list_t *element;

    if (list_start(list)->data == NULL) {
        list_start(list)->data = data;
        return list_start(list);
    }
    element = element_create(data);
    element->previous = list_end(list);
    element->previous->next = element;
    return element;
}

list_t *element_create_to_list_start(list_t *list, void *data)
{
    list_t *element = element_create(data);

    element->next = list_start(list);
    element->next->previous = element;
    return element;
}
