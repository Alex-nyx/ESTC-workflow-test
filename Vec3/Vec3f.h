#ifndef VEC_3_f_H
#define VEC_3_f_H

struct Vec3f
{
    float x;
    float y;
    float z;
};

void Vec3fSet(  struct Vec3f* vec, float x, float y, float z );

struct Vec3f sum( struct Vec3f lhs, struct Vec3f rhs );
struct Vec3f sub( struct Vec3f lhs, struct Vec3f rhs );
struct Vec3f mul( struct Vec3f lhs, float rhs );
struct Vec3f div( struct Vec3f lhs, float rhs );
struct Vec3f div_safe( struct Vec3f lhs, float rhs );
float dot( struct Vec3f lhs, struct Vec3f rhs );
struct Vec3f cross( struct Vec3f lhs, struct Vec3f rhs );

#endif
