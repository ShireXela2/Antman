/*
** EPITECH PROJECT, 2022
** Day06
** File description:
** my_strcmp
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    if (!s1 || !s2)
        return 0;
    for (; s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'; i++);
    return (s1[i] - s2[i]);
}
