/*
** EPITECH PROJECT, 2022
** Day05
** File description:
** my_compute_square_root
*/

static int can_substract(int nb, int to_substract)
{
    if (to_substract > nb)
        return 1;
    return 0;
}

int my_compute_square_root(int nb)
{
    int result = 0;

    for (int i = 0; nb > 0; i++, result++) {
        if (can_substract(nb, 1 + result * 2) == 1)
            return 0;
        nb -= (1 + result * 2);
    }
    return result;
}
