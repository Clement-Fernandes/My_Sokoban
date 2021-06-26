/*
** EPITECH PROJECT, 2020
** my_str_cpy
** File description:
** boot_camp
*/

#include "../../include/bsprintf.h"

char *my_strcpy(char *dest, char  const *src)
{
    int i = 0;

    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    return (dest);
}