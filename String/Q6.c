//Q-6. Write a program in C to count the total number of alphabets, digits and specialcharacters in a string. 

#include <stdio.h>

main() {
    char str[256]; // Define a character array to hold the input string
    int i, alphabet_count = 0, digit_count = 0, special_count = 0; // Initialize counters

    // Prompt the user to enter a string
    printf("Enter String: ");
    gets(str); // Read the input string

    // Iterate through each character in the string until the null character ('\0') is reached
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet (either lowercase or uppercase)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabet_count++; // Increment the alphabet counter
        }
        // Check if the character is a digit
        else if (str[i] >= '0' && str[i] <= '9') {
            digit_count++; // Increment the digit counter
        }
        // If the character is neither an alphabet nor a digit, it is considered a special character
        else {
            special_count++; // Increment the special character counter
        }
    }

    // Print the results
    printf("Total number of alphabets: %d\n", alphabet_count);
    printf("Total number of digits: %d\n", digit_count);
    printf("Total number of special characters: %d\n", special_count);
}

