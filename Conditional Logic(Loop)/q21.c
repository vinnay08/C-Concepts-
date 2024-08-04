//Q-21.  Accept 3 numbers from user using while loop and check each numbers palindrome 

#include <stdio.h>

main() {
    int num, originalNum, reversedNum = 0, remainder;
    int count = 0; // Counter to track the number of inputs processed

    // Loop to handle 3 numbers
    while (count < 3) {
        // Prompt user for input
        printf("Enter number: ");
        scanf("%d", &num); // Read user input
        
        // Store the original number for comparison
        originalNum = num;
        reversedNum = 0; // Reset reversedNum for each new input
        
        // Reverse the digits of the number
        while (num != 0) {
            remainder = num % 10; // Get the last digit
            reversedNum = reversedNum * 10 + remainder; // Build the reversed number
            num /= 10; // Remove the last digit from num
        }

        // Check if the original number and the reversed number are the same
        if (originalNum == reversedNum) {
            printf("%d is a palindrome.\n", originalNum); // Output if number is a palindrome
        } else {
            printf("%d is not a palindrome.\n", originalNum); // Output if number is not a palindrome
        }

        count++; // Increment the counter
    }
}


