//q-27. Convert days into months 

#include <stdio.h> 

main() { 
    float days; // Declare a float variable to store the number of days
    
    // Prompt the user to enter the number of days
    printf("Enter Days: ");
    scanf("%f", &days); // Read the input number of days and store it in 'days'
    
    // Convert days to months assuming an average month length of 30 days
    float month = days / 30;
    
    // Print the number of months, formatted to two decimal places
    printf("\nMonth: %.2f", month);
}

