//q-3.  WAP to Find Area And Circumference of Circle

#include <stdio.h> 


int main() {
    float r, PI = 3.14; // Declare a float variable 'r' for the radius and initialize 'PI' with 3.14
    
    // Prompt the user to enter the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &r); // Read the input value and store it in variable 'r'
    
    // Calculate the circumference of the circle using the formula 2 * PI * r
    float Circumference = 2 * PI * r;
    
    // Calculate the area of the circle using the formula PI * r * r
    float Area = PI * r * r;
    
    // Print the circumference of the circle with three decimal places
    printf("The Circumference of the Circle is: %0.3f", Circumference);
    
    // Print the area of the circle with three decimal places
    printf("\nThe Area of the Circle is: %0.3f", Area);
}

