#ifndef ROOM_H
#define ROOM_H

#include <stdio.h>
#include <stdlib.h>

typedef struct room {
    char *room_id;
    int nums_connections;
    struct room** connections;
    bool is_start = 0;
    bool is_end = 0;    
} room_t;

#endif