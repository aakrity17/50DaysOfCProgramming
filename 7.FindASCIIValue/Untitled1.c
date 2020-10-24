#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d", c, c);
    
    return 0;
}
//In this program, the user is asked to enter a character. The character is stored in C.

//Scanf read the character and stored in variable C,

//When %d format string is used 65 (The ASCII value of A is displayed)

//When [%c] format string is used [G] itself is displayed.
