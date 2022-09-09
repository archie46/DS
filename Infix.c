#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct stack
{
    int size;
    int top;
    char *arr;
} stack;
stack *createStack(int size)
{
    stack *st = (stack *)malloc(sizeof(stack));
    st->size = size;
    st->top = -1;
    st->arr = (char *)malloc(st->size * sizeof(char));
    return st;
}
int isEmpty(stack *st)
{
    if (st->top == -1)
        return 1;
    return 0;
}
int isFull(stack *st)
{
    if (st->top == st->size - 1)
        return 1;
    return 0;
}
void push(stack *st, char data)
{
    if (isFull(st))
        printf("Stack Overflow");
    else
    {
        ++st->top;
        st->arr[st->top] = data;
    }
}
int  pop(stack *st)
{
    if (isEmpty(st))
        return 0;
    else
        st->top--;
        return 1;
}
void printStack(stack *st)
{
    int i = 0;
    for (i = 0; i <= st->top; i++)
    {
        printf("%c ", st->arr[i]);
    }
}
int main()
{
    char str[] = "(3*2)-18-2";
    stack *st1 = createStack(strlen(str));
    return 0;
}
