/*
** EPITECH PROJECT, 2023
** B-CPE-210-LYN-2-1-stumper1-tristan.calard
** File description:
** main
*/

#include "../include/include.h"

int main(int ac, char **av)
{
    if (error_hand(ac, av) == 1)
        return 84;
    gameoflife(ac, av);
    return 0;
}
