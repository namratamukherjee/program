#include<stdio.h>
void check(int num);
void main()
{
    int arr[] = {2,5,3,10,7,1,8,12}, i;
 
    for (i = 0; i < 8; i++)
    {
        check(arr[i]);
    }
}
void check(int num)
{
    if (num % 2 == 0)
        printf("%d is even\n\n", num);
    else
        printf("%d is odd\n\n", num);
   
}