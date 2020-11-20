#include<stdio.h>
int main()
{
struct book // declaring a structure
char name; //Form has been declared
float price;
int pages;
};
struct book b1,b2,b3; //Space declaration in the memory to hold all the elements

printf("Enter names, prices and number of pages in the book\n");
scanf("%c %f %d",&b1.name, &b1.price,&b1.pages;
scanf("%c %f %d",&b2.name, &b2.price,&b2.pages;
scanf("%c %f %d",&b3.name, &b3.price,&b3.pages;

printf("The Inforamtion you have entered\n");
printf("%c %f %d",b1.name,b1.price,b1.pages);
printf("%c %f %d",b2.name,b2.price,b2.pages);
printf("%c %f %d",b3.name,b3.price,b3.pages);

return 0;
}
