//q-10. Write a program you have to make a summation of first and last Digit.

#include<stdio.h> 

main() {
    int n, last, first; // Declare integer variables: n for the number, last for the last digit, and first for the first digit

    printf("Enter number : "); // Prompt the user to enter a number
    scanf("%d", &n); // Read the number entered by the user and store it in variable n

    // Extract the last digit
    last = n % 10; // The last digit is obtained by taking the remainder of n divided by 10

    // Find the first digit
    while(n > 0) {
        first = n; // Assign the current value of n to first
        n /= 10; // Remove the last digit from n
    }
    
    // Calculate the sum of the first and last digits
    int sum = last + first;
    
    // Print the sum of the first and last digits
    printf("Sum of first and last digit : %d", sum);
}

