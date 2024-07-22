//q-27. Convert days into months 

#include<stdio.h>
main(){
	float days;
	
	printf("Enter Days : ");
	scanf("%f",&days);
	
	float month = days / 30;
	
	printf("\nMonth : %.2f",month);
}
