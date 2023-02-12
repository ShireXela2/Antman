/*
** EPITECH PROJECT, 2022
** Day04
** File description:
** my_sort_int_array
*/

#include "../my.h"

static void sia_swap_list(int *a, int *b, unsigned int *exchanges)
{
    my_swap(a, b);
    (*exchanges)++;
}

void my_sort_int_array(int *array, int size)
{
    int *first;
    int *second;
    unsigned int exchanges = 1;
    unsigned int last_exc = 1;

    if (size == 1)
        return;
    first = &array[0];
    second = &array[1];
    for (int i = 0; last_exc != 0; i++) {
        if (*first > *second)
            sia_swap_list(first, second, &exchanges);
        if (i + 1 >= size) {
            i = 0;
            last_exc = exchanges;
            exchanges = 0;
        }
        first = &array[i];
        second = &array[i + 1];
    }
}
