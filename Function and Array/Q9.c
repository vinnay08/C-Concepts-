//Q-9. WAP to show difference between Structure and Union.

#include <stdio.h>

// Define a union to store an array and indices for sorting
union Myunion {
    int a[5];
    struct {
        int i, j, temp;
    };
} s1, s2, s3, s4;

// Define a structure to store three integers
struct Mystructure {
    int a, b, c;
} s5;

main() {
    // Input 5 numbers into the array in the union
    for (s2.i = 0; s2.i < 5; s2.i++) {
        printf("Enter Number: ");
        scanf("%d", &s1.a[s2.i]);
    }
    
    // Sort the array in ascending order using bubble sort
    for (s2.i = 0; s2.i < 5; s2.i++) {
        for (s3.j = s2.i + 1; s3.j < 5; s3.j++) {
            if (s1.a[s2.i] >= s1.a[s3.j]) {
                s4.temp = s1.a[s2.i];
                s1.a[s2.i] = s1.a[s3.j];
                s1.a[s3.j] = s4.temp;
            }
        }
    }
    
    // Print the sorted array
    for (s2.i = 0; s2.i < 5; s2.i++) {
        printf("\nYour Number is: %d", s1.a[s2.i]);
    }
    
    // Input two numbers into the structure
    printf("\n\nEnter Number 1: ");
    scanf("%d", &s5.a);                   
    
    printf("\nEnter Number 2: ");
    scanf("%d", &s5.b);
    
    // Print the numbers from the structure
    printf("\n%d", s5.a);
    printf("\n%d", s5.b);
}
