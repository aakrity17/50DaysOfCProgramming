// C program to check consonant or vowel

//The five letters A,E,I,O and U called vaowels. All other alphabets except these  vowels
// are called consonants.

#include<stdio.h>
int main()
{
char c;
printf("Enter any Character");
scanf("%c",&c);
int upp_vwl, lowr_vowl;
upp_vwl =(c == "a" || c == "e"|| c == "i"|| c == "o"|| c == "u" );
lowr_vowl = (c == "A" || c == "E" ||c == "I" ||c == "O" ||c == "U");

if(upp_vwl || lowr_vowl)
printf("%d is vowel",c);
else
printf("%d is consonents",c);
return 0;
}

/*1. The characters entered by the user is strored in variable c 
2. The lowercase_vowlel variable evaluates to 1(true) if c is a lowercase_vowel and 0(false)
for any other characters.

3. Similarly, the uppercase_vowel variable evaluates to 1(true), the entered character
is a vowel. However, if both lowercase_vowel and uppercase_vowel variables are 0,
the  entered character is a consonant.

Mote:
	 This program assumes that the user will enter an alphabet. It the user
enters a non-alphabetic character, it displays the character is a consonant.
*/

