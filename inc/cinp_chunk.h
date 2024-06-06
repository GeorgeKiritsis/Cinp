#ifndef CINP_CHUNK_H
#define CINP_CHUNK_H

#include "cinp_utils.h"

typedef enum
{
    OP_RETURN
}
op_code_e;

typedef struct // must me dynamic
{
    int count;      //current space
    int capacity;   //available space
    u8* code;
}
chunk_s;

void init_chunk(chunk_s* chunk);

void write_chucnk(chunk_s* chunk, u8 byte);

void free_chunk(chunk_s* chunk);

#endif
