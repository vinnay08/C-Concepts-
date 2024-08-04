//q-9. Write a program make a summation of given number

#include<stdio.h> 

main() {
    int n, sum = 0, i; // Declare variables: n for storing the number entered by the user, sum for accumulating the sum of digits, and i for extracting individual digits

    printf("Enter number : "); // Prompt the user to enter a number
    scanf("%d", &n); // Read the number entered by the user and store it in variable n

    // Loop to calculate the sum of the digits
    while(n > 0) {
        i = n % 10; // Extract the last digit of the number
        sum += i; // Add the extracted digit to the sum
        n /= 10; // Remove the last digit from the number
    }
    
    printf("Sum of digits : %d", sum); // Print the sum of the digits
}

