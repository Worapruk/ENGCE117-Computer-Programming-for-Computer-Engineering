#include <stdio.h>

void part_by_reference ( int &num) ;


int main () {
    int num = 10 ;

    part_by_reference(num) ;
    printf("num = %d", num) ;
    return 0 ;
}
void part_by_reference(int &num){
    num = 20 ;
}