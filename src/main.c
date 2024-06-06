#include "../inc/cinp_chunk.h"
#include "../inc/cinp_debug.h"

int main(int argc, char* argv[])
{
    chunk_s chunk;

    init_chunk(&chunk);
    write_chucnk(&chunk, OP_RETURN);
    
    disassemble_chunk(&chunk, "Test Code Chunk");

    free_chunk(&chunk);

    return 0;
}
