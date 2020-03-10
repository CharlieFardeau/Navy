/*
** EPITECH PROJECT, 2020
** navy
** File description:
** find which command has been send
*/

#include "my.h"

char **find_me(int nb, int nb2, char **map)
{
    char c = 'A';
    int i = 1;

    for (; i != nb; i++, c++);
    print("%c%d: ", c, nb2);
    if (map[nb2 + 1][i * 2] != '.' && map[nb2 + 1][i * 2] != 'o') {
        map[nb2 + 1][i * 2] = 'x';
        signal_a_send(3);
        print("hit\n\n");
    } else {
        map[nb2 + 1][i * 2] = 'o';
        signal_a_send(7);
        print("missed\n\n");
    }
    return map;
}

int whatis(char c)
{
    int i = 0;
    char x = 'A' - 1;

    for (; x != c; x++, i++);
    return i;
}

int whatis2(char c)
{
    int i = 0;
    char x = '1' - 1;

    for (; x != c; x++, i++);
    return i;
}