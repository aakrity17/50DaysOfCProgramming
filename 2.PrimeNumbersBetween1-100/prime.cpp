#include <stdio.h>
 
int main()
{
  int i, num, flag; 
  
  printf(" Prime Number are: \n"); 
  for(num = 1; num <= 100; num++)
  {
    flag = 0;
    for (i = 2; i <= num/2; i++)
    {
  	if(num%i == 0)
  	{
     	  flag++;
  	  break;
	}
    }
    if(flag == 0 && num != 1 )
    {
	printf(" %d is a prime number\n ",num );
    }  
  }
  return 0;
}
