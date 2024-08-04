//Q-13. WAP to accept 5 numbers from user and check entered number is even or oddusing of array 

#include<stdio.h> 

main() { 
    int i, a[5]; // Declare integer variables 'i' and an array 'a' of size 5

    for(i = 0; i < 5; i++) { // Loop to take 5 numbers as input
        printf("\nEnter Your Number: "); // Prompt the user to enter a number
        scanf("%d", &a[i]); // Read the input number and store it in array 'a' at index 'i'

        if(a[i] % 2 == 0) // Check if the number is even
            printf("%d is an Even number\n", a[i]); // Print that the number is even
        else // If the number is not even, it is odd
            printf("%d is an Odd number\n", a[i]); // Print that the number is odd
    }
}

