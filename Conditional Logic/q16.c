/*q-16. Write a C program to read temperature in centigrade and display a suitable 
message according to the temperature state below: 
Temp < 0 then Freezing weather 
Temp 0-10 then Very Cold weather 
Temp 10-20 then Cold weather 
Temp 20-30 then Normal in Temp 
Temp 30-40 then Its Hot 
Temp >=40 then Its Very Hot*/

#include <stdio.h> 

main() { 
    int a; // Declare a variable to store the temperature
    
    // Prompt the user to enter the temperature
    printf("Enter temperature: ");
    scanf("%d", &a); // Read the temperature and store it in 'a'
    
    // Check the temperature range and print the corresponding weather category
    if (a < 0) {
        // If temperature is less than 0, print "Freezing weather"
        printf("Freezing weather");
    }
    else if (a >= 0 && a <= 10) {
        // If temperature is between 0 and 10 (inclusive), print "Very cold weather"
        printf("Very cold weather");
    }
    else if (a > 10 && a <= 20) {
        // If temperature is between 10 and 20 (inclusive), print "Cold weather"
        printf("Cold weather");
    }
    else if (a > 20 && a <= 30) {
        // If temperature is between 20 and 30 (inclusive), print "Normal weather"
        printf("Normal weather");
    }
    else if (a > 30 && a <= 40) {
        // If temperature is between 30 and 40 (inclusive), print "Hot weather"
        printf("Hot weather");
    }
    else {
        // If temperature is greater than 40, print "Very hot weather"
        printf("Very hot weather");
    }
}
