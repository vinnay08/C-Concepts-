//Q-15.Calculate sum of 10 numbers using of while loop

#include <stdio.h>

main() {
    int i = 1, sum = 0, n;
    
    // Loop to read 10 numbers
    while (i <= 10) {
        // Prompt user to enter a number
        printf("Enter number: ");
        scanf("%d", &n); // Read the input number and store it in n
        
        sum += n; // Add the entered number to the sum
        
        i++; // Increment the counter to move to the next iteration
    }
    
    // Output the total sum
    printf("Sum of 10 numbers is: %d", sum);
}

