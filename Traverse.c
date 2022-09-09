// Q1- program to create an array and display the elements.
#include<stdio.h>
void Traverse(int A[],int n)
{
	int i;
	for(i=0;i<n;i++)
	    printf("\n %d",A[i]);
}
int main()
{
	int A[100],i,n;
	printf("Enter size of Array :");
	scanf("%d",&n);
	printf("Enter Array Elements");
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	printf("\n Array Elements are\n");
	Traverse(A,n);
	return 0;
}
