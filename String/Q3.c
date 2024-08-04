//Q-3. Write a program in C to print individual characters of a string in reverse order 

#include <stdio.h>
#include <string.h>

int main() {
    int i, start = 0, temp;
    char str[256]; // Declare a character array 'str' with a size of 256 to store the input string
    
    printf("Enter String: ");  
    gets(str); // Read the input string from the user and store it in the array 'str'
               // Note: 'gets' is unsafe and can lead to buffer overflow, it is better to use 'fgets'

    int length = strlen(str) - 1; // Calculate the length of the string and adjust to the last index

    // Reverse the string
    for(i = 0; i < 256; i++) { // Loop through each character in the string
        if(start <= length) { // Continue swapping until the start index is less than or equal to the length
            temp = str[start]; // Temporarily store the character at the start index
            str[start] = str[length]; // Swap the character at the start index with the character at the end index
            str[length] = temp; // Place the temporarily stored character at the end index
            start++; // Increment the start index
            length--; // Decrement the end index
        }
    }
    
    // Print each character of the reversed string individually
    printf("\nIndividual characters in reversed order are:\n");
    for (i = 0; str[i] != '\0'; i++) { // Loop through each character in the string until the null terminator is encountered
        printf("Character %d: %c\n", i + 1, str[i]); // Print the index and the character at that index
    }
    str[i] = '0'; // This line is unnecessary and can be removed
}
