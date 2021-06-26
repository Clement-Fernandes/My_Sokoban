/*
** EPITECH PROJECT, 2021
** minishell.h
** File description:
** bsminishell
*/

#ifndef sokoban
#define sokoban

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <ncurses.h>
#include <string.h>
#include "bsprintf.h"

typedef struct map_s {
    char *map_1d;
    char **map_2d;
    char **map_2d_copy;
}map_t;

typedef struct pos_p_s {
    int vert;
    int horiz;
}pos_p_t;

pos_p_t *pos_player(void);
map_t *load_maps(char *map);
map_t *reload_and_find(map_t *load);
void reset_map(map_t *load);
int main(int ac, char **av);
void help();
void one_argument(void);
char *open_read(char *filename);
int count_cols(char *map_1d);
int count_rows(char *map_1d);
int count_tab(char **map_2d);
char **map1d_to_map2d(char *map_1d, char **map_2d);
char **open_map_2d(char *map_1d);
int game(char *map);
void print_and_resize(map_t *load);
pos_p_t *find_p(char **map_2d, pos_p_t *pos);
int count_p_and_o(char **map_2d);
map_t *move_keys(pos_p_t *pos, map_t *load , int keys);
void move_left(pos_p_t *pos, map_t *load);
void move_right(pos_p_t *pos, map_t *load);
void move_up(pos_p_t *pos, map_t *load);
void move_down(pos_p_t *pos, map_t *load);
int verify_map(char **map_2d);
void base_game(void);
void refresh_game(void);
int free_maps(map_t *load, pos_p_t * pos);
int victory(map_t *load);

#endif /* !sokoban */
