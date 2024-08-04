//Q-22. C Program to Reverse a Number Using FOR Loop

#include <stdio.h>
main() {
    int num, reversedNum = 0, remainder, originalNum;
    
    // Prompt user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &num); // Read user input and store it in num

    // Loop to reverse the digits of the number
    for (; num != 0; num /= 10) {
        remainder = num % 10; // Get the last digit of num
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNum);
}


