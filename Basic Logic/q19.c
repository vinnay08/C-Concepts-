//q-19. Calculate compound interest 

#include <stdio.h>
#include <math.h> 

main() { 
    double pcamount, time, rate; // Declare double variables for principal amount, time, and rate
    
    // Prompt the user to enter the principal amount
    printf("Enter Principal Amount: ");
    scanf("%lf", &pcamount); // Read the input principal amount and store it in variable 'pcamount'
    
    // Prompt the user to enter the interest rate
    printf("Enter Interest Rate: ");
    scanf("%lf", &rate); // Read the input interest rate and store it in variable 'rate'
    
    // Prompt the user to enter the period of time
    printf("Enter Period of Time (in years): ");
    scanf("%lf", &time); // Read the input period of time and store it in variable 'time'
    
    // Calculate the compound amount using the formula: A = P * (1 + r/n)^(nt)
    double amount = pcamount * pow((1 + rate / 100), time);
    
    // Calculate the compound interest by subtracting the principal amount from the total amount
    double compound_interest = amount - pcamount;
    
    // Print the calculated compound interest
    printf("\nCompound Interest: %lf", compound_interest);
}

