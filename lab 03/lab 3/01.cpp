#include <stdio.h>
#include <string.h>

struct studen
{
    char name[7] ;
    int age ;
    float gpa ;

}; 


int main () {
struct studen a1;
 strcpy(a1.name,"jameji" );
 a1.age = 18 ;
 a1.gpa = 0.00;
    printf("name = %s\n", a1.name) ;
    printf("age  =%d\n", a1.age) ;
    printf("gpa  =%f\n", a1.gpa) ;

    return 0 ;
}