// C program to Check Whether the given number is Even or odd
//C program to Check whether the Number is Odd or Even;

// An even number is an Integer that is exactly divisible by 2. For example, 0,8,10,4,-12
//ect, And odd number is a Integer that is not exactly divisible by 2 for example 3,5,7 those are Odd Numbers

#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // True if num is perfectly divisible by 2
    if(num % 2 == 0)
		   printf("The Number You Entered %d is even.", num);
    else
		printf(" The Numeber You Entered %d is odd.", num);
    
    return 0;
}
//Output :

//Enter an integer: 123123
//123123 is odd.

//Enter an integer: 5555
// The Numeber You Entered 5555 is odd.

/* In this  Program, the integer entered by user is stored in the variable
num, printf() fuction ask the user to print any integer, scanf() read and store
the value enter by user,

By using loop, whether num is perfectly divisible by 2 or not is checking
using modules %d operator.

If the number is perfectly divisible by 2, test expression {number%2 == 0}
(true). This means the number is even.

However, if the test expression eveluates to 0 (false). the number is odd.*/
