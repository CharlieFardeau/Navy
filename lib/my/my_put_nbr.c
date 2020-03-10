/*
** EPITECH PROJECT, 2019
** printf
** File description:
** putnbr
*/

#include "my.h"

int my_put_nbr_dec(int nb)
{
    int i = 0;

    if (nb < 0) {
        i += my_putchar('-');
        nb *= -1;
    }
    while (nb > 0) {
        if (nb >= 10)
            i += my_put_nbr_dec(nb / 10);
        i += my_putchar((nb % 10) + 48);
        return i;
    }
    if (nb == 0)
        i += my_putchar('0');
    return i;
}

int my_put_nbr_octal(unsigned int nb)
{
    int i = 0;

    while (nb > 0) {
        if (nb >= 8)
            i += my_put_nbr_octal(nb / 8);
        i += my_putchar((nb % 8) + 48);
        return i;
    }
    if (nb == 0)
        i += my_putchar('0');
    return i;
}

int my_put_nbr_binair(unsigned  int nb)
{
    int i = 0;

    while (nb > 0) {
        if (nb >= 2) {
            i += my_put_nbr_binair(nb / 2);
        }
        i += my_putchar((nb % 2) + 48);
        return i;
    }
    if (nb == 0)
        i += my_putchar('0');
    return i;
}

int my_put_nbr_hexa_maj(unsigned int nb)
{
    int i = 0;

    while (nb > 0) {
        if (nb >= 16)
            i += my_put_nbr_hexa_maj(nb / 16);
        if ((nb % 16 + 48) > 57)
            i += my_putchar((nb % 16) + 55);
        else
            i += my_putchar((nb % 16) + 48);
        return i;
    }
    if (nb == 0)
        i += my_putchar('0');
    return i;
}

int my_put_nbr_hexa_min(unsigned int nb)
{
    int i = 0;

    while (nb > 0) {
        if (nb >= 16)
            i += my_put_nbr_hexa_min(nb / 16);
        if ((nb % 16 + 48) > 57)
            i += my_putchar((nb % 16) + 87);
        else
            i += my_putchar((nb % 16) + 48);
        return i;
    }
    if (nb == 0)
        i += my_putchar('0');
    return i;
}
