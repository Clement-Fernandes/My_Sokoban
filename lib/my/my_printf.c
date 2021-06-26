/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** print
*/

#include "../../include/bsprintf.h"

int my_printf(char *str, ...)
{
    va_list va;
    va_start(va, str);

    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '%') {
            i++;
            i = space_flag(str, i);
            call(str, va, i);
        }
        else
            my_putchar(str[i]);
        i++;
    }
    va_end(va);
    return (0);
}