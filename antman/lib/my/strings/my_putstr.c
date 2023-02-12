/*
** EPITECH PROJECT, 2022
** Day04
** File description:
** my_putstr
*/

#include "../my.h"
#include <unistd.h>

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
