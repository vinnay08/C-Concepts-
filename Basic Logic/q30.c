//q-30. WAP to convert years into days and days into years

#include <stdio.h> 

main() { 
    float years, days; // Declare float variables to store the number of years and days
    
    // Prompt the user to enter the number of years
    printf("Enter year: ");
    scanf("%f", &years); // Read the input number of years and store it in 'years'
    
    // Prompt the user to enter the number of days
    printf("Enter days: ");
    scanf("%f", &days); // Read the input number of days and store it in 'days'
    
    // Convert years to days assuming each year has 365 days
    float day = years * 365;
    // Convert days to years assuming each year has 365 days
    float year = days / 365;
    
    // Print the number of days corresponding to the input years, formatted to two decimal places
    printf("%.2f year(s) in days are: %.2f", years, day);
    // Print the number of years corresponding to the input days, formatted to two decimal places
    printf("\n%.2f day(s) in year(s) are: %.2f", days, year);
}

