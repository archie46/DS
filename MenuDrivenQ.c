#include<stdio.h>
#include<stdlib.h>
#define MAX 1
int Q_arr[MAX];
int front =-1;
int rear=-1;
void enqueue(int item)
{
    if(rear==MAX-1)
        {
            printf("The Queue is Full.\n");
            return;
        }
   else if(front==(-1))
      {
            front=rear=0;
             Q_arr[rear]=item;
             	printf("%d is Queued.\n",item);
      }
    else
   {
            rear++;
    Q_arr[rear]=item;
    	printf("%d is Queued.\n",item);
   }
}
int dequeue()
{
    int p;
    if(front==-1&&rear==-1)
    {
        printf("The Queue is Empty. \n");
        return;
    }
    else if(front==rear)
    {
        p=Q_arr[front];
        front=rear=-1;
        printf("%d Is Removed From Queue.\n",p);
        return p;
        
    }
    else
    {
        p=Q_arr[front];
        front++;
        printf("%d Is Removed From Queue.\n",p);
        return p;
    }
}
void printq()
{
	int i;
    for(i=front;i<=rear;i++)
     printf("%d\n",Q_arr[i]);
}
int main()
{
 	printf("Queue Created\n");
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
				printq();
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
