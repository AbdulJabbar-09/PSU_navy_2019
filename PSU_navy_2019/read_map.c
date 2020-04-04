/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

int check_position(char *buffer)
{
    if ((my_strlen(buffer) != 7) || (buffer[6] < buffer[3])) {
        my_putstr("wrong position\n");
        return (84);
    }
    if ((buffer[2] >= 65 && buffer[2] <= 72) ||
    (buffer[5] >= 65 && buffer[5] <= 72)) {
        if ((buffer[3] < 1 && buffer[3] > 8) ||
        (buffer[6] < 1 && buffer[6] > 8)) {
            my_putstr("wrong position\n");
            return (84);
        }
    } else {
        my_putstr("wrong position\n");
        return (84);
    }
    return (0);
}

char **get_and_show_boat(char **tab, char *str)
{
    int fd = 0;
    char *buffer = NULL;
    fd = open(str, O_RDONLY);
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        buffer = get_next_line(fd);
        tab = boat_on_map(tab, buffer);
          }
    return (tab);
}

int return_enum(int x)
{
    if (x == 65)
        x = 2;
    if (x == 66)
        x = 4;
    if (x == 67)
        x = 6;
    if (x == 68)
        x = 8;
    if (x == 69)
        x = 10;
    if (x == 70)
        x = 12;
    if (x == 71)
        x = 14;
    if (x == 72)
        x = 16;
    return (x);

}

char **boat_on_map(char **tab, char *buffer)
{
    int li1 = (buffer[3] - 48) + 1, col1 = return_enum(buffer[2]);
    int li2 = (buffer[6] - 48) + 1, col2 = return_enum(buffer[5]);
    tab[li1][col1] = buffer[0];
    tab[li2][col2] = buffer[0];
    /*if (li1 == li2) {
        for (int dl = li2 - li1; dl != 0; dl--)
            tab[li1][col1] = buffer[0];
        col1++;
        }*/
//    free(buffer);
    return (tab);
}

int main (int ac, char **av)
{
    char **tab = NULL;
    tab = malloc_navy();
    tab = fill_navy(tab);
    tab = get_and_show_boat(tab, av[1]);
    for (int i = 0; tab[i] != NULL; i++)
        my_putstr(tab[i]);
    return (0);
}
