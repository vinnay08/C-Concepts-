//q-22.  Calculate compound interest (Compound Interest formula: 
//	   a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t 
//       b. Compound Interest = Amount � P

#include<stdio.h>
main(){
	float pcamount, rate, time; // Declare float variables for principal amount, interest rate, and time period
    
    // Prompt the user to enter the principal amount
    printf("Enter Principal Amount: ");
    scanf("%f", &pcamount); // Read the input principal amount and store it in variable 'pcamount'
    
    // Prompt the user to enter the interest rate
    printf("Enter Interest Rate: ");
    scanf("%f", &rate); // Read the input interest rate and store it in variable 'rate'
    
    // Prompt the user to enter the time period
    printf("Enter Time Period: ");
    scanf("%f", &time); // Read the input time period and store it in variable 'time'
    
    float amount = pcamount * pow((1 + rate / 100), time);
    
    // Calculate the compound interest by subtracting the principal amount from the total amount
    float compound_interest = amount - pcamount;
    
    // Print the calculated compound interest
    printf("\nCompound Interest: %.2f", compound_interest);

}
