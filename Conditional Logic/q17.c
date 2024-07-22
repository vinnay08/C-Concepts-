//q-17.Write a C program to check whether a triangle can be formed with the given
//values for the angles.

#include<stdio.h>
main(){
	float a1,a2,a3;
	
	printf("Enter Angle 1 : ");
	scanf("%f",&a1);
	
	printf("Enter Angle 1 : ");
	scanf("%f",&a2);
	
	printf("Enter Angle 1 : ");
	scanf("%f",&a3);
	
	float t = a1+a2+a3;
		
	if(t==180){
		printf("These angles can be form triangle");
	}
	else{
		printf("These angles can not be form triangle");
	}
}
