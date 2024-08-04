//q-17. Calculate person�s insurance premium based on salary 

#include <stdio.h> 

main() {
    float salary, years; // Declare float variables for salary and number of years
    float mp, qp, hp, yp; // Declare float variables for monthly, quarterly, half-yearly, and yearly premiums
    
    // Prompt the user to enter their salary
    printf("Enter Salary: ");
    scanf("%f", &salary); // Read the input salary and store it in variable 'salary'
    
    // Prompt the user to enter the number of years
    printf("Enter years: ");
    scanf("%f", &years); // Read the input years and store it in variable 'years'
    
    // Calculate premiums based on salary and number of years
    mp = salary / (years * 12); // Monthly premium: total salary divided by the number of months
    qp = salary / (years * 4);  // Quarterly premium: total salary divided by the number of quarters
    hp = salary / (years * 2);  // Half-yearly premium: total salary divided by the number of half-years
    yp = salary / years;        // Yearly premium: total salary divided by the number of years
    
    // Print the calculated premiums
    printf("Monthly Premium: %.2f", mp);
    printf("\nQuarterly Premium: %.2f", qp);
    printf("\nHalf-yearly Premium: %.2f", hp);
    printf("\nYearly Premium: %.2f", yp);
}

