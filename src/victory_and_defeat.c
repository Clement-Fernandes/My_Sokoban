/*
** EPITECH PROJECT, 2021
** defeat_and_victory
** File description:
** victory_and_defeat
*/

#include "../include/sokoban.h"

int victory(map_t *load)
{
    for (int i = 0; load->map_2d_copy[i] != NULL; i++) {
        for (int j = 0; load->map_2d_copy[i][j] != '\0'; j++) {
            if (load->map_2d_copy[i][j] == 'O' && load->map_2d[i][j] == 'X') {
                return (1);
            }
        }
    }
    return (0);
}
