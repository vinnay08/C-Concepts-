//q-3. 3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
//b. How many odd numbers are there
//c. Sum of even numbers
//d. Sum of odd numbers

#include<stdio.h> 

main() {
    int n, i; // Declare variables: n for user input and i for loop control
    int ev = 0, odd = 0; // Counters for even and odd numbers
    int evsum = 0, oddsum = 0; // Sums for even and odd numbers

    // Loop to get 10 numbers from the user
    for(i = 0; i < 10; i++) {
        printf("\nEnter number : "); // Prompt user to enter a number
        scanf("%d", &n); // Read the number entered by the user

        // Check if the number is even
        if(n % 2 == 0) {
            printf("%d is even", n); // Print that the number is even
            ev++; // Increment the even number counter
            evsum += n; // Add the even number to the even sum
        }
        // If the number is not even, it is odd
        else {
            printf("%d is odd", n); // Print that the number is odd
            odd++; // Increment the odd number counter
            oddsum += n; // Add the odd number to the odd sum
        }
    }

    // Print the count of even and odd numbers
    printf("\nEven numbers are : %d ", ev);
    printf("\nOdd numbers are : %d ", odd);
    
    // Print the sum of even and odd numbers
    printf("\nEven numbers sum are : %d", evsum);
    printf("\nOdd numbers sum are : %d", oddsum);
}

