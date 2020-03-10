/*
** EPITECH PROJECT, 2020
** navy
** File description:
** error_map
*/

#include "my.h"

int checkpv(char **map)
{
    int i = 0;
    for (int n = 0; map[n] != NULL; n += 3) {
        if (is_int(map[n]) == 0)
            return 84;
        i = my_atoi(map[n]);
        if (i < 2 || i > 5)
            return 84;
    }
    return 0;
}

int checkpos(char **map)
{
    int n = 0;

    for (int i = 1; map[i] != NULL; i += 2) {
        if (n == 3)
            break;
        if (my_strlen(map[i]) > 2 || map[i][0] < 'A' || map[i][0] > 'H' ||
            map[i][1] < '1' || map[i][1] > '8')
            return -1;
        i++;
        if (my_strlen(map[i]) > 2 || map[i][0] < 'A' || map[i][0] > 'H' ||
            map[i][1] < '1' || map[i][1] > '8')
            return -1;
        n++;
    }
    return 0;
}

int checkboat_size(char **map)
{
    int x = 50;

    for (int i = 0; i < 12 ; i += 3, x++) {
        if (map[i][0] != x) {
            print("%d\n", x);
            return -1;
        }
    }
    return 0;
}

char **check_map(char **map)
{
    char **map1 = malloc(sizeof(char *) * 13);
    int x = checkpv(map);

    map1[12] = NULL;
    for (int i = 0; i != 12; i++)
        map1[i] = my_strdup(map[i]);
    if (x == 84)
        return NULL;
    if (checkpos(map) == -1)
        return NULL;
    if (check_if_same(map) == -1)
        return NULL;
    if (check_posnsize(map) == -1)
        return NULL;
    if (checkboat_size(map) == -1)
        return NULL;
    return map1;
}

char **error_map(int ac, char **av)
{
    char *buffer = malloc(sizeof(char) * BUFSIZ);
    int fd = 0;
    int i = 0;
    char **map;

    if (ac == 2)
        i = 1;
    else if (ac == 3)
        i = 2;
    else
        return NULL;
    fd = open(av[i], O_RDONLY);
    buffer[BUFSIZ] = '\0';
    i = read(fd, buffer, BUFSIZ);
    close(fd);
    if (i < 31 || i > 32)
        return NULL;
    map = str_to_word_array(buffer);
    free(buffer);
    return check_map(map);
}