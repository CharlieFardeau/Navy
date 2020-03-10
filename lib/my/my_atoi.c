/*
** EPITECH PROJECT, 2019
** my_atoi
** File description:
** atoi made in france
*/

#include "my.h"

int my_atoi(char *str)
{
    int res = 0;
    int i = 0;
    int neg = 0;

    if (str[i] == '-'){
        i++;
        neg++;
    }
    for (; str[i] != '\0' && str[i] != '\n'; i++)
        if (str[i] >= '0' && str[i] <= '9')
            res = res * 10 + str[i] - '0';
    if (neg == 1)
        return res * -1;
    return res;
}