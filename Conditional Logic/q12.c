//q-12. WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h> 

main() {
    int a, b, c; // Declare three integer variables to store the numbers
    
    // Prompt the user to enter the first number
    printf("Enter number 1: ");
    scanf("%d", &a); // Read the first number and store it in 'a'
    
    // Prompt the user to enter the second number
    printf("Enter number 2: ");
    scanf("%d", &b); // Read the second number and store it in 'b'
    
    // Prompt the user to enter the third number
    printf("Enter number 3: ");
    scanf("%d", &c); // Read the third number and store it in 'c'
    
    // Use nested ternary operators to find and print the maximum of the three numbers
    (a > b) ? // Check if 'a' is greater than 'b'
        (a > c) ? // If true, check if 'a' is greater than 'c'
            printf("%d is Maximum", a) : // If both conditions are true, 'a' is the maximum
            printf("%d is Maximum", c) : // If 'a' is not greater than 'c', then 'c' is the maximum
        (b > c) ? // If 'a' is not greater than 'b', check if 'b' is greater than 'c'
            printf("%d is Maximum", b) : // If both conditions are true, 'b' is the maximum
            printf("%d is Maximum", c); // If 'b' is not greater than 'c', then 'c' is the maximum
}

