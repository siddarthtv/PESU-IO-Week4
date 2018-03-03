#include <stdlib.h>
#include <stdio.h>
#include "mystack.h"
int main()
{
	Stack *st = NULL; //Empty stack created
	int ch = 0;
	//Stack Menu
	printf("Enter 1 to push an element to the stack \n");
	printf("Enter 2 to pop an element from the stack \n");
	printf("Enter 3 to peek the topmost element of the stack \n");
	printf("Enter 0 to exit \n\n");
	
	do
	{
	  printf("Enter your choice: ");
	  scanf("%d",&ch);
	  
	  switch(ch)
	  {
	    case 1: printf("Enter a positive integer value to be added: ");
	            int n;
	            scanf("%d",&n);
	            while(n<1) // Loop to ensure user enters a +ve integer value
	            {
	              printf("Wrong input! Enter a positive integer: ");
	              scanf("%d",&n);
	            }
	            push(&st,n);  // Push function called
	            printf("\n");
	            break;
	            
	    case 2: if(!pop(&st)) // Checks if stack is empty
	              printf("Empty Stack\n");
	            printf("\n");  
	            break;
	            
	    case 3: if(peek(&st) != -1) //Checks if stack is empty
	              printf("Top element: %d\n",peek(&st)); 
	            else
	              printf("Empty Stack\n\n");
	            break;
	            
	    case 0: break; //Exit condition
	    
	    default: printf("Invalid choice!\n\n"); // Default condition
	             
	  }
	  
	}
	while(ch); // Loop runs as long as user has not given 0 as their choice
	
	while(st!=NULL) // Loop to ensure the dynamic memory which has been allocated is now freed
	  pop(&st);
	
	return 0;
}
