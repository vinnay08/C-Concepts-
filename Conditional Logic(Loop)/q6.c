//q-6. WAP to print Fibonacci series up to given numbers

#include<stdio.h> 

main() {
    int n, n1 = 0, n2 = 1, n3, i; // Declare variables: n for the number of terms, n1 and n2 for the first two Fibonacci numbers, n3 for the next Fibonacci number, and i for loop control

    printf("Enter number : "); // Prompt the user to enter the number of terms
    scanf("%d", &n); // Read the number of terms entered by the user and store it in variable n

    // Print the first two Fibonacci numbers
    printf("%d,", n1); // Print the first Fibonacci number
    printf("%d,", n2); // Print the second Fibonacci number

    // Loop to calculate and print the Fibonacci sequence from the 3rd term onwards
    for(i = 3; i <= n; i++) {
        n3 = n1 + n2; // Calculate the next Fibonacci number
        n1 = n2; // Update n1 to the previous n2
        n2 = n3; // Update n2 to the newly calculated Fibonacci number
        printf("%d,", n3); // Print the new Fibonacci number
    }
}

