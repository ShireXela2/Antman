/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** get_flags
*/

#include <stdarg.h>
#include <stdlib.h>
#include "../my.h"

bool_t get_f_conversion(char flag, int precision, int *printed,
va_list *args)
{
    switch (flag) {
        case 'e':
        case 'E':
            e_flag(va_arg(*args, double), precision, printed);
            return TRUE;
        case 'f':
        case 'F':
            f_flag(va_arg(*args, double), precision, printed);
            return TRUE;
        case 'g':
        case 'G':
            g_flag(va_arg(*args, double), precision, printed);
            return TRUE;
        default:
            return FALSE;
    }
}

bool_t get_basic_flags(char const flag, va_list *args, int *printed)
{
    switch (flag) {
        case 'i':
        case 'd':
            (*printed) += print_nb(va_arg(*args, int));
            return TRUE;
        case 's':
            (*printed) += print_str(va_arg(*args, char *));
            return TRUE;
        case 'c':
            (*printed) += print_char(va_arg(*args, int));
            return TRUE;
        case '%':
            (*printed) += print_char('%');
            return TRUE;
        default:
            return FALSE;
    }
}

void get_flags(char const *format, int i, va_list *args, int *printed)
{
    int precision = 6;

    if (get_basic_flags(format[i], args, printed) == TRUE)
        return;
    if (get_f_conversion(format[i], precision, printed, args) == TRUE)
        return;
    if (print_convert_base(args, format[i], printed) == TRUE)
        return;
    switch (format[i]) {
        case 'n':
            *va_arg(*args, int *) = (*printed);
            break;
        case 'p':
            my_putstr("0x");
            my_putstr(convert_base((ll_t)va_arg(*args, void *), BASE_16_LOW));
            break;
        default:
            (*printed) += my_printf("%%%c", format[i]);
            break;
    }
}
