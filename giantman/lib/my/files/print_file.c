/*
** EPITECH PROJECT, 2023
** Project
** File description:
** print_file
*/

#include "../my.h"

int print_file(char const *filepath)
{
    char *content = get_file_content(filepath);

    if (content == NULL)
        return 84;
    my_putstr(content);
    return 0;
}
