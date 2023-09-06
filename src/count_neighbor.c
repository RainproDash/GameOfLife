/*
** EPITECH PROJECT, 2023
** B-CPE-210-LYN-2-1-stumper1-tristan.calard
** File description:
** count_neighbor
*/

#include "../include/include.h"

int count_neighbor(char **map, int x, int y)
{
    int nbr = 0;
    if (x - 1 >= 0 && y - 1 >= 0)
        (map[x - 1][y - 1] == 'X') ? nbr++ : 0;
    if (x - 1 >= 0)
        (map[x - 1][y] == 'X') ? nbr++ : 0;
    if (x - 1 >= 0 && map[x][y + 1] != '\0')
        (map[x - 1][y + 1] == 'X') ? nbr++ : 0;
    if (y - 1 >= 0)
        (map[x][y - 1] == 'X') ? nbr++ : 0;
    if (map[x][y + 1] == 'X')
        nbr++;
    if (map[x + 1] != NULL){
        (map[x + 1][y] == 'X') ? nbr++ : 0;
        (map[x + 1][y + 1] == 'X') ? nbr++ : 0;
    }
    if (map[x + 1] != NULL && y - 1 >= 0)
        (map[x + 1][y - 1] == 'X') ? nbr++ : 0;
    return nbr;
}

void life_or_die(char **map, char **copy, int i, int j)
{
    int n = count_neighbor(copy, i, j);

    if (copy[i][j] == '.' && n == 3) {
        map[i][j] = 'X';
        return;
    }
    if (copy[i][j] == 'X') {
        if (n < 2 || n > 3) {
            map[i][j] = '.';
            return;
        }
    }
}

void update(char **map, char **copy)
{
    for (int i = 0; map[i] != NULL; i++)
        for (int j = 0; map[i][j] != '\0'; j++)
            life_or_die(map, copy, i, j);
}
