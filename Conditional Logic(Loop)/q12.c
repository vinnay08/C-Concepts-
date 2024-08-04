//q-12.Program of Armstrong Number in C Using For Loop & While Loop


#include <stdio.h>
#include <math.h>

// Function to count the total number of digits in the number
int count_digits(int number) {
    int count = 0; // Initialize digit count to 0
    while (number > 0) {
        number /= 10; // Remove the last digit
        count++; // Increment count
    }
    return count; // Return the total count of digits
}

main() {
    int number, original_number, sum = 0;
    
    // Prompt user to enter a number
    printf("Enter a number: ");
    scanf("%d", &number); // Read the number entered by the user
    original_number = number; // Store the original number for later comparison
    
    // Get the number of digits in the number
    int digits = count_digits(number);
    
    // Compute the sum of each digit raised to the power of the total number of digits
    for (number = number; number > 0; number /= 10) {
        int digit = number % 10; // Get the last digit
        sum += pow(digit, digits); // Raise the digit to the power of digits and add to sum
    }
    
    // Check if the sum of the powered digits equals the original number
    if (sum == original_number) 
        printf("%d is an Armstrong number.\n", original_number); // Output if it is an Armstrong number
    else 
        printf("%d is not an Armstrong number.\n", original_number); // Output if it is not an Armstrong number
}

