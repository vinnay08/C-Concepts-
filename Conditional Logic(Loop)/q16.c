//Q-16. Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

main() {
    int i = 1, sum = 0; // Initialize loop counter 'i' and 'sum' to store the total
    
    // Loop to sum the numbers from 1 to 10
    while (i <= 10) {
        sum += i; // Add the current value of 'i' to 'sum'
        i++; // Increment 'i' by 1
    }
    
    // Print the result
    printf("Sum of 10 numbers is: %d", sum);
}

