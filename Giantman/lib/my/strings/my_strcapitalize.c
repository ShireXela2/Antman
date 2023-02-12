/*
** EPITECH PROJECT, 2022
** Day06
** File description:
** my_strcapitalize
*/

char *my_strcapitalize(char *str)
{
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] -= 32;
    for (int i = 1; str[i] != '\0'; i++) {
        if ((str[i - 1] == ' ' || str[i - 1] == '-' || str[i - 1] == '+') &&
        str[i] >= 'a' && str[i] <= 'z') {
            str[i] -= 32;
            continue;
        }
        if (str[i - 1] != ' ' && str[i - 1] != '-' && str[i - 1] != '+' &&
        str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
    return str;
}
