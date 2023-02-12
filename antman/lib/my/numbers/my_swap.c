/*
** EPITECH PROJECT, 2022
** Day04
** File description:
** my_swap
*/

void my_swap(int *a, int *b)
{
    int temp = *a;

    *a = *b;
    *b = temp;
}
