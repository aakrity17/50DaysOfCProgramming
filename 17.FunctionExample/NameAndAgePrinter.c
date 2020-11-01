#include<stdio.h>
int main()
{
char name[30];
printf("Enter Your name :");
scanf( "%s",name);
//Function Call
namePrinter(name);
return 0;
}

//User Defined Function
int namePrinter(char n[30])
{
int age;
printf("Enter Your Age: ");
scanf("%d",&age);
printf("\n Hi,Your name is  %s \n You are %d years old.",n,age);
}
