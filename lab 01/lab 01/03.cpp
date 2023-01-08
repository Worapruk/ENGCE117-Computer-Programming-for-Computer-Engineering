#include <stdio.h>

int xy_function (int *a ,int *b) ;
int main () {
int x= 10, y =20 ;
int xy = xy_function ( &x , &y) ;

printf("%d", xy) ;



    return 0 ;
}
int xy_function (int *a , int *b) {
    return (*a)*(*b) ;
}