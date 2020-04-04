/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

int recup_in_int(char *str)
{
    int val;

    VAL_in_INT;
    return (val);
}

void check_player_hit_or_missed(char *str, int da, char **map)
{
    int nb = recup_in_int(str);
    int x = nb / 8;
    int y = nb % 8;
    if (y == 0) y_and_x;
    x_and_y;
    my_putstr(str);
    if (da == 1) map_x_hit;
    else if (da == 2) map_o_missed;
    free(str);
}

int check_enemy_hit_or_missed(int nb, char **map)
{
    int x = nb / 8;
    int y = nb % 8;
    if (y == 0) y_and_x;
    x_and_y;
    if (map[x + 1][y + 1] <= '5' && map[x + 1][y + 1] >= '2') {
        hit_print;
        map[x + 1][y + 1] = 'x';
        return (1);
    } else {
        missed_print;
        if (map[x + 1][y + 1] != 'x') map[x + 1][y + 1] = 'o';
        return (2);
    }
}
