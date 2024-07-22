//q-17. Calculate person’s insurance premium based on salary 

#include<stdio.h>
main(){
	float salary,years,mnthp,quartp,halfyearp,yearp;
	
	printf("Enter Salary : ");
	scanf("%f",&salary);
	
	printf("Enter year : ");
	scanf("%f",&years);
	
	float mp = salary / (years*12);
	float qp = salary / (years*4);
	float hp = salary / (years*2);
	float yp = salary / years;
	
	printf("Monthly Premium : %.2f",mp);
	printf("\nQuarterly Premium : %.2f",qp);
	printf("\nHalf-year Premium : %.2f",hp);
	printf("\nYearly Premium : %.2f",yp);
}
