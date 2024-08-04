//q-20. If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the 
//minimum bill should be of Rs. 256/-

#include <stdio.h> // Include the standard input-output header file

main() { // Main function, the entry point of the program
    float firstbill, finalbill; // Declare variables to store the initial bill and the final bill
    
    // Prompt the user to enter the initial bill amount
    printf("Enter firstbill: ");
    scanf("%f", &firstbill); // Read the initial bill amount and store it in 'firstbill'
    
    // Check if the initial bill is greater than 800
    if (firstbill > 800) {
        // If so, calculate the final bill including an 18% tax
        finalbill = firstbill + (0.18 * firstbill); // Add 18% tax to the initial bill
        printf("\nFinal bill: %.2f", finalbill); // Print the final bill amount
    }
    // Check if the initial bill is less than 256
    else if (firstbill < 256) {
        // If so, print a message indicating the minimum purchase amount
        printf("Please buy above 256/- rupees");
    }
    else {
        // If the initial bill is between 256 and 800 (inclusive), no tax is applied
        finalbill = firstbill; // Final bill is the same as the initial bill
        printf("Thank you!"); // Print a thank you message
    }
}

