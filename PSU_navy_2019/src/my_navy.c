/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

int connect_players(int ac, int res)
{
    struct sigaction act;

    (ac == 2) ? wait_and_pause : (!sending_sig(navy->en_pid, SIGUSR1, res)) \
        ? 0 : my_putstr("successfully connected\n\n");
}

int caller_func(int ac, char **av)
{
    char *str;
    int i, br, k;
    if (init_struct(ac, av))
        return (84);
    else if (navy->state) {
        i = navy->state;
        free_board();
        return (i);
    } create_maps(br, k);
    print_pid;
    connect_players(ac, k);
    lets_play(ac, str, k);
    i = navy->state;
    free_board();
    return (i);
}
