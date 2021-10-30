#include <stdio.h>
#include "Vec3f.h"

void printVec3f( struct Vec3f vec );

int main()
{
    struct Vec3f a;
    struct Vec3f b;
    struct Vec3f c;

    Vec3fSet( &a, 1, 0, 1 );
    Vec3fSet( &b, 1, 0, 0 );

    printf( "\nVector a = " );
    printVec3f( a );
    printf( "\nVector b = " );
    printVec3f( b );
    
    printf( "\nsub( a, b ) = " );
    printVec3f( sub( a, b ) );
   
    printf( "\ndot( a, b ) = " );
    printf( "%f", dot( a, b ) );

    printf( "\ncross( a, b ) = " );
    printVec3f( cross( a, b ) );

    printf("\n");

	return 0;
}

void printVec3f( struct Vec3f vec )
{
    printf("<%f, %f, %f>", vec.x, vec.y, vec.z );
}
