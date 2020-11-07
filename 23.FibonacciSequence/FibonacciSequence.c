//C Program to Display Fibonacci Sequence

//The Fibonacci sequence is a sequence where the next term is 
//the sum of the previous two terms. The first two terms of the 
//Fibonacci sequence are 0 followed by 1.

//The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

//Fibonacci Series up to n terms
#include <stdio.h>
int main() {
    int i, n, t1 = 0, t2 = 1, nextTerm;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");

    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    return 0;
}


//Output:
//Enter the number of terms: 10
//Fibonacci Series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 
