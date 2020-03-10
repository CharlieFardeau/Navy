/*
** EPITECH PROJECT, 2020
** error_map
** File description:
** error_map
*/

#include "my.h"

int check_same(char **map, int n, char *str)
{
    if (n == 11)
        return 0;
    for (int i = n + 1; map[i] != NULL; i++) {
        if (my_strcmp(map[i], str) == 0)
            return -1;
    }
    return 0;
}

int check_if_same(char **map)
{
    int n = 0;

    for (int i = 1; map[i] != NULL; i += 2) {
        if (n == 3)
            break;
        if (check_same(map, i, map[i]) == -1)
            return -1;
        i++;
        if (check_same(map, i, map[i]) == -1)
            return -1;
        n++;
    }
    return 0;
}

int checkone(char **map, int i, int size)
{
    int u = 0;
    int y = 0;

    if (map[i][1] > map[i + 1][1])
        u = 1;
    else
        u = 2;
    for (; map[i][1] != map[i + 1][1]; y++) {
        if (u == 1)
            map[i][1]--;
        else
            map[i][1]++;
    }
    if (y != size - 1)
        return -1;
    return 0;
}

int checktwo(char **map, int i, int size)
{
    int u = 0;
    int y = 0;

    if (map[i][0] > map[i + 1][0])
        u = 1;
    else
        u = 2;
    for (; map[i][0] != map[i + 1][0]; y++) {
        if (u == 1)
            map[i][0]--;
        else
            map[i][0]++;
    }
    if (y != size - 1)
        return -1;
    return 0;
}

int check_posnsize(char **map)
{
    int size = 0;
    int u = 1;

    for (int i = 0; map[i] != NULL; i += 2) {
        size = my_atoi(map[i]);
        i++;
        u = 1;
        if (map[i][0] == map[i + 1][0])
            u = checkone(map, i, size);
        else if (map[i][1] == map[i + 1][1])
            u = checktwo(map, i, size);
        if (u != 0)
            return -1;
    }
    return 0;
}
