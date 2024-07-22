#include <stdio.h>

void findMax() {
    int size,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for ( i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[0]; 
    for (i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum number in the array is: %d\n", max);
}

main() {
    findMax();

}
