#include <stdio.h>

void go( int **p, int *z ) {
    *p = z ;
    printf("%d %p %p\n", **p, *p, p) ;
}

int main() {
    int *a, b = 10, c = 20 ;
    go( &a, &b ) ;
    printf( "%d %p %p\n", *a, a, &a ) ;
    go( &a, &c ) ;
    printf( "%d %p %p\n", *a, a, &a ) ;
    return 0 ;
}//end function