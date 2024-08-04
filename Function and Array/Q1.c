// Q-1. Write a program to find out the max number from given array using 
// function 


#include <stdio.h>

// Function to find the maximum element in an array
findMax() {
    int size, i;

    // Prompt user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of the specified size
    int arr[size];

    // Prompt user to enter the elements of the array
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  // Read each element and store it in the array
    }

    // Initialize max with the first element of the array
    int max = arr[0];
    
    // Iterate through the array starting from the second element
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {  // If the current element is greater than max
            max = arr[i];  // Update max
        }
    }

    // Print the maximum number in the array
    printf("The maximum number in the array is: %d\n", max);
}

main() {
    findMax();  // Call the findMax function to execute the logic
    
}

