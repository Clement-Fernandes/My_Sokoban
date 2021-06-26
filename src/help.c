/*
** EPITECH PROJECT, 2021
** help
** File description:
** help
*/

#include "../include/bsprintf.h"
#include "../include/sokoban.h"

void help(void)
{
    my_printf("USAGE\n");
    my_printf("     ./my_sokoban map\n");
    my_printf("DESCRIPTION\n");
    my_printf("     map  file representing the warehouse map, ");
    my_printf(" containing '#' for walls, \n  \t'P' for the player");
    my_printf(", 'X' for boxes and 'O' for storage locations.\n");
}

void one_argument(void)
{
    my_printf("./my_sokoban: bad arguments: 0 given but 1 is required\n");
    my_printf("retry with -h\n");
}