//Q-12. Write a program in C to find the number of times a given word 'is' appears inthe given string. 

#include <stdio.h>
#include <string.h>

main() {
    char c[100];   // Array to hold the input sentence
    int count = 0; // Counter to keep track of occurrences of "is"
    
    // Prompt the user to enter a sentence
    printf("Enter a sentence: ");
    fgets(c, sizeof(c), stdin); // Read the input sentence safely using fgets
    
    // Remove the newline character if present
    if (c[strlen(c) - 1] == '\n') {
        c[strlen(c) - 1] = '\0'; // Replace newline with null terminator
    }
    
    char *ptr = c; // Pointer to traverse the string
    // Search for occurrences of "is" in the string
    while ((ptr = strstr(ptr, "is")) != NULL) {
        count++; // Increment the counter for each found occurrence
        ptr++;   // Move the pointer forward to continue searching
    }
    
    // Print the number of occurrences of "is"
    printf("Number of 'is' occurrences: %d\n", count);
}

