#include<stdio.h>
int main()
{
	int A[10],B[10],C[20],i,j,k,n,m;
	printf("\n Enter size of A :");
	scanf("%d",&n);
	printf("\n Enter array A elements :");
	for(i=0;i<n;i++)
	   scanf("%d",&A[i]);
	printf("\n Enter size of B :");
	scanf("%d",&m);
	printf("\n Enter array B elements :");
	for(i=0;i<m;i++)
	   scanf("%d",&B[i]);
	printf("\n Aarray-1");
	for(i=0;i<n;i++)
	    printf("\n%d",A[i]);
	printf("\n Aarray-2");
	for(i=0;i<m;i++)
	    printf("\n%d",B[i]);
	j=0;
	for(i=0;i<n;i++)
	{
		   C[i]=A[j];
		   j++;
	}
	for(i=0;i<m;i++)
	{
		C[j]=B[i];
		j++;
	}
	printf("\n After Merge");
	for(i=0;i<(m+n);i++)
	   printf("\n %d",C[i]);
   return 0;
}
