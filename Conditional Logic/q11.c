//q-11. WAP to find number is even or odd using ternary operator 

#include <stdio.h>

main() { 
    int a; // Declare an integer variable to store the number
    
    // Prompt the user to enter a number
    printf("Enter Number: ");
    scanf("%d", &a); // Read the number entered by the user and store it in 'a'
    
    // Use a ternary operator to check if the number is even or odd
    (a % 2 == 0) ? // Check if the remainder when 'a' is divided by 2 is zero
        printf("%d number is even", a) : // If true, print that the number is even
        printf("%d number is odd", a); // If false, print that the number is odd
}

