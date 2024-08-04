//q-4. WAP to print table up to given numbers

#include<stdio.h>

main() {
    int n, i; // Declare variables: n for the number for which the table is to be generated and i for loop control

    printf("Enter number of table : "); // Prompt the user to enter a number
    scanf("%d", &n); // Read the number entered by the user and store it in variable n

    // Loop to generate and print the multiplication table for the number n
    for(i = 1; i <= 10; i++) {
        // Print the multiplication table entry for the current value of i
        printf("\n%d * %d = %d", n, i, n * i);
    }
}

