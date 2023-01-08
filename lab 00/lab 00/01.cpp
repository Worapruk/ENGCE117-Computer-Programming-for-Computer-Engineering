#include <stdio.h>
#include <string.h>

int main () {
    char a  ;
 int  noodle , bowl , spoon , i,s=3 ;
 printf ( "bail water\n") ;
 printf("put noodle in the blow \n") ;
 printf("water boiling yet? (y/n)") ;
 scanf ("%s" , &a ) ;
 switch (a) 
 {
 case 'n' :
    for( i = 0 ; i < s ; i++){
        printf ("in %d minites", i++) ;

    }
    break;
 default:
    break;
 }
printf("in wait water in the bow") ;
printf("in wait three minuter") ;
for(i=0 ; i <3 ; i++) {
    printf("in %d minuter" , i++) ;
}
    return 0 ;
}
