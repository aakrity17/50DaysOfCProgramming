//C Program to find largest among 3 number.

#include<stdio.h>
int main()
{
double n1, n2, n3;
 printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);


//If n1 is greater than both n2 and n3, n1 is the largest Number
if(n1 >= n2 && n1 >=n3)
printf(" %.21f is the largest Number", n1);

//If n2 is greater than n3 and n1, N2 is the largest Number
else if(n2 >= n1 && n1 >=n3)
printf(" %.21f is the largest Number", n2);

//else N3 is the largest Numeber
else
printf("%.21f is the largest Number", n3);

return 0;

}
