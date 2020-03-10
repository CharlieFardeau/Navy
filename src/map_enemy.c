/*
** EPITECH PROJECT, 2020
** navy
** File description:
** print map of the enemy
*/

#include "my.h"

char **get_hit(char **map, char *str)
{
    int x = whatis(str[0]);
    int y = whatis2(str[1]);
    int i = signal_a();

    if (i > 5) {
        print("%c%c: ", str[0], str[1]);
        map[1 + y][x * 2] = 'o';
        print("missed\n");
    } else {
        print("%c%c: ", str[0], str[1]);
        map[1 + y][x * 2] = 'x';
        print("hit\n");
    }
    print("\n");
    return map;
}

char **stock_map(char **map)
{
    char *str[] = { " |A B C D E F G H", "-+---------------",
                    "1|. . . . . . . .", "2|. . . . . . . .",
                    "3|. . . . . . . .", "4|. . . . . . . .",
                    "5|. . . . . . . .", "6|. . . . . . . .",
                    "7|. . . . . . . .", "8|. . . . . . . ." };

    for (int i = 0; i != 10; i++) {
        map[i] = malloc(sizeof(char) * 18);
        map[i][17] = '\0';
    }
    map[10] = NULL;
    for (int i = 0; i != 10; i++)
        for (int y = 0; y != 17; y++)
            map[i][y] = str[i][y];
    return map;
}

void print_map(char **map_a, char **map_e)
{
    print("my positions:\n");
    for (int i = 0; map_a[i] != NULL; i++)
        print("%s\n", map_a[i]);
    write(1, "\n", 1);
    print("enemy's positions:\n");
    for (int i = 0; map_e[i] != NULL; i++)
        print("%s\n", map_e[i]);
    write(1, "\n", 1);
}