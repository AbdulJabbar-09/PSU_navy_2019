/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

static int check_line(char *str)
{
    return ((str[3] < '1' || str[3] > '8') ? -1 : 0);
    return ((str[6] < '1' || str[6] > '8') ? -1 : 0);
}

static int check_column(char *str)
{
    return ((str[2] < 'A' || str[2] > 'H') ? -1 : 0);
    return ((str[5] < 'A' || str[5] > 'H') ? -1 : 0);
}

static int verify_info(char *str)
{
    return ((check_line(str) == -1) ? -1 : 0);
    return ((check_column(str) == -1) ? -1 : 0);
}

static int check_boat(int i)
{
    for (i = 0; navy->coord[i] != NULL; i++) {
        if (navy->coord[i][0] < '2' ||
            navy->coord[i][0] > '5') {
            return (-1);
        }
    }
    return ((places_different) ? 0 : -1);
}

int check_map_error(char *str)
{
    int i = 0;

    if (my_strlen(str) < 31) return (-1);
    navy->coord = my_str_to_wordarray(str, '\n');
    if (check_boat(i) == -1) return (-1);
    for (i = 0; navy->coord[i] != NULL; i++) {
        if (verify_info(navy->coord[i]) == -1)
            return (-1);
    }
    return ((check_boat_error(i) == -1) ? -1 : 0);
}
