//Q-14. Perform 2D matrix array 

#include <stdio.h>

main() { 
    int a[2][3], i, j; // Declare a 2x3 integer array 'a' and integer variables 'i' and 'j' for loop control
    
    // Input loop for the 2x3 matrix
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("\nEnter Number: "); // Prompt the user to enter a number
            scanf("%d", &a[i][j]); // Read the input number and store it in the matrix 'a' at position [i][j]
        }
    }
    
    // Output loop for the 2x3 matrix
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("\na[%d][%d] number is: %d", i, j, a[i][j]); // Print the matrix element at position [i][j]
        }
    }
}

