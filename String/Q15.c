//Q-15. Write a program in C to find the largest and smallest words in a string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>  

findLargestAndSmallestWords(char *str) {
    char largest[50], smallest[50];
    int largest_len = 0, smallest_len = 50;
    
    char word[50];
    int word_len = 0;
    
    int i = 0;
    while (str[i] != '\0') {
        // If current character is not a whitespace, add to the current word
        if (!isspace(str[i])) {
            word[word_len++] = str[i];
        } else if (word_len > 0) {
            // Null-terminate the current word
            word[word_len] = '\0';
            
            // Check if the current word is the largest or smallest
            if (word_len > largest_len) {
                strcpy(largest, word);
                largest_len = word_len;
            }
            if (word_len < smallest_len) {
                strcpy(smallest, word);
                smallest_len = word_len;
            }
        
            // Reset word length for the next word
            word_len = 0;
        }
        i++;
    }
    
    // Check the last word in the string
    if (word_len > 0) {
        word[word_len] = '\0';
        if (word_len > largest_len) {
            strcpy(largest, word);
            largest_len = word_len;
        }
        if (word_len < smallest_len) {
            strcpy(smallest, word);
            smallest_len = word_len;
        }
    }
    
    printf("Largest word: %s\n", largest);
    printf("Smallest word: %s\n", smallest);
}

main() {
    char str[100]; // Array to hold the input string
    
    // Prompt user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character read by fgets
    str[strcspn(str, "\n")] = '\0';
    
    // Call the function to find largest and smallest words
    findLargestAndSmallestWords(str);
    
}

