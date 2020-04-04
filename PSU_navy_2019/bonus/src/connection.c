/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

void handle_res(int nt)
{
    HDLE_RES;
}

int sending_sig(int pid, int sig, int res)
{
    res = 1;

    if (sig != SIGUSR1 && sig != SIGUSR2) return (0);
    res = kill(pid, sig);
    return ((res == 0) ? 1 : 0);
}

int sending_resp(int a, int res)
{
    if (a != 1 && a != 2)
        return (0);
    for (int k = 0; k < a; k++)
        (!sending_sig(navy->en_pid, SIGUSR1, res)) ? 0 : usleep(1000);
    (!sending_sig(navy->en_pid, SIGUSR2, res)) ? 0 : usleep(1000);
    return (1);
}

int sending_datas(char *str, int cnt)
{
    int res;
    cnt = recup_in_int(str);

    for (int k = 0; k < cnt; k++)
        (!sending_sig(navy->en_pid, SIGUSR1, res)) ? 0 : usleep(1000);
    (!sending_sig(navy->en_pid, SIGUSR2, res)) ? 0 : usleep(1000);
    return (1);
}
