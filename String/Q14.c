//Q-14.Write a program in C to combine two strings manually 

#include <stdio.h>
#include <string.h> 

main() {
    int i, j; // Declare for loop
    char a[25], b[25], c[50]; // Increase size of c to accommodate both strings

    // Prompt and read the first string
    printf("Enter String 1: ");
    gets(a); // Unsafe function; use fgets in practice

    // Prompt and read the second string
    printf("Enter String 2: ");  
    gets(b); // Unsafe function; use fgets in practice

    // Copy the first string to the third string
    for (i = 0; a[i] != '\0'; i++) {
        c[i] = a[i];
    }

    // Append the second string to the third string
    for (j = 0; b[j] != '\0'; j++) {
        c[i] = b[j];
        i++;
    }

    // Print the merged string
    printf("\nMerged string is: %s", c);  
}

