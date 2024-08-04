//q-13. Find character value from ascii 

#include <stdio.h> 

main() { 
    char z; // Declare a character variable 'z' to store the input character
    
    // Prompt the user to enter a character
    printf("Enter Character: ");
    scanf("%c", &z); // Read the input character and store it in variable 'z'
    
    // Print the ASCII value of the entered character
    printf("ASCII value of %c: %d", z, z);
}
