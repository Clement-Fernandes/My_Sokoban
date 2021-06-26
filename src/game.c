/*
** EPITECH PROJECT, 2021
** game
** File description:
** game
*/

#include "../include/sokoban.h"

int game(char *map)
{
    pos_p_t *pos = pos_player();
    map_t *load = load_maps(map);
    int keys = '\0';

    if (verify_map(load->map_2d) == 84)
        return (84);
    if (count_p_and_o(load->map_2d) == 84)
        return (84);
    base_game();
    while (keys != 'q') {
        //if (victory(load) == 1)
        //return (1);
        pos = find_p(load->map_2d, pos);
        print_and_resize(load);
        keys = getch();
        load = move_keys(pos, load, keys);
        reload_and_find(load);
        refresh_game();
    }
    endwin();
    free_maps(load, pos);
    return (0);
}

void print_and_resize(map_t *load)
{
    if (LINES < count_tab(load->map_2d) || COLS < count_cols(load->map_1d))
        mvprintw(LINES / 2, COLS / 2 -11,
        "please enlarge the terminal to play !");
    else {
        for (int i = 0; load->map_2d[i] != NULL; i++) {
            mvprintw((LINES / 2)- (count_rows(load->map_1d) / 2) + i, (COLS / 2)
            - (count_cols(load->map_1d) / 2), load->map_2d[i]);
        }
    }
}

map_t *reload_and_find(map_t *load)
{
    for (int i = 0; load->map_2d_copy[i] != NULL; i++) {
        for (int j = 0; load->map_2d_copy[i][j] != '\0'; j++) {
            if (load->map_2d_copy[i][j] == 'O' && load->map_2d[i][j] == ' ') {
                load->map_2d[i][j] = 'O';
            }
        }
    }
    return (load);
}

void base_game(void)
{
    initscr();
    curs_set(0);
    keypad(stdscr, true);
    noecho();
}

void refresh_game(void)
{
    clear();
    refresh();
}
