//
//  debug.h
//  CLox
//
//  Created by bryce on 2023/5/4.
//

#ifndef debug_h
#define debug_h

#include <stdio.h>
#include "chunk.h"


void disassembleChunk(Chunk* chunk, const char* name);
int disassembleInstruction(Chunk* chunk, int offset);

#endif /* debug_h */
