/*
** EPITECH PROJECT, 2020
** navy
** File description:
** navy
*/

#include "../include/my_navy.h"

void wait_enemy(int resp)
{
    struct sigaction act;
    int cnt;
    resp = 0;
    my_putstr("waiting for enemy's attack...\n");
    recup_sended_data(act);
    resp = check_enemy_hit_or_missed(navy->data, navy->map);
    reset_values;
    sending_resp(resp, cnt);
}

int check_end_game(char **map, int final)
{
    int count = 0;
    int i = 0;
    int j = 0;

    for (i = 2; map[i] != NULL; i++) {
        for (j = 2; map[i][j] != '\0'; j++) {
            if (map[i][j] == 'x')
                count++;
        }
    }
    return ((count == final) ? 1 : 0);
}

int thanos(char *str, int cnt)
{
    sfMusic *music;
    music = sfMusic_createFromFile("0438.ogg");
    struct sigaction act;
    while (navy->state != 84) {
        display_maps(cnt);
        str = get_input(str);
        send_and_get;
        (navy->value == 0) ? plus_plus : 0;
        check_and_reset;
        if (check_end_game(navy->en_map, 14)) {
            navy->state = 0;
            return (navy->state);
        } wait_enemy(cnt);
        if (check_end_game(navy->map, 14)) {
            navy->state = 1;
            return (navy->state);
        }
    } return (0);
}

int avenger(char *str, int cnt)
{
    sfMusic *music;
    music = sfMusic_createFromFile("0438.ogg");
    struct sigaction act;
    while (navy->state != 84) {
        display_maps(cnt);
        wait_enemy(cnt);
        if (check_end_game(navy->map, 14)) {
            navy->state = 1;
            return (navy->state);
        } str = get_input(str);
        send_and_get;
        check_and_reset;
        if (check_end_game(navy->en_map, 14)) {
            navy->state = 0;
            return (navy->state);
        }
    } return (0);
}

int lets_play(int ac, char *str, int cnt)
{
    (ac == 2) ? thanos_start : avenger(str, cnt);
    display_maps(cnt);
    if (navy->state == 0) my_putstr("I won\n");
    else if (navy->state == 1) my_putstr("Enemy won\n");
}
