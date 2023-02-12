/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** print_types
*/

#include <unistd.h>
#include "../my.h"

int print_str(char const *str)
{
    int printed = my_strlen(str);

    my_putstr(str);
    return printed;
}

int print_nb(int nb)
{
    int printed = my_nblen(nb);

    my_put_nbr(nb);
    return printed;
}

int print_char(char c)
{
    return write(1, &c, 1);
}
