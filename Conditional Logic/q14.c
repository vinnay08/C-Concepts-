//q-14.WAP to find the largest of three numbers.

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
    
    // Check if 'a' is greater than both 'b' and 'c'
    if (a > b && a > c) {
        printf("%d is Largest", a); // Print 'a' as the largest if the condition is true
    }
    // Check if 'b' is greater than both 'a' and 'c'
    else if (b > a && b > c) {
        printf("%d is Largest", b); // Print 'b' as the largest if the condition is true
    }
    else {
        printf("%d is Largest", c); // If neither of the above conditions is true, print 'c' as the largest
    }
}

