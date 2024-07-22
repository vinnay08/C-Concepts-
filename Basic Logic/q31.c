//q-31. Convert kilometers into meters 

#include<stdio.h>
main(){
	float km;
	
	printf("Enter Kilometers : ");
	scanf("%f",&km);
	
	float meters = km * 1000;
	
	printf("\nKm to mtrs : %.2f meters",meters);
}
