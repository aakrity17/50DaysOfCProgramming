// C program to check whether the character is an Alphabet or not

#include<stdio.h>
#include<conio.h>
main()
{
char c;
printf("Enter a Character :");
scanf("%c",c);

if((c >= 'a' && c <= 'z') || (c >= 'A' && c <='Z'))
	  printf("%c is an alphabet.",c);
else
	printf("%c is not an Alphabet.",c);
return 0;
}
//In a C programming, a character variable holds an ASCII value can integer number
// between 0 and 127 rather than that character.

// The ASCII value of the lowercase alphabet is from 97 to 122 or from 65 to 90, that is num is an alphabet.
