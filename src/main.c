/*
** EPITECH PROJECT, 2021
** main
** File description:
** main
*/

#include "../include/sokoban.h"
#include "../include/bsprintf.h"

static int helper(char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    }
    return (1);
}

int main(int ac, char **av)
{
    if (ac == 2 && helper(av) == 0)
        return (0);
    else if (ac == 2) {
        return (game(av[1]));
    }
    else {
        one_argument();
        return (84);
    }
}
