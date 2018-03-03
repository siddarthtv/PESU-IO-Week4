struct stack
{
  int val;
  struct stack *next; 
}; // declaring the structure
typedef struct stack Stack; // aliasing the structure
int peek(struct stack **s); 
void push(struct stack **s, int n);
int pop(struct stack **s);
