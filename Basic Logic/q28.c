//q-28.Convert years into days and months

#include <stdio.h> 

main() { 
    float year; // Declare a float variable to store the number of years
    
    // Prompt the user to enter the number of years
    printf("Enter Year: ");
    scanf("%f", &year); // Read the input number of years and store it in 'year'
    
    // Convert years to days assuming each year has 365 days
    float day = year * 365;
    // Convert years to months assuming each year has 12 months
    float month = year * 12;
    
    // Print the number of days corresponding to the input years, formatted to two decimal places
    printf("\nYear to days: %.2f", day);
    // Print the number of months corresponding to the input years, formatted to two decimal places
    printf("\nYear to months: %.2f", month);
}

