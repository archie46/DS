#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
	int c=*a;
	*a=*b;
	*b=c;
}
void bubblesort(int n,int a[])
{
    int i,count=1,j;
    while(count>0)
    {
    	count=0;
	for(i=0;i<(n-1);i++)
	 {
		if(a[i]>a[i+1])
		{
			swap(&a[i],&a[i+1]);
		    count++;
		}
	 }
    }
   for(j=0;j<n;j++)
   {
   	printf("%d ",a[j]);
   }	
}
int main()
{
 int m,n;
 printf("How Many Numbers You Want To Enter:\n");
 scanf("%d",&n);
 printf("Enter The Numbers:\n");
 int ab[n];
 for(m=0;m<n;m++)
 {
 	scanf("%d",&ab[m]);
 }
 printf("The Numbers In Ascending Order Are:\n");
    bubblesort(n,ab);
	return 0;
}
