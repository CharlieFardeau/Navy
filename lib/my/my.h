/*
** EPITECH PROJECT, 2019
** printf
** File description:
** my.h
*/

#include <stdarg.h>
#include <stdlib.h>
#ifndef PSU_MY_PRINTF_2019_MY_H
#define PSU_MY_PRINTF_2019_MY_H

int my_put_nbr_dec(int);
int my_put_nbr_binair(unsigned int);
int my_put_nbr_octal(unsigned int);
int my_put_nbr_hexa_min(unsigned int);
int my_put_nbr_hexa_maj(unsigned int);
int my_put_nbr_unsigned(unsigned int);
int my_putchar(char);
int my_putstr(char *);
int my_putstr2(char *);
int print(char *, ...);
int flag_s(va_list);
int flag_S(va_list);
int flag_di(va_list);
int flag_x(va_list);
int flag_x_maj(va_list);
int flag_c(va_list);
int flag_b(va_list);
int flag_o(va_list);
int flag_percent(void);
int flag_u(va_list);
int flag_p(va_list);
int my_strlen(char *str);
int my_atoi(char *str);
int is_int(char *str);
char **str_word_array(char *str);
int nb_word(char *str);

#endif //PSU_MY_PRINTF_2019_MY_H
