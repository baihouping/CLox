//
//  value.h
//  CLox
//
//  Created by bryce on 2023/5/4.
//

#ifndef value_h
#define value_h

#include <stdio.h>

typedef double Value;

typedef struct {
    int capacity;
    int count;
    Value* values;
} ValueArray;

void initValueArray(ValueArray* array);
void writeValueArray(ValueArray* array, Value value);
void freeValueArray(ValueArray* array);
void printValue(Value value);
#endif /* value_h */
