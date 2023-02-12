/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_nblen
*/

int my_nblen(int nb)
{
    int length = 1;

    while (nb >= 10) {
        nb /= 10;
        length++;
    }
    return length;
}
