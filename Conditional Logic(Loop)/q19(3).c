//Q-19. Pattern 3

#include <stdio.h>

main() {
    int i, k, j;

    // Loop for the number of rows
    for (i = 1; i <= 5; i++) {
        // Loop for printing spaces
        for (k = 1; k <= 5 - i; k++) {
            printf(" "); // Print space for alignment
        }
        // Loop for printing stars
        for (j = 1; j <= i; j++) {
            printf("* "); // Print star with a space for alignment
        }
        // Move to the next line after completing the current row
        printf("\n");
    }
}

