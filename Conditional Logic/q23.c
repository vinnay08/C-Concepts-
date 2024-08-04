//q-23. WAP to input the week number and print week day.

#include <stdio.h> 

main() { 
    int a; // Declare a variable to store the week number
    
    // Prompt the user to enter the week number
    printf("Enter week number: ");
    scanf("%d", &a); // Read the week number and store it in variable 'a'

    // Use a switch statement to determine the day of the week based on the number
    switch (a) {
        case 1: 
            printf("Monday"); // Print "Monday" if the input is 1
            break; // Exit the switch statement
        case 2: 
            printf("Tuesday"); // Print "Tuesday" if the input is 2
            break; // Exit the switch statement
        case 3: 
            printf("Wednesday"); // Print "Wednesday" if the input is 3
            break; // Exit the switch statement
        case 4:
            printf("Thursday"); // Print "Thursday" if the input is 4
            break; // Exit the switch statement
        case 5:
            printf("Friday"); // Print "Friday" if the input is 5
            break; // Exit the switch statement
        case 6:
            printf("Saturday"); // Print "Saturday" if the input is 6
            break; // Exit the switch statement
        case 7:
            printf("Sunday"); // Print "Sunday" if the input is 7
            break; // Exit the switch statement
        default:
            printf("Invalid number!"); // Print an error message for invalid input
    }
}
