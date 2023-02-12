/*
** EPITECH PROJECT, 2022
** Day08
** File description:
** my_show_word_array
*/

#include "../my.h"

void my_show_word_array(char *const *tab)
{
    int length = my_arraylen(tab);

    for (int i = 0; i < length; i++) {
        my_putstr(tab[i]);
        my_putchar('\n');
    }
}
