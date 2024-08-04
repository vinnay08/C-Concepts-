//q-1. Write a C program to accept two integers and check whether they are equal or not 

#include <stdio.h> 

main() { 
    int a, b; // Declare integer variables to store the two input numbers
    
    // Prompt the user to enter the first number
    printf("Enter number 1: ");
    scanf("%d", &a); // Read the input number and store it in 'a'
    
    // Prompt the user to enter the second number
    printf("Enter number 2: ");
    scanf("%d", &b); // Read the input number and store it in 'b'
    
    // Compare the two numbers
    if (a == b) { // If the numbers are equal
        printf("num1 and num2 are equal");
    } else { // If the numbers are not equal
        printf("num1 and num2 are not equal");
    }
}
