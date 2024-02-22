#include <stdio.h>

void main()
{
    int first[100], second[100];
    int i, size;
   
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    
    for(i=0; i<size; i++)
    {
        printf("\nEnter %d element of first array : ",i+1);
        scanf("%d", &first[i]);
    }

    for(i=0; i<size; i++)
    {
        second[i] = first[i];
         }
     printf("\nElements of first array are : ");
    for(i=0; i<size; i++)
    {
        printf(" %d ", first[i]);
    }
     for(i=0; i<size; i++)
    {
        printf(" %d ", second[i]);
    }
}