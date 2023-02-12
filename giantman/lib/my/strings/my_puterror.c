/*
** EPITECH PROJECT, 2022
** Day10
** File description:
** my_puterror
*/

#include <unistd.h>
#include "../my.h"

int my_puterror(char *str)
{
    if (write(2, str, my_strlen(str)) == -1)
        return 84;
    return 0;
}
