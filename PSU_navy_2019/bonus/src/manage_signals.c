/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

void handle_pid(int sig, siginfo_t *to, void *context)
{
    (void)sig;
    (void)context;
    HDLE_PID;
}

void handle_data(int sig)
{
    HDLE_DAT;
}

int recup_player_pid(struct sigaction act)
{
    act.sa_flags = SA_SIGINFO;
    act.sa_sigaction = handle_pid;
    sigemptyset(&act.sa_mask);
    reset_values;

    if (sigaction(SIGUSR1, &act, NULL) <= 0)
        return (0);
    return (0);
}

int recup_sended_data(struct sigaction act)
{
    int sig1 = 1;
    int sig2 = 1;

    act.sa_flags = SA_SIGINFO;
    act.sa_handler = handle_data;
    sigemptyset(&act.sa_mask);
    while (!navy->ok) {
        sig1 = sigaction(SIGUSR1, &act, NULL);
        sig2 = sigaction(SIGUSR2, &act, NULL);
        pause();
        if (sig1 == -1 || sig2 == -1) {
            navy->ok = 0;
            return (0);
        }
    }
    return (0);
}

int recup_ans(struct sigaction act)
{
    int sig1 = 1;
    int sig2 = 1;

    act.sa_flags = SA_SIGINFO;
    act.sa_handler = handle_res;
    sigemptyset(&act.sa_mask);
    while (!navy->ok) {
        sig1 = sigaction(SIGUSR1, &act, NULL);
        sig2 = sigaction(SIGUSR2, &act, NULL);
        pause();
        if (sig1 == -1 || sig2 == -1) {
            navy->ok = 0;
            return (0);
        }
    }
    return (0);
}
