/*
** EPITECH PROJECT, 2020
** navy
** File description:
** main function for the navy
*/

#include "my.h"

char **player_turn(int *i, int y, char **map)
{
    int x = 0;
    char *str = malloc(sizeof(char) * BUFSIZ);

    print("attack: ");
    while (!read(0, str, BUFSIZ));
    str[BUFSIZ] = '\0';
    if (my_strlen2(str) != 2 || error_input(str)) {
        print("wrong position\n");
        return player_turn(i, y, map);
    }
    x = whatis(str[0]);
    signal_a_send(x + 1);
    y = whatis2(str[1]);
    signal_a_send(y + 1);
    (*i)--;
    map = get_hit(map, str);
    return map;
}

int player1(char **map_a)
{
    int i = 1;
    int y = 0;
    char **map_e = malloc(sizeof(char *) * 11);

    map_e = stock_map(map_e);
    while (win_lose_cond(map_a, map_e)) {
        if (i == 1) {
            print_map(map_a, map_e);
            map_e = player_turn(&i, y, map_e);
        } else {
            print("waiting for enemy's attack...\n");
            signal_b();
            y = signal_a();
            signal_b();
            map_a = find_me(y, signal_a(), map_a);
            i++;
        }
    }
    msg_lose_win(i, map_a, map_e);
    return i;
}

int player2(char **map_a)
{
    int i = 0;
    int y = 0;
    char **map_e = malloc(sizeof(char *) * 11);

    map_e = stock_map(map_e);
    while (win_lose_cond(map_a, map_e)) {
        if (i == 1) {
            map_e = player_turn(&i, y, map_e);
        } else {
            print_map(map_a, map_e);
            print("waiting for enemy's attack...\n");
            signal_b();
            y = signal_a();
            signal_b();
            map_a = find_me(y, signal_a(), map_a);
            i++;
        }
    }
    msg_lose_win(i, map_a, map_e);
    return i;
}

int main(int ac, char **av)
{
    char **file = error_map(ac, av);
    char **map_a = malloc(sizeof(char *) * 11);

    if (file == NULL)
        return 84;
    map_a = stock_map(map_a);
    map_a = put_in_map(file, map_a);
    if (error_handling(ac, av) == 84 || map_a == NULL)
        return 84;
    if (ac == 2) {
        if (connect() != 84) {
            print("enemy connected\n\n");
            return player1(map_a);
        }
    } else
        if (connect2(my_atoi(av[1])) != 84)
            return player2(map_a);
    return 84;
}
