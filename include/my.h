/*
** EPITECH PROJECT, 2020
** In the navy
** File description:
** .h classic
*/

#include <zconf.h>
#include <signal.h>
#include <time.h>
#include <ucontext.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>

#ifndef PSU_NAVY_2019_MY_H
#define PSU_NAVY_2019_MY_H

int pid;
int print(char *, ...);
int my_strlen(char *str);
int my_strlen2(char *str);
int my_atoi(char *str);
int is_int(char *str);
int connect(void);
int connect2(int nb);
int my_strcmp(char *s1, char *s2);


int error_handling(int ac, char **av);
void help(void);
char **str_word_array(char *str);
int signal_a(void);
int signal_b(void);
void signal_b_send(int nb);
void signal_a_send(int nb);
void start(int nb);
int whatis(char c);
int whatis2(char c);
char **find_me(int nb, int nb2, char **map);
int error_input(char *str);
void print_map(char **map_a, char **map_e);
char **stock_map(char **map);
int prbl_map(char **map, char *str);
char **get_hit(char **map, char *str);
int win_lose_cond(char **map1, char **map2);
char **put_in_map(char **file, char **map);
int nb_words(char *str);
int my_next(char *str, int i);
char **str_to_word_array(char *str);
char *my_strdup(char const *src);
int check_same(char **map, int n, char *str);
int check_if_same(char **map);
int checkone(char **map, int i, int size);
int checktwo(char **map, int i, int size);
int check_posnsize(char **map);
int checkpv(char **map);
int checkpos(char **map);
char **check_map(char **map);
char **error_map(int ac, char **av);
void msg_lose_win(int i, char **map_a, char **map_e);

#endif //PSU_NAVY_2019_MY_H
