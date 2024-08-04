//q-22.Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include <stdio.h> 

main() {
    float bs; // Declare a variable to store the basic salary
    
    // Prompt the user to enter the basic salary
    printf("Enter basic salary: ");
    scanf("%f", &bs); // Read the basic salary and store it in variable 'bs'
    
    // Calculate the gross salaries for different salary ranges
    float gs1 = bs + (0.20 * bs) + (0.80 * bs); // Gross salary if basic salary <= 10,000
    float gs2 = bs + (0.25 * bs) + (0.90 * bs); // Gross salary if basic salary <= 20,000
    float gs3 = bs + (0.30 * bs) + (0.95 * bs); // Gross salary if basic salary > 20,000
    
    // Determine which gross salary to use based on the basic salary
    if (bs <= 10000) {
        printf("Gross salary: %.2f", gs1); // Print gross salary for basic salary <= 10,000
    } 
    else if (bs <= 20000) {
        printf("Gross salary: %.2f", gs2); // Print gross salary for basic salary <= 20,000
    } 
    else {
        printf("Gross salary: %.2f", gs3); // Print gross salary for basic salary > 20,000
    }
}

