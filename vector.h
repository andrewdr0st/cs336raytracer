#ifndef VECTOR_H
#define VECOTR_H

typedef struct vector3 {
    union {
        struct { float x, y, z; };
        struct { float r, g, b; };
    };
} vec3, color;



#endif