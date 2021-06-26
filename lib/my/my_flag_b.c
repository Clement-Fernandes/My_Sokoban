/*
** EPITECH PROJECT, 2020
** my_flag_b.c
** File description:
** print
*/

#include "../../include/bsprintf.h"

int my_flag_b(unsigned int nb)
{
    int rest = 0;

    if (nb < 0)
        return (84);
    if (nb >= 2) {
        my_flag_b(nb / 2);
    }
    my_putchar(BINARY[nb % 2]);
    return (0);
}