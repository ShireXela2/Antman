/*
** EPITECH PROJECT, 2022
** my_printf
** File description:
** e_flag
*/

#include "../my.h"

union nb_buffer {
    float f;
    int i;
};

static int get_exponent(double *nb)
{
    int exponent = 0;

    for (exponent; (*nb) >= 10.0 || (*nb) <= -10.0; exponent++, (*nb) /= 10);
    for (exponent; (*nb) < 1.0 && (*nb) > -1.0; exponent--, (*nb) *= 10);
    return exponent;
}

void g_flag(double nb, unsigned int precision, int *printed)
{
    double nb_cpy = nb;
    int exponent = get_exponent(&nb_cpy);
    float fractional = ABS((nb - (int)nb) * POWER(10, precision));
    unsigned int to_print;

    precision = precision == 0 ? 1 : precision;
    for (int i = 0; i < precision; i++, fractional /= 10)
        if (fractional / 10 * 10 != (int)fractional / 10 * 10) {
            to_print = precision - i;
            break;
        }
    if (exponent < -4 || exponent >= (int)precision) {
        e_flag(nb, precision - 1, printed);
    } else {
        my_printf("exponent: %d\n", exponent);
        to_print -= to_print >= 6 ? my_nblen(ABS((int)nb)) : 0;
        to_print = my_nblen(ABS((int)nb)) >= 6 ? 0 : to_print;
        f_flag(nb, to_print, printed);
    }
}

void f_flag(double nb, unsigned int precision, int *printed)
{
    int decimal;
    union nb_buffer buff;

    if (nb == 0.0) {
        buff.f = nb;
        (*printed) += buff.i >> 31 < 0 ? print_char('-') : 0;
        (*printed) += print_str("0.");
        for (int i = 0; i < precision; i++)
            (*printed) += print_char('0');
        return;
    }
    (*printed) += nb < 0.0 ? print_char('-') : 0;
    if (precision == 0) {
        (*printed) += print_nb(ABS(round_number(nb)));
        return;
    }
    (*printed) += print_nb(ABS((int)nb));
    (*printed) += print_char('.');
    decimal = ABS(round_number((nb - (int)nb) * POWER(10, precision)));
    (*printed) += print_nb(decimal);
}

static bool_t e_flag_is_zero(double nb, unsigned int precision, int *printed)
{
    union nb_buffer buffer;

    if (nb != 0.0)
        return FALSE;
    buffer.f = nb;
    buffer.i = buffer.i >> 31;
    if (buffer.i < 0)
        (*printed) += print_char('-');
    (*printed) += print_str("0.");
    for (int i = 0; i < precision; i++)
        (*printed) += print_char('0');
    (*printed) += print_str("e+00");
    return TRUE;
}

void e_flag(double nb, unsigned int precision, int *printed)
{
    int exponent = 0;
    int integral = 0;

    if (e_flag_is_zero(nb, precision, printed) == TRUE)
        return;
    exponent = get_exponent(&nb);
    integral = (int)nb;
    (*printed) += integral < 0.0 ? print_char('-') : 0;
    integral = ABS(integral);
    (*printed) += print_nb(integral);
    (*printed) += precision > 0 ? print_char('.') : 0;
    integral = ABS(round_number((nb - (int)nb) * POWER(10, precision)));
    print_nb(integral);
    for (int i = my_nblen(integral); i < precision; i++)
        (*printed) += print_char('0');
    (*printed) += my_printf("e%c", exponent < 0 ? '-' : '+');
    (*printed) += (ABS(exponent)) < 10 ? print_char('0') : 0;
    (*printed) += print_nb(ABS(exponent));
}
