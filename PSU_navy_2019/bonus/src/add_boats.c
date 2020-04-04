/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

int check_map(char *file)
{
    int fd = open(file, O_RDONLY);
    char buff[32];

    read(fd, buff, 31);
    buff[31] = '\0';
    return ((check_map_error(buff) == -1) ? 84 : 0);
}

static char **add_map_pos1(char **map, int nb, int i)
{
    int a;
    int b;
    int_value;

    if (navy->coord[i][3] > navy->coord[i][6]) {
        for (; nb > 0; nb--, a--)
            boat_places;
    } else if (navy->coord[i][3] < navy->coord[i][6]) {
        for (; nb > 0; nb--, a++)
            boat_places;
    }
    return (map);
}

static char **add_map_pos2(char **map, int nb, int i)
{
    int a;
    int b;
    int_value;

    if (navy->coord[i][2] < navy->coord[i][5]) {
        for (; nb > 0; nb--, b += 2)
            boat_places;
    }
    return (map);
}

char **add_map_boats(char **map, int nb, int i)
{
    for (i = 0; navy->coord[i] != NULL; i++) {
        nb = navy->coord[i][0] - 48;
        if (navy->coord[i][2] == navy->coord[i][5])
            map = add_map_pos1(map, nb, i);
        else if (navy->coord[i][3] == navy->coord[i][6])
            map = add_map_pos2(map, nb, i);
    }
    return (map);
}
