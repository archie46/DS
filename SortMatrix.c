#include<stdio.h>
int main()
{
	int A[5][8],i,j,Arr[40],k=0;
	printf("Enter matrix elements");
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		scanf("%d",&A[i][j]);
	}
	printf("\n Before sort matrix elements are\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		printf("%d\t",A[i][j]);
		printf("\n");
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		{
			Arr[k]=A[i][j];
			k++;
		}
	}

	for(i=0;i<40;i++)
	{
		for(j=i+1;j<40;j++)
		{
			if(Arr[i]>Arr[j])
			{
				k=Arr[i];
				Arr[i]=Arr[j];
				Arr[j]=k;
			}
		}
	}
	k=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		{
			A[i][j]=Arr[k];
			k++;
		}
	}
	printf("\n After sort matrix elements are\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<8;j++)
		printf("%d\t",A[i][j]);
		printf("\n");
	}
	return 0;
}
