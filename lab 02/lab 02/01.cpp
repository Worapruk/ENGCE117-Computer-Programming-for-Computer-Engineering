#include <stdio.h>
#include <string.h>

void  ad_string(char **adtext) ;

int main () {
    char *str , bf[] = "hello\n"  ;
    str = bf ;
printf("this is my text before  partby reference = %s", str) ;
    ad_string( &str) ;
printf("this is my text partby reference = %s", str) ;
    return 0 ;
}

void  ad_string(char **adtext) {

*adtext = new char[20] ;
gets(*adtext) ;

}