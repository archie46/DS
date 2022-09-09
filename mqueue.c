#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int Q_arr[MAX];
int front =-1;
int rear=-1;
void enqueue(int item)
{
    if(rear==MAX-1)
        {
            printf("The Queue is Full.");
        }
   else if(front==(-1))
      {
            front=rear=0;
             Q_arr[rear]=item;
      }
    else
   {
            rear++;
    Q_arr[rear]=item;
   }
}
int dequeue()
{
    int p;
    if(front==rear==-1)
    {
        printf("Queue Underflow");
        exit(1);
    }
    else if(front==rear)
    {
        p=Q_arr[front];
        front=rear=-1;
        return p;
    }
    else
    {
        p=Q_arr[front];
        front++;
        return p;
    }
}
void printq()
{
    for(int i=front;i<=rear;i++)
     printf("%d ",Q_arr[i]);
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
