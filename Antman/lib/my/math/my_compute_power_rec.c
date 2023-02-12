/*
** EPITECH PROJECT, 2022
** Day05
** File description:
** my_compute_power_rec
*/

static int is_integer(long long result, int nb)
{
    result *= nb;
    if (result > 2147483647)
        return 1;
    return 0;
}

int my_compute_power_rec(int nb, int p)
{
    int result = nb;

    if (p > 174564 || p < 0)
        return 0;
    if (p == 0)
        return 1;
    if (p == 1)
        return result;
    if (p > 2)
        result = my_compute_power_rec(nb, p - 1);
    if (is_integer(result, nb) == 1)
        return 0;
    result *= nb;
    return result;
}
