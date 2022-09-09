#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;
node* root=NULL;
void pre(node* root){
	if(root!=NULL){
	printf("%d ",root->data);
    pre(root->left);
    pre(root->right);
}
}
void in(node* root){
	if(root!=NULL){
		
    pre(root->left);
    	printf("%d ",root->data);
    pre(root->right);
}
}
node* createnode(node * root,int data){
//	  pre(root);
 // printf("\n");
//   node* ptr=(node*)malloc(sizeof(node));
  if(root==NULL){
//  	printf("Inserting %d\n",data);
  root=(node*)malloc(sizeof(node));
  root->data=data;
  root->left=NULL;
  root->right=NULL;
  
  return root;
  }
  else{
 // 	printf("%d\n",root->data);
  if (root->left==NULL){
 // 	printf("Going Left\n");
  root->left=createnode(root->left,data);
  return;
 // printf("Returning to %d\n",root->data);
  }
  if(root->right==NULL){
 // 		printf("Going Right\n");
   root->right= createnode(root->right,data);
   return;
 //    printf("Returning to %d\n",root->data);
  }
    if(root->right!=NULL && root->left!=NULL){
    	printf("tada");
 //       exit(100);
 if(root->left->left==NULL){
 		printf("tada");
 }
    	root->left->left=createnode(root->left->left,data);
    	return;
	}
  }
}
int main(){
	int i;
	for(i=1;i<5;i++){
		printf("Pushing\n");
		root=createnode(root,i);
	}
// createnode(root,6);
if(root==NULL){
	exit(100);
}
//while(root){
//	printf("%d ",root->data);
//	root=root->left;
//}
pre(root);
printf("\n");
in(root);
 return 0;
}
