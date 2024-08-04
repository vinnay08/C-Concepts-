//Q-20

#include <stdio.h>

main() {
    int i, j;
    int n = 1;  // Initialize the starting number to 1

    for (i = 0; i < 5; i++) {  // Outer loop for 5 rows
        for (j = 0; j < 10; j++) {  // Inner loop for 10 columns
            printf("%02d ", n);  // Print the number with 2 digits, padding with zero if necessary
            n++;  // Increment the number for the next print
        }
        printf("\n");  // Move to the next line after printing 10 numbers
    }

}


