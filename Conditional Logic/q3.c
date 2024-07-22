//q-3. WAP to check if the given year is a leap year or not. 

#include<stdio.h>
main(){
	int year;
	
	printf("Enter Year : ");
	scanf("%d",&year);
	
	if(year%400 == 0){
		printf("%d is Leap year",year);
	}
	else if(year%4 == 0){
		printf("%d is Leap year",year);
	}
	else if(year%100 != 0){
		printf("%d is not leap year",year);
	}
	else{
		printf("%d is not leap year",year);
	}
}
