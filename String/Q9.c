//Q-9. Write a program in C to find the maximum number of characters in a string.

#include <stdio.h>
#include <string.h> // Required for strlen function

 main() {
    char str[20][20]; // Array to store up to 20 strings, each up to 19 characters long + null terminator
    int i, max_len = 0, n;

    // Prompt the user to enter the number of strings
    printf("Enter the number of strings: ");
    scanf("%d", &n);

    // Prompt the user to enter the strings
    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]); // Read each string
    }

    // Iterate through each string to find the maximum length
    for (i = 0; i < n; i++) {
        int len = strlen(str[i]); // Get the length of the current string
        if (len > max_len) {
            max_len = len; // Update max_len if the current string is longer
        }
    }

    // Print the length of the longest string
    printf("Maximum number of characters in a string: %d\n", max_len);
}

