//q-2. WAP to accept 5 numbers from user and display all numbers

#include<stdio.h> 

main() {
    int i, n; // Declare variables: i for loop control and n to store user input
    
    // First for loop to get 5 numbers from the user
    for(i = 0; i <= 5; i++) {
        printf("Enter number : "); // Prompt user to enter a number
        scanf("%d", &n); // Read the number entered by the user
    }
    
    // Second for loop to print the last number entered, 5 times
    for(i = 0; i < 5; i++) {
        printf("\nNumbers are : %d", n); // Print the last entered number
    }
}

