/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** structs
*/

#include "../include/sokoban.h"

pos_p_t *pos_player(void)
{
    pos_p_t *pos = malloc(sizeof(pos_p_t));

    pos->horiz = 0;
    pos->vert = 0;
    return (pos);
}

map_t *load_maps(char *map)
{
    map_t *load = malloc(sizeof(map_t));

    load->map_1d = open_read(map);
    load->map_2d_copy = open_map_2d(load->map_1d);
    load->map_2d = open_map_2d(load->map_1d);
    return (load);
}