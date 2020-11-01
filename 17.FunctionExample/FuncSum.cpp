#include<stdio.h>
#include<conio.h>
int main()
{
int result1, result2, x, y;
printf("Hello\n");
x = 10, y = 20;

// Calling the function
result1 = sum(x,y);  //Similar to --> result1 = 30 as the function returns 30.
// Calling the function again... 

result2 = sum(30,40);   //Similar to result2 = 70 as function returns 70.
printf("Function returns the sum as , %d and %d ",result1, result2); 

return 0;
}
// Function Definition
int sum(int a, int b) //Receives a = 10, b = 20
{
    int add;      //Defines new variable
    add = a + b; // Processes 10 + 20 and stores in variable add
    return add;  // returns the value stored in variable add...
}

