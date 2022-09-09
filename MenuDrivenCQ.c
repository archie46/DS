#include<stdio.h>
#include<stdlib.h>
#define MAX 15
int C_Q[MAX];
int front=-1;
int rear=-1;
void enqueue(int item)
{
 if(front==(rear+1)%MAX)
{
	 printf("Overflow\n");
	 return;
}
 else if (front==-1&&rear==-1)
 {
    front=0;
    rear=0;
    C_Q[front]=item;
    printf("%d is Queued.\n",item);
 }
 else
 {
     rear=(rear+1)%MAX;
     C_Q[rear]=item;
     printf("%d is Queued.\n",item);
 }
}
int dequeue()
{
    int p;
 if(front==-1)
{
     printf("Underflow\n");
     return;
}
 else if (front==rear)
 {
     p=C_Q[front];
    front=-1;
    rear=-1;
    printf("%d Is Removed From Queue.\n",p);
    return p;
 }
 else
 {
     p=C_Q[front];
     front=(front+1)%MAX;
     printf("%d Is Removed From Queue.\n",p);
     return p;
 }
}
void print()
{
    int i;
    for(i=front;i<=rear;i++)
    {
    printf("%d\n",C_Q[i]);
    }

}
int main()
{
	
 	printf("Circular Queue Created\n");
int n,i,c,it;
char a;
do{
 	printf("\nEnter 1 to Enqueue\nEnter 2 to Dequeue\nEnter 3 to Display\nEnter 4 to Exit\n");
 	scanf("%d",&c);
 	switch (c)
 	{
 		case 1:
 			{
 				printf("Enter Value:");
 				scanf("%d",&it);
 				enqueue(it);
 				break;
			 }
	    case 2:
	    	{
	    		it =dequeue();
	    		break;
			}
			case 3:
			{
				print();
				break;
			}
			case 4:
				exit(0);
				break;
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
