/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** getnbr
*/

#include "../include/my_navy.h"

int my_getnbr(char *str)
{
    int i = 0;
    int m = 1;
    int k = 0;

    for (; str[i] != '\0' && (str[i] == '+' || str[i] == '-'); i++) {
        if (str[i] == '-')
            m = m * -1;
    }
    k = 0;
    while (str[i] >= 48 && str[i] <= 57) {
        k = (k * 10) + str[i] - 48;
        i++;
    }
    return (k * m);
}
