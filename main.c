#include<stdio.h>
int main()
{
    int num,result,i=1;
    printf("Enter any number to generate the table:");
    scanf("%d",&num);
    printf("\n the table of %d is given below::\n");

    while(i<=10)
    {
        result=num*i;
        printf("%d*%d=%d\n",num,i,result);
        i++;
    }
    return 0;
    
    }
   