//q-25.Accept 5 expense from user and find average of expense

#include<stdio.h>
main(){
	float e1,e2,e3,e4,e5;
	
	printf("Enter expense 1 : ");
	scanf("%f",&e1);
	
	printf("Enter expense 2 : ");
	scanf("%f",&e2);
	
	printf("Enter expense 3 : ");
	scanf("%f",&e3);
	
	printf("Enter expense 4 : ");
	scanf("%f",&e4);
	
	printf("Enter expense 5 : ");
	scanf("%f",&e5);
	
	float total = e1+e2+e3+e4+e5;
	float avg = total / 5;
	
	printf("\nAverage expenses : %.2f",avg);
}
