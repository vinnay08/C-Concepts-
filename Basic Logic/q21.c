//q-21. Accept 2 numbers from user and swap 2 numbers with using 3rd variable 
//and without using 3rd variable

#include<stdio.h>
main(){
	int a, b; // Declare integer variables 'a' and 'b' for storing user inputs
    
    // Prompt the user to enter the value for 'a'
    printf("Enter Number A: ");
    scanf("%d", &a); // Read the input value for 'a' and store it in variable 'a'
    
    // Prompt the user to enter the value for 'b'
    printf("Enter Number B: ");
    scanf("%d", &b); // Read the input value for 'b' and store it in variable 'b'
    
    // Swap the values of 'a' and 'b' using a temporary variable
    int temp = a; // Store the value of 'a' in 'temp'
    a = b;        // Assign the value of 'b' to 'a'
    b = temp;     // Assign the value of 'temp' (original 'a') to 'b'
    
    // Print the values of 'a' and 'b' after swapping
    printf("\nAfter Swapping A: %d", a); // Print the value of 'a' after swapping
    printf("\nAfter Swapping B: %d", b); // Print the value of 'b' after swapping

}
