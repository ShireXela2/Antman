/*
** EPITECH PROJECT, 2022
** Day05
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    if (nb <= 1)
        return 0;
    for (int i = 1; i <= nb; i++) {
        if (nb % i == 0 && (i != nb && i != 1))
            return 0;
    }
    return 1;
}
