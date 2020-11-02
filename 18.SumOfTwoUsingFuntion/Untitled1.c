#include<stdio.h>
#include<conio.h>
void addition() //Function define
{
int sum, a, b;
printf("Enter Two Numbers :");
scanf("%d%d",&a,&b);
sum = a + b;
printf("The Sum is %d",sum);
}
void main()
{
addition();
getch();
}
//Argument with no return types
