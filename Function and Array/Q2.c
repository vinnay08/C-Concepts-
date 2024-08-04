//Q-2. WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)

#include<stdio.h>

// Function declaration for the menu
menu() {
    int choice;      // Variable to store user's choice
    float num1, num2, result;  // Variables to store the numbers and result

    // Display menu options
    printf("Simple Calculator\n\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n\n");
    printf("Enter your choice (1-5): ");   
    scanf("%d", &choice);  // Read user's choice

    // Prompt the user to enter two numbers
    printf("\nEnter Number 1: ");
    scanf("%f", &num1);
    
    printf("Enter Number 2: ");   
    scanf("%f", &num2);

    // Perform the operation based on user's choice
    switch (choice) {
        case 1:  // Addition
            result = num1 + num2;
            printf("\nResult: %.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:  // Subtraction
            result = num1 - num2;
            printf("\nResult: %.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:  // Multiplication
            result = num1 * num2;
            printf("\nResult: %.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:  // Division
            if (num2 != 0) {  // Check if the divisor is not zero
                result = num1 / num2;
                printf("\nResult: %.2f / %.2f = %.2f\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero is not allowed.\n");
            }
            break;
        case 5:  // Modulo
            if (num2 != 0) {  // Check if the divisor is not zero
                result = (int)num1 % (int)num2;
                printf("\nResult: %.2f %% %.2f = %d\n", num1, num2, (int)result);
            } else {
                printf("\nError: Modulo by zero is not allowed.\n");
            }
            break;
        default:  // Invalid choice
            printf("\nInvalid choice. Please choose a valid option (1-5).\n");
    }
}

// Main function to call the menu function
 main() {
    menu();
}

