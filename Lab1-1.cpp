#include <stdio.h>

int main() {
    int a ;
    int i = 0 ;
    printf( "Enter the number of the loop : " ) ;
    scanf( "%d", &a ) ;
    while( i < a ) {
        printf( "[%d] Hello world \n", i + 1 ) ;
        i++ ;
    }

    return 0 ;
}