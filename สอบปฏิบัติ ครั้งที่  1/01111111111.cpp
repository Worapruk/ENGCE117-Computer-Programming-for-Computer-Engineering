// วรพฤกษ์ พงษปิน 65543206032-6 sec 1
// URL YOUTUBE =https://youtu.be/HVRlBhkrxtY


#include <stdio.h>
#include <string.h>

struct IntNum {
    int data;
    struct IntNum *next;
    struct IntNum *back;
    struct IntNum *temp;
};
void SwapNode(struct IntNum *walk, int pos1, int pos2);
void UpdateNode(struct IntNum *walk, int data, struct IntNum **Begin);
struct IntNum *AddNode(struct IntNum **walk, int data);
void Showall(struct IntNum *walk){
    while ((walk != NULL))
    {
       printf("%d ",walk->data) ;
       walk = walk->next;
    }
    printf("\n") ;
    
} //end function

void Showback(struct IntNum *walk){
    if (walk == NULL) return; 
    Showback(walk->next); 
    printf("%d ", walk->data); 
} //end function
    


int main() {
    struct IntNum *start, *now, *last, *begin;
    start = NULL, now = NULL, last = NULL;
    now =AddNode(&start, 10);
    now =AddNode(&start, 20);
    now =AddNode(&start, 30);
    now =AddNode(&start, 40);

    printf("this is showall =");
    Showall(start);
    printf("\n");
    printf("this is showback =");
    Showback(start);
     printf("\n--------------------\n");
      now = start ;
    printf("this is Update Node =");
    UpdateNode(now , 99 , &start) ;
     Showall(start) ; 
    printf("\n--------------------\n");
   SwapNode(now,2,3) ;
   printf("this is swaped  2 to 3 and 3 to 2 = ") ;
    Showall(start);
     printf("\n--------------------\n");
  
    
    return 0;
} // end function


// this is function addnode
struct IntNum *AddNode(struct IntNum **walk, int data) {
    while (*walk != NULL)
    {
        walk = &(*walk)->next;
    } // end while

    *walk = new struct IntNum;
    (*walk)->data = data;
    (*walk)->next = NULL;
	
    return *walk;
} // end function

// this function update node 
void UpdateNode(struct IntNum *walk, int data ,struct IntNum **begin){
	if(walk->back !=NULL) {
	walk->back->next = new struct IntNum;
	walk->back->next->data = data; 
	walk->back->next->next = walk;
	walk->back->next->back = walk->back;
	walk->back = walk->back->next;
} //end if
	else {
	*begin = new struct IntNum;
	(*begin)->data = data;
	(*begin)->next = walk;
	(*begin)->back = NULL;
	walk->back = *begin ;
	} //end else
} //end function

//this function swap node 
void SwapNode(struct IntNum *walk, int pos1, int pos2) {
    struct IntNum *temp1 = walk;
    struct IntNum *temp2 = walk;
    for (int i = 0; i < pos1 - 1; i++) {
        temp1 = temp1->next;
    }

    for (int j = 0; j < pos2 - 1; j++) {
        temp2 = temp2->next;
    }

    int tempData = temp1->data; 
    temp1->data = temp2->data ; 
    temp2->data = tempData ; 
} //end function
              

        

  
