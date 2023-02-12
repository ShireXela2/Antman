/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** convert_base
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../my.h"

static unsigned int determine_result_len(long long nb,
unsigned int base_length)
{
    unsigned int length = 1;

    if (nb / base_length > 0) {
        nb /= base_length;
        length += determine_result_len(nb, base_length);
    }
    return length;
}

char *convert_base(long long nb, char *base)
{
    unsigned int base_length = my_strlen(base);
    unsigned int result_len = determine_result_len(nb, base_length);
    unsigned int max_length = my_strcmp(base, BASE_2) == 0 ? 32 : result_len;
    char *result = malloc(sizeof(char) * (result_len + 1));

    result[result_len] = '\0';
    for (int i = 0; i < result_len; i++) {
        result[max_length - (i + 1)] = base[nb % base_length];
        nb /= base_length;
    }
    for (int i = 0; i < max_length - result_len; i++)
        result[i] = '0';
    return result;
}

static bool_t get_conversion(va_list *args, char const flag, char **result)
{
    switch (flag) {
        case 'b':
            *result = convert_base(va_arg(*args, uint_t), BASE_2);
            return TRUE;
        case 'o':
            *result = convert_base(va_arg(*args, uint_t), BASE_8);
            return TRUE;
        case 'u':
            *result = convert_base(va_arg(*args, uint_t), BASE_10);
            return TRUE;
        case 'x':
            *result = convert_base(va_arg(*args, uint_t), BASE_16_LOW);
            return TRUE;
        case 'X':
            *result = convert_base(va_arg(*args, uint_t), BASE_16_UP);
            return TRUE;
        default:
            return FALSE;
    }
}

bool_t print_convert_base(va_list *args, char const flag, int *printed)
{
    char *result;

    if (get_conversion(args, flag, &result) == FALSE)
        return FALSE;
    (*printed) += print_str(result);
    free(result);
    return TRUE;
}
