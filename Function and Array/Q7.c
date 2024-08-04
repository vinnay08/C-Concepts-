//Q-7. WAP Find out length of string without using inbuilt function 

#include <stdio.h>

main() {
    int i;
    char a[56];
    
    // Input a string from the user
    printf("Enter String: ");
    fgets(a, sizeof(a), stdin); // Use fgets instead of gets for safer input

    // Remove the trailing newline character if present
    if (a[strlen(a) - 1] == '\n') {
        a[strlen(a) - 1] = '\0';
    }
    
    // Calculate the length of the string
    for (i = 0; a[i] != '\0'; i++) {
        // Loop until the null terminator is reached
    }
    
    // Print the length of the string
    printf("\nLength of the string is: %d\n", i);
}

