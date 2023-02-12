/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "../my.h"

static void check_spaces(const char *restrict format, int *index)
{
    for (; format[(*index) + 1] == ' '; (*index)++);
}

int my_printf(const char *__restrict__ format, ...)
{
    va_list list;
    int printed = 0;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            check_spaces(format, &i);
            get_flags(format, ++i, &list, &printed);
            continue;
        }
        printed += print_char(format[i]);
    }
    va_end(list);
    return printed;
}
