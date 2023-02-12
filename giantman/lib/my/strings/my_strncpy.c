/*
** EPITECH PROJECT, 2022
** Day06
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0; i < n; i++)
        dest[i] = src[i] != '\0' ? src[i] : '\0';
    return dest;
}
