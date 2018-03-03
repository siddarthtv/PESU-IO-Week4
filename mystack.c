#include<stdlib.h>
#include "mystack.h"

void push(Stack **s, int n)
{
  Stack *temp = malloc(sizeof(Stack)); // dynamic allocation of memory for a new member of the stack
  temp->val = n;
  temp->next = *s;
  *s = temp; 
}

int pop(Stack **s)
{
  if(*s==NULL)  // checks if the given structure is empty
  {
    return 0;
  }
  else 
  {
    Stack *temp;  //temporary pointer
    temp = *s;
    *s = (*s)->next; // The pointer now points to the next element of the stack
    free(temp);  // frees the temporary pointer
    return 1;
  }
}

int peek(Stack **s)
{
  if(*s != NULL) // checks if the stack is empty or not
    return (*s)->val;
  else //returns -1 if stack is empty
    return -1;
}
