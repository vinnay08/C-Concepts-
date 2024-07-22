//q-3.  WAP to Find Area And Circumference of Circle

#include<stdio.h>
main(){
	float r,PI=3.14;
	printf("Enter the redius of circle : ");
	scanf("%f",&r);
	
	float Circumference = 2*PI*r;
	float Area = PI*r*r;
	
	printf("The Circumference of Circle is : %0.3f",Circumference);
	printf("\nThe Area of Circle is : %0.3f ",Area);
}
