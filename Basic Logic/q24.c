//q-24. Accept 5 employees name and salary and count average and total 
//salary

#include <stdio.h> 

main() { 
    char first[6], second[6], third[6], fourth[6], fifth[6]; // Arrays to store names of 5 people
    float s1, s2, s3, s4, s5; // Variables to store salaries of 5 people
    
    // Prompt the user to enter the name and salary of Person 1
    printf("Enter Name of Person 1: ");
    scanf("%s", first); // Read the input name for Person 1 and store it in 'first'
    printf("\nEnter Salary of Person 1: ");
    scanf("%f", &s1); // Read the input salary for Person 1 and store it in 's1'
    
    // Prompt the user to enter the name and salary of Person 2
    printf("\nEnter Name of Person 2: ");
    scanf("%s", second); // Read the input name for Person 2 and store it in 'second'
    printf("\nEnter Salary of Person 2: ");
    scanf("%f", &s2); // Read the input salary for Person 2 and store it in 's2'
    
    // Prompt the user to enter the name and salary of Person 3
    printf("\nEnter Name of Person 3: ");
    scanf("%s", third); // Read the input name for Person 3 and store it in 'third'
    printf("\nEnter Salary of Person 3: ");
    scanf("%f", &s3); // Read the input salary for Person 3 and store it in 's3'
    
    // Prompt the user to enter the name and salary of Person 4
    printf("\nEnter Name of Person 4: ");
    scanf("%s", fourth); // Read the input name for Person 4 and store it in 'fourth'
    printf("\nEnter Salary of Person 4: ");
    scanf("%f", &s4); // Read the input salary for Person 4 and store it in 's4'
    
    // Prompt the user to enter the name and salary of Person 5
    printf("\nEnter Name of Person 5: ");
    scanf("%s", fifth); // Read the input name for Person 5 and store it in 'fifth'
    printf("\nEnter Salary of Person 5: ");
    scanf("%f", &s5); // Read the input salary for Person 5 and store it in 's5'
    
    // Calculate the total salary
    float total_salary = s1 + s2 + s3 + s4 + s5;
    // Calculate the average salary
    float avg_salary = total_salary / 5;
    
    // Print details for Person 1
    printf("\nPerson 1 Name: %s", first);
    printf("\nPerson 1 Salary: %.2f", s1);
    
    // Print details for Person 2
    printf("\nPerson 2 Name: %s", second);
    printf("\nPerson 2 Salary: %.2f", s2);
    
    // Print details for Person 3
    printf("\nPerson 3 Name: %s", third);
    printf("\nPerson 3 Salary: %.2f", s3);
    
    // Print details for Person 4
    printf("\nPerson 4 Name: %s", fourth);
    printf("\nPerson 4 Salary: %.2f", s4);
    
    // Print details for Person 5
    printf("\nPerson 5 Name: %s", fifth);
    printf("\nPerson 5 Salary: %.2f", s5);
    
    // Print the total salary and average salary
    printf("\nTotal Salary: %.2f", total_salary);
    printf("\nAverage Salary: %.2f", avg_salary);
}
