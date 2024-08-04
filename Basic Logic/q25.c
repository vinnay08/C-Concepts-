//q-25.Accept 5 expense from user and find average of expense

#include <stdio.h> 

main() {
    float e1, e2, e3, e4, e5; // Declare float variables to store the five expense values
    
    // Prompt the user to enter the value for expense 1
    printf("Enter expense 1: ");
    scanf("%f", &e1); // Read the input expense 1 and store it in 'e1'
    
    // Prompt the user to enter the value for expense 2
    printf("Enter expense 2: ");
    scanf("%f", &e2); // Read the input expense 2 and store it in 'e2'
    
    // Prompt the user to enter the value for expense 3
    printf("Enter expense 3: ");
    scanf("%f", &e3); // Read the input expense 3 and store it in 'e3'
    
    // Prompt the user to enter the value for expense 4
    printf("Enter expense 4: ");
    scanf("%f", &e4); // Read the input expense 4 and store it in 'e4'
    
    // Prompt the user to enter the value for expense 5
    printf("Enter expense 5: ");
    scanf("%f", &e5); // Read the input expense 5 and store it in 'e5'
    
    // Calculate the total of all expenses
    float total = e1 + e2 + e3 + e4 + e5;
    // Calculate the average of the expenses
    float avg = total / 5;
    
    // Print the average expense formatted to two decimal places
    printf("\nAverage expenses: %.2f", avg);
}

