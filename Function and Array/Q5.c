//Q-5. WAP to take two Array input from user and sort them in ascending ordescending order as per user�s choice 

#include <stdio.h>

// Function to swap two integers
swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on an array
bubbleSort(int arr[], int size, int ascending) {
    int i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            // Check the order and swap if necessary
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// Function to display an array
displayArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

 main() {
    int size1, size2, i;
    
    // Input size and elements of the first array
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    // Input size and elements of the second array
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    // Input choice for sorting order
    int choice;
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);
    
    // Perform bubble sort based on the choice
    if (choice == 1) {
        bubbleSort(arr1, size1, 1);
        bubbleSort(arr2, size2, 1);
    } else if (choice == 2) {
        bubbleSort(arr1, size1, 0);
        bubbleSort(arr2, size2, 0);
    } else {
        printf("Invalid choice.\n");
        return 1;  // Return with an error code if the choice is invalid
    }
    
    // Display the sorted arrays
    printf("Sorted first array: ");
    displayArray(arr1, size1);
    printf("Sorted second array: ");
    displayArray(arr2, size2);
}


