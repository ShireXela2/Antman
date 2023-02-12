/*
** EPITECH PROJECT, 2022
** Day04
** File description:
** my_strlen
*/

unsigned int my_strlen(char const *str)
{
    unsigned int i = 0;

    for (; str[i] != '\0'; i++);
    return i;
}
