/*
** EPITECH PROJECT, 2020
** str to word array
** File description:
** str to word array
*/

#include "my.h"

int nb_words(char *str)
{
    int nb_word = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= '0' && str[i] <= '9') ||
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
                nb_word++;
            i = my_next(str, i);
            if (i == 48 || str[i] == '\0')
                break;
    }
    return nb_word;
}
