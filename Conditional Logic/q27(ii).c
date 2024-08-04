//q-27.(ii) Vowel or Consonant using switch case

#include<stdio.h> // Include the standard input-output header file

main() {
    char ch; // Variable to store the character input by the user
    
    // Prompt the user to enter a character
    printf("Enter character : ");
    scanf("%c", &ch); // Read the character from user input
    
    // Switch statement to check if the character is a vowel or consonant
    switch(ch) {
        // Cases for vowels (both lowercase and uppercase)
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
            break;
        // Default case for characters that are not vowels
        default:
            printf("Consonant"); // Print "Consonant" if the character is not a vowel
    }
}

