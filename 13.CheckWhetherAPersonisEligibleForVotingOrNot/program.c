// C Program to check whether a person is eligible for voting or not ?

// lOGIC :
// To check that a person is eligible for voting or not, we need to check whether 
// person’s age is greater than or equal to 18. 
// For this we are reading age in a variable a and checking the condition a>=18, 
// if the condition is true, "person will be eligible for voting" else not.

#include<stdio.h>
int main()
{
    int a ;
    // input age 
    printf ("Enter the age if the person :");
    scanf("%d",&a);

    // Check Voting eligibility
    if(a>=18)
    {
        printf("Eligible For Voting")

    }
    else{
        printf("Not eligible for voting\n");
    }
    return 0;
}
// Output

// First run:
// Enter the age of the person: 18
// Eigibal for voting

// Second run:
// Enter the age of the person: 17
// Not eligibal for voting