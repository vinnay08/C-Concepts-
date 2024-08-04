//Q-3. WAP to find reverse of string using recursion 

#include<stdio.h>

// Function to reverse the input string
reverse() {   
    int i, length = -1;
    char str[256];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    
    // Read the input string from the user
    scanf("%s", str);
    
    // Calculate the length of the string
    for(i = 0; str[i] != '\0'; i++) {
        length++; 
    }

    int start = 0, temp;

    // Reverse the string in place
    for(i = 0; i < 256; i++) {
        // Swap characters until the middle of the string is reached
        if(start <= length) {
            temp = str[start];
            str[start] = str[length];  
            str[length] = temp;
            start++;
            length--;
        }
    }
    
    // Print the reversed string
    printf("Reversed String: %s", str);  
}

main() {
    // Call the reverse function
    reverse();
}

