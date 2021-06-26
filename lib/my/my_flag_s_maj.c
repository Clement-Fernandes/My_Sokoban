/*
** EPITECH PROJECT, 2020
** my_flag_s_maj.c
** File description:
** print
*/

#include "../../include/bsprintf.h"

int my_flag_s_maj(char *str)
{
    int e = 0;

    while (str[e] != '\0'){
        if (str[e] >= 0 && str[e] <= 7) {
            my_putstr("\\00");
            my_flag_o(str[e]);
        }
        else if (str[e] < 32 || str[e] >= 127) {
            my_putstr("\\0");
            my_flag_o(str[e]);
        }
        else
            my_putchar(str[e]);
        e++;
    }
    return (0);
}
