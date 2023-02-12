/*
** EPITECH PROJECT, 2023
** Antman
** File description:
** put_occurrences_in_file
*/

#include "my.h"
#include "antman.h"
#include <stdlib.h>

void print_occurrences(list_t *frequencies)
{
    node_t *frequency;
    char *number_str = malloc(sizeof(char) * DIGIT_BUFFER_LEN);
    for (; frequencies != NULL; frequencies = frequencies->next) {
        frequency = ((node_t *)frequencies->data);
        convert_big_base(number_str, frequency->occurrences, HIGHEST_BASE);
        if (frequency->c)
            my_putchar(frequency->c);
        my_putstr(number_str);
        my_putchar(':');
    }
    free(number_str);
}
