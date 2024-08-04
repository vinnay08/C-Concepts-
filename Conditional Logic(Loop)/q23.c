//Q-23. Series Program : 1 + 2 + 3 + 4 + 5 + ... + n 

#include <stdio.h>

main() {
    int n, i, sum = 0; // Declare variables: n for user input, i for loop iteration, and sum to accumulate the total

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n); // Read user input and store it in variable n

    // Loop from 1 to n, summing the numbers
    for (i = 1; i <= n; i++) {
        sum += i; // Add the current value of i to sum
    }

    // Output the result
    printf("The sum of the first %d numbers is: %d\n", n, sum);
}


