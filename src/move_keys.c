/*
** EPITECH PROJECT, 2021
** delivery
** File description:
** move_keys
*/

#include "../include/sokoban.h"

map_t *move_keys(pos_p_t *pos, map_t *load , int keys)
{
    if (keys == KEY_LEFT)
        move_left(pos, load);
    if (keys == KEY_RIGHT)
        move_right(pos, load);
    if (keys == KEY_UP)
        move_up(pos, load);
    if (keys == KEY_DOWN)
        move_down(pos, load);
    return (load);
}

void move_left(pos_p_t *pos, map_t *load)
{
    if (load->map_2d[pos->vert][pos->horiz - 1] == ' '
        || load->map_2d[pos->vert][pos->horiz - 1] == 'O') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert][pos->horiz - 1] = 'P';
    }
    if (load->map_2d[pos->vert][pos->horiz - 1] == 'X'
        && load->map_2d[pos->vert][pos->horiz - 2] == ' ') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert][pos->horiz - 1] = 'P';
        load->map_2d[pos->vert][pos->horiz - 2] = 'X';
    }
    if (load->map_2d[pos->vert][pos->horiz - 1] == 'X' &&
        load->map_2d[pos->vert][pos->horiz - 2] == 'O') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert][pos->horiz - 1] = 'P';
        load->map_2d[pos->vert][pos->horiz - 2] = 'X';
    }
}

void move_right(pos_p_t *pos, map_t *load)
{
    if (load->map_2d[pos->vert][pos->horiz + 1] == ' '
        || load->map_2d[pos->vert][pos->horiz + 1] == 'O') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert][pos->horiz + 1] = 'P';
    }
    if (load->map_2d[pos->vert][pos->horiz + 1] == 'X'
        && load->map_2d[pos->vert][pos->horiz + 2] == ' ') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert][pos->horiz + 1] = 'P';
        load->map_2d[pos->vert][pos->horiz + 2] = 'X';
    }
    if (load->map_2d[pos->vert][pos->horiz + 1] == 'X' &&
        load->map_2d[pos->vert][pos->horiz + 2] == 'O') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert][pos->horiz + 1] = 'P';
        load->map_2d[pos->vert][pos->horiz + 2] = 'X';
    }
}

void move_up(pos_p_t *pos, map_t *load)
{
    if (load->map_2d[pos->vert - 1][pos->horiz] == ' '
        || load->map_2d[pos->vert - 1][pos->horiz] == 'O') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert - 1][pos->horiz] = 'P';
    }
    if (load->map_2d[pos->vert - 1][pos->horiz] == 'X'
        && load->map_2d[pos->vert - 2][pos->horiz] == ' ') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert - 1][pos->horiz] = 'P';
        load->map_2d[pos->vert - 2][pos->horiz] = 'X';
    }
    if (load->map_2d[pos->vert - 1][pos->horiz] == 'X' &&
        load->map_2d[pos->vert - 2][pos->horiz] == 'O') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert - 1][pos->horiz] = 'P';
        load->map_2d[pos->vert - 2][pos->horiz] = 'X';
    }
}

void move_down(pos_p_t *pos, map_t *load)
{
    if (load->map_2d[pos->vert + 1][pos->horiz] == ' '
        || load->map_2d[pos->vert + 1][pos->horiz] == 'O') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert + 1][pos->horiz] = 'P';
    }
    if (load->map_2d[pos->vert + 1][pos->horiz] == 'X'
        && load->map_2d[pos->vert + 2][pos->horiz] == ' ') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert + 1][pos->horiz] = 'P';
        load->map_2d[pos->vert + 2][pos->horiz] = 'X';
    }
    if (load->map_2d[pos->vert + 1][pos->horiz] == 'X' &&
        load->map_2d[pos->vert + 2][pos->horiz] == 'O') {
        load->map_2d[pos->vert][pos->horiz] = ' ';
        load->map_2d[pos->vert + 1][pos->horiz] = 'P';
        load->map_2d[pos->vert + 2][pos->horiz] = 'X';
    }
}