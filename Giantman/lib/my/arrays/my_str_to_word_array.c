/*
** EPITECH PROJECT, 2022
** Day08
** File description:
** my_str_to_word_array
*/

#include "../my.h"
#include <stdlib.h>

static int my_char_isalphanum(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
    || (c >= '0' && c <= '9'))
        return TRUE;
    return FALSE;
}

static int count_words(char const *str)
{
    int i = 0;
    int word_count = 0;

    if (my_char_isalphanum(str[0]) == FALSE)
        i++;
    for (; str[i] != '\0'; i++) {
        if (my_char_isalphanum(str[i]) == FALSE && str[i - 1] &&
        my_char_isalphanum(str[i - 1]) == FALSE)
            continue;
        if (my_char_isalphanum(str[i]) == FALSE)
            word_count++;
    }
    if (my_char_isalphanum(str[i - 1]) == TRUE)
        word_count++;
    return word_count;
}

static void put_word_in_array(char const *str, char **array, int *arr_index,
int *str_index)
{
    int i = 0;

    for (; my_char_isalphanum(str[*str_index]) == FALSE; (*str_index)++);
    for (; my_char_isalphanum(str[*str_index + i]) == TRUE; i++);
    array[*arr_index] = malloc(sizeof(char) * (i + 1));
    my_strncpy(array[*arr_index], str + *str_index, i);
    (*str_index) += i;
}

char **my_str_to_word_array(char const *str)
{
    int word_count = count_words(str);
    char **array = malloc(sizeof(char *) * (word_count + 1));
    int str_index = 0;

    if (my_strlen(str) == 0)
        return array;
    array[word_count] = NULL;
    for (int i = 0; i < word_count; i++) {
        put_word_in_array(str, array, &i, &str_index);
    }
    return array;
}
