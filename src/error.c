/*
** EPITECH PROJECT, 2023
** B-CPE-210-LYN-2-1-stumper1-tristan.calard
** File description:
** error
*/

#include "../include/include.h"
#include <fcntl.h>

int is_right_charac(char **map, int i)
{
    for (int j = 0; map[i][j] != '\0'; j++)
        if (map[i][j] != '.' && map[i][j] != 'X')
            return 1;
    return 0;
}

int check_file(char **map)
{
    int len = strlen(map[0]);
    int i = 0;
    int my_len = 0;

    for (i = 0; map[i] != NULL; i++) {
        if ((my_len = strlen(map[i])) != len)
            return 1;
        if (is_right_charac(map, i) == 1)
            return 1;
    }
}

int error_hand(int ac, char **av)
{
    int fd = 0;

    if (ac != 3)
        return 1;
    if (atoi(av[2]) <= 0 && strcmp(av[2], "0") != 0)
        return 1;
    if ((fd = open(av[1], O_RDONLY)) == -1) {
        close(fd);
        return 1;
    }
    return 0;
}
