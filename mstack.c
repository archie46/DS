#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack_arr[MAX];
int top=-1;
 void print()
{
int i;
for(i=0;i<=top;i++)
{
printf("%d ",stack_arr[i]);
}
}
void push(int item)
{
if(top==MAX-1){
printf("Stack Overflow");
return;
}
top=top+1;
stack_arr[top]=item;
printf("%d is Pushed into the stack.\n",item);
 print();
 printf("\n");
}
int pop()
{
if(top==-1){
printf("Stack Underflow");
exit(1);
}
int item=stack_arr[top];
top=top-1;
return item;
}
int main()
{
push(10);
push(20);
push(30);
push(40);
push(50);
push(60);
printf("\n");
int del_item=pop();
printf("Deleted element is %d",del_item);
printf("\n");
 print();
}
