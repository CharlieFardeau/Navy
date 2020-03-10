/*
** EPITECH PROJECT, 2020
** Navy
** File description:
** connecting to others terminal
*/

#include "my.h"

int pid = 0;

void signal_handler(int signal, siginfo_t *yes, void *context)
{
    (void) signal;
    (void) context;
    pid = yes->si_pid;
}

void msg_connect(void)
{
    print("my pid:  %d\n", getpid());
    print("waiting for enemy to connect...\n\n");
}

int connect(void)
{
    struct timespec ts = {30, 0};
    struct sigaction s;

    msg_connect();
    s.sa_sigaction = signal_handler;
    s.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &s, NULL) < 0)
        return 84;
    if (nanosleep(&ts, NULL) != -1) {
        print("Failed to connect\n");
        return 84;
    }
    kill(pid, SIGUSR1);
    if (nanosleep(&ts, NULL) != -1) {
        print("Failed to connect\n");
        return 84;
    }
    return 0;
}

int connect2(int nb)
{
    struct timespec ts = {1, 0};
    struct sigaction s;

    s.sa_sigaction = signal_handler;
    s.sa_flags = SA_SIGINFO;
    print("my pid:  %d\n", getpid());
    kill(nb, SIGUSR1);
    if (sigaction(SIGUSR1, &s, NULL) < 0)
        return 84;
    if (nanosleep(&ts, NULL) != -1) {
        print("Failed to connect\n");
        return 84;
    }
    kill(pid, SIGUSR1);
    print("successfully connected\n\n");
    return 0;
}