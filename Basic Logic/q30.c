//q-30. WAP to convert years into days and days into years

#include<stdio.h>
main(){
	float years,days;
	
	printf("Enter year : ");
	scanf("%f",&years);
	
	printf("Enter days : ");
	scanf("%f",&days);
	
	float day = years*365;
	float year =days/365;
	
	printf("%.2f year in day are : %.2f",years,day);
	printf("\n%.2f days in year are : %.2f",days,year);
}
