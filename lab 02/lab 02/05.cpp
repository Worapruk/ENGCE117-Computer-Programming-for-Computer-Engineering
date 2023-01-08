#include <stdio.h>
#include <string.h>

char *ad_string() ;

int main () {
   

  char  *adtext = ad_string( ) ;
printf("this is my text partby reference = %s", adtext) ;
    return 0 ;
}

char *ad_string() {
char *adtext = "hello" ;
return adtext ;
}