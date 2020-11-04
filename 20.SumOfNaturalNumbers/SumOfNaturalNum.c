// C Program to Calculate the sum of Natural Numbers

//The Positive numbers 1,2,3... are known as natural numbers. The sum of 
// Natural up to 10 is:
// sum = 1 + 2 + 3 + ... + 10

// Sum Of Natural Numbers using for loop.

#include<stdio.h>
int main()
{
int n, i, sum = 0;
printf("Enter a positive integer: ");
scanf("%d",&n);
for (i = 1; i <= n; ++i)
{
	sum += i;
}
printf("Sum =%d",sum);
return 0;
}
 /* The above program takes from the user and stores 
it in the variable n then, for loop is used to calculate
the sum up the n

In both program, the loop is iterated n numbers of times.
And, in each iteration, the value of i is added to sum and i is incremented by 1

The above program don't work properly if the user enters a negative integer
. Here is a little modification to the above program where we keep taking
input form the user a positive integer is entered*/
