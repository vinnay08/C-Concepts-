//q-7. Find area of Rectangle Formula : A=wl

#include<stdio.h>
main(){
	float w,l;
	printf("Enter width of Rectangle : ");
	scanf("%f",&w);
	printf("Enter length of Rectangle : ");
	scanf("%f",&l);
	
	float Area=w*l;
	
	printf("The Area of Rectangle : %.2f",Area);
}
