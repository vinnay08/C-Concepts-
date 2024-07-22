//q-22.  Calculate compound interest (Compound Interest formula: 
//	   a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t 
//       b. Compound Interest = Amount – P

#include<stdio.h>
main(){
	float pcamount,rate,time;
	
	printf("Enter Principal Amount : ");
	scanf("%f",&pcamount);
	
	printf("Enter Interest rate : ");
	scanf("%f",&rate);
	
	printf("Enter time period : ");
	scanf("%f",&time);
	
	float amount = pcamount * ((pow((1+rate/100),time)));
	float compound_interest = amount - pcamount;
	
	printf("\nCompound Interest : %.2f",compound_interest);
}
