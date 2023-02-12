/*
** EPITECH PROJECT, 2023
** Project
** File description:
** get_chars_in_tree
*/

#include "giantman.h"
#include "my.h"

char get_char_from_bits(char *str, unsigned int *index, node_t **ptr)
{
    for (; (*ptr)->type == BRANCH; (*index)++) {
        if ((str[*index / 8] >> (7 - (*index % 8))) & 1 == 1) {
            *ptr = (*ptr)->right;
        } else {
            *ptr = (*ptr)->left;
        }
    }
    return (*ptr)->c;
}

void get_chars_in_tree(char *content, node_t *tree)
{
    node_t *ptr = tree;
    char to_print;
    unsigned int printed = 0;

    for (int i = 0; printed < tree->occurrences; printed++) {
        to_print = get_char_from_bits(content, &i, &ptr);
        my_putchar(to_print);
        ptr = tree;
    }
}
