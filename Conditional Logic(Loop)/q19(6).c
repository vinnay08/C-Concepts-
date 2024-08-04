//Q-19 Pattern 6

#include <stdio.h>

main() {
    int i, j;

    // Upper triangle
    for (i = 1; i <= 5; i++) {
        // Print stars for the current row
        for (j = 0; j < i; j++) {
            printf("*");
        }
        // Move to the next line after printing all stars in the current row
        printf("\n");
    }

    // Lower inverted triangle
    for (i = 1; i <= 5-1; i++) {
        // Print stars for the current row
        for (j = 0; j < 5-i; j++) {
            printf("*");
        }
        // Move to the next line after printing all stars in the current row
        printf("\n");
    }
}

