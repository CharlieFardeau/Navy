/*
** EPITECH PROJECT, 2020
** navy
** File description:
** put boat in map
*/

#include "my.h"

int error_placement(char **map, int x, int y)
{
    if (map[y + 1][x * 2] != '.')
        return 84;
    return 0;
}

char **place_boat(char **map, int x, int y, int nb)
{
    char c = nb + 48;

    map[y + 1][x * 2] = c;
    return map;
}

int nb_boat(char **map)
{
    int i = 0;
    for (int c = 2; c != 10; c++)
        for (int x = 2; x != 18; x++)
            if (map[c][x] == '.')
                i++;
    return i;
}

void check_coord(char *const *file, int i)
{
    if (file[i][0] > file[i + 1][0])
        file[i][0]--;
    else if (file[i][0] < file[i + 1][0])
        file[i][0]++;
    if (file[i][1] < file[i + 1][1])
        file[i][1]++;
    else if (file[i][1] > file[i + 1][1])
        file[i][1]--;
}

char **put_in_map(char **file, char **map)
{
    int x = 0;
    int y = 0;
    int nb = 2;

    for (int i = 1; nb_boat(map) != 50; i += 3) {
        x = whatis(file[i][0]);
        y = file[i][1] - 48;
        while (file[i][0] != file[i + 1][0] || file[i][1] != file[i + 1][1]) {
            if (error_placement(map, x, y) == 84)
                return NULL;
            place_boat(map, x, y, nb);
            check_coord(file, i);
            x = whatis(file[i][0]);
            y = file[i][1] - 48;
        }
        place_boat(map, x, y, nb);
        nb++;
    }
    return map;
}