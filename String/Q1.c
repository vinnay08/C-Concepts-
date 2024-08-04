//Q-1. Write a program in C to find the length of a string without using libraryfunctions. 

#include <stdio.h>
#include <string.h> 

int main() { 
    char str[100]; // Declare a character array 'str' with a size of 100 to store the input string

    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Use gets() to read a string from standard input and store it in 'str'
    // Note: gets() is unsafe and should be avoided in favor of safer alternatives like fgets()
    gets(str);

    // Calculate the length of the string using the strlen() function from string.h
    int length = strlen(str);

    // Print the length of the string along with the original string
    printf("Length of '%s' is: %d\n", str, length);
}

