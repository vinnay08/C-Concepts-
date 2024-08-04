//q-20.  Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary.

#include <stdio.h>

main() { 
    float salary; // Declare a float variable 'salary' to store the user's salary
    
    // Prompt the user to enter their salary
    printf("Enter Salary: ");
    scanf("%f", &salary); // Read the input salary and store it in variable 'salary'
    
    // Calculate the insurance amount (10% of the salary)
    float insurance = (10 * salary) / 100;
    // Calculate the remaining salary after deducting the insurance
    float remaining_salary = salary - insurance;
    
    // Calculate the loan amount (10% of the remaining salary)
    float loan = (10 * remaining_salary) / 100;
    // Calculate the remaining salary after deducting the loan
    float r_salary = remaining_salary - loan;
    
    // Print the remaining salary after deductions
    printf("\nRemaining salary is: %.2f", r_salary);
}

