#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}node;
node* start1=NULL;
node* start2=NULL;
node* start3=NULL;
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
    while(ptr !=NULL)
    {
        printf("%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void add()
{
node* r=start1;
node* s=start2;
int m;
while( r!=NULL || s!=NULL)
{
m=r->data+s->data;
  createnode(&start3,m);
 r=r->next;
 s=s->next;
}
}
int main ()
{
    createnode(&start1,11);
    createnode(&start1,22);
    createnode(&start1,33);
     printf("First List\n");
     display (start1);
createnode(&start2,9);
    createnode(&start2,8);
    createnode(&start2,7);
     printf("\nSecond List\n");
     display (start2);
     add();
     printf("Third List Which Contains Sum Of Elements Of List 1&2\n");
     display(start3);

    return 0;
}
