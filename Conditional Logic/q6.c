//q-6. Find the Character Is Vowel or Not 

#include <stdio.h> // Include the standard input-output header file

main() { // Main function, the entry point of the program
    char ch; // Declare a character variable to store the input character
    
    // Prompt the user to enter a character
    printf("Enter character: ");
    scanf("%c", &ch); // Read the input character and store it in 'ch'
    
    // Determine if the character is a vowel
    switch (ch) {
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
        case 'A': 
        case 'E': 
        case 'I': 
        case 'O': 
        case 'U': 
            printf("Vowel"); // Print "Vowel" if the character is a vowel
            break; // Exit the switch statement
        default: // If the character does not match any case above
            printf("Not Vowel"); // Print "Not Vowel"
    }
}

