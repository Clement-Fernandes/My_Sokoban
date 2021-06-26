/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** Print any number given as parameter
*/

#include "../../include/bsprintf.h"

int my_put_nbr(int nb)
{
    long int n = nb;
    int rest = 0;

    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    if (n >= 0 && n <= 9)
        my_putchar(n + '0');
    if (n >= 10) {
        rest = n % 10;
        my_put_nbr(n / 10);
        my_putchar(rest + '0');
    }
    return (0);
}
