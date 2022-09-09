#include<stdio.h>
void linearsearchr(int i,int a[],int n,int l)
{
    if(a[i]==n)
      printf("Target Found at Index %d",i);
    else if(i>l)
    printf("Target Not Found");
    else
    linearsearchr(i+1,a,n,l);
}
int main()
{
int n;
int a[]={4,21,36,14,62,91,8,22,7,81,77,10};
int l=sizeof(a)/sizeof(a[0]);
printf("Enter The Element You Want To Search For:");
scanf("%d",&n);
linearsearchr(0,a,n,l);
return 0;
}
