//
//  compiler.h
//  CLox
//
//  Created by bryce on 2023/5/5.
//

#ifndef compiler_h
#define compiler_h

#include <stdio.h>
#include "vm.h"

bool compile(const char* source, Chunk* chunk);

#endif /* compiler_h */
