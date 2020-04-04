/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

static int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (0);
    }
    return (1);
}

static int if_file(char *str)
{
    int fd;
    int rd;
    char buffer[20];

    fd = open(str, O_RDONLY);
    if (fd < 0) return (84);
    rd = read(fd, buffer, 20);
    return ((rd <= 0) ? 84 : 1);
}

void usage(void)
{
    my_putstr("USAGE\n     ./navy [first_player_pid] navy_positions\n");
    my_putstr("DESCRIPTION\n     first_player_pid: only for");
    my_putstr(" the 2nd player. pid of the first player.\n     navy_");
    my_putstr("positions: file representing ");
    my_putstr("the positions of the ships.\n");
}

static int check_datas(int ac, char **av)
{
    int cnt = 1;

    if (ac == 2) {
        cnt = if_file(av[1]);
        if (cnt != 1) return (cnt);
    } else if (ac == 3) {
        if (!my_str_isnum(av[1])) return (84);
        cnt = if_file(av[2]);
        if (cnt != 1) return (cnt);
    }
    return (0);
}

int main(int ac, char **av)
{
    int val = 0;

    if (ac < 2 || ac > 3) return (84);
    if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h')
        usage();
    else if (val = check_datas(ac, av)) return (val);
    return (caller_func(ac, av));
}
