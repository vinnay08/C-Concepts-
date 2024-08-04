//Q-8. Write a program in C to count the total number of vowels or consonants in astring

#include <stdio.h>

main() {
    char str[26]; // Declare a character array to store the string
    int i, vowel = 0, consonant = 0;

    // Prompt the user to enter a string
    printf("Enter String: ");
    gets(str); // Note: gets() is unsafe and should be avoided; use fgets() instead

    // Iterate through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the character is a vowel (both uppercase and lowercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            vowel++; // Increment vowel count
        } 
        // Check if the character is an alphabetic consonant
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonant++; // Increment consonant count
        }
    }

    // Print the total number of vowels and consonants
    printf("Total number of vowels: %d\n", vowel);
    printf("Total number of consonants: %d\n", consonant);  
}

