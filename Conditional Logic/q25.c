//q-25. Accept the input month number and print number of days in that month

#include <stdio.h>

main() { 
    int mn; // Declare a variable to store the month number
    
    // Prompt the user to enter the month number
    printf("Enter month number: ");
    scanf("%d", &mn); // Read the month number and store it in variable 'mn'

    // Use a switch statement to determine the number of days in the month
    switch (mn) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            // Months with 31 days
            printf("Number of days in month %d: 31", mn);
            break; // Exit the switch statement
        case 4: case 6: case 9: case 11:
            // Months with 30 days
            printf("Number of days in month %d: 30", mn);
            break; // Exit the switch statement
        case 2:
            // February, which has 28 or 29 days
            printf("Number of days in month %d: 28 or 29", mn);
            break; // Exit the switch statement
        default:
            // Invalid month number
            printf("Invalid month number!");
    }
}

