/*
** EPITECH PROJECT, 2020
** is_int
** File description:
** str is number or not
*/

int is_int(char *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    for (; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return 0;
    return 1;
}