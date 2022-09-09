//Q4:  program to create an array . Arrange the elements in ASE order.
#include <stdio.h>
int main()
{
   int array[100], c,d,e,n;
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
   printf("Enter %d elements\n", n);
   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);
   printf("\n Before Sort Elements are\n");
   for(c=0; c<n; c++)
       printf("%d\n",array[c]);
    for (c = 0; c<n; c++)
    {
 		for(d=c+1; d<n; d++)
 		{
 			if(array[c]>array[d])
 			{
 				e=array[c];
 				array[c]=array[d];
 				array[d]=e;
			 }
		 }
	}
      printf("Resultant array after sort:\n");
      for (c = 0; c < n ; c++)
         printf("%d\n", array[c]);
   return 0;  
}
