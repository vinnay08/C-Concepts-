//q-5. Find Area of Cube formula : a = 6a2

#include <stdio.h>

main() {
    float a, PI = 3.14; // Declare a float variable 'a' for side length of cube and initialize 'PI' with 3.14
    
    printf("Enter side of cube : "); // Prompt the user to enter the side length of the cube
    scanf("%f", &a); // Read the input value and store it in variable 'a'
    
    float Area = 6 * a * a; // Calculate the surface area of the cube using the formula 6 * a * a
    
    printf("The Area of cube : %.2f", Area); // Print the area of the cube with two decimal places
    
}

