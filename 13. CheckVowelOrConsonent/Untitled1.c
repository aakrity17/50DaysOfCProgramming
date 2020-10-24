// C program to check whether a character is a vowel or consonent.

#include<stdio.h>
int main()
{
char c;
int upp_vowl, Lowr_vowl;
printf("Enter an Aphapbet :");
scanf("%c",&c);
upp_vowl = (c == "A" || c == "E" || c == "I" || c == "O" || c == "U");
Lowr_vowl = (c == "a" || c == "e" || c == "o" || c == "i" || c == "u");

if(Lowr_vowl || upp_vowl)
 printf("%c is vowel",c);

else
printf("%c is consonents",c);
return 0;
}
