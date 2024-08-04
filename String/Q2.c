//Q-2. Write a program in C to separate individual characters from a string. 


#include <stdio.h> 

int main() { 
    int i; // Declare an integer variable i for loop control
    char a[256]; // Declare a character array 'a' with a size of 256 to store the input string
    
    printf("Enter String: ");  // Prompt the user to enter a string
    gets(a); // Read the input string and store it in the array 'a'
             // Note: 'gets' is unsafe and can lead to buffer overflow, it is better to use 'fgets'

    printf("\nIndividual characters of the string are:\n"); // Print a header for the output
    
    // Loop through each character in the string until the null terminator is encountered
    for (i = 0; a[i] != '\0'; i++) {
        printf("Character %d: %c\n", i + 1, a[i]); // Print the index and the character at that index
    }
}

