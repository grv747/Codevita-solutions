#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int top;
    unsigned capacity;
    int *array;
};
struct stack* createstack(unsigned capacity)
{
 struct stack* stack=(struct stack*)malloc(sizeof(struct stack));
 stack->top=-1;
 stack->capacity=capacity;
 stack->array=(int*)malloc(stack->capacity*sizeof(int));
 return stack;
}
int isfull(struct stack* stack)
{

        return stack->top==stack->capacity-1;

}
int isempty(struct stack *stack)
{

        return stack->top==-1;

}
void push(struct stack* stack,int x)
{
    if(isfull(stack))
    {
        printf("Stack overflow\n");
        return;
    }
    stack->array[++stack->top]=x;

}
int pop(struct stack* stack)
{
  if(isempty(stack))
  {
     printf("Stack underflow\n");
      return;
  }
  return stack->array[stack->top--];

}
void print(struct stack* stack)
{
    int i;
    if(isempty(stack))
    {
        printf("stack is empty\n");
        return;
    }
    for(i=0;i<=stack->top;i++)
    {
        printf("%d ",stack->array[i]);
    }

}
int main()
{
    struct stack* stack=createstack(5);
   pop(stack);
    print(stack);
}


