//
//  chunk.h
//  CLox
//
//  Created by bryce on 2023/5/4.
//

#ifndef chunk_h
#define chunk_h

#include "common.h"
#include "value.h"

typedef enum {
    OP_CONSTANT,
    OP_ADD,
    OP_SUBTRACT,
    OP_MULTIPLY,
    OP_DIVIDE,
    OP_NEGATE,
    OP_RETURN,
} OpCode;

typedef struct {
    int count;
    int capacity;
    uint8_t* code;
    int* lines;
    ValueArray constants;
} Chunk;

//初始化
void initChunk(Chunk *chunk);
//释放
void freeChunk(Chunk *chunk);
//写入内容
void writeChunk(Chunk *chunk, uint8_t byte, int line);
//写入常量内容
int addConstant(Chunk *chunk, Value value);

#endif /* chunk_h */
