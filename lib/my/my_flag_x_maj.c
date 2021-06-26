/*
** EPITECH PROJECT, 2020
** my_flag_x_maj.c
** File description:
** print
*/

#include "../../include/bsprintf.h"

int my_flag_x_maj(unsigned int nb)
{
    int rest = 0;

    if (nb < 0)
        return (84);
    if (nb >= 0 && nb <= 16)
        my_putchar(HEXAMAJ[nb]);
    if (nb > 16) {
        rest = nb % 16;
        my_flag_x_maj(nb / 16);
        my_putchar(HEXAMAJ[rest]);
    }
    return (0);
}
