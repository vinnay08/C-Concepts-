//q-26.Write a C program to input electricity unit charges and calculate total
//electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill

#include <stdio.h> // Include the standard input-output header file

main() {
    float units, bill, surcharge, total_bill;
    
    // Prompt the user to enter the number of electricity units
    printf("Enter electricity units: ");
    scanf("%f", &units); // Read the number of units and store it in variable 'units'

    // Calculate the bill based on the units consumed
    if (units <= 50) {
        // For first 50 units at Rs. 0.50/unit
        bill = units * 0.50;
    } else if (units <= 150) {
        // For next 100 units (51 to 150) at Rs. 0.75/unit
        bill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        // For next 100 units (151 to 250) at Rs. 1.20/unit
        bill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        // For units above 250 at Rs. 1.50/unit
        bill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }
    
    // Calculate the surcharge (20% of the bill)
    surcharge = bill * 0.20;
    
    // Calculate the total bill
    total_bill = bill + surcharge;
    
    // Print the total bill
    printf("Total electricity bill: Rs. %.2f\n", total_bill);
}
