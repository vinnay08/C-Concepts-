//q-4. Find Area of Square formula : a = a2 


#include <stdio.h> 

main() {
    float a; // Declare a float variable 'a' for the side of the square

    // Prompt the user to enter the side of the square
    printf("Enter the side of the square: ");
    scanf("%f", &a); // Read the input value and store it in variable 'a'
    
    // Calculate the area of the square using the formula a * a
    float Area = a * a;
    
    // Print the area of the square with two decimal places
    printf("The Area of the Square is: %.2f", Area);
}

