//C Program to check whether the given number is Positive, Negative or Zero.

#include<stdio.h>
int main()
{
double num;
printf("Enter any Number :");
scanf("%1f",&num);

if(num < 0.0)
printf("You Entered a Negative Number :");

else if(num > 0.0)
printf("You Entered Positive Number :");

else
printf("You Entered 0");

return 0;

}

/*In this program, the integer entered by the user is stored in a variable
"num" and we use if, else statement to check the number whether it is positive
negative or zero if the number is greater than 0 then the number is positive, 
if the number is less than zero than the number is positive*/
