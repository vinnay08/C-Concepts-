//q-9. Find circumference of Triangle formula : triangle = a + b + c

#include<stdio.h>
main(){
	float a,b,c;
	printf("Enter a side of length : ");
	scanf("%f",&a);
	printf("Enter b side of length : ");
	scanf("%f",&b);
	printf("Enter b side of length : ");
	scanf("%f",&c);
	
	float Area= a+b+c;
	
	printf("The circumference of Triangle formula : %.2f",Area);
}
