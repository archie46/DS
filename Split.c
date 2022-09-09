#include<stdio.h>
void split(int A[],int n)
{
	int B[10],C[10],i,j,p,f=0;
	printf("Enter position to split ");
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
		B[i]=A[i];
		f++;
	}
	for(i=0;i<(n-p);i++)
	{
		C[i]=A[f];
		f++;
	}
	printf("\n After split, New Array 1\n ");
	for(i=0;i<p;i++)
	   printf("%d    ",B[i]);
	printf("\n New Array 2\n ");
	for(i=0;i<(n-p);i++)
	    printf("%d   ",C[i]);
}
int main()
{
	int A[10],n,i;
	printf("enter size of array :");
	scanf("%d",&n);
	printf("\n Enter array elements :");
	for(i=0;i<n;i++)
	    scanf("%d",&A[i]);
	split(A,n);
	return 0;
}
