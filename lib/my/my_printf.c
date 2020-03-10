/*
** EPITECH PROJECT, 2019
** printf
** File description:
** same as a printf in c
*/

#include <stdarg.h>
#include "my.h"

int check_flag(const char *str, int i)
{
    int j;
    char tab[] = {'s', 'c', 'd', 'i', 'b', 'o', 'x',
        'X', '%', 'u', 'p', 0};

    for (j = 0; tab[j]; j++)
        if (tab[j] == str[i + 1]) {
            return j;
        }
    return (j + 1);
}

int check(const char *str, int *i)
{
    int index = 0;

    for (; str[*i + 1] == ' '; (*i)++);
    index = check_flag(str, *i);
    return index;
}

int print(char *str, ...)
{
    va_list ap;
    int (*ptfc[])() = {&flag_s, &flag_c, &flag_di, &flag_di, &flag_b, &flag_o,
        &flag_x, &flag_x_maj, &flag_percent, &flag_u, &flag_p, 0};
    int c = 0;
    int index = 0;

    va_start(ap, str);
    for (int i = 0; str[i]; ++i) {
        if (str[i] == '%') {
            index = check(str, &i);
            c += (*ptfc[index])(ap);
            i++;
        } else
            c += my_putchar(str[i]);
    }
    va_end(ap);
    return c;
}
