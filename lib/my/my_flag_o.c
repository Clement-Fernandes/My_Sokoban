/*
** EPITECH PROJECT, 2020
** my_flag_o.c
** File description:
** print
*/

#include "../../include/bsprintf.h"

int my_flag_o(unsigned int nb)
{
    int rest = 0;

    if (nb < 0)
        return (84);
    if (nb >= 0 && nb <= 7)
        my_putchar(OCTAL[nb]);
    if (nb > 7) {
        rest = nb % 8;
        my_flag_o(nb / 8);
        my_putchar(OCTAL[rest]);
    }
    return (0);
}