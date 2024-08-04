//q-11.Find circumference of square formula : C = 4 * a

#include <stdio.h> 

main() {
    float a; // Declare a float variable 'a' for the side length
    
    // Prompt the user to enter the side length of the rectangle
    printf("Enter a side: ");
    scanf("%f", &a); // Read the input value and store it in variable 'a'
    
    // Calculate the circumference (perimeter) of a square using the formula 4 * a
    float Area = 4 * a;
    
    // Print the circumference of the square with two decimal places
    printf("The circumference of Square: %.2f", Area);
}
 
