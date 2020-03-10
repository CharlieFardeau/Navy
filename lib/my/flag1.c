/*
** EPITECH PROJECT, 2019
** printf
** File description:
** basic flag1
*/

#include "my.h"
#include <stdarg.h>

int flag_s(va_list ap)
{
    int i = my_putstr(va_arg(ap, char *));

    return i;
}

int flag_di(va_list ap)
{
    int i = my_put_nbr_dec(va_arg(ap, int));

    return i;
}

int flag_c(va_list ap)
{
    int i = my_putchar(va_arg(ap, int));

    return i;
}

int flag_x(va_list ap)
{
    int i = my_put_nbr_hexa_min(va_arg(ap, int));

    return i;
}

int flag_x_maj(va_list ap)
{
    int i = my_put_nbr_hexa_maj(va_arg(ap, int));

    return i;
}
