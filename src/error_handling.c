/*
** EPITECH PROJECT, 2020
** navy
** File description:
** error_handlingg
*/

#include "my.h"

int error_player(int ac, char **av)
{
    if ((av[1][0] == '-' && av[1][1] == 'h')) {
        help();
        return 84;
    }
    if (ac == 3)
        if (is_int(av[1]) == 0)
            return 84;
    return 0;
}

int error_handling(int ac, char **av)
{
    if (ac < 2 || ac > 3)
        return 84;
    else
        return error_player(ac, av);
}
