//q-28.Convert years into days and months

#include<stdio.h>
main(){
	float year;
	
	printf("Enter Year : ");
	scanf("%f",&year);
	
	float day = year * 365;
	float month = year * 12;
	
	printf("\nYear to days : %.2f ",day);
	printf("\nYear to months : %.2f",month);
}
