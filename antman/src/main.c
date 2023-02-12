/*
** EPITECH PROJECT, 2023
** Antman
** File description:
** main
*/

#include "antman.h"

void compress(char *content, const char *file_path)
{
    list_t *frequencies;
    node_t *tree;
    list_t *paths;

    frequencies = get_frequencies(content, file_path);
    print_occurrences(frequencies);
    tree = create_tree(&frequencies);
    paths = create_paths(tree);
    write_compressed_file(content, paths);
    free_all(tree, paths, frequencies, content);
}

int error_handling(int ac, const char *av[])
{
    if (ac != 3)
        return 84;
    if (my_strlen(av[2]) == 1 && av[2][0] != '1' && av[2][0] != '2'
    && av[2][0] != '3')
        return 84;
    return 0;
}

int main(int ac, const char *av[])
{
    char *content;
    list_t *paths;
    const char *file_path;

    if (error_handling(ac, av))
        return 84;
    file_path = av[1];
    content = get_file_content(file_path);
    if (content == NULL) {
        my_printf("Can't open file '%s'\n", file_path);
        return 84;
    }
    compress(content, file_path);
    return 0;
}
