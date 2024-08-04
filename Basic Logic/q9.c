//q-9. Find circumference of Triangle formula : triangle = a + b + c

#include <stdio.h>

main() { 
    float a, b, c; // Declare float variables 'a', 'b', and 'c' for the sides of the triangle
    
    // Prompt the user to enter the length of side 'a' of the triangle
    printf("Enter side a length: ");
    scanf("%f", &a); // Read the input value and store it in variable 'a'
    
    // Prompt the user to enter the length of side 'b' of the triangle
    printf("Enter side b length: ");
    scanf("%f", &b); // Read the input value and store it in variable 'b'
    
    // Prompt the user to enter the length of side 'c' of the triangle
    printf("Enter side c length: ");
    scanf("%f", &c); // Read the input value and store it in variable 'c'
    
    // Calculate the circumference (perimeter) of the triangle using the formula a + b + c
    float Area = a + b + c;
    
    // Print the circumference of the triangle with two decimal places
    printf("The circumference of Triangle: %.2f", Area);
}

