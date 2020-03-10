/*
** EPITECH PROJECT, 2019
** printf
** File description:
** basic flag2
*/

#include "my.h"
#include <stdarg.h>

int flag_b(va_list ap)
{
    int i = my_put_nbr_binair(va_arg(ap, int));

    return i;
}

int flag_o(va_list ap)
{
    int i = my_put_nbr_octal(va_arg(ap, int));

    return i;
}

int flag_percent(void)
{
    int i = my_putchar('%');

    return i;
}

int flag_u(va_list ap)
{
    int i = my_put_nbr_unsigned(va_arg(ap, unsigned int));

    return i;
}

int flag_p(va_list ap)
{
    int i = my_putstr("0x");

    i += my_put_nbr_hexa_min(va_arg(ap , int));
    return i;
}