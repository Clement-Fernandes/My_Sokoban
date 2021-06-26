/*
** EPITECH PROJECT, 2020
** my_uns_put_nbr
** File description:
** print
*/

#include "../../include/bsprintf.h"

int my_flag_u(unsigned int nb)
{
    int rest = 0;

    if (nb < 0)
        return (84);
    if (nb > 9) {
        rest = nb % 10;
        my_flag_u((nb - (rest))/10);
        my_putchar(rest + '0');
    }
    else
        my_putchar(nb + '0');
    return (0);
}
