#include <stdio.h>
int main (){
int number1, number2, sum;
printf("Enter two integers:");
scanf("%d %d",&number1,&number2);
	
//	Calculating sum

sum = number1 + number2;

printf("The sum of %d + %d = %d", number1, number2, sum);
return 0;
}
