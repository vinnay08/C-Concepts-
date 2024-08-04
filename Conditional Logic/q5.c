//q-5. Check Number Is Positive or Negative 

#include <stdio.h> 

main() { 
    int a; // Declare an integer variable to store the input number
    
    // Prompt the user to enter a number
    printf("Enter number: ");
    scanf("%d", &a); // Read the input number and store it in 'a'
    
    // Determine if the number is positive, zero, or negative
    if (a > 0) { // Check if the number is greater than 0
        printf("Positive"); // Print "Positive" if the number is greater than 0
    } 
    else if (a == 0) { // Check if the number is equal to 0
        printf("Zero"); // Print "Zero" if the number is exactly 0
    } 
    else { // If the number is neither positive nor zero
        printf("Negative"); // Print "Negative" if the number is less than 0
    }
}

