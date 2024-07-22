//q-19. Calculate compound interest 

#include<stdio.h>
main(){
	double pcamount,time,rate;
	
	printf("Enter principal Amount : ");
	scanf("%lf",&pcamount);
	
	printf("Enter Interest rate : ");
	scanf("%lf",&rate);
	
	printf("Enter period of time : ");
	scanf("%lf",&time);
	
	double amount = pcamount * ((pow((1+rate/100),time)));
	
	double compound_interest = amount-pcamount;
	
	printf("\nCompound Interest : %lf",compound_interest);
}
