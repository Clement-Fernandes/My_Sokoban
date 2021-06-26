/*
** EPITECH PROJECT, 2021
** count_map
** File description:
** count_map
*/

#include "../include/sokoban.h"

int count_rows(char *map_1d)
{
    int nb = 1;
    int i = 0;

    while (map_1d[i] != '\0') {
        if (map_1d[i] == '\n')
            nb++;
        i++;
    }
    return (nb);
}

int count_cols(char *map_1d)
{
    int nb = 1;
    int i = 0;

    while (map_1d[i] != '\n') {
        nb++;
        i++;
    }
    return (nb);
}

int count_tab(char **map_2d)
{
    int i = 0;

    while (map_2d[i] != NULL)
        i++;
    return (i);
}

int verify_map(char **map_2d)
{
    int i = 0;
    int j = 0;

    while (map_2d[i] != NULL) {
        while (map_2d[i][j] != '\0') {
            if (map_2d[i][j] != 'O' && map_2d[i][j] != '\n' &&
            map_2d[i][j] != 'P' && map_2d[i][j] != '#' &&
            map_2d[i][j] != 'X' && map_2d[i][j] != ' ') {
                return (84);
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (0);
}

void reset_map(map_t *load)
{
    int i = 0;
    int j = 0;
    clear();
    for (; load->map_2d_copy[i] != NULL; i++) {
        for (; load->map_2d_copy[i][j] != '\0'; j++)
            load->map_2d[i][j] = load->map_2d_copy[i][j];
    }
    load->map_2d[i][j] = '\0';
}