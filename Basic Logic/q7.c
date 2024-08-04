//q-7. Find area of Rectangle Formula : A=wl

#include <stdio.h> 

main() {
    float w, l; // Declare float variables 'w' for width and 'l' for length of the rectangle
    
    // Prompt the user to enter the width of the rectangle
    printf("Enter width of Rectangle: ");
    scanf("%f", &w); // Read the input value and store it in variable 'w'
    
    // Prompt the user to enter the length of the rectangle
    printf("Enter length of Rectangle: ");
    scanf("%f", &l); // Read the input value and store it in variable 'l'
    
    // Calculate the area of the rectangle using the formula w * l
    float Area = w * l;
    
    // Print the area of the rectangle with two decimal places
    printf("The Area of Rectangle: %.2f", Area);
}

