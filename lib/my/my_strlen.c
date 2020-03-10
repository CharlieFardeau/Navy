/*
** EPITECH PROJECT, 2019
** strlen
** File description:
** nb chara/line
*/

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return i;
}

int my_strlen2(char *str)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n')
        i++;
    return i;
}