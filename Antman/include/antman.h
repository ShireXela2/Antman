/*
** EPITECH PROJECT, 2023
** AntmanGiantman
** File description:
** antman
*/

#ifndef ANTMAN_H_
    #define ANTMAN_H_

////////////
// MACROS //
////////////

///////////////
// CONSTANTS //
///////////////

    #define DIGIT_BUFFER_LEN 12
    #define HIGHEST_BASE 94

/////////////////////
// HEADERS INCLUDE //
/////////////////////

    #include "my.h"

//////////////
// TYPEDEFS //
//////////////

enum type {
    BRANCH,
    LEAF
};

typedef struct node {
    char c;
    unsigned int occurrences;
    struct node *left;
    struct node *right;
    char *path;
    enum type type;
} node_t;

typedef struct path_list {
    char c;
    char *path;
} path_list_t;

///////////////
// FUNCTIONS //
///////////////

void bubblesort(list_t *list);
void merge_nodes(list_t **big_list);
void print_occurrences(list_t *frequencies);
void write_compressed_file(char *content, list_t *paths);
void convert_big_base(char *dest, unsigned long nb, int base);
void free_all(node_t *tree, list_t *paths, list_t *frequencies, char *content);
int convert_to_decimal(char *big_nb_str, int base);
char *int_to_str(char *str, int number);
list_t *create_paths(node_t *tree);
list_t *get_frequencies(char *content, const char *file_path);
node_t *create_tree(list_t **list);
node_t *create_node(char c, int occurences, enum type type);
path_list_t *create_path(char c, char *path_str);

#endif /* !ANTMAN_H_ */
