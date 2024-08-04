//q-10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include <stdio.h> 

main() { 
    float w, l, h; // Declare float variables 'w' for width, 'l' for length, and 'h' for height of the rectangular prism
    
    // Prompt the user to enter the width of the rectangular prism
    printf("Enter width of Rectangle: ");
    scanf("%f", &w); // Read the input value and store it in variable 'w'
    
    // Prompt the user to enter the length of the rectangular prism
    printf("Enter length of Rectangle: ");
    scanf("%f", &l); // Read the input value and store it in variable 'l'
    
    // Prompt the user to enter the height of the rectangular prism
    printf("Enter height of Rectangle: ");
    scanf("%f", &h); // Read the input value and store it in variable 'h'
    
    // Calculate the surface area of the rectangular prism using the formula 2 * ((w * l) + (h * l) + (h * w))
    float Area = 2 * ((w * l) + (h * l) + (h * w));
    
    // Print the surface area of the rectangular prism with two decimal places
    printf("Area of rectangular prism: %.2f ", Area);
}

