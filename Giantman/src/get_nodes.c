/*
** EPITECH PROJECT, 2023
** Project
** File description:
** giantman
*/

#include "giantman.h"
#include "my.h"
#include <stdlib.h>

list_t *get_nodes(char const *content, int *offset)
{
    char c = 0;
    int i = *offset;
    int occurrences = 0;
    int nb_len = 0;
    node_t *node;
    list_t *list = list_create();
    list_t *head = list;
    for (; content[i] != '\n' || content[i + 1] != '\n'; i++) {
        c = content[i++];
        occurrences = convert_to_decimal(content + i, &nb_len, HIGHEST_BASE);
        if (occurrences == 0) {
            list_destroy(head, free);
            return NULL;
        }
        i += nb_len;
        node = node_create(c, occurrences, LEAF);
        element_create_to_list_end(list, node);
    }
    *offset = i;
    return head;
}
