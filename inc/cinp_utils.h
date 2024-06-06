#ifndef CINP_UTILS_H
#define CINP_UTILS_H

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdlib.h>

#define PTR_ASSERT(_e, ...) if (!(_e)) { fprintf(stderr, __VA_ARGS__); free(_e); return NULL;);}

#define MEM_ASSERT(_e, ...) if (!(_e)) { fprintf(stderr, __VA_ARGS__); free(_e); exit(1); }

typedef float    f32;
typedef double   f64;
typedef uint8_t  u8;
typedef uint16_t u16;
typedef uint32_t u32;
typedef uint64_t u64;
typedef int8_t   i8;
typedef int16_t  i16;
typedef int32_t  i32;
typedef int64_t  i64;
typedef size_t   usize;

#endif
