/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check how many signal has been sent
*/

#include "my.h"

void signal_handler2(int signal, siginfo_t *yes, void *context)
{
    (void) signal;
    (void) context;
    (void) yes;
}

int signal_a(void)
{
    int i = 0;
    struct timespec ts = {0, 2800000};
    struct sigaction s;

    s.sa_sigaction = signal_handler2;
    s.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &s, NULL) < 0)
        return 84;
    while (nanosleep(&ts, NULL) == -1)
        i++;
    if (i > 8 ||  i < 1)
        return 84;
    return i;
}

void signal_a_send(int nb)
{
    struct timespec ts = {0, 1010000};

    for (int i = 0; i != nb; i++) {
        nanosleep(&ts, NULL);
        kill(pid, SIGUSR1);
        nanosleep(&ts, NULL);
    }
    nanosleep(&ts, NULL);
}

int signal_b(void)
{
    int i = 0;
    struct timespec ts = {120, 0};
    struct sigaction s;

    s.sa_sigaction = signal_handler2;
    s.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &s, NULL) < 0)
        return 84;
    if (nanosleep(&ts, NULL) != -1)
        return 84;
    return i;
}