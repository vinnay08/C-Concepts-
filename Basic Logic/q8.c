//q-8. Find circumference of Rectangle formula : C = 2(l+w)

#include <stdio.h> 

main() { 
    float a, b; // Declare float variables 'a' for length and 'b' for width of the rectangle
    
    // Prompt the user to enter the length of the rectangle
    printf("Enter length: ");
    scanf("%f", &a); // Read the input value and store it in variable 'a'
    
    // Prompt the user to enter the width of the rectangle
    printf("Enter width: ");
    scanf("%f", &b); // Read the input value and store it in variable 'b'
    
    // Calculate the circumference of the rectangle using the formula 2 * (a + b)
    float circumference = 2 * (a + b);
    
    // Print the circumference of the rectangle with two decimal places
    printf("\nCircumference of Rectangle: %.2f", circumference);
}

