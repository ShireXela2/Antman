/*
** EPITECH PROJECT, 2023
** Project
** File description:
** giantman
*/

#include "giantman.h"
#include "my.h"
#include <stdio.h>
#include <stdlib.h>

// void node_print(node_t *this, int current_level, int max_level)
// {
//     int i;
//     if (this) {
//         node_print(this->right, current_level + 1, max_level);
//         for (i = 0; i < current_level; i++) {
//             printf("    ");
//         }
//         printf("%c %d\n", this->c, this->occurrences);
//         node_print(this->left, current_level + 1, max_level);
//     } else {
//         if (current_level < max_level) {
//             node_print(NULL, current_level + 1, max_level);
//             for (i = 0; i < current_level; i++) {
//                 printf("    ");
//             }
//             printf("..\n");
//             node_print(NULL, current_level + 1, max_level);
//         }
//     }
// }

int giantman(char const *filepath)
{
    char *content = get_file_content(filepath);
    int offset = 0;
    node_t *tree;

    if (content == NULL) {
        my_puterror("Parameter is not an existing file.\n");
        return 84;
    }
    tree = create_tree(content, &offset);
    if (tree == NULL) {
        free(content);
        my_puterror("Invalid file.\n");
        return 84;
    }
    get_chars_in_tree(content + offset + 2, tree);
    free(content);
    return 0;
}
