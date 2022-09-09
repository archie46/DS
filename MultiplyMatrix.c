// matrix multiplication
#include<stdio.h>
void Traverse(int A[20][20],int n,int m)
{
	int i,j;
	printf("\n matrix elements are\n ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		printf("%d\t",A[i][j]);
		printf("\n\n");
	}
}
void multiplication(int A[20][20],int B[20][20],int n,int m,int n1,int m1)
{
	int i,j,k;
	int C[20][20];
	if(m==n1)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				C[i][j]=0;
				for(k=0;k<n1;k++)
				   C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	else
	printf("\n multiplication not possible");
	printf("\n After multiply matrix elements are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m1;j++)
		  printf("%d\t",C[i][j]);
		printf("\n\n");
	}
}
int main()
{
	int A[20][20],B[20][20],C[20][20],i,j,n,m,n1,m1;
	printf("\n Enter size for matrix1");
	scanf("%d%d",&n,&m);
	printf("\n Enter size for matrix2");
	scanf("%d%d",&n1,&m1);
	printf("\n Enter elements for matrix1");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		   scanf("%d",&A[i][j]);
	}
	printf("\n Enter elements for matrix2");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<m1;j++)
		   scanf("%d",&B[i][j]);
	}
	Traverse(A,n,m);
	Traverse(B,n1,m1);
	multiplication(A,B,n,m,n1,m1);
	return 0;
}
