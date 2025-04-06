#include "rooms.h"
#include <bits/types/siginfo_t.h>
#include <stdbool.h>
#include <string.h>

room_t *parse_file(char *content) {
    room_t* start = (room_t*)malloc(sizeof(room_t));
    char *strToken = strtok(content, "\n");
    // printf("%s", strToken);
    start->robot = atoi(strToken);
    while(strToken != NULL) {
        printf("%s", strToken);
        if(strcmp(strToken, "##start") == 0) {
            start->start = 1;
        }   
        strToken = strtok(NULL, "\n");
    }
    printf("innit\n");
    // printf("%d\n", start->start);
    return start;
}