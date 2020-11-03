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
