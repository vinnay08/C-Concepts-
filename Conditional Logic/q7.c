//q-7. Accept marks from user and check pass or fail 

#include <stdio.h>

main() { 
    int a; // Declare an integer variable to store the marks
    
    // Prompt the user to enter their marks
    printf("Enter your marks out of 100: ");
    scanf("%d", &a); // Read the marks entered by the user and store it in 'a'
    
    // Check if the marks are greater than 33
    if (a > 33) { 
        printf("You are pass"); // Print "You are pass" if marks are greater than 33
    } 
    else {
        printf("You are fail"); // Print "You are fail" if marks are 33 or less
    }
}

