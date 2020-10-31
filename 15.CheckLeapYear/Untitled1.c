// C Program to check leap year

#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);

   // leap year if perfectly divisible by 400

   if (year % 400 == 0) 
   {
      printf("%d is a leap year.", year);
   }
   
   // Not a leap year yedi 100 le divide garda 0 aauxa but 2000 xa vane
   // 
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }

   // leap year if not divisible by 100
   // but divisible by 4

   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }

   // All other years are not leap year
   else {
      printf("%d is not a leap year.", year);
   }

   return 0;

}

/*To be leap year.. Program year lae 4,400 le divide garda 0 aaunu parxa.. And century (100,200) year haru leap year 
For Example :
2000 is not a leap year
2004 is a leap year*/
