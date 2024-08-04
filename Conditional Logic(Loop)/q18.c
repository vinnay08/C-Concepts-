//Q-18. Write a C Program to Print the Multiplication Table of N 
//i. E.g. 5 * 1 = 5 
//ii. 5 * 2 = 10 
//1. . 
//2. . 
//iii. 5 * 10 = 50

#include <stdio.h>

main() {
    int n, i; // Declare variables for the number and loop counter
    
    printf("Enter number of table: "); // Prompt the user to enter the number
    scanf("%d", &n); // Read the input number for which the table will be generated
    
    // Loop to generate and display the multiplication table from 1 to 10
    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", n, i, n * i); // Print each line of the multiplication table
    }
}

