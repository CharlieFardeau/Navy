/*
** EPITECH PROJECT, 2019
** printf
** File description:
** putchar
*/

#include <zconf.h>

int my_putchar(char c)
{
    write(1, &c, 1);
    return 1;
}