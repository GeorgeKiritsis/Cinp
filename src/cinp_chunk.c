#include <stdlib.h>

#include "../inc/cinp_chunk.h"
#include "../inc/cinp_memory.h"

void init_chunk(chunk_s* chunk)
{
    chunk->count = 0;
    chunk->code = NULL;
    chunk->capacity = 0;
}
 
void write_chucnk(chunk_s* chunk, u8 byte)
{
    if(chunk->capacity < chunk->count+1)
    {
        int old_capacity = chunk->capacity;

        chunk->capacity = GROW_CAPACITY(old_capacity);
        chunk->code = GROW_ARRAY(u8 , chunk->code, old_capacity, chunk->capacity);
    }

    chunk->code[chunk->count] = byte;
    chunk->count++;
}

void free_chunk(chunk_s* chunk)
{
    FREE_ARRAY(u8, chunk->code, chunk->capacity);
    init_chunk(chunk);
}
