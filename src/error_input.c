/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check if the player put correct characters
*/

int error_input(char *str)
{
    if (str[0] < 'A' || str[0] > 'H' ||
        str[1] < '1' || str[1] > '8')
        return 84;
    return 0;
}