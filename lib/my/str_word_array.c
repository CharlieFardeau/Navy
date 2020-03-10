/*
** EPITECH PROJECT, 2020
** str to word array
** File description:
** sort word in array
*/

#include "my.h"
#include <stdlib.h>

char **put_in_array(char *str, char **array)
{
    int c = 0;
    int x = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] <= 'z' && str[i] >= 'a') ||
            (str[i] <= 'Z' && str[i] >= 'A') ||
            (str[i] >= '0' && str[i] <= '9')) {
            array[c][x] = str[i];
            x++;
        } else {
            c++;
            x = 0;
        }
    }
    return array;
}

char **yes(char *str)
{
    int i = nb_word(str) + 1;
    char **array = malloc(sizeof(char *) * (i + 1));

    array[i] = NULL;
    return array;
}

char **str_word_array(char *str)
{
    int c = 0;
    int x = 0;
    char **array = yes(str);

    for (int j = 0; str[j] != '\0'; ++c, j++) {
        if (str[j] < '0' || (str[j] > '9' && str[j] < 'A') ||
            (str[j] > 'Z' && str[j] < 'a') || str[j] > 'z') {
            array[x] = malloc(sizeof(char) * (c + 1));
            array[x][c] = '\0';
            x++;
            c = 0;
        }
        if (str[j] == '\0') {
            array[x] = malloc(sizeof(char) * (c + 2));
            array[x][c + 1] = '\0';
        }
    }
    return put_in_array(str, array);
}
