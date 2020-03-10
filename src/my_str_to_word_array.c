/*
** EPITECH PROJECT, 2020
** str to word array
** File description:
** str to word array
*/

#include <stdlib.h>
#include "my.h"

int next_word(int i, char *str)
{
    for (; str[i] != '\0'; i++) {
        if ((str[i] >= '0' && str[i] <= '9') ||
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z')) {
            return i;
        }
    }
    return i;
}

int check_if_spaces(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++)
        if ((str[i] >= '0' && str[i] <= '9') ||
            (str[i] >= 'a' && str[i] <= 'z') ||
            (str[i] >= 'A' && str[i] <= 'Z'))
            return i;
    return i;
}

char **my_put_in_array(char *str, char **array)
{
    int y = 0;

    for (int i = check_if_spaces(str); str[i] != '\0'; i++) {
        i = next_word(i, str);
        for (int x = 0; (str[i] >= '0' && str[i] <= '9') ||
                (str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'); x++, i++)
            array[y][x] = str[i];
        y++;
        if (str[i] == '\0')
            break;
    }
    return array;
}

char **str_to_word_array(char *str)
{
    char **array = NULL;
    int nb_word = nb_words(str);
    int y = 0;
    int x = check_if_spaces(str);

    array = malloc(sizeof(char *) * (nb_word + 1));
    array[nb_word] = NULL;
    for (int i = 0; i != nb_word; i++) {
        for (; (str[x] >= '0' && str[x] <= '9') ||
                (str[x] >= 'A' && str[x] <= 'Z') ||
                (str[x] >= 'a' && str[x] <= 'z'); x++)
            y++;
        x = next_word(x, str);
        array[i] = malloc(sizeof(char) * (y + 1));
        array[i][y] = '\0';
        y = 0;
    }
    return my_put_in_array(str, array);
}
