#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}node;
node* start1=NULL;
void createnode(node** start,int data)
{
   node* ptr=(node*)malloc(sizeof(node));
   node * p=*start;
   ptr->data=data;
   if(p==NULL)
   {
       ptr->next=NULL;
       ptr->prev=NULL;
       *start=ptr;
   }
   else
{
    while(p->next!=NULL)
    {
      p=p->next;
    }
    p->next=ptr;
    ptr->prev=p;
    ptr->next=NULL;
}
}
void display(node* ptr)
{
    int i=0;
    while(ptr !=NULL)
    {
        if(i%2==0)
printf("%d\n",ptr->data);
        ptr=ptr->next;
i++;
    }
}
int main ()
{
    createnode(&start1,11);
    createnode(&start1,22);
    createnode(&start1,33);
    createnode(&start1,44);
    printf("Elements At Even Index Are\n");
    display (start1);
    return 0;
}
