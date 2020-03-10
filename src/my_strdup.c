/*
** EPITECH PROJECT, 2019
** my_strdup
** File description:
** my_strdup
*/

#include <stdlib.h>

char *my_strdup(char const *src)
{
    char *dest;
    int i = 0;
    int y = 0;

    while (src[y] != '\0')
        y++;
    dest = malloc((sizeof(char)) * y + 1);
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
