//
//  memory.c
//  CLox
//
//  Created by bryce on 2023/5/4.
//

#include "memory.h"
#include <stdlib.h>

void* reallocate(void* pointer, size_t oldSize, size_t newSize) {
    //新申请的大小为0则释放该块内存
    if (newSize == 0) {
        free(pointer);
        return NULL;
    }
    void* result = realloc(pointer, newSize);
    //分配失败程序退出
    if (result == NULL) exit(1);
    return result;
}
