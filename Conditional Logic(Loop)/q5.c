//q-5. WAP to print factorial of given number

#include<stdio.h> 

main() {
    int n, i, fac = 1; // Declare variables: n for the number, i for loop control, fac for storing factorial result

    printf("Enter number : "); // Prompt the user to enter a number
    scanf("%d", &n); // Read the number entered by the user and store it in variable n

    // Loop to calculate the factorial of the number n
    for(i = 1; i <= n; i++) {
        fac *= i; // Multiply fac by i in each iteration
    }

    // Print the calculated factorial
    printf("\nFactorial is : %d", fac);
}

