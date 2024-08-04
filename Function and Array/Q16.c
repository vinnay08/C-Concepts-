//Q- 16.Accept 5 numbers from user and perform sum of array 

#include <stdio.h>

main() { 
    int a[5], i, sum = 0; // Declare an array 'a' of size 5, an integer 'i', and an integer 'sum' initialized to 0

    // Input loop for the array
    for(i = 0; i < 5; i++) {
        printf("Enter number: "); // Prompt the user to enter a number
        scanf("%d", &a[i]); // Read the input number and store it in the array 'a' at index 'i'
    }

    // Calculation of the sum of the numbers
    for(i = 0; i < 5; i++) {
        sum = sum + a[i]; // Add each number to the sum
    }

    // Output the result
    printf("\nSum of numbers is: %d", sum); // Print the sum of the numbers

}

