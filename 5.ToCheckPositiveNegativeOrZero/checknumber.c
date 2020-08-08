#include<stdio.h>
void main()
{
    int number;
    printf("Enter a Number\n");
    scanf("%d",&number);
    if (number>=0)
    printf("%d is positive number");
    else
    printf("%d is negative number\n",number);
}