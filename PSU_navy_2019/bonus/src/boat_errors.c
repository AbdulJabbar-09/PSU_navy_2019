/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

static int pos1(int i)
{
    if (navy->coord[i][6] > navy->coord[i][3]) {
        if (navy->coord[i][0] - 48 -
            (navy->coord[i][6] - navy->coord[i][3] + 1) != 0)
            return (-1);
    } else if (navy->coord[i][6] < navy->coord[i][3]) {
        if (navy->coord[i][0] - 48 -
            (navy->coord[i][3] - navy->coord[i][6] +1) != 0)
            return (-1);
    }
    return (0);
}

static int pos2(int i)
{
    if (navy->coord[i][5] > navy->coord[i][2]) {
        if (navy->coord[i][0] - 48 -
            (navy->coord[i][5] - navy->coord[i][2] +1) != 0)
            return (-1);
    } else if (navy->coord[i][6] < navy->coord[i][3]) {
        if (navy->coord[i][0] - 48 -
            (navy->coord[i][2] - navy->coord[i][5] +1) != 0)
            return (-1);
    }
    return (0);
}

int check_boat_error(int i)
{
    for (i = 0; navy->coord[i] != NULL; i++) {
        if (pos1(i) == -1 || pos2(i) == -1)
            return (-1);
    }
    return (0);
}
