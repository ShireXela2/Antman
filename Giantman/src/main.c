/*
** EPITECH PROJECT, 2023
** Project
** File description:
** main
*/

#include "giantman.h"
#include "my.h"

int main(int ac, char **av)
{
    if (ac != 3) {
        my_puterror("You must pass a file and a filetype (as a number) as "
                    "parameter\n");
        return 84;
    }
    if (my_getnbr(av[2]) < 1 || my_getnbr(av[2]) > 3)
        return 84;
    return giantman(av[1]);
}
