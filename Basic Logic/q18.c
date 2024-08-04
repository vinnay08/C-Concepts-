//q-18.  Calculate person�s Annual salary 

#include <stdio.h>

main() { 
    int salary; // Declare an integer variable 'salary' to store the monthly salary
    
    // Prompt the user to enter their monthly salary
    printf("Enter Salary: ");
    scanf("%d", &salary); // Read the input monthly salary and store it in variable 'salary'
    
    // Calculate the annual salary by multiplying the monthly salary by 12
    int annualSalary = salary * 12;
    
    // Print the calculated annual salary
    printf("Annual Salary: %d", annualSalary);
}

