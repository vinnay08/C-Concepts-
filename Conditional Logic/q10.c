//q-10. WAP to check whether a number is negative, positive or zero.

#include <stdio.h> 

main() { 
    int a; // Declare an integer variable to store the number
    
    // Prompt the user to enter a number
    printf("Enter number: ");
    scanf("%d", &a); // Read the number entered by the user and store it in 'a'
    
    // Classify the number
    if (a == 0) { // Check if the number is zero
        printf("This number is Zero"); // Print "This number is Zero" if the condition is true
    } 
    else if (a > 0) { // Check if the number is positive
        printf("This number is Positive"); // Print "This number is Positive" if the condition is true
    } 
    else { // If the number is neither zero nor positive
        printf("This number is Negative"); // Print "This number is Negative"
    }
}

