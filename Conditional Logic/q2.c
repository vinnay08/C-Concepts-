//q-2.  Write a C program to read the value of an integer m and display the value of 
//n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0 

#include <stdio.h> 

main() { 
    int m; // Declare an integer variable to store the input value
    
    // Prompt the user to enter the value for m
    printf("Enter m: ");
    scanf("%d", &m); // Read the input value and store it in 'm'
    
    // Check the value of m and set n accordingly
    if (m > 0) { // If m is greater than 0
        int n = 1; // Set n to 1
        printf("\nN is: %d", n); // Print the value of n
    } 
    else if (m == 0) { // If m is equal to 0
        int n = 0; // Set n to 0
        printf("\nN is: %d", n); // Print the value of n
    } 
    else { // If m is less than 0
        int n = -1; // Set n to -1
        printf("\nN is: %d", n); // Print the value of n
    }
}

