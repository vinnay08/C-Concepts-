//q-14.Find ascii value of given number

#include <stdio.h>

main() {
    int n; // Declare an integer variable 'n' to store the input number
    
    // Prompt the user to enter a number
    printf("Enter number: ");
    scanf("%d", &n); // Read the input number and store it in variable 'n'
    
    // Convert the integer 'n' to its corresponding ASCII character
    char ch = (char) n;
    
    // Print the ASCII character corresponding to the entered number
    printf("ASCII value of number %d: %c", n, ch);
}

