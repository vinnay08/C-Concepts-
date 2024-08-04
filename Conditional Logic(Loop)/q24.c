//Q-24. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) 

#include <stdio.h>

int main() {
    int n, i, sum = 0; // Declare variables: n for user input, i for loop iteration, and sum to accumulate the total

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n); // Read user input and store it in variable n
    
    // Loop from 1 to n, summing the squares of the numbers
    for (i = 1; i <= n; i++) {
        sum += i * i; // Add the square of the current value of i to sum
    }
    
    // Output the result
    printf("The sum of the squares of the first %d numbers is: %d\n", n, sum);
}

