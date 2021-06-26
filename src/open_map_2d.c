/*
** EPITECH PROJECT, 2021
** open_map_2d
** File description:
** open_map_2d
*/

#include "../include/sokoban.h"

char **map1d_to_map2d(char *map_1d, char **map_2d)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (map_1d[k] != '\0') {
        if (map_1d[k] != '\n') {
            map_2d[i][j] = map_1d[k];
            j++;
        }
        else {
            map_2d[i][j] = '\0';
            i++;
            j = 0;
        }
        k++;
    }
    map_2d[i][j] = '\0';
    return (map_2d);
}

char **open_map_2d(char *map_1d)
{
    char **map_2d = NULL;
    int row = count_rows(map_1d);
    int col = count_cols(map_1d);
    int i = 0;

    map_2d = malloc(sizeof(char *) * (row + 1));
    for (i = 0; i < row; i++) {
        map_2d[i] = malloc(sizeof(char) * (col + 1));
    }
    map_2d[i] = NULL;
    map_2d = map1d_to_map2d(map_1d, map_2d);
    return (map_2d);
}