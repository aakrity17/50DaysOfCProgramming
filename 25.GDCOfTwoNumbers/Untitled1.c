//C Program to find GCD of two Numbers

//Examples on different ways to calculate GDC of two intengers(For 
//both positive and negative integers) using loops and decision making statements.

//The HCF or GCD of two integer is the largest integer that can exactly divide
// Both numbers (Without a remainder).

//There are many ways to find the greatest common divison in C

// GDC using for loop and if statement 

#include<stdio.h>
#include <stdio.h>
int main()
{
    int n1, n2, i, gcd;

    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);

    for(i=1; i <= n1 && i <= n2; ++i)
    {
        // Checks if i is factor of both integers
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", n1, n2, gcd);

    return 0;
}
