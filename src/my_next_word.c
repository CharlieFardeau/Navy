/*
** EPITECH PROJECT, 2020
** str to word array
** File description:
** str to word array
*/

int my_next(char *str, int i)
{
    for (; str[i] != '\0'; i++) {
        while ((str[i] >= '0' && str[i] <= '9') ||
                (str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z'))
                i++;
        return i;
    }
    return i;
}
