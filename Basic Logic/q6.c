//q-6.  Find area of Triangle Formula : A = 1/2 � b � h 

#include <stdio.h>

main() {
    float b, h; // Declare float variables 'b' for base and 'h' for height of the triangle
    
    // Prompt the user to enter the base of the triangle
    printf("Enter base of Triangle: ");
    scanf("%f", &b); // Read the input value and store it in variable 'b'
    
    // Prompt the user to enter the height of the triangle
    printf("Enter height of Triangle: ");
    scanf("%f", &h); // Read the input value and store it in variable 'h'
    
    // Calculate the area of the triangle using the formula (b * h) / 2
    float Area = (b * h) / 2;
    
    // Print the area of the triangle with two decimal places
    printf("The Area of Triangle: %.2f", Area);
}

