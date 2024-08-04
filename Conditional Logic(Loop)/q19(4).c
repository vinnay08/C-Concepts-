//Q-19 Pattern 4

#include <stdio.h>

 main() {
    int n = 1; // Initialize the number to start with
    int i, j;

    // Loop for the number of rows
    for (i = 1; i <= 5; i++) {
        // Loop to print numbers in each row
        for (j = 1; j <= i; j++) {
            printf("%d ", n); // Print the current number
            n++; // Increment the number
        }
        // Move to the next line after completing the current row
        printf("\n");
    }
}

