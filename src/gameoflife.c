/*
** EPITECH PROJECT, 2023
** DuoStumper
** File description:
** heart
*/

#include "../include/include.h"

void open_file(char ***map, char *path)
{
    struct stat st;
    char *buf;
    int size;
    int fd = open(path, O_RDONLY);

    stat(path, &st);
    size = st.st_size;
    buf = malloc(sizeof(char *) * size);
    read(fd, buf, size);
    buf[size] = '\0';
    my_str_to_word_array(buf, &(*map), "\n");
    free(buf);
    close(fd);
}

void free_map(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        free(map[i]);
    free(map);
}

void print_map(char **map)
{
    for (int i = 0; map[i] != NULL; i++)
        printf("%s\n", map[i]);
}

int gameoflife(int ac, char **av)
{
    char **map = NULL;
    char **copy = NULL;

    open_file(&map, av[1]);
    if (check_file(map) == 1) {
        free_map(map);
        exit(84);
    }
    creat_copy(map, &copy);
    for (int i = 0; i < atoi(av[2]); i++) {
        update(map, copy);
        copy_tab(&copy, map);
    }
    print_map(map);
    free_map(map);
    free_map(copy);
    return 0;
}
