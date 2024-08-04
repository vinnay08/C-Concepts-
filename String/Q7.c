//Q-7. Write a program in C to copy one string to another string.

#include <stdio.h>
#include <string.h> // Include string.h for the strcpy function

main() {
    char a[25], b[26]; // Declare two character arrays for storing strings

    // Prompt the user to enter a string
    printf("\nEnter String: ");
    scanf("%s", a); // Read the input string into array 'a'

    strcpy(b, a); // Copy the contents of array 'a' into array 'b'

    // Print the copied string from array 'b'
    printf("\nstring is: %s", b);    
}

