//q-24. Accept month number and display month name

#include <stdio.h> 

main() { 
    int a; // Declare a variable to store the month number
    
    // Prompt the user to enter the month number
    printf("Enter month number: ");
    scanf("%d", &a); // Read the month number and store it in variable 'a'

    // Use a switch statement to determine the month name based on the number
    switch (a) {
        case 1: 
            printf("January"); // Print "January" if the input is 1
            break; // Exit the switch statement
        case 2: 
            printf("February"); // Print "February" if the input is 2
            break; // Exit the switch statement
        case 3: 
            printf("March"); // Print "March" if the input is 3
            break; // Exit the switch statement
        case 4:
            printf("April"); // Print "April" if the input is 4
            break; // Exit the switch statement
        case 5:
            printf("May"); // Print "May" if the input is 5
            break; // Exit the switch statement
        case 6:
            printf("June"); // Print "June" if the input is 6
            break; // Exit the switch statement
        case 7:
            printf("July"); // Print "July" if the input is 7
            break; // Exit the switch statement
        case 8:
            printf("August"); // Print "August" if the input is 8
            break; // Exit the switch statement
        case 9:
            printf("September"); // Print "September" if the input is 9
            break; // Exit the switch statement
        case 10:
            printf("October"); // Print "October" if the input is 10
            break; // Exit the switch statement
        case 11:
            printf("November"); // Print "November" if the input is 11
            break; // Exit the switch statement
        case 12:
            printf("December"); // Print "December" if the input is 12
            break; // Exit the switch statement
        default:
            printf("Invalid month number!"); // Print an error message for invalid input
    }
}

