//Q-4. Write a program in C to count the total number of words in a string.

#include <stdio.h>
#include <string.h> // Include string.h for strlen function

int main() { // Corrected to return an int
    char str[256]; // Declare a character array 'str' with a size of 256 to store the input string
    
    printf("Enter string: ");  
    gets(str); // Read the input string from the user and store it in the array 'str'
               // Note: 'gets' is unsafe and can lead to buffer overflow, it is better to use 'fgets'
    
    int i, word_count = 0; // Declare an integer 'i' for loop control and 'word_count' to count the words

    // Replace the '\0' at the end of the string with '0' (this line is unnecessary and can be removed)
    str[strlen(str)] = '0';

    // Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // Check if the current character is a space and the next character is not a space or null terminator
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            word_count++; // Increment the word count
        }
    }

    // Check if the last character is not a space to count the last word
    if (str[i - 1] != ' ') {
        word_count++;
    }

    // Print the total number of words
    printf("Total number of words: %d\n", word_count);

    return 0; // Indicate successful completion of the program
}

