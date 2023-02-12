/*
** EPITECH PROJECT, 2023
** AntmanGiantman
** File description:
** get_frequencies
*/

#include "antman.h"
#include <stdlib.h>
#include <sys/stat.h>

bool_t is_char_in_list(list_t *list, char c)
{
    while (list != NULL) {
        node_t *node = (node_t *)list->data;
        if (node != NULL && node->c == c) {
            node->occurrences += 1;
            return TRUE;
        }
        list = list->next;
    }
    return FALSE;
}

list_t *get_frequencies(char *content, const char *file_path)
{
    list_t *frequencies = list_create();
    struct stat sb;
    unsigned int content_len = my_strlen(content);

    stat(file_path, &sb);
    for (int i = 0; i < content_len; i++) {
        if (!is_char_in_list(frequencies, content[i])) {
            element_create_to_list_end(frequencies, create_node(content[i],
            1, LEAF));
        }
    }

    return frequencies;
}
