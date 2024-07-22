//q-8. Find circumference of Rectangle formula : C = 2(l+w)

#include<stdio.h>
main(){
	float a,b;
	
	printf("Enter length : ");
	scanf("%f",&a);
	
	printf("Enter width : ");
	scanf("%f",&b);
	
	float circumference = 2*(a+b);
	
	printf("\ncircumference of Rectangle : %.2f",circumference);
}
