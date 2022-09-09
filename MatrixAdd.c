// Q : Program for matrix addition.
#include<stdio.h>
int main()
{
	int A[3][3],B[3][3],i,j;
	printf("enter matrix1 elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		   scanf("%d",&A[i][j]);
	}
	printf("enter matrix2 elements\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		   scanf("%d",&B[i][j]);
	}
	printf("\n matrix1 elements are\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		    printf("%d\t ",A[i][j]);
		printf("\n");
	}
	printf("\n matrix2 elements are\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		    printf("%d\t ",B[i][j]);
		printf("\n");
	}
	printf("\n addition matrix elements are\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		    printf("%d\t ",A[i][j]+B[i][j]);
		printf("\n");
	}
	return 0;
}
