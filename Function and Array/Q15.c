//Q-15. Store 5 numbers in array and sort it in ascending order

#include <stdio.h>

main() { 
    int a[5], i, j, temp; // Declare an array 'a' of size 5 and integer variables 'i', 'j', and 'temp'

    // Input loop for the array
    for(i = 0; i < 5; i++) {
        printf("Enter number: "); // Prompt the user to enter a number
        scanf("%d", &a[i]); // Read the input number and store it in the array 'a' at index 'i'
    }

    // Sorting the array in ascending order using bubble sort
    for(i = 0; i < 5; i++) {
        for(j = i + 1; j < 5; j++) {
            if(a[i] > a[j]) { // If the current element is greater than the next element, swap them
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    // Output loop for the sorted array
    printf("\nNumbers in ascending order are:\n"); // Output formatting
    for(i = 0; i < 5; i++) {
        printf("%d\n", a[i]); // Print each number in the sorted array
    }
}

