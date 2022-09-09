//program for linear search.
#include<stdio.h>
int main()
{
	int A[100],n,s,i,p=0;
	printf("Enter size of array :");
	scanf("%d",&n);
	printf("\n Enter array elements \n");
	for(i=0;i<n;i++)
	   scanf("%d",&A[i]);
	printf("\n Array elements are\n");
	for(i=0;i<n;i++)
	    printf("\n %d",A[i]);
	printf("\n Enter the element to search :");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(A[i]==s)
		{
			p=1;
			break;
		}
	}
	if(p==1)
	   printf("\n Position=%d",(i+1));
	else
	   printf("\n element not found");
}
