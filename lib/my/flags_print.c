/*
** EPITECH PROJECT, 2020
** flags_print.c
** File description:
** print
*/

#include "../../include/bsprintf.h"

void my_flags(char *str, va_list va, int i)
{
    if (str[i] == 'c')
        my_putchar(va_arg(va, int));
    if (str[i] == 'd')
        my_put_nbr(va_arg(va, int));
    if (str[i] == 'i')
        my_put_nbr(va_arg(va, int));
    if (str[i] == 's')
        my_putstr(va_arg(va, char *));
}

void my_flags_two(char *str, va_list va, int i)
{
    if (str[i] == 'u')
        my_flag_u(va_arg(va, unsigned int));
    if (str[i] == 'o')
        my_flag_o(va_arg(va, unsigned int));
    if (str[i] == 'b')
        my_flag_b(va_arg(va, unsigned int));
    if (str[i] == 'x')
        my_flag_x_min(va_arg(va, unsigned int));
}

void my_flags_three(char *str, va_list va, int i)
{
    if (str[i] == 'X')
        my_flag_x_maj(va_arg(va, unsigned int));
    if (str[i] == 'p') {
        my_putstr("0x");
        my_flag_x_min(va_arg(va, unsigned int));
    }
    if (str[i] == 'S')
        my_flag_s_maj(va_arg(va, char *));
}
