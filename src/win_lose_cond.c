/*
** EPITECH PROJECT, 2020
** navy
** File description:
** win or lose condition
*/

#include "my.h"

int win_lose_cond(char **map1, char **map2)
{
    int i = 0;

    for (int c = 2; c != 10; c++)
        for (int j = 2; j != 17; j++)
            if (map1[c][j] == 'x')
                i++;
    if (i > 13)
        return 0;
    else
        i = 0;
    for (int c = 2; c != 10; c++)
        for (int j = 2; j != 17; j++)
            if (map2[c][j] == 'x')
                i++;
    if (i > 13)
        return 0;
    return 1;
}