/*
** EPITECH PROJECT, 2020
** call.c
** File description:
** print
*/

#include "../../include/bsprintf.h"

int call(char *str, va_list va, int i)
{
    my_flags(str, va, i);
    my_flags_two(str, va, i);
    my_flags_three(str, va, i);
    porcent_flag(str, va, i);
}
