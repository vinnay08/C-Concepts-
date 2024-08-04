// Q-27. 1 2 3 6 9 18 27 54...

#include <stdio.h>

main()
{
    int n, i;

    // Input the value of n
    printf("Enter the number of terms: ");
    scanf("%d", &n); // Read the number of terms from the user

    // Initialize the first term
    int term = 1; // Start with the first term as 1

    // Print the first term
    printf("%d ", term);

    // Loop to generate and print the rest of the terms
    for (i = 1; i < n; i++)
    {
        if (i % 2 == 1)
        {
            term *= 2; // Multiply by 2 for odd indices (1, 3, 5, ...)
        }
        else
        {
            term *= (3 * term) / 2; // Multiply by 3/2 for even indices (2, 4, 6, ...)
        }
        printf("%d ", term); // Print the current term
    }

    printf("\n"); // Print a new line at the end
}
