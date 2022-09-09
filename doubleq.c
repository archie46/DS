#include<stdio.h>
#include<stdlib.h>
#define MAX 15
int Q_arr[MAX];
int front =-1;
int rear=-1;
void renqueue(int item)
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
void fenqueue(int item)
{ 
    int p;
    if(front==0)
    {
    	printf("Insertion From Front Not Possible");
	}
	else if(front==-1)
	{
		  front=rear=0;
             Q_arr[rear]=item;
	}
//	else if(front==rear)
//	{
//		p=Q_arr[front];
//		Q_arr[front]=item;
//		rear++;
//		Q_arr[rear]=item;
//	}
	else
	{
		front--;
		Q_arr[front]=item;
	}
}
int fdequeue()
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
int rdequeue()
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
        p=Q_arr[rear];
        rear--;
        return p;
    }
}

void printq()
{
	int i;
	 printf("\n");
    for(i=front;i<=rear;i++)
     printf("%d ",Q_arr[i]);
}
int main()
{
    renqueue(10);
    renqueue(20);
     renqueue(30);
      renqueue(40);
       renqueue(50);
       renqueue(60);
        printq();
        printf("\n%d\n",fdequeue());
        printq();
        printf("\n%d\n",rdequeue());
        fenqueue(45);
        printq();
        printf("\n%d\n",rdequeue());
         //fenqueue(45);
         printq();
    return 0;
}
