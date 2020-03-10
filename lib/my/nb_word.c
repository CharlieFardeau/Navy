/*
** EPITECH PROJECT, 2020
** nb_word
** File description:
** return the number of word in the string
*/

int next_word(char *str, int i)
{
    for (; str[i] != '\0';)
        if ((str[i] <= 'z' && str[i] >= 'a') ||
            (str[i] <= 'Z' && str[i] >= 'A') ||
            (str[i] >= '0' && str[i] <= '9'))
            i++;
        else
            break;
    return i;
}

int nb_word(char *str)
{
    int c = 0;

    for (int i = 0; str[i] != '\0';) {
        if ((str[i] <= 'z' && str[i] >= 'a') ||
            (str[i] <= 'Z' && str[i] >= 'A') ||
            (str[i] >= '0' && str[i] <= '9')) {
            c++;
            i = next_word(str, i);
        } else
            i++;
    }
    return c;
}