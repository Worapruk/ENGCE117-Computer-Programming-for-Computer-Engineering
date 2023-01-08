#include <stdio.h>

int main () {
    int count , num ;
    printf("How many you value you dynamic array? : ") ;
    scanf ("%d" , &count) ;
    int *Mydynamicarr ; 
Mydynamicarr[count] ;
for (int i = 0; i < count; i++)
{
    printf( "you num for dynamic array :") ;
    scanf("%d" , &Mydynamicarr[i] ) ;
    
    printf("Mydynamicarr[%d] = %d \n" ,i,Mydynamicarr[i]) ;
}



    return 0 ;
}