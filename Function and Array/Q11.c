//Q-11. WAP to accept 5 numbers from user and display in reverse order using forloop and array 

#include<stdio.h> 

main() { 
    int i, a[256]; // Declare integer variables 'i' and an array 'a' of size 256
    
    for(i=0; i<5; i++) { // Loop to take 5 numbers as input
        printf("Enter Your Number: "); // Prompt the user to enter a number
        scanf("%d", &a[i]); // Read the input number and store it in array 'a' at index 'i'
        
        int reversed = 0, digit; // Declare 'reversed' to store the reversed number and 'digit' to store individual digits
        for(; a[i] != 0; a[i] /= 10) { // Loop to reverse the number
            digit = a[i] % 10; // Extract the last digit of the number
            reversed = reversed * 10 + digit; // Append the digit to 'reversed'
        }
        printf("Reversed Number: %d\n\n", reversed); // Print the reversed number
    }
}

