#include <stdio.h>
void part_by_value(int num) ;
int main () {
    int num = 10 ;

    part_by_value( num) ;
    printf("num = %d",num) ;

    return 0 ;
}
void part_by_value(int num) {
    num = 20 ;
}