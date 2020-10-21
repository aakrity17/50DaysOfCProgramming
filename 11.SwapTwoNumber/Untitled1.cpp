//C Program to swap to number using Temporary Variable
#include<stdio.h>
int main() {
      double first, second, temp;
      printf("Enter first number: ");
      scanf("%lf", &first);
      printf("Enter second number: ");
      scanf("%lf", &second);

      // Value of first is assigned to temp
      temp = first;

      // Value of second is assigned to first
      first = second;

      // Value of temp (initial value of first) is assigned to second
      second = temp;

      printf("\nAfter swapping, firstNumber = %.2lf\n", first);
      printf("After swapping, secondNumber = %.2lf", second);
      return 0;
}

/* In the above program, the temp variable is assigned the variable of the first variable.
Then, the value of the first variable is assigned to the second variable.

Finally, the temp which hold the initial value of first is assigned to second. the completes the swapping process./*
