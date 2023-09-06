/*
** EPITECH PROJECT, 2023
** undefined
** File description:
** header
*/

#include "../include/include.h"

int len_tab(char **map)
{
    int i = 0;

    for (; map[i] != NULL; i++);
    return i;
}

void copy_tab(char ***dest, char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        for (int j = 0; map[i][j] != '\0'; j++)
            (*dest)[i][j] = map[i][j];
}

void creat_copy(char **map, char ***copy)
{
    int tab_len = len_tab(map);
    int len = strlen(map[0]);

    *copy = malloc(sizeof(char *) * (tab_len + 1));
    for (int i = 0; i < tab_len; i++)
        (*copy)[i] = malloc(sizeof(char) * (len + 1));
    (*copy)[tab_len] = NULL;
    for (int i = 0; i < tab_len; i++) {
        for (int j = 0; j < len; j++)
            (*copy)[i][j] = map[i][j];
        (*copy)[i][len] = '\0';
    }
}
