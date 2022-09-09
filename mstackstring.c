#include<stdio.h>
#include<stdlib.h>
#define MAX 5
char stack_arr[MAX];
int top=-1;
void push(char item)
{
if(top==MAX-1){
printf("Overflow");
return;
}
top++;
stack_arr[top]=item;
}
char pop()
{
if(top==-1){
printf("Stack Underflow");
exit(1);
}
char item=stack_arr[top];
top=top-1;
return item;
}
 void print()
{
int i;
for(i=0;i<=top;i++)
{
printf("%c",stack_arr[i]);
}
}
int main()
{
    int i;
push('a');
push('b');
push('c');
push('d');
push('e');
push('f');
printf("\n");
//char del_item=pop();
//printf("Deleted element is %c",del_item);
//printf("\n");
while(top!=-1)
{
    char k=pop();
    printf("%c %d %d\n",k,i,top);
}
print();
}
