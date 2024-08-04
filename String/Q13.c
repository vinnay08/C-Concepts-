//Q-13. Write a program in C to remove characters from a string except alphabets

#include <stdio.h>
#include <string.h> // For strlen function
#include <ctype.h>  // For isalpha function

// Function to remove non-alphabet characters from the string
removeNonAlphabets(char str[]) {
    int i, j, length;

    length = strlen(str); // Get the length of the string
    
    for (i = 0; i < length; i++) {
        // Check if the current character is not an alphabet
        if (!isalpha(str[i])) {
            // Shift characters to the left to remove the current non-alphabet character
            for (j = i; j < length - 1; j++) {
                str[j] = str[j + 1];
            }
            str[length - 1] = '\0'; // Null-terminate the string
            length--; // Reduce the length of the string
            i--; // Re-check the current position
        }
    }

    // Print the modified string with non-alphabet characters removed
    printf("Modified string: %s\n", str);
}

main() {
    char str[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    gets(str); // Unsafe function; use fgets in practice

    // Add a null terminator to the end of the string (gets adds it automatically)
    str[strlen(str)] = '\0';

    // Print the original string
    printf("Original string: %s\n", str);

    // Call the function to remove non-alphabet characters
    removeNonAlphabets(str);

}
