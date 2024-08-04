//Q-4. WAP to find factorial using recursion 

#include <stdio.h>

// Function to calculate the factorial of a number using recursion
factorial(int n) {
    if (n == 0 || n == 1) {  // Base case: factorial of 0 or 1 is 1
        return 1;
    } else {  // Recursive case: n * factorial of (n-1)
        return n * factorial(n - 1);
    }
}

main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);  // Read the number from user input

    if (num < 0) {  // Check if the number is negative
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        int result = factorial(num);  // Call the factorial function
        printf("Factorial of %d is %d\n", num, result);  // Print the result
    }
}
