//q-26. Convert temperature Fahrenheit to Celsius

#include <stdio.h> 

main() { 
    float fahrenhit; // Declare a float variable to store the temperature in Fahrenheit
    
    // Prompt the user to enter the temperature in Fahrenheit
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenhit); // Read the input temperature in Fahrenheit and store it in 'fahrenhit'
    
    // Convert the temperature from Fahrenheit to Celsius using the formula:
    // Celsius = (Fahrenheit - 32) * 5 / 9
    float celsius = (fahrenhit - 32) * 5 / 9;
    
    // Print the converted temperature in Celsius, formatted to two decimal places
    printf("\nCelsius: %.2f", celsius);
}

