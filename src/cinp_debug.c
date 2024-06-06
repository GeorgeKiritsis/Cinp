#include "../inc/cinp_debug.h"

#include <stdio.h>


void disassemble_chunk(chunk_s* chunk, const char* name)
{
    printf("~~~ %s ~~~\n", name);
    for(int offset = 0; offset <chunk->count;)
    {
        offset = disassemble_instruction(chunk, offset);
    }
}

// only availabe in the file it gets declared
static int simple_instruction(const char* name, int offset)
{
    printf("%s\n", name);
    return offset + 1;

}

int disassemble_instruction(chunk_s* chunk, int offset)
{
    printf("%04d ", offset);

    u8 instruction = chunk->code[offset];
    switch(instruction)
    {
        case OP_RETURN:
            return  simple_instruction("OP_RETURN", offset) ;
        default:
            printf("Unknown opcode %d\n", instruction);
            return offset + 1;
    }
}
