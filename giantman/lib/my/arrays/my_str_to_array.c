/*
** EPITECH PROJECT, 2022
** Lib
** File description:
** my_str_to_array
*/

#include "../my.h"
#include <stdlib.h>

static int count_elements(char const *str, char separator)
{
    int i = 0;
    int element_count = 0;

    if (str[0] == separator)
        i++;
    for (; str[i] != '\0'; i++) {
        if (str[i] == separator && str[i - 1] && str[i - 1] == separator)
            continue;
        if (str[i] == separator)
            element_count++;
    }
    if (str[i - 1] != separator)
        element_count++;
    return element_count;
}

static char *put_element_in_array(char const *str, char **array, int *str_index,
char separator)
{
    int i = 0;
    char *element;

    for (; str[*str_index] == separator; (*str_index)++);
    for (; str[*str_index + i] != separator; i++);
    element = malloc(sizeof(char) * (i + 1));
    my_strncpy(element, str + (*str_index), i);
    element[i] = '\0';
    (*str_index) += i;
    return element;
}

char **my_str_to_array(char const *str, char separator)
{
    int element_count = count_elements(str, separator);
    char **array = malloc(sizeof(char *) * (element_count + 1));
    int str_index = 0;

    if (my_strlen(str) == 0)
        return array;
    array[element_count] = NULL;
    for (int i = 0; i < element_count; i++) {
        array[i] = put_element_in_array(str, array, &str_index, separator);
    }
    return array;
}
