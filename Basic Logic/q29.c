//q-29.Convert minutes into seconds and hours 

#include<stdio.h>
main(){
	float min;
	
	printf("Enter minutes : ");
	scanf("%f",&min);
	
	float hours = min / 60;
	float seconds = min * 60;
	
	printf("\nMinutes to hours : %.2f",hours);
	printf("\nMinutes to seconds : %.2f",seconds);
}
