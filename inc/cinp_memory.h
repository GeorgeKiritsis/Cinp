#ifndef CINP_MEMORY_H
#define CINP_MEMORY_H

#include "cinp_utils.h"

#define GROW_CAPACITY(_capacity)\
    ((_capacity) < 8 ? 8 : _capacity*2) // if the condition is true -> returns 8else it returns _c*2

#define GROW_ARRAY(_type, _ptr, _oldCount, _newCount)\
    (_type*)reallocate(_ptr, sizeof(_type) * (_oldCount), sizeof(_type)* (_newCount))

#define FREE_ARRAY(_type, _ptr, _oldCount)\
    reallocate(_ptr, sizeof(_type) * (_oldCount), 0)


void* reallocate(void* ptr, size_t old_size, size_t new_size);

/*

old_size    new_size    operation 
0           !0          allocate new block of code
!0          0           free allocation
!0          <old_size   shrink existing allocation
!0          >new_size   grow existing allocation

 */
#endif
