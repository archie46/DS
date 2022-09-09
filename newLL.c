#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* start=NULL;
void display(node* ptr)
{
	while(ptr !=NULL)
	{
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}
void insertbegin()
{
	node* p=(node*)malloc(sizeof(node));
	if(!p)
	{
		printf("Memory Not Allocated");
		return;
	}
	printf("Enter Data:");
	scanf("%d",&p->data);
	p->next=start;
	start=p;
	printf("%d is inserted at The Start.\n",p->data);
}
void insertatend()
{
	node* p=(node*)malloc(sizeof(node));
		node* ptr=(node*)malloc(sizeof(node));
		if(!p||!ptr)
	{
		printf("Memory Not Allocated");
		return;
	}
     p=start;
     while(p->next!=NULL)
     {
     	p=p->next;
	 }
	printf("Enter Data:");
	 scanf("%d",&ptr->data);
	 p->next=ptr;
	 ptr->next=NULL;
	 	printf("%d is inserted at The End.\n",ptr->data);	 
}
void insertposition()
{
	node* p=(node*)malloc(sizeof(node));
	node* ptr=(node*)malloc(sizeof(node));
			if(!p||!ptr)
	{
		printf("Memory Not Allocated");
		return;
	}
	int pos,i=1;
	 printf("Enter Position:");
	 scanf("%d",&pos);
     p=start;
     while(i<pos-1)
     {
     	p=p->next;
     	i++;
	 }
	 if(p==NULL)
	 {
	 	printf("Position Not Found");
	 	return;
	 }
	 else
	 {
	 printf("Enter Data:");
	 scanf("%d",&ptr->data);
	 ptr->next=p->next;
	 p->next=ptr;
	 	printf("%d is Inserted at Position %d.\n",ptr->data,pos);
	 }
}
void insertafter()
{
		node* p=(node*)malloc(sizeof(node));
		node* ptr=(node*)malloc(sizeof(node));
		if(!p||!ptr)
	{
		printf("Memory Not Allocated");
		return;
	}
     p=start;
     	int af,data,i;
	printf("After:");
	scanf("%d",&af);
     while(p->data!=af)
     {
     	p=p->next;
     		  if(p==NULL)
	 {
	 	printf("Position Not Found");
	 	return;
	 }
	 }
	  if(p==NULL)
	 {
	 	printf("Position Not Found");
	 	return;
	 }
	 else{
		printf("Enter Data:");
	scanf("%d",&ptr->data);
	ptr->next=p->next;
	p->next=ptr; 
		printf("%d is inserted after %d.\n",ptr->data,af);	
	 }
}
void deleteList(){
	while(start!=NULL){
		node * temp = start;
		start = start->next;
		free(temp);
	}
	start=NULL;
}
int main()
{
    node* first=(node*)malloc(sizeof(node));
    node* second=(node*)malloc(sizeof(node));
    node* third=(node*)malloc(sizeof(node));
    node* fourth=(node*)malloc(sizeof(node));
     start=first;
     first->next=second;
     first->data=7;
      
     second->next=third;
     second->data=8;
     
     third->next=fourth;
     third->data=9;
     
     fourth->data=10;
     fourth->next=NULL;
     
     display(start);
   //  insertbegin();
   //  insertatend();
   //  insertposition();
   //  insertafter();
      deleteList();
     display(start);
	 if(start)
	 {
	 	printf("It Is Not NULL");
		 }	
	return 0;
}
