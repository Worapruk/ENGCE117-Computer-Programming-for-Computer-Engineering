#include <stdio.h>
#include <string.h>

struct studen_name 
{
   char *name ;
   int age ;
} ;

void prit_studen(studen_name  *n){
    printf("name studen : %s\n" , n->name) ;
    printf("age studen  : %d" ,n->age) ;
}
int main () {
    
   studen_name  n ={"jameji",18} ;
    prit_studen(&n) ;

return 0 ;
}