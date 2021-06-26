/*
** EPITECH PROJECT, 2021
** open_read
** File description:
** open and read a file
*/

#include "../include/sokoban.h"
#include "../include/bsprintf.h"

char *open_read(char *filename)
{
    int fd = open(filename, O_RDONLY);
    char *buffer = NULL;
    struct stat sb;
    int size = 0;

    if (fd == -1) {
        my_printf("failed to open map\n");
        exit (84);
    }
    if (stat(filename, &sb) == -1)
        return (NULL);
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    size = read(fd, buffer, sb.st_size);
    if (size == -1)
        exit (84);
    buffer[size] = '\0';
    close(fd);
    return (buffer);
}

int free_maps(map_t *load, pos_p_t * pos)
{
    free(pos);
    free(load);
    return (0);
}