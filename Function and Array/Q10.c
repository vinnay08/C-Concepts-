//Q-10. WAP to perform Palindrome number using for loop and function 

#include <stdio.h>

// Function to check if a number is a palindrome
isPalindrome(int num) {
    int reversedNum = 0;
    int originalNum = num;

    // Reverse the number
    for (num = num; num != 0; num /= 10) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
    }
    
    // Print the reversed number
    printf("Reversed Number: %d", reversedNum);
    
    // Check if the original number is equal to the reversed number
    return originalNum == reversedNum;
}

main() {
    int num;
    
    // Input a number from the user
    printf("Enter a number: "); 
    scanf("%d", &num);

    // Check if the number is a palindrome and print the result
    if (isPalindrome(num)) {
        printf("\n\n%d is a palindrome number.\n", num);  
    } else {
        printf("\n\n%d is not a palindrome number.\n", num);
    }
}

