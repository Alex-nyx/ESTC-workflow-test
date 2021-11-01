#include "Vec3f.h"

void Vec3fSet( struct Vec3f* vec, float x, float y, float z )
{
    vec->x = x;
    vec->y = y;
    vec->z = z;
}

struct Vec3f sum( struct Vec3f lhs, struct Vec3f rhs )
{
    lhs.x += rhs.x;
    lhs.y += rhs.y;
    lhs.z += rhs.z;

    return lhs;
}

struct Vec3f sub( struct Vec3f lhs, struct Vec3f rhs )
{
    lhs.x -= rhs.x;
    lhs.y -= rhs.y;
    lhs.z -= rhs.z;

    return lhs;
}

struct Vec3f mul( struct Vec3f lhs, float rhs )
{
    lhs.x *= rhs;
    lhs.y *= rhs;
    lhs.z *= rhs;

    return lhs; 
}

struct Vec3f div( struct Vec3f lhs, float rhs )
{
    return mul( lhs, 1/rhs );
}

struct Vec3f div_safe( struct Vec3f lhs, float rhs )
{
    if ( rhs != 0 )
    {
        return mul( lhs, 1/rhs );
    }
    else
    {
        Vec3fSet( &lhs, 0, 0, 0 );
        return lhs;
    }
}

float dot( struct Vec3f lhs, struct Vec3f rhs )
{
    return ( lhs.x * rhs.x ) 
         + ( lhs.y * rhs.y ) 
         + ( lhs.z * rhs.z );
}

struct Vec3f cross( struct Vec3f lhs, struct Vec3f rhs )
{
    struct Vec3f res;

    res.x = lhs.z * rhs.y - lhs.y * rhs.z;
    res.y = lhs.x * rhs.z - lhs.z * rhs.x;
    res.z = lhs.y * rhs.x - lhs.x * rhs.y;

    return res;
}

