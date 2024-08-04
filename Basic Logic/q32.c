//q-32. Accept 2 numbers and find out its sum check it size

#include <stdio.h> 

main() { 
    double a, b, c; // Declare double variables to store the two input numbers and their sum
    
    // Prompt the user to enter the first number
    printf("Enter First number: ");
    scanf("%lf", &a); // Read the input number and store it in 'a'
    
    // Prompt the user to enter the second number
    printf("Enter Second number: ");
    scanf("%lf", &b); // Read the input number and store it in 'b'
    
    // Calculate the sum of the two numbers
    c = a + b;
    
    // Print the sum of the two numbers, formatted as floating-point numbers
    printf("\nThe sum of %.2lf and %.2lf is: %.2lf\n", a, b, c);
    
    // Print the size of the sum variable in bytes
    printf("Size of sum: %lu bytes\n", sizeof(c));
}

