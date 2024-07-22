//q-26. Convert temperature Fahrenheit to Celsius

#include<stdio.h>
main(){
	float fahrenhit;
	
	printf("Enter temperature in fahrenhit : ");
	scanf("%f",&fahrenhit);
	
	float celsius = (fahrenhit - 32)*5/9;
	
	printf("\nCelsius : %.2f",celsius);
}
