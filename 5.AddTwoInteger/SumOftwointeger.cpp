//C Program to Add two integer given by user

#include<stdio.h>
int main()
{
int num1,num2,sum;
printf("Enter two integer: ");
scanf("%d%d",&num1,&num2);
sum = num1+num2;
printf("%d+%d=%d",num1,num2,sum);
return 0;
}

//IN this program user asked to enter two integrs. These ingegers are stored
//in variables [num1,num2] respectively

//Scanf command read and store value in two variable

//Then two numbers are added using the [+] Operator, and the result is stored in the sum
//variable.

//Finally the printf function is used to display the sum of numbers.

//We use &num1 to after taking integer in scanf

