#include<stdio.h>
void check(int num);
void main( )
{
        int arr[10], i;
    
        printf("Enter the array 10 elements : ");
        for(i=0; i<10; i++)
        {
                scanf("%d", &arr[i]);
                check(arr[i]);
        }
        for (i=0;i<10;i++)
        {
            check(arr[i]);
        }
}
void check(int num)
{
        if(num%2==0)
                printf("%d is even\n\n", num);
        else
        printf("%d is odd\n\n", num);
    
}