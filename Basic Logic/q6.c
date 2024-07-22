//q-6.  Find area of Triangle Formula : A = 1/2 × b × h 

#include<stdio.h>
main(){
	float b,h;
	printf("Enter borad of Triangle : ");
	scanf("%f",&b);
	printf("Enter hight of Triangle : ");
	scanf("%f",&h);
	
	float Area=(b*h)/2;
	
	printf("The Area of Triangle : %.2f",Area);
}
