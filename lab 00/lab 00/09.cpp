#include <stdio.h>
int main () {
    int i = 2 , z ;
    printf ("plese input you number : ") ;
    scanf("%d" , &z) ;
    while (i < z)
    {
        int j=2 ;
        while (j <= i )
        {
            if (i%j == 0) {
                break;
            }
            j++ ;
        }
        if (j >i/j) {
            printf("%d " , i) ;
        }
        i++ ;
    
}
return 0 ;
}