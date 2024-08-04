//q-4. WAP to make simple calculator (operation include Addition, 
//Subtraction, Multiplication, Division, modulo) using conditional statement

#include <stdio.h> 

main() { 
    char op; // Declare a character variable to store the operator
    float a, b, c; // Declare floating-point variables for the operands and result
    
    // Prompt the user to enter an operator
    printf("Enter +, -, *, /, %: ");
    scanf("%c", &op); // Read the operator and store it in 'op'
    
    // Prompt the user to enter the first operand
    printf("Enter A: ");
    scanf("%f", &a); // Read the first operand and store it in 'a'
    
    // Prompt the user to enter the second operand
    printf("Enter B: ");
    scanf("%f", &b); // Read the second operand and store it in 'b'
    
    // Perform the operation based on the entered operator
    switch (op) {
        case '+': // Addition
            c = a + b; // Calculate the sum
            break;
        case '-': // Subtraction
            c = a - b; // Calculate the difference
            break;
        case '*': // Multiplication
            c = a * b; // Calculate the product
            break;
        case '/': // Division
            if (b != 0) { // Check for division by zero
                c = a / b; // Calculate the quotient
            } else {
                printf("b can't be zero"); // Print error message if b is zero
                return; // Exit the program
            }
            break;
        case '%': // Modulus (remainder after division)
            if (b != 0) { // Check for division by zero
                c = (int)a % (int)b; // Calculate the remainder
            } else {
                printf("Error: Modulo by zero!\n"); // Print error message if b is zero
                return; // Exit the program
            }
            break;
        default: // Invalid operator
            printf("Invalid input"); // Print error message for invalid operator
            return; // Exit the program
    }
    
    // Print the result of the operation
    printf("\nResult: %.2f", c); 
}

