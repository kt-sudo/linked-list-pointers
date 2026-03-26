#include <stdio.h>

struct Node{
    int data;
    struct Node *next;
}node1, node2;

int main()
{

    node1.data=10;
    node2.data = 20;
    
    node1.next = &node2;
    node2.next = NULL;
    
    struct Node* currentNode = &node1;
    
    struct Node* ptr1;
    struct Node** ptr2;
    struct Node temp;
    
    ptr1 = currentNode->next;
    ptr2 = &currentNode->next;
    temp = *currentNode->next;
    
    printf("Address of node1\t:%p",&node1);
    printf("\nAddress of node2\t:%p",&node2);
    
    /*currentNode is a struct pointer, ptr1 is also a 
    struct pointer holds address of node1->next part*/
    printf("\n--------CASE 1--------\n");
    printf("ptr(currentNode->next)\t:%p", ptr1);
    printf("\nValue at ptr1\t: %d", ptr1->data);
    
    /* use -> for pointer structure and if it is struct
    alone use . say temp.data */
    
    printf("\n--------CASE 2--------\n");
    printf("ptr(&currentNode->next)\t:%p", ptr2);
    printf("\nValue at ptr2\t: %d", *ptr2); 
    
    /* ptr2 is a double pointer it stores the address of the pointer in node2
    ptr2 stores address of pointer variable "next"
    ptr2 -----> (location where node2 address is stored)*/ 
    printf("\n--------CASE 3--------\n");
    printf("temp data (*currentNode->next)\t:%d", temp.data);
  
    return 0;
}