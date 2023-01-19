#include <stdio.h>
#include <string.h>

void go( int **p, int *z ) {
    *p = z ;

    printf ("%p %p %p\n",**p , *p , p) ;
} // end function

int main() {
int *a, b = 10, c = 20 ;
go( &a, &b ) ;
printf ( "%d %p %p\n", *a, a, &a ) ;
go( &a, &c ) ;
printf ( "%d %p %p\n", *a, a, &a ) ;


return 0 ;
}//end function

