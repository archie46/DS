#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 15
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
    char item;
if(top==-1)
    {
printf("Stack Underflow");
exit(1);
}
else
{
    item=stack_arr[top];
top--;
return item;
}
}
 void print()
{
int i;
for(i=0;i<=top;i++)
{
printf("%c ",stack_arr[i]);
}
}
int main()
{
    int i,j,c=0;
    char k;
//char str[]="(a+b/(c*d^e))";
char str[]="(4*(5+4^2))";
char p[strlen(str)];
 for (i = strlen(str); i >= 0; i--)
    {
        if (str[i] == ')'||str[i] == '+'||str[i] == '*'||str[i] == '/'||str[i] == '^'||str[i]=='-')
        {
            push(str[i]);
            // print();
            // printf("%d\n",top);
        }
        else if(str[i] == '(')
        {
           // printf("%d %d\n",&top,top);
            k=pop();
           while(k!=')')
           {
            p[c]=k;
          //  printf("%c\n",k);
            c++;
            k=pop();
           }
          // printf("\n%s\n",p);
          // print();
         //    printf("\n");
        }
        else{
            p[c]=str[i];
           // printf("\n%s\n",p);
            c++;
        }
       // print();
      //  printf("\n");
    }
//printf("%s",p);
for(i=c-1;i>=0;i--)
{
    printf("%c ",p[i]);
}
return 0;
}
