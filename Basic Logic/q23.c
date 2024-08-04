//q-23. WAP to calculate swap 2 numbers with using of multiplication and division

#include<stdio.h>
main(){
	int a, b; // Declare integer variables 'a' and 'b' for storing user inputs
    
    // Prompt the user to enter the value for 'a'
    printf("Enter A: ");
    scanf("%d", &a); // Read the input value for 'a' and store it in variable 'a'
    
    // Prompt the user to enter the value for 'b'
    printf("Enter B: ");
    scanf("%d", &b); // Read the input value for 'b' and store it in variable 'b'
    
    // Swap the values of 'a' and 'b' using multiplication and division
    a = a * b; // Multiply 'a' and 'b', and store the result in 'a'
    b = a / b; // Divide the new 'a' by 'b' to get the original value of 'a', and store it in 'b'
    a = a / b; // Divide the new 'a' by the new 'b' to get the original value of 'b', and store it in 'a'
    
    // Print the values of 'a' and 'b' after swapping
    printf("\nAfter Swapping A: %d", a); // Print the value of 'a' after swapping
    printf("\nAfter Swapping B: %d", b); // Print the value of 'b' after swapping

}
