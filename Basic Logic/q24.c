//q-24. Accept 5 employees name and salary and count average and total 
//salary

#include<stdio.h>
main(){
	char first[6],second[6],third[6],fourth[6],fifth[6];
	float s1,s2,s3,s4,s5;
	
	printf("Enter Name of Person 1 : ");
	scanf("%s",first);
	printf("\nEnter Salary of Person 1 : ");
	scanf("%f",&s1);
	
	printf("\nEnter Name of Person 2 : ");
	scanf("%s",second);
	printf("\nEnter Salary of Person 2 : ");
	scanf("%f",&s2);
	
	printf("\nEnter Name of Person 3 : ");
	scanf("%s",third);
	printf("\nEnter Salary of Person 3 : ");
	scanf("%f",&s3);
	
	printf("\nEnter Name of Person 4 : ");
	scanf("%s",fourth);
	printf("\nEnter Salary of Person 4 : ");
	scanf("%f",&s4);
	
	printf("\nEnter Name of Person 5 : ");
	scanf("%s",fifth);
	printf("\nEnter Salary of Person 5 : ");
	scanf("%f",&s5);
	
	float total_salary = s1+s2+s3+s4+s5;
	float avg_salary = (s1+s2+s3+s4+s5) / 5;
	
	printf("\nPerson 1 Name : %s",first);
	printf("\nPerson 1 Salary : %f",s1);
	
	printf("\nPerson 2 Name : %s",second);
	printf("\nPerson 2 Salary : %f",s2);
	
	printf("\nPerson 3 Name : %s",third);
	printf("\nPerson 3 Salary : %f",s3);
	
	printf("\nPerson 4 Name : %s",fourth);
	printf("\nPerson 4 Salary : %f",s4);
	
	printf("\nPerson 5 Name : %s",fifth);
	printf("\nPerson 5 Salary : %f",s5);
	
	printf("\nTotal Salary : %.2f",total_salary);
	printf("\nAverage Salary : %.2f",avg_salary);
}
