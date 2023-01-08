#include <stdio.h>

int main () {

int arr[4] = {1,2,3,4} ;
int *p[4] ;
p[0] = &arr[0];


printf ("arr[0]  = %d\n", arr[0]) ;
printf ("&p[0]   = %d\n", &p[0]) ;
printf ("p[0]    = %d\n", p[0]) ;
printf ("*p[0]   = %d\n", *p[0]) ;
    return 0 ;
}