#include<stdio.h>

//  add number
int abc(int a,int b)
{
    int c=a+b;
    return c;
}
void main()
{
    int r;
    r=abc(45,67);
    printf("Sumation=%d\n",r);
}