/*
** EPITECH PROJECT, 2023
** Antman
** File description:
** write_compressed_file
*/

#include "my.h"
#include "antman.h"
#include <stdlib.h>

char *path_of_char(char c, list_t *paths)
{
    path_list_t *path_list_element = (path_list_t *)paths->data;
    for (; path_list_element->c != c && paths != NULL; paths = paths->next) {
        path_list_element = (path_list_t *)paths->data;
    }
    return path_list_element->path;
}

void write_char_from_bit(char bit)
{
    static int bit_nb = 0;
    static char bits = 0;

    bit_nb++;
    if (bit == '1')
        bits += 1;
    if (bit_nb >= 8) {
        my_putchar(bits);
        bit_nb = 0;
        bits = 0;
        return;
    }
    bits = bits << 1;
}

void write_path(char *path)
{
    for (int i = 0; i < my_strlen(path); i++) {
        write_char_from_bit(path[i]);
    }
}

void write_compressed_file(char *content, list_t *paths)
{
    char *path;
    int bits_printed_len = 0;
    char last_digit_nb;

    my_putstr("\n\n");
    for (int i = 0; content[i] != '\0'; i++) {
        path = path_of_char(content[i], paths);
        bits_printed_len += my_strlen(path);
        write_path(path);
    }
    last_digit_nb = 8 - bits_printed_len % 8;
    last_digit_nb %= 8;
    for (int i = 0; i < last_digit_nb; i++)
        write_char_from_bit('0');
}
