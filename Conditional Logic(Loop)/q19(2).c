//Q-19. Pattern 2

#include <stdio.h>

main() {
    char ch = 'A'; // Initialize the character to 'A'
    int i, j; // Declare loop variables

    // Outer loop for the number of rows
    for (i = 1; i <= 5; i++) {
        // Inner loop for the number of columns in each row
        for (j = 1; j <= i; j++) {
            // Print the current character and then increment it
            printf("%c ", ch);
            ch++;
        }
        // Move to the next line after completing the current row
        printf("\n");
    }
}
