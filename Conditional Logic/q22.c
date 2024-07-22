//q-22.Write a C program to input basic salary of an employee and calculateits
//Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
main(){
	float bs;
	
	printf("Enter basic salary : ");
	scanf("%f",&bs);
	
	float gs1 = bs + (0.20 * bs) + (0.80 * bs);
	float gs2 = bs + (0.25 * bs) + (0.90 * bs);
	float gs3 = bs + (0.30 * bs) + (0.95 * bs);
	
	if(bs<=10000){
		printf("Gross salary : %.2f",gs1);
	}
	else if(bs<=20000){
		printf("Gross salary : %.2f",gs2);
	}
	else{
		printf("Gross salary : %.2f",gs3);
	}
	
}
