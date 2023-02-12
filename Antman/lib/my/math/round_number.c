/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** round_number
*/

int round_number(double nb)
{
    return nb < 0 ? nb - 0.5 : nb + 0.5;
}
