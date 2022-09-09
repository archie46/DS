#include<stdio.h>
void swap(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
void print(int n, int a[])
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
void bubblesort(int n, int a[])
{
	int i, count = 1;
	while (count > 0)
	{
		count = 0;
		for (i = 0; i < (n - 1); i++)
		{
			if (a[i] > a[i + 1])
			{
				swap(&a[i], &a[i + 1]);
				count++;
			}
		}
	}
}
void insertionsort(int n, int a[])
{
	int i, j = 0, key;
	for (i = 0; i < n - 1; i++)
	{
		key = a[i + 1];
		for (j = 0; j <= i; j++)
		{
			if (key < a[j])
			{
				swap(&a[j], &a[i + 1]);
			}
		}
	}
}
void selectionsort(int n, int a[])
{
	int i, j, p;
	for (j = 0; j < n; j++)
	{
		int ac = a[j];
		p = 0;
		for (i = j; i < n; i++)
		{
			if (ac > a[i])
			{
				ac = a[i];
				p = i;
			}
		}
		if (p != 0)
		{
			a[p] = a[j];
			a[j] = ac;
		}
	}
}
int partition(int l,int u,int a[])
{
    int m=l+1;
    int n=u;
    int p=a[l];
    do{
        while(a[m]<=p && m<n )
            m++;
        while(a[n]>p)
            n--;
        if(n>m)
        swap(&a[m],&a[n]);
    }while(n>m);
    swap(&a[n],&a[l]);
    return n;
}
void quicksort(int a[],int i,int j)
{
    if(i>=j)
        return;
    int p;
    if(i<j)
    {
       p=partition(i,j,a);
    }
    quicksort(a,i,p-1);
    quicksort(a,p+1,j);
}
int main()
{
    int i,n,c;
	printf("How Many Numbers You Want To Enter:");
	scanf("%d", &n);
	printf("Enter The Numbers:\n");
	int ab[n];
	for (i = 0; i < n; i++)
	{
		scanf("%d", &ab[i]);
	}
	printf("Choose Your Sorting Method\n");
	printf("1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Quick Sort\n");
	printf("Your choice:");
	scanf("%d",&c);
	printf("The Numbers In Ascending Order Are:\n");
	switch(c)
	{
   case 1:
    {
        bubblesort(n,ab);
        print(n,ab);
    }
    break;
   case 2:
    {
        selectionsort(n,ab);
       print(n,ab);
    }
    break;
   case 3:
    {
        insertionsort(n,ab);
        print(n,ab);
    }
    break;
   case 4:
    {
        quicksort(ab,0,n-1);
        print(n,ab);
    }
    break;
   default:
       printf("Wrong Choice");
	}
  return 0;
}
