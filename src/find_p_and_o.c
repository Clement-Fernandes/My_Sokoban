/*
** EPITECH PROJECT, 2021
** find_P_and_0
** File description:
** find_P_and_0
*/

#include "../include/sokoban.h"

pos_p_t *find_p(char **map_2d, pos_p_t *pos)
{
    int i = 0;
    int j = 0;

    while (map_2d[i] != NULL) {
        while (map_2d[i][j] != '\0') {
            if (map_2d[i][j] == 'P') {
                pos->vert = i;
                pos->horiz = j;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return (pos);
}

int count_p_and_o(char **map_2d)
{
    int i = 0;
    int j = 0;
    int x = 0;
    int o = 0;

    while (map_2d[i] != NULL) {
        while (map_2d[i][j] != '\0') {
            if (map_2d[i][j] == 'O')
                o++;
            if (map_2d[i][j] == 'X')
                x++;
            j++;
        }
        j = 0;
        i++;
    }
    if (x != o)
        return (84);
    return (0);
}