#include <stdio.h>
#include <string>
struct poit_01 {
    int num ;
};
void change(struct poit_01 x) {
    x.num = 20 ;



}
int main () {
    struct poit_01 x;
    x.num = 10 ;
    printf("before %d\n" , x.num) ;
    change( x) ;
    printf("after %d" , x.num) ;

   
    


    return 0 ;
}