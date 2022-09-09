#include<stdio.h>
#include<stdlib.h>
#define MAX 15
int stack_arr[MAX];
int top=-1;
void push(int item)
{
	if(top==MAX-1)
	{
		printf("Stack Overflow\n");
		return;
	}
	top++;
	stack_arr[top]=item;
	printf("%d is Pushed To The Stack.\n",item);
}
int pop()
{
		if(top==-1)
	{
		printf("Stack Underflow\n");
		return;
	}
	int item=stack_arr[top];
	top--;
	printf("%d Is Popped From The Stack.\n",item);
	return item;
}
void display()
{
	int i;
	printf("The Stack Is\n");
	for(i=0;i<=top;i++)
	{
		printf("%d\n",stack_arr[i]);
	}
}
int main()
{
	printf("Stack Created\n");
int n,i,c,it;
char a;
do{
 	printf("\nEnter 1 to Push\nEnter 2 to Pop\nEnter 3 to Display\nEnter 4 to Exit\n");
 	scanf("%d",&c);
 	switch (c){
 		case 1:
 			{
 				printf("Enter Value:");
 				scanf("%d",&it);
 				push(it);
 				break;
			 }
	    case 2:
	    	{
	    		it =pop();
	    		break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
				exit(0);
			default:
			{
				printf("Invalid Input\n");
				break;
			}
	 }
	 printf("Input(y/n): ");   
scanf(" %c",&a);
}while(a=='y');
return 0;	
}
