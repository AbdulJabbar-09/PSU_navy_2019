/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** prototype
*/

#include "../include/my_navy.h"

int my_strlen(char const *str)
{
    int y = 0;

    while (str[y] != '\0') {
        y = y + 1;
    }
    return (y);
}
