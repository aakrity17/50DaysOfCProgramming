//C program to find size of variables.

//The (size of (Variable) Operator computes the size of a variable.

//And, to print the result returned by (Sizeof), we use eiter [%lu] or [%zu] format specifier.

#include<stdio.h>
int main(){
int intType;
float floatType;
double doubleType;
char charType;
long double longDouble;

//Sizeof Evaluate the size of a variable.

printf("Size of int : %zu bytes\n",sizeof(intType));
printf("Size of FLoat : %zu bytes\n",sizeof(floatType));
printf("Size of Double : %zu bytes\n",sizeof(doubleType));
printf("Size of CharType : %zu bytes\n",sizeof(charType));
printf("Size of Long double : %lu bytes\n",sizeof(longDouble));
return 0;
}

//In this program 4 variables [intType, floatType, doubleType, charType and longDouble] are declared, 
//Then, the size of each variable is computed using the {sizeof} operator

//Note:
//%zu, %lu : we can use both ;
//sizeof
