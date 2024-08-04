//q-14.Accept 5 numbers from user and find those numbers factorials

#include <stdio.h>

main() {
    int n, i, fac, j;
    
    // Loop to handle multiple inputs
    for (i = 1; i <= 5; i++) {
        // Prompt user to enter a number
        printf("Enter number: ");
        scanf("%d", &n); // Read the input number and store it in n
        
        fac = 1; // Initialize factorial result to 1
        
        // Calculate factorial using a for loop
        for (j = 1; j <= n; j++) {
            fac *= j; // Multiply fac by j in each iteration
        }
        
        // Output the result
        printf("Factorial is: %d\n", fac); // Print the calculated factorial
    }
}

