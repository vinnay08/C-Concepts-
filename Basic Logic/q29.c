//q-29.Convert minutes into seconds and hours 

#include <stdio.h>

main() { 
    float min; // Declare a float variable to store the number of minutes
    
    // Prompt the user to enter the number of minutes
    printf("Enter minutes: ");
    scanf("%f", &min); // Read the input number of minutes and store it in 'min'
    
    // Convert minutes to hours by dividing by 60
    float hours = min / 60;
    // Convert minutes to seconds by multiplying by 60
    float seconds = min * 60;
    
    // Print the converted number of hours, formatted to two decimal places
    printf("\nMinutes to hours: %.2f", hours);
    // Print the converted number of seconds, formatted to two decimal places
    printf("\nMinutes to seconds: %.2f", seconds);
}

