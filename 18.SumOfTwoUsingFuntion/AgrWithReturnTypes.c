#include<stdio.h>
#include<conio.h>
void addition(int a, int b) //Function define
{
int sum;
sum = a + b;
printf("The Sum is %d",sum);
}
void main()
{
int a, b;
printf("Enter two Number :");
scanf("%d%d",&a,&b);
addition(a,b);
getch();
}
//Argument with no return types
