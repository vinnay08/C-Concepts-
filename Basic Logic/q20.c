//q-20.  Accept monthly salary from the user and deduct 10% insurance premium, 
//10% loan installment find out of remaining salary.

#include<stdio.h>
main(){
	float salary;
	
	printf("Enter Salary : ");
	scanf("%f",&salary);
	
	float insurance = (10*salary)/100;
	float remaining_salary = salary - insurance;
	
	float loan = (10*remaining_salary)/100;
	float r_salary = remaining_salary-loan;
	
	printf("\nRemaining salary is : %.2f",r_salary);
} 
