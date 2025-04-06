#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char *line = NULL;
    ssize_t read;
    while ((read = getline(&line, &size, stdin)) != -1) {
        printf("%s", line);
    }
    
    return 0;
}