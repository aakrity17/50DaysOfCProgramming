//This is preprocessor command that tells the compiler to include the contents of stio.h(Standard input and output) File in the program.

//Stdio files contains functions such as (scanf() and printf () to take input and output )

#include<stdio.h>

//The execution of the program starts from the main finction.
int main()
{
	//Variable declare , Our output will be in number so we are taking int

	int i,num, flag; 

	//This is a library function to send formatted output to the screen. 
	printf("The Prime Numbers are : \n");

	// Main function
	for(num = 1; num <= 100; num++)
	{
		flag =  0;
		for (i = 2; i <= num/2; i++)
		 
		{
			if (num%i==0){
				count++;
				break;
			}
			
		}

		if(count == 0 && num !=1){
			printf("%d is prime number\n",num);
		}
	}
	return 0;
}
