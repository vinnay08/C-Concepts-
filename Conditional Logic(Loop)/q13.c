//q-13. calculate the Factorial of a Given Number using while loop

#include <stdio.h>

main() {
    int i, n, fac = 1; // Initialize variables: i, n (number for factorial), and fac (factorial result)
    
    // Prompt user to enter a number
    printf("Enter number: ");
    scanf("%d", &n); // Read the input number into variable n
    
    i = 1; // Initialize counter variable i
    
    // Calculate the factorial using a while loop
    while (i <= n) {
        fac *= i; // Multiply fac by i
        i++; // Increment i by 1
    }
    
    // Output the result
    printf("Factorial number is: %d\n", fac); // Print the factorial result
}

