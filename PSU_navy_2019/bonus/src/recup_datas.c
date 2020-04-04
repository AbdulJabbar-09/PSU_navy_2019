/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

char *get_value(char *str)
{
    str = get_next_line(0);
    my_putstr("\e[0m");

    if (str == NULL) return (NULL);
    if (my_strlen(str) != 2) {
        my_putstr("\e[31mwrong position\e[0m\n");
        return (NULL);
    } else if ((str[0] < 'A' || str[0] > 'H')\
    || (str[1] < '1' || str[1] > '8')) {
        my_putstr("\e[31mwrong position\e[0m\n");
        return (NULL);
    }
    return (str);
}

char *get_input(char *str)
{
    for (int a = 1; a == 1; ) {
        my_putstr("attack: \e[3m");
        str = get_value(str);
        if (str != NULL) {
            a = 2;
            return (str);
        }
        (a == 1) ? free(str) : 0;
    }
    return (NULL);
}

void free_board(void)
{
    free(navy->coord);
    free(navy->map);
    free(navy->en_map);

    (navy) ? free(navy) : 0;
}

int init_struct(int ac, char **av)
{
    navy = malloc(sizeof(*navy));
    (navy == NULL) ? 0 : all_values_init;
    (ac == 2) ? pid2_and_check_2 : pid2_and_check_3;
    return (0);
}
