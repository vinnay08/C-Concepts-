//q-31. Write a program in C to read any Month Number in integer and display the
//number of days for this month.

#include <stdio.h> 

main() { 
    int a; // Declare a variable to store the month number
    
    // Prompt the user to enter the month number
    printf("Enter month number: ");
    scanf("%d", &a); // Read the month number and store it in variable 'a'
    
    // Use a switch-case statement to determine the number of days in the month
    switch(a) {
        case 1: 
        case 3: 
        case 5: 
        case 7: 
        case 8: 
        case 10: 
        case 12: 
            printf("Number of days: 31"); // Print 31 days for months with 31 days
            break;
        case 4:
        case 6:
        case 9: 
        case 11: 
            printf("Number of days: 30"); // Print 30 days for months with 30 days
            break;
        case 2:
            printf("Number of days: 28 or 29"); // Print 28 or 29 days for February (leap year consideration)
            break;
        default:
            printf("Invalid month number"); // Print an error message for invalid month numbers
    }
}

