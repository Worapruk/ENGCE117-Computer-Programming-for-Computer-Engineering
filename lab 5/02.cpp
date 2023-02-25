#include <stdio.h>
#include <string.h>

struct studentNode {
 char name[20] ;
 int age ;
 char sex ;
 float gpa ;
 struct studentNode *next ;
} ;

void ShowAll( struct studentNode **walk ) ;
void InsNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) ;
void GoNext( struct studentNode ***walk ) ;
void DelNode( struct studentNode **walk ) ;

int main() {
 struct studentNode *start, **now ;
 start = NULL ; now = &start ;
 InsNode( now, "one", 6, 'M', 3.11 ) ; ShowAll( &start ) ;
 InsNode( now, "two", 8, 'F', 3.22 ) ; ShowAll( &start ) ;
 GoNext( &now ) ;
 InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( &start ) ;
 InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( &start ) ;
 GoNext( &now ) ;
 DelNode( now ) ; ShowAll( &start ) ;
 return 0 ;
}//end function

void ShowAll( struct studentNode **walk ) {
 while( *walk != NULL ) {
  printf( "%s ", (*walk)->name ) ;
  walk = &(*walk)->next ;
 }//end while
 printf( " \n" ) ;
}//end function

void InsNode( struct studentNode **walk, char name[], int age, char sex, float gpa ){
	struct studentNode *before = (*walk) ;
	if ( (*walk) == NULL ) {
		*walk = new struct studentNode ;
		(*walk)->next = NULL ;
	}
	struct studentNode *begin = new struct studentNode ;
	strcpy(begin->name, name) ;
	begin->age = age ;
	begin->sex = sex ;
	begin->gpa = gpa ;
	begin->next = (*walk)->next ;
	(*walk) = begin ;
	(*walk)->next = before ;
}
void GoNext( struct studentNode ***walk  ) {
	if ( (**walk) != NULL ) {
		(*walk) = &(**walk)->next ;
	}
}

void DelNode( struct studentNode **walk ){
	if ( (*walk) != NULL ){
		struct studentNode *begin = new struct studentNode ;
		begin = (*walk)->next ;
		(*walk) = begin ;	
	}
	
}