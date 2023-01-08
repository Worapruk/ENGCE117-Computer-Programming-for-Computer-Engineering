#include <stdio.h>
#include <string.h>
#include <conio.h>
 int main () {
    char a ;
    printf ("การเลือกซื้อหนังสือ") ;
    printf ("ดูที่หน้าปก") ;
    printf("คุ้มมั้ย (y/n)") ;
    scanf ( "%s" , &a) ;

    switch (a)
    {
    case 'y' :
    printf("ซื้อ");
        break;
    case 'n' :
    printf("ไม่ซื้อ") ;
        break;
    default:
    printf("error") ;
        break;
    }

    return 0 ;
 }