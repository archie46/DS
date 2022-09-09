#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int D_Q[MAX];
int front=-1;
int rear=-1;
void renq(int item)
{
 if(front==MAX-1)
 printf("Overflow");
 else if (front==-1&&rear==-1)
 {
    front=0;
    rear=0;
    D_Q[front]=item;
 }
 else
 {
     rear++;
     D_Q[rear]=item;
 }
}
void fenq(int item)
{
 if(front==0)
 printf("Insert from front not possible");
 else if (front==-1&&rear==-1)
 {
    front=0;
    rear=0;
    D_Q[front]=item;
 }
 else
 {
     front--;
     D_Q[front]=item;
 }
}
int fdeq()
{
    int p;
 if(front==-1)
{
     printf("underflow");
     exit(0);
}
 else if (front==rear)
 {
     p=D_Q[front];
    front=-1;
    rear=-1;
    return p;
 }
 else
 {
     p=D_Q[front];
     front++;
     return p;
 }
}
int rdeq()
{
    int p;
 if(rear==-1)
{
     printf("underflow");
     exit(0);
}
 else if (front==rear)
 {
     p=D_Q[front];
    front=-1;
    rear=-1;
    return p;
 }
 else
 {
     p=D_Q[rear];
     rear--;
     return p;
 }
}
void print()
{
    int i;
    printf("The Queue is");
    for(i=front;i<=rear;i++)
    {
    printf("%d\n",D_Q[i]);
    }

}
int main()
{
    int input=1,item,g;
    while(input>0)
    {
     printf("\n1 to enter\n2 to delete\n3 to display\n4 to exit");
     scanf("%d",&input);
     if(input==1)
     {
         scanf("%d",&item);
         printf("\n10 to enter from front\n20 to enter from rear\n");

         scanf("%d",&g);
         if(g==10)
         {
             fenq(item);
             printf("Item entered is %d",item);
         }
         else{
                renq(item);
            printf("Item entered is%d",item);
         }
     }
     else if(input==2)
     {
         printf("\n10 to delete from front\n20 to delete from rear\n");

         scanf("%d",&g);
         if(g==10)
         {
             printf("Item deleted is %d",fdeq());
         }
         else{
            printf("Item deleted is%d",rdeq());
         }
     }
     else if(input==3)
     {
         print();
     }
     else
     {

         exit(0);
     }
    }
    return 0;
}
