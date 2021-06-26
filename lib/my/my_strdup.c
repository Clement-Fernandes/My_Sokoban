/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** my_strdup
*/

#include "../../include/bsprintf.h"

char *my_strdup(char *str)
{
    int i = 0;
    char *j = NULL;

    i = my_strlen(str) + 1;
    j = malloc(i);
    if (j == NULL)
        return (NULL);
    j = my_strcpy(j, str);
    j[i - 1] = '\0';
    return (j);
}