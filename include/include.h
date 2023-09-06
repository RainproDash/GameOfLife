/*
** EPITECH PROJECT, 2023
** B-PSU-200-LYN-2-1-minishell1-tristan.calard
** File description:
** include
*/

#ifndef INCLUDE_H_
    #define INCLUDE_H_
    #include <stdio.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <string.h>
    #include <sys/wait.h>
    #include <errno.h>
    #include <stdarg.h>
    #include <sys/stat.h>
    #include <fcntl.h>

    int error_hand(int ac, char **av);
    int gameoflife(int ac, char **av);
    void my_str_to_word_array(char *str, char ***tab, char *delim);
    int check_file(char **map);
    void copy_tab(char ***dest, char **map);
    void creat_copy(char **map, char ***copy);
    void update(char **map, char **copy);

#endif /* !INCLUDE_H_ */
