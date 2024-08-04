//Q-10. Write a program in C to extract a substring from a given string

#include <stdio.h>
#include <string.h> // Required for strlen function

// Function to extract and print a substring from the given start to end index
extract(char str[], int start, int end) {
    int i;
    // Print characters from start index to end index, or until end of string
    for (i = start; i <= end && str[i] != '\0'; i++) {
        printf("%c", str[i]);
    }
}

main() {
    char str[256]; // Array to hold the input string
    int start, end;

    // Prompt the user to enter a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // safer alternative to gets()
    
    // Remove newline character from fgets if it exists
    str[strcspn(str, "\n")] = '\0'; 

    // Prompt the user to enter the starting index
    printf("Enter the starting index: ");
    scanf("%d", &start);

    // Prompt the user to enter the ending index
    printf("Enter the ending index: ");
    scanf("%d", &end);

    // Check for valid indices
    if (start < 1 || end < start || end >= strlen(str)) {
        printf("Invalid indices.\n");
    } else {
        // Print the substring from start to end index (0-based indexing)
        printf("The substring is: ");
        extract(str, start - 1, end - 1);
        printf("\n");
    }
}

