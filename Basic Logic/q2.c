//q-2. Write a program to make Simple calculator (to make addition, 
//subtraction, multiplication, division and modulo)

#include <stdio.h> 

main() {
    int a, b; // Declare two integer variables 'a' and 'b'
    
    // Prompt the user to enter the first number
    printf("Enter num 1:");
    scanf("%d", &a); // Read the input value and store it in variable 'a'
    
    // Prompt the user to enter the second number
    printf("\nEnter num 2:");
    scanf("%d", &b); // Read the input value and store it in variable 'b'
    
    // Perform and print the sum of 'a' and 'b'
    printf("1. Sum : %d", a + b);
    
    // Perform and print the subtraction of 'b' from 'a'
    printf("\n2. Sub : %d", a - b);
    
    // Perform and print the multiplication of 'a' and 'b'
    printf("\n3. Mul : %d", a * b);
    
    // Perform and print the division of 'a' by 'b'
    printf("\n4. Div : %d", a / b);
    
    // Perform and print the modulo (remainder) of 'a' divided by 'b'
    printf("\n5. Modulo : %d", a % b);
}

