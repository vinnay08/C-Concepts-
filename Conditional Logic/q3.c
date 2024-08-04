//q-3. WAP to check if the given year is a leap year or not. 

#include <stdio.h>

main() { 
    int year; // Declare an integer variable to store the input year
    
    // Prompt the user to enter a year
    printf("Enter Year: ");
    scanf("%d", &year); // Read the input year and store it in 'year'
    
    // Determine if the year is a leap year
    if (year % 400 == 0) { // If the year is divisible by 400
        printf("%d is a Leap year", year); // Print that it is a leap year
    } 
    else if (year % 4 == 0) { // If the year is divisible by 4 but not by 400
        printf("%d is a Leap year", year); // Print that it is a leap year
    } 
    else if (year % 100 != 0) { // If the year is not divisible by 100
        printf("%d is not a Leap year", year); // Print that it is not a leap year
    } 
    else { // If the year is divisible by 100 but not by 400
        printf("%d is not a Leap year", year); // Print that it is not a leap year
    }
}

