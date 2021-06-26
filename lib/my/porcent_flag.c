/*
** EPITECH PROJECT, 2020
** porcent_flag
** File description:
** print
*/

#include "../../include/bsprintf.h"

void porcent_flag(char *str, va_list va, int i)
{
    if (str[i] == '%') {
        my_putchar('%');
    }
}
