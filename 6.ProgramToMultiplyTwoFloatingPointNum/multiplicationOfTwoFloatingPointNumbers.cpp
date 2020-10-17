// C program to multiply two floating point numbers.

//The product of two floating point(1.2 ..) Number entered by the number is calculated and 
// Printed on the screen,

#include <stdio.h>
int main() {
    double fNum,sNum, product;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &fNum, &sNum);  
 
    // Calculating product
    product = fNum * sNum;

    // Result up to 2 decimal point is displayed using %.2lf
    printf("Product = %.2lf", product);
    
    return 0;
}
