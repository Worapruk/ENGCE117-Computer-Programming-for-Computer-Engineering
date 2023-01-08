#include <stdio.h>
int main () {
    int min = 0 , index = 0 ,max ;
    int input[4] = {14,10,5,13} ;
    int i = 0 ;
    while (i < 4) {
        max = input[i] ;
        index = i ;
        break;
    i++ ;
    }
    printf ("9,10,5,13" ) ;
    printf("on it max = %d",input[index]) ;
    return 0 ;
}