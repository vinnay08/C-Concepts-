//q-9. C Program to Check Uppercase or Lowercase or Digit or Special Character

#include <stdio.h> 

main() { 
    char ch; // Declare a character variable to store the input character
    
    // Prompt the user to enter a character
    printf("Enter character: ");
    scanf("%c", &ch); // Read the character entered by the user and store it in 'ch'
    
    // Classify the character
    if (ch >= 'a' && ch <= 'z') { // Check if the character is a lowercase letter
        printf("This is a lowercase character"); // Print "This is a lowercase character" if the condition is true
    } 
    else if (ch >= 'A' && ch <= 'Z') { // Check if the character is an uppercase letter
        printf("This is an uppercase character"); // Print "This is an uppercase character" if the condition is true
    } 
    else if (ch >= '0' && ch <= '9') { // Check if the character is a digit
        printf("This is a digit number"); // Print "This is a digit number" if the condition is true
    } 
    else { // If the character does not match any of the above conditions
        printf("This is a special character"); // Print "This is a special character"
    }
}

