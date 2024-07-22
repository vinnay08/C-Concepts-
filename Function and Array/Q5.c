//Q-5. WAP to take two Array input from user and sort them in ascending ordescending order as per user’s choice 

#include <stdio.h>

swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

bubbleSort(int arr[], int size, int ascending) {
	int i,j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if ((ascending && arr[j] > arr[j + 1]) || (!ascending && arr[j] < arr[j + 1])) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

displayArray(int arr[], int size) {
	int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

main() {
    int size1, size2, i;
    
    printf("Enter size of first array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter elements of first array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter elements of second array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    
    int choice;
    printf("Enter 1 for ascending order or 2 for descending order: ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        bubbleSort(arr1, size1, 1);
        bubbleSort(arr2, size2, 1);
    } else if (choice == 2) {
        bubbleSort(arr1, size1, 0);
        bubbleSort(arr2, size2, 0);
    } else {
        printf("Invalid choice.\n");
        return 1;
    }
    
    printf("Sorted first array: ");
    displayArray(arr1, size1);
    printf("Sorted second array: ");
    displayArray(arr2, size2);
    
}

