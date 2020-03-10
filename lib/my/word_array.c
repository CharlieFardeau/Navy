/*
** EPITECH PROJECT, 2020
** str to word array with only space
** File description:
** str in array
*/

#include "my.h"

char **next_step(char *str, char **array)
{
    int i = 0;
    int x = 0;
    int c = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '\n' || str[i] == ':') {
            array[x] = malloc(sizeof(char) * (c + 1));
            array[x][c] = '\0';
            c = 0;
            x++;
        } else
            c++;
        if (str[i + 1] == '\0') {
            array[x] = malloc(sizeof(char) * (c + 1));
            array[x][c] = ':';
        }
    }
    return array;
}

char **malloc_nb_word(char *str)
{
    int c = 0;
    char **array;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            c++;
            i = skip_space(str, i);
        }
    }
    array = malloc(sizeof(char *) * (c + 1));
    array[c] = NULL;
    array = next_step(str, array);
    return array;
}

char **word_array(char *str)
{
    char **array = malloc_nb_word(str);
    int x = 0;
    int c = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n') {
            x++;
            c = 0;
        } else {
            array[x][c] = str[i];
            c++;
        }
    }
    return array;
}