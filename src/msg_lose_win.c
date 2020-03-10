/*
** EPITECH PROJECT, 2020
** Navy
** File description:
** message win or lose
*/

#include "my.h"

void msg_lose_win(int i, char **map_a, char **map_e)
{
    if (i == 0) {
        print_map(map_a, map_e);
        print("I won\n");
    } else {
        print_map(map_a, map_e);
        print("Enemy won\n");
    }
}