/*
** EPITECH PROJECT, 2023
** Project
** File description:
** giantman
*/

#ifndef GIANTMAN_H_
    #define GIANTMAN_H_

////////////
// MACROS //
////////////

    #define HIGHEST_BASE 94

/////////////
// HEADERS //
/////////////

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
    char *path;
    unsigned int occurrences;
    enum type type;
    struct node *left;
    struct node *right;
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
void get_chars_in_tree(char *content, node_t *tree);
int giantman(char const *filepath);
unsigned int convert_to_decimal(char const *big_nb_str, int *nb_len, int base);
node_t *node_create(char c, unsigned int occurrences, enum type type);
list_t *create_paths(node_t *tree);
list_t *get_nodes(char const *content, int *offset);
node_t *hardcode_btree(void);
node_t *create_tree(char const *content, int *offset);

#endif /* GIANTMAN_H_ */
