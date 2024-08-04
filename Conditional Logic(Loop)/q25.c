//Q-25. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n) 

#include <stdio.h>

int main() {
    int n, i, j, sum = 0; // Declare variables: n for user input, i and j for loop iteration, sum to accumulate the total

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n); // Read user input and store it in variable n
    
    // Outer loop: Iterate from 1 to n
    for (i = 1; i <= n; i++) {
        // Inner loop: Iterate from 1 to i
        for (j = 1; j <= i; j++) {
            sum += j; // Add the value of j to sum
        }
    }
    
    // Output the result
    printf("The sum of the series is: %d\n", sum);
}

