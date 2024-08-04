//q-31. Convert kilometers into meters 

#include <stdio.h>

main() { 
    float km; // Declare a float variable to store the distance in kilometers
    
    // Prompt the user to enter the distance in kilometers
    printf("Enter Kilometers: ");
    scanf("%f", &km); // Read the input distance in kilometers and store it in 'km'
    
    // Convert kilometers to meters by multiplying by 1000
    float meters = km * 1000;
    
    // Print the converted distance in meters, formatted to two decimal places
    printf("\nKm to meters: %.2f meters", meters);
}
