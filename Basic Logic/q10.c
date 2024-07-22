//q-10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>
main(){
	float w,l,h;
	printf("Enter width of Rectangle : ");
	scanf("%f",&w);
	printf("Enter length of Rectangle : ");
	scanf("%f",&l);
	printf("Enter length of Rectangle : ");
	scanf("%f",&h);
	
	float Area = 2*((w*l)+(h*l)+(h*w));
	
	printf("Area of rectangular prism : %.2f ",Area);
}
