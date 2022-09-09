#include<stdio.h>
#include<stdlib.h>
typedef struct star{
int data;
float price;
}star;
int main()
{
 star a;
 star * b=(star*)malloc(sizeof(star));
 return 0;
}
