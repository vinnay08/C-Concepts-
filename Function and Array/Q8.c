//8. WAP to reverse a string and check that the string is palindrome 
//or notWrite a program of structure employee that provides the 
//following 
//a. information -print and display empno, empname, 
//addressandage 
//b. Write a program of structure for five employee 
//that provides the following information -print and 
//displayempno, empname, address andage 

#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
isPalindrome(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return 0;  // Not a palindrome
        }
        start++;
        end--;
    }
}

main() {
    char str[256];
    printf("Enter a string: ");
    scanf("%s", str);  // Read the string from the user

    // Calculate the length of the string
    int length = strlen(str) - 1; 

    // Reverse the string
    int start = 0, temp;
    while (start < length) {
        temp = str[start];
        str[start] = str[length];  
        str[length] = temp;
        start++;
        length--;
    }
    
    printf("Reversed String: %s\n", str);  // Print the reversed string
    
    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }
}

