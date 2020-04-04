/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

void call_in_display(int i)
{
    my_putstr("my positions:\n");
    for (i = 0; navy->map[i] != NULL; i++) {
        my_putstr("\e[36m");
        my_putstr(navy->map[i]);
        my_putstr("\e[0m");
    }
    my_putstr("\n");
    my_putstr("enemy's positions:\n");
    for (i = 0; navy->en_map[i] != NULL; i++) {
        my_putstr("\e[31m");
        my_putstr(navy->en_map[i]);
        my_putstr("\e[0m");
    }
    my_putstr("\n");
}

int display_maps(int i)
{
    i = 0;
    (navy->map == NULL) ? 0 : call_in_display(i);
    return (0);
}

static char **malloc_navy(void)
{
    int x = 0;
    char **tab = NULL;
    tab = malloc(sizeof(char *) * 11);
    if (tab == NULL)
        return (NULL);
    for (; x < 10; x++)
        tab[x] = malloc(sizeof(char) * 18);
    return (tab);
}

static char **fill_navy(char **tab)
{
    tab = malloc_navy();
    int i = 0, j = 0, al = 'A', num = '1';
    for (; i < 10; i++) {
        for (j = 0; j < 17; j++) {
            if (i == 0) letter_cond_space_pipe;
            else if (i == 1) minus_and_plus;
            else space_num_dot_pipe;
        }
        tab[i][j] = '\n';
    }
    return (tab);
}

void create_maps(int nb, int i)
{
    navy->map = malloc(sizeof(char *) * 11);
    navy->map[10] = NULL;
    navy->map = fill_navy(navy->map);
    navy->en_map = malloc(sizeof(char *) * 11);
    navy->en_map[10] = NULL;
    navy->en_map = fill_navy(navy->en_map);
    navy->map = add_map_boats(navy->map, nb, i);
}
