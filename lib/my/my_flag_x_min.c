/*
** EPITECH PROJECT, 2020
** my_flag_x_min.c
** File description:
** print
*/

#include "../../include/bsprintf.h"

int my_flag_x_min(unsigned int nb)
{
    int rest = 0;

    if (nb < 0)
        return (84);
    if (nb >= 0 && nb <= 16)
        my_putchar(HEXAMIN[nb]);
    if (nb > 16) {
        rest = nb % 16;
        my_flag_x_min(nb / 16);
        my_putchar(HEXAMIN[rest]);
    }
    return (0);
}
