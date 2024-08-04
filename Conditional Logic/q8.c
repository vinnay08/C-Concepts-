//q-8. WAP to accept the height of a person in centimeters and categorize the 
//person according to their height.

#include <stdio.h> 

main() { 
    int height; // Declare an integer variable to store the height in cm
    
    // Prompt the user to enter their height in cm
    printf("Enter your height in cm: ");
    scanf("%d", &height); // Read the height entered by the user and store it in 'height'
    
    // Classify the height into different categories
    if (height < 150) { // Check if the height is less than 150 cm
        printf("Your height is short"); // Print "Your height is short" if height is less than 150 cm
    } 
    else if (height >= 150 && height < 160) { // Check if the height is between 150 cm and 159 cm
        printf("Your height is average"); // Print "Your height is average" if height is between 150 cm and 159 cm
    } 
    else if (height >= 160 && height < 180) { // Check if the height is between 160 cm and 179 cm
        printf("Your height is tall"); // Print "Your height is tall" if height is between 160 cm and 179 cm
    } 
    else { // If the height is 180 cm or more
        printf("Your height is very tall"); // Print "Your height is very tall" if height is 180 cm or more
    }
}

