/*
** EPITECH PROJECT, 2019
** printf
** File description:
** put unsigned
*/

#include "my.h"

int my_put_nbr_unsigned(unsigned int nb)
{
    int i = 0;
    while (nb > 0) {
        if (nb >= 10)
            i += my_put_nbr_unsigned(nb / 10);
        i += my_putchar((nb % 10) + 48);
        return i;
    }
    if (nb == 0)
        i += my_putchar('0');
    return i;
}
