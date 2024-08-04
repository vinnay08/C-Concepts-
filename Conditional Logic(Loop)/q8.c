//q-8. Write a program to find out the max from given number

#include<stdio.h> 

main() {
    int n, max = 0; // Declare variables: n for storing the number entered by the user, and max to keep track of the maximum digit

    printf("Enter number : "); // Prompt the user to enter a number
    scanf("%d", &n); // Read the number entered by the user and store it in variable n

    // Loop to find the maximum digit
    while(n > 0) {
        int digit = n % 10; // Extract the last digit of the number
        if(digit > max) { // Check if the extracted digit is greater than the current maximum digit
            max = digit; // Update max if the current digit is greater
        }
        n /= 10; // Remove the last digit from the number
    }
    printf("Max: %d", max); // Print the maximum digit found
}

