//q-17.Write a C program to check whether a triangle can be formed with the given
//values for the angles.

#include <stdio.h>

main() { 
    float a1, a2, a3; // Declare variables to store the angles
    
    // Prompt the user to enter the first angle
    printf("Enter Angle 1: ");
    scanf("%f", &a1); // Read the first angle and store it in 'a1'
    
    // Prompt the user to enter the second angle
    printf("Enter Angle 2: ");
    scanf("%f", &a2); // Read the second angle and store it in 'a2'
    
    // Prompt the user to enter the third angle
    printf("Enter Angle 3: ");
    scanf("%f", &a3); // Read the third angle and store it in 'a3'
    
    // Calculate the sum of the three angles
    float t = a1 + a2 + a3;
    
    // Check if the sum of the angles is exactly 180 degrees
    if (t == 180) {
        // If the sum is 180, the angles can form a triangle
        printf("These angles can form a triangle");
    } else {
        // If the sum is not 180, the angles cannot form a triangle
        printf("These angles cannot form a triangle");
    }
}

