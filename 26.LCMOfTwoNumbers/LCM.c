//C Program to Find LCM of two Numbers

#include <stdio.h>
int main() {
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);

    // maximum number between n1 and n2 is stored in min
    max = (n1 > n2) ? n1 : n2;

    while (1) {
        if (max % n1 == 0 && max % n2 == 0) {
            printf("The LCM of %d and %d is %d.", n1, n2, max);
            break;
        }
        ++max;
    }
    return 0;
}

/*In this program, the integers entered by the user are stored in variable n1 and n2 respectively.

The largest number among n1 and n2 is stored in max. The LCM of two numbers cannot be less than max.

The test expression of while loop is always true.

In each iteration, whether max is perfectly divisible by n1 and n2 is checked.

if (min % n1 == 0 && max% n2 == 0) { ... }
If this test condition is not true, max is incremented by 1 and the iteration continues until the test expression of the if statement is true.

The LCM of two numbers can also be found using the formula:

LCM = (num1*num2)/GCD*/
