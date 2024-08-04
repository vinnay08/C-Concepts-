//q-33. C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3) 

#include <stdio.h>

main() {
    int a; // Declare an integer variable to store the input number
    
    // Prompt the user to enter a number
    printf("Enter number: ");
    scanf("%d", &a); // Read the input number and store it in 'a'
    
    // Print the first three powers of the input number
    // a^1 is just 'a'
    // a^2 is 'a' squared
    // a^3 is 'a' cubed
    printf("\nFirst three powers of %d are: %d, %d, %d", a, a, a*a, a*a*a);
}
