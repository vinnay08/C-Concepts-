//Q-12. WAP to accept 5 students name and store it in array

#include<stdio.h>

main() {
    char a[5][50]; // Declare a 2D character array to store 5 names, each up to 49 characters plus null terminator
    int i; // Declare an integer variable 'i' for loop control
    
    for(i = 0; i < 5; i++) { // Loop to take 5 names as input
        printf("Enter name of student %d: ", i + 1); // Prompt the user to enter the name of the student
        scanf("%s", a[i]); // Read the input name and store it in the array 'a' at index 'i'
    }
    
    printf("\n\n"); // Print two new lines for formatting
    for(i = 0; i < 5; i++) { // Loop to print the names of the students
        printf("\nName of student %d: %s", i + 1, a[i]); // Print the name of the student
    }
}

