//Q-17.WAP to show difference between Structure and Union. 

#include <stdio.h>

// Define a union named Myunion
union Myunion {
    int a[5], i, j, temp;  // An array of 5 integers and some integer variables
} s1, s2, s3, s4; // Declare four instances of the union

// Define a structure named Mystructure
struct Mystructure {
    int a, b, c; // Three integer variables
} s5; // Declare an instance of the structure

main() { // Corrected to return an int
    // Input loop to populate the array in the union
    for(s2.i = 0; s2.i < 5; s2.i++) {
        printf("Enter Number: ");
        scanf("%d", &s1.a[s2.i]); // Read input into the array 'a' in the union
    }

    // Sorting loop to sort the array in ascending order
    for(s2.i = 0; s2.i < 5; s2.i++) {
        for(s3.j = s2.i + 1; s3.j < 5; s3.j++) {
            if(s1.a[s2.i] >= s1.a[s3.j]) { // If the current element is greater than or equal to the next element, swap them
                s4.temp = s1.a[s2.i];
                s1.a[s2.i] = s1.a[s3.j];
                s1.a[s3.j] = s4.temp;
            }
        }
    }

    // Output loop to print the sorted array
    for(s2.i = 0; s2.i < 5; s2.i++) {
        printf("\nYour Number is: %d", s1.a[s2.i]);
    }

    // Input and output for additional integers using the structure
    printf("\n\nEnter Number 1: ");
    scanf("%d", &s5.a);

    printf("\nEnter Number 2: ");
    scanf("%d", &s5.b);

    printf("%d", s5.a); // Print the first number
    printf("\n%d", s5.b); // Print the second number
}

