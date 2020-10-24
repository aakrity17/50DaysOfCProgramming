#include<stdio.h>
int main()
{
int divident, divisor, quotient,remainder;

//10
printf("Enter Divident :");
scanf("%d", &divident);
//5
printf("Enter Divisors :");
scanf("%d", &divisor);

//Computes quotient

quotient = divident / divisor;
printf("Quotient= %d\n",quotient);

//Compute Remaider
remainder = divident % divisor;
printf("Remainder = %d",remainder);
return 0;
}

//In this program, the user is asked to enter two integer (divident and divisor).

//The quotient is evaluate using / (the division operator), and stored in [quotient].

//Similarly, the remainder is evaluate using % (the modulo operator) and stored remainder.

//Finally, the quotient and remainder are displayed using printd("")


