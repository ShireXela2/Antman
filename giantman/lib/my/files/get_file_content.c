/*
** EPITECH PROJECT, 2023
** Project
** File description:
** get_file_content
*/

#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <stdlib.h>

char *get_file_content(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);
    char *buffer;
    struct stat sb;

    if (fd == -1)
        return NULL;
    stat(filepath, &sb);
    buffer = malloc(sizeof(char) * (sb.st_size + 1));
    buffer[sb.st_size] = '\0';
    read(fd, buffer, sb.st_size);
    close(fd);
    return buffer;
}
