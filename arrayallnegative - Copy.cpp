#include <stdio.h>
#define MAX_SIZE 100
// Working  with array to print all negartive numbers 
  main()
{
    int arr[MAX_SIZE]; //Declares an array of MAX_SIZE
    int i, n;
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
 
    printf("\nAll negative elements in array are : ");
    for(i=0; i<n; i++)
    {
        if(arr[i] < 0)
        {
            printf("%d\t", arr[i]);
        }
    }
}
    

