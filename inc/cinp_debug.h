#ifndef CINP_DEBUG_H
#define CINP_DEBUG_H

#include "cinp_chunk.h"

void disassemble_chunk(chunk_s* chunk, const char* name);

static int simple_instruction(const char* name, int offset);

int disassemble_instruction(chunk_s* chunk, int offset);

#endif

