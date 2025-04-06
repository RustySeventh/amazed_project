#include <stdio.h>
#include <stdlib.h>
#include "rooms.h"
#include "string.h"

int main() {
    char *line = NULL;
    ssize_t read;
    size_t size = 0;
    char *content = NULL;
    while ((read = getline(&line, &size, stdin)) != -1) {
        content = (char *)realloc(content, sizeof(content) + size);
        strcat(content, line);
    }
    parse_file(content);
    return 0;
}