//Q-27. 1 2 3 6 9 18 27 54...

#include <stdio.h>
main() {
    int n,i;

    // Input the value of n
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Initialize the first term
    int term = 1;

    // Print the first term
    printf("%d ", term);

    // Loop to generate and print the rest of the terms
    for (i = 1; i < n; i++) {
        if (i % 2 == 1) {
            term *= 2; // Multiply by 2 for odd indices
        } else {
            term *= (3*term)/2; // Multiply by 3 for even indices
        }
        printf("%d ", term);
    }

    printf("\n");

 
}

