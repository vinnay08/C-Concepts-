//q-12. Accept number of students from user. I need to give 5 apples to each 
//student. How many apples are required?

#include <stdio.h> 
main() { 
    int n; // Declare an integer variable 'n' to store the number of students
    
    // Prompt the user to enter the number of students
    printf("Enter number of students: ");
    scanf("%d", &n); // Read the input value and store it in variable 'n'
    
    // Calculate the required number of apples assuming each student needs 5 apples
    int requiredApples = n * 5;
    
    // Print the calculated number of required apples
    printf("\nRequired Apples: %d", requiredApples);
}

