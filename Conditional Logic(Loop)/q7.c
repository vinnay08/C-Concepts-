//q-7. WAP to print number in reverse order

#include<stdio.h> 

main() {
    int n, reverse; // Declare variables: n for storing the number entered by the user, and reverse for storing each digit in reverse order
    
    printf("Enter number : "); // Prompt the user to enter a number
    scanf("%d", &n); // Read the number entered by the user and store it in variable n
    
    // Loop to reverse the number
    while(n > 0) {
        reverse = n % 10; // Get the last digit of the number
        printf("%d", reverse); // Print the last digit
        n = n / 10; // Remove the last digit from the number
    }
}

