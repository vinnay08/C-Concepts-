//Q-26. 1/2 - 2/3 + 3/4 - 4/5 + 5/6 .......... n 


#include <stdio.h>

int main() {
    int n, i; // Declare variables: n for user input, i for loop iteration
    double sum = 0.0; // Declare and initialize sum to 0.0 for accumulating the result

    // Prompt the user to enter the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n); // Read user input and store it in variable n

    // Loop from 1 to n
    for (i = 1; i <= n; i++) {
        // Check if i is even
        if (i % 2 == 0) {
            // Subtract the fraction i/(i + 1) from sum
            sum -= (double)i / (i + 1);
        } else {
            // Add the fraction i/(i + 1) to sum
            sum += (double)i / (i + 1);
        }
    }
    
    // Output the result
    printf("The sum of the series is: %lf\n", sum);
}


