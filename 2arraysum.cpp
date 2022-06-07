 //WAP to do sum of two arrays 
#include<stdio.h>
  int main()
{
  int a[10], b[10], sum[50],asize, bsize, i;
  // for array A 
  printf("\nEnter the size A array: ");
  scanf("%d",&asize);
  printf("\nEnter %d elements for A array: \n", asize);
  for(i=0;i<asize;i++)
      scanf("%d",&a[i]);
  // now array B    
  printf("\nEnter the size of B array: ");
  scanf("%d",&bsize);
  printf("\nEnter %d elements of B array: \n", bsize);
  for(i=0;i<bsize;i++)
      scanf("%d",&b[i]);
  // now sum both of them 
   for(i=0;i<asize;i++)
   {
   	sum[i] = a[i] + b[i]; 
   	//printf("Elements of Sum array are %d", sum[i])
   }
     for (i=0; i<asize; i++) 
       printf ("\nTotal of %d + %d = %d\n", a[i], b[i], sum[i]);
   
     // printf("Elements of Sum array are %d", sum[i])	  
	  
	  
	  
	  
	      
}
