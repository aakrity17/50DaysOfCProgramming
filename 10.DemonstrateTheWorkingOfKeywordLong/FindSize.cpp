//C Program to Demostrate (Find Size)the working of keyboard .

#include<stdio.h>
int main()
{
int a;
long int b;
long long c;
double e;
long double f;
printf("The size of int = %zu Bytes\n", sizeof(a));
printf("The Size of long int =%zu Bytes\n", sizeof(b));
printf("The Size of Long Long = %zu Bytes\n",sizeof(c));
printf("The Size of double = %zu Bytes\n", sizeof(e));
printf("The Size of Long Double = %zu\n", sizeof(f));
return 20;
}

//Output :
//The size of int = 4 Bytes
//The Size of long int =4 Bytes
//The Size of Long Long = 8 Bytes
//The Size of double = 8 Bytes
//The Size of Long Double = 16

/*In this Program We Use [sizeof ] Operator to find the
size of int, long, long long ,double, long double we use  a,b,c,e and f 
variables 

As you can see, the size of "long int" and "long double "
variables are larger than "int "and 
double variables respectively

Btw, The "sizeof" Operator returns "size_t" (unsigned integral type).

The size_T data type is used to represent the size of an object. The format 
specifier used for size_t is %zu. 


//Note : The "long" Keyword cannot be used with "float" and "Char" Types.
*/



