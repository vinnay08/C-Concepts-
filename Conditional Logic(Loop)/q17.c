//Q-17.  Calculate 5 numbers from user and calculate number of even and odd using of while loop

#include <stdio.h>

main() {
    int i = 1, n; // Initialize the loop counter 'i' to 1 and 'n' for storing user input

    // Loop to get 5 numbers from the user
    while (i <= 5) {
        printf("Enter number: "); // Prompt the user to enter a number
        scanf("%d", &n); // Read the number entered by the user
        
        // Check if the number is even or odd
        if (n % 2 == 0) {
            printf("Even number\n"); // Print if the number is even
        } else {
            printf("Odd number\n"); // Print if the number is odd
        }
        
        i++; // Increment the loop counter to process the next number
    }
}

