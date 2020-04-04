/*
** EPITECH PROJECT, 2020
** define.h
** File description:
** define.h
*/

#ifndef DEFINE_H
#define DEFINE_H

#define space_num_dot_pipe (tab[i][j] = ' ', (j == 0) ?\
tab[i][0] = num++ : 0, \
(letter_cond) ? tab[i][j] = '.' : pipe)

#define letter_cond_space_pipe ((letter_cond) ? tab[i][j] = al++ :\
space_and_pipe)

#define all_values_init (navy->value = 0, \
navy->coord = NULL, \
navy->map = NULL, \
navy->en_map = NULL, \
navy->data = 0, \
navy->ok = 0)

#define VAL_in_INT (val = (my_getnbr(&str[1])- 1) * 8, val += (str[0] - 64))

#define map_x_hit (my_putstr(": hit\n\n"), map[x + 1][y + 1] = 'x')

#define map_o_missed (my_putstr(": missed\n\n"),        \
(map[x + 1][y + 1] != 'x') ?      \
map[x + 1][y + 1] = 'o' : 0)

#define wait_and_pause (my_putstr("waiting for enemy connection...\n"), \
recup_player_pid(act), pause())

#define pipe (tab[i][1] = '|')

#define HDLE_RES ((nt == SIGUSR1) ? navy->data++ : 0,   \
(nt == SIGUSR2) ? navy->ok = 1 : 0)

#define HDLE_PID (navy->en_pid = to->si_pid,                            \
my_putstr("\nenemy connected\n\n"), navy->succeeded = 1)

#define HDLE_DAT ((sig == SIGUSR1) ? navy->data++ : 0,  \
(sig == SIGUSR2) ? navy->ok = 1 : 0)

#define pid2_and_check_2 (navy->en_pid = -1, navy->state = check_map(av[1]))

#define pid2_and_check_3 (navy->en_pid = my_getnbr(av[1]),      \
navy->state = check_map(av[2]))

#define boat_places (map[a][b] = navy->coord[i][0])

#define reset_values (navy->ok = 0, navy->data = 0)

#define thanos_start (signal(SIGUSR1, SIG_IGN), thanos(str, cnt))

#define x_and_y (x++, y = y * 2 - 1)

#define y_and_x (y = 8, x--)

#define int_value (a = navy->coord[i][3] - 48 + 1,      \
b = (navy->coord[i][2] - 64) * 2)

#define places_different (navy->coord[0][0] != navy->coord[1][0]        \
&& navy->coord[0][0] != navy->coord[2][0]     \
&& navy->coord[0][0] != navy->coord[3][0]     \
&& navy->coord[1][0] != navy->coord[2][0]     \
&& navy->coord[1][0] != navy->coord[3][0]     \
&& navy->coord[2][0] != navy->coord[3][0])

#define space_and_pipe (tab[i][j] = ' ', tab[i][1] = '|')

#define minus_and_plus (tab[i][j] = '-', tab[i][1] = '+')

#define letter_cond (j == 2 || j == 4 || j == 6 || j == 8 ||    \
j == 10 || j == 12 || j == 14 || j == 16)

#define READ_SIZE (3)

#define MALLOC (3000000)

#define str_next_andf ((*str) = (*str)->next, free(ptr))

#define COP_COND (ptr = (*str), recup[i++] = (*str)->c, str_next_andf)

#define OT_COP_COND (ptr = (*str), str_next_andf)

#define missed_print (my_putchar(((y + 1) / 2) + 64), my_putchar(x + 48), \
my_putstr(": missed\n\n"))

#define hit_print (my_putchar(((y + 1) / 2) + 64), my_putchar(x + 48),  \
my_putstr(": hit\n\n"))

#define print_pid (my_putstr("my_pid: "), my_put_nbr(getpid()), \
my_putchar('\n'))

#define send_and_get (sending_datas(str, cnt), recup_ans(act))

#define check_and_reset (check_player_hit_or_missed                     \
(str, navy->data, navy->en_map), reset_values)

#define plus_plus (navy->data++, navy->value++)

#endif
