/*
** EPITECH PROJECT, 2020
** my_strlen.c
** File description:
** task03
*/

#include "../../include/bsprintf.h"

int my_strlen(char const *str)
{
    int e = 0;
    while (str[e] != '\0'){
        e++;
    }
    return (e);

}