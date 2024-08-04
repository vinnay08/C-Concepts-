//Q-19 Pattern 1

#include <stdio.h>

 main() {
    int i, j; // Declare loop variables
    
    // Outer loop for the number of rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for the number of columns in each row
        for (j = 1; j <= i; j++) {
            // Print '0' if the column number is even, otherwise print '1'
            if (j % 2 == 0) {
                printf("0");
            } else {
                printf("1");
            }
        }
        // Move to the next line after completing the current row
        printf("\n");
    }
}

