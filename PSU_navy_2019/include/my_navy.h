/*
** EPITECH PROJECT, 2020
** my_navy
** File description:
** navy prototype
*/

#ifndef MY_NAVY_H_
#define MY_NAVY_H_

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include "define.h"
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include <signal.h>
#include <time.h>

typedef struct list {
    char c;
    int data;
    struct list *next;
} t_list;

typedef struct navy {
    int value;
    int state;
    int data;
    int ok;
    int succeeded;
    int en_pid;
    char **coord;
    char **map;
    char **en_map;
} ti;

ti *navy;

void my_putchar(char c);
int my_getnbr(char *str);
int my_put_nbr(int nbr);
int my_putstr(char const *str);
int my_strlen(char const *str);
static char **malloc_navy(void);
static char **fill_navy(char **tab);
char **add_map_boats(char **map, int nb, int i);
char **my_str_to_wordarray(char *str, char c);
char *get_input(char *);
char *get_next_line(int fd);
int check_map(char *file);
void check_player_hit_or_missed(char *str, int data, char **map);
int check_enemy_hit_or_missed(int nb, char **map);
int check_boat_error(int a);
int sending_sig(int pid, int sig, int res);
void handle_res(int a);
int sending_resp(int resp, int a);
int sending_datas(char *column, int cnt);
void create_maps(int a, int b);
int recup_player_pid(struct sigaction act);
int recup_sended_data(struct sigaction act);
int recup_ans(struct sigaction act);
int caller_func(int ac, char **av);
int check_map_error(char *buff);
int display_maps(int i);
int recup_in_int(char *val);
void free_board(void);
int init_struct(int ac, char **av);
int lets_play(int ac, char *str, int);

#endif
