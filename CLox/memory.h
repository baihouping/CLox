//
//  memory.h
//  CLox
//
//  Created by bryce on 2023/5/4.
//

#ifndef memory_h
#define memory_h

#include <stdio.h>
#include "common.h"

//动态内存分配计算
#define GROW_CAPACITY(capacity) \
((capacity) < 8 ? 8 : (capacity) * 2)

//分配
#define GROW_ARRAY(type, pointer, oldCount, newCount) \
    (type*)reallocate(pointer, sizeof(type) * (oldCount), \
        sizeof(type) * (newCount))

//释放内存
#define FREE_ARRAY(type, pointer, oldCount) \
    reallocate(pointer, sizeof(type) * (oldCount), 0)

void* reallocate(void* pointer, size_t oldSize, size_t newSize);

#endif /* memory_h */
