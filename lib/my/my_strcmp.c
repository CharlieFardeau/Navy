/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** my_strcmp
*/

#include "my.h"

int my_strcmp(char *s1, char *s2)
{
    int st1 = my_strlen(s1);
    int st2 = my_strlen(s2);

    if (st1 != st2) {
        if (st1 < st2)
            return 1;
        return -1;
    }
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
    {
        if (s1[i] != s2[i])
            return (-1);
    }
    return 0;
}
