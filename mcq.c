#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int C_QUEUE[MAX];
int front =-1;
int rear=-1;
void enqueue(int item)
{
    if(front==(rear+1)%MAX)
        {
            printf("Circular Queue Overflow");
        }
   else if(front==(-1)&&rear==(-1))
      {
            front=rear=0;
             C_QUEUE[rear]=item;
      }
    else
   {
            rear=(rear+1)%MAX;
    C_QUEUE[rear]=item;
   }
}
int dequeue()
{
    int p;
    if(front==rear==-1)
    {
        printf("Circular Queue Underflow");
        exit(1);
    }
    else if(front==rear)
    {
        p=C_QUEUE[front];
        front=rear=-1;
        return p;
    }
    else
    {
        p=C_QUEUE[front];
        front=(front+1)%MAX;
        return p;
    }
}
void printq()
{
	int i;
    for( i=front;i<=rear;i++)
     printf("\nElement %d %d \n",i,C_QUEUE[i]);
}
int main()
{
    enqueue(10);
    enqueue(20);
     enqueue(30);
      enqueue(40);
       enqueue(50);
       enqueue(60);
        printf("\n");
        printq();
        printf("\n");
        printf("%d\n",dequeue());
        printq();


    return 0;
}
